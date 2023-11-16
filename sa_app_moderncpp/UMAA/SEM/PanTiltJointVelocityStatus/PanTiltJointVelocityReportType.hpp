

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityReportType_2067551523_hpp
#define PanTiltJointVelocityReportType_2067551523_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace PanTiltJointVelocityStatus {

            static const std::string PanTiltJointVelocityReport_TOPIC = "UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReport";

            class NDDSUSERDllExport PanTiltJointVelocityReportType {
              public:
                PanTiltJointVelocityReportType();

                PanTiltJointVelocityReportType(double panVelocity,double tiltVelocity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PanTiltJointVelocityReportType (PanTiltJointVelocityReportType&&) = default;
                PanTiltJointVelocityReportType& operator=(PanTiltJointVelocityReportType&&) = default;
                PanTiltJointVelocityReportType& operator=(const PanTiltJointVelocityReportType&) = default;
                PanTiltJointVelocityReportType(const PanTiltJointVelocityReportType&) = default;
                #else
                PanTiltJointVelocityReportType(PanTiltJointVelocityReportType&& other_) OMG_NOEXCEPT;  
                PanTiltJointVelocityReportType& operator=(PanTiltJointVelocityReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& panVelocity() OMG_NOEXCEPT {
                    return m_panVelocity_;
                }

                const double& panVelocity() const OMG_NOEXCEPT {
                    return m_panVelocity_;
                }

                void panVelocity(double value) {
                    m_panVelocity_ = value;
                }

                double& tiltVelocity() OMG_NOEXCEPT {
                    return m_tiltVelocity_;
                }

                const double& tiltVelocity() const OMG_NOEXCEPT {
                    return m_tiltVelocity_;
                }

                void tiltVelocity(double value) {
                    m_tiltVelocity_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const PanTiltJointVelocityReportType& other_) const;
                bool operator != (const PanTiltJointVelocityReportType& other_) const;

                void swap(PanTiltJointVelocityReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_panVelocity_;
                double m_tiltVelocity_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PanTiltJointVelocityReportType& a, PanTiltJointVelocityReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltJointVelocityReportType& sample);

        } // namespace PanTiltJointVelocityStatus  
    } // namespace SEM  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // PanTiltJointVelocityReportType_2067551523_hpp

