/*
 * Tests for ReportProvider and ReportConsumer — requires RTI Connext DDS runtime.
 * Uses domain 99 to avoid conflicts.
 */
#include "test.hpp"
#include "umaa_sdk.hpp"

#include <atomic>
#include <chrono>
#include <thread>

// Use HealthReportType — a keyed report type from the generated UMAA types.
#include "UMAA/SO/HealthReport/HealthReportType.hpp"

using namespace umaa::sdk;
using ReportType = UMAA::SO::HealthReport::HealthReportType;

TEST(report_provider_write_and_dispose) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;
    DDSContext ctx(cfg);

    ReportProvider<ReportType> provider(ctx, "HealthReport", "HealthProvider");

    // Write a sample
    ReportType sample;
    provider.write(sample);

    // Close should dispose
    provider.close();

    ctx.shutdown();
}

TEST(report_consumer_receives_via_callback) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;
    DDSContext ctx(cfg);

    std::atomic<int> received_count{0};

    ReportConsumer<ReportType> consumer(
        ctx, "HealthReport", "HealthConsumer",
        [&received_count](const ReportType&) {
            received_count++;
        });

    ReportProvider<ReportType> provider(ctx, "HealthReport", "HealthProvider2");

    // Allow discovery
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // Write samples
    ReportType sample;
    provider.write(sample);
    provider.write(sample);

    // Wait for async delivery
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    ASSERT_TRUE(received_count.load() >= 1);

    consumer.close();
    provider.close();
    ctx.shutdown();
}

TEST(report_consumer_receives_via_override) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;
    DDSContext ctx(cfg);

    class MyConsumer : public ReportConsumer<ReportType> {
    public:
        MyConsumer(DDSContext& ctx)
            : ReportConsumer<ReportType>(ctx, "HealthReport", "HealthOverride") {}
        void on_report(const ReportType&) override { count++; }
        std::atomic<int> count{0};
    };

    MyConsumer consumer(ctx);
    ReportProvider<ReportType> provider(ctx, "HealthReport", "HealthProvider3");

    // Allow discovery
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    ReportType sample;
    provider.write(sample);

    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    ASSERT_TRUE(consumer.count.load() >= 1);

    consumer.close();
    provider.close();
    ctx.shutdown();
}
