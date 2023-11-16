

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeDataPointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeDataPointType_702923335_hpp
#define RangeDataPointType_702923335_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/CovariancePolarType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace RangeStatus {

            class NDDSUSERDllExport RangeDataPointType {
              public:

                RangeDataPointType();

                RangeDataPointType(double bearing_,bool bearingValidity_,const ::UMAA::Common::Measurement::CovariancePolarType& dataPointCovariance_,double inclination_,bool inclinationValidity_,double range_,bool rangeValidity_,const ::UMAA::Common::Measurement::NumericGUID& pointID_);

                double& bearing() noexcept {
                    return m_bearing_;
                }

                const double& bearing() const noexcept {
                    return m_bearing_;
                }

                void bearing(double value) {

                    m_bearing_ = value;
                }

                bool& bearingValidity() noexcept {
                    return m_bearingValidity_;
                }

                const bool& bearingValidity() const noexcept {
                    return m_bearingValidity_;
                }

                void bearingValidity(bool value) {

                    m_bearingValidity_ = value;
                }

                ::UMAA::Common::Measurement::CovariancePolarType& dataPointCovariance() noexcept {
                    return m_dataPointCovariance_;
                }

                const ::UMAA::Common::Measurement::CovariancePolarType& dataPointCovariance() const noexcept {
                    return m_dataPointCovariance_;
                }

                void dataPointCovariance(const ::UMAA::Common::Measurement::CovariancePolarType& value) {

                    m_dataPointCovariance_ = value;
                }

                void dataPointCovariance(::UMAA::Common::Measurement::CovariancePolarType&& value) {
                    m_dataPointCovariance_ = std::move(value);
                }
                double& inclination() noexcept {
                    return m_inclination_;
                }

                const double& inclination() const noexcept {
                    return m_inclination_;
                }

                void inclination(double value) {

                    m_inclination_ = value;
                }

                bool& inclinationValidity() noexcept {
                    return m_inclinationValidity_;
                }

                const bool& inclinationValidity() const noexcept {
                    return m_inclinationValidity_;
                }

                void inclinationValidity(bool value) {

                    m_inclinationValidity_ = value;
                }

                double& range() noexcept {
                    return m_range_;
                }

                const double& range() const noexcept {
                    return m_range_;
                }

                void range(double value) {

                    m_range_ = value;
                }

                bool& rangeValidity() noexcept {
                    return m_rangeValidity_;
                }

                const bool& rangeValidity() const noexcept {
                    return m_rangeValidity_;
                }

                void rangeValidity(bool value) {

                    m_rangeValidity_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& pointID() noexcept {
                    return m_pointID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& pointID() const noexcept {
                    return m_pointID_;
                }

                void pointID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_pointID_ = value;
                }

                void pointID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_pointID_ = std::move(value);
                }
                bool operator == (const RangeDataPointType& other_) const;
                bool operator != (const RangeDataPointType& other_) const;

                void swap(RangeDataPointType& other_) noexcept ;

              private:

                double m_bearing_;
                bool m_bearingValidity_;
                ::UMAA::Common::Measurement::CovariancePolarType m_dataPointCovariance_;
                double m_inclination_;
                bool m_inclinationValidity_;
                double m_range_;
                bool m_rangeValidity_;
                ::UMAA::Common::Measurement::NumericGUID m_pointID_ {};

            };

            inline void swap(RangeDataPointType& a, RangeDataPointType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RangeDataPointType& sample);

        } // namespace RangeStatus  
    } // namespace SA  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::SA::RangeStatus::RangeDataPointType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::RangeStatus::RangeDataPointType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::RangeStatus::RangeDataPointType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::RangeStatus::RangeDataPointType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::RangeStatus::RangeDataPointType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::RangeStatus::RangeDataPointType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::RangeStatus::RangeDataPointType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::RangeStatus::RangeDataPointType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::RangeStatus::RangeDataPointType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // RangeDataPointType_702923335_hpp

