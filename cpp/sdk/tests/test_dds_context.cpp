/*
 * Tests for DDSContext — requires RTI Connext DDS runtime.
 * Uses domain 99 to avoid conflicts with running applications.
 */
#include "test.hpp"
#include "umaa/sdk/dds_context.hpp"
#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/base_component.hpp"

#include <cstdlib>

using namespace umaa::sdk;

// A minimal concrete service for testing
class TestService : public BaseService {
public:
    TestService(DDSContext& ctx, const std::string& name)
        : BaseService(ctx, name) {}
    void close() override { closed = true; }
    bool closed = false;
};

TEST(dds_context_creation) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;
    // QoS file must be set via env var UMAA_QOS_FILE before running tests

    DDSContext ctx(cfg);
    ASSERT_EQ(ctx.domain_id(), 99);
    ASSERT_NE(ctx.source_id(), NIL_GUID);

    // Singleton access
    ASSERT_EQ(&DDSContext::current(), &ctx);

    ctx.shutdown();
}

TEST(dds_context_duplicate_throws) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;

    DDSContext ctx(cfg);
    ASSERT_THROWS(DDSContext ctx2(cfg));
    ctx.shutdown();
}

TEST(dds_context_service_registry) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;

    DDSContext ctx(cfg);

    TestService svc1(ctx, "svc1");
    TestService svc2(ctx, "svc2");

    ASSERT_EQ(ctx.get_service("svc1"), &svc1);
    ASSERT_EQ(ctx.get_service("svc2"), &svc2);
    ASSERT_EQ(ctx.get_service("nonexistent"), nullptr);

    auto keys = ctx.registered_service_keys();
    ASSERT_EQ(keys.size(), 2u);
    ASSERT_EQ(keys[0], "svc1");
    ASSERT_EQ(keys[1], "svc2");

    // Duplicate registration throws
    ASSERT_THROWS(TestService dup(ctx, "svc1"));

    ctx.shutdown();
}

TEST(dds_context_shutdown_closes_services) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;

    DDSContext ctx(cfg);
    TestService svc(ctx, "closable");
    ASSERT_FALSE(svc.closed);

    ctx.shutdown();
    ASSERT_TRUE(svc.closed);
}

TEST(dds_context_explicit_source_guid) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;
    cfg.source_guid = "550e8400-e29b-41d4-a716-446655440000";

    DDSContext ctx(cfg);
    auto expected = GUIDUtil::from_string(cfg.source_guid);
    ASSERT_EQ(ctx.source_id(), expected);

    ctx.shutdown();
}

TEST(base_component_lifecycle) {
    DDSContextConfig cfg;
    cfg.domain_id = 99;

    DDSContext ctx(cfg);

    class TestComponent : public BaseComponent {
    public:
        TestComponent(DDSContext& ctx) : BaseComponent(ctx, "TestComp") {}
        void on_start() override { started = true; }
        bool started = false;
    };

    TestComponent comp(ctx);
    comp.start();
    ASSERT_TRUE(comp.started);

    ctx.shutdown();
}
