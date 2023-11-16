

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandAckReportType_1735772377_hpp
#define PanTiltJointVelocityCommandAckReportType_1735772377_hpp

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
        namespace PanTiltJointVelocityControl {

            static const std::string PanTiltJointVelocityCommandAckReport_TOPIC = "UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReport";

            class NDDSUSERDllExport PanTiltJointVelocityCommandAckReportType {
              public:
                PanTiltJointVelocityCommandAckReportType();

                PanTiltJointVelocityCommandAckReportType(double panVelocity,double tiltVelocity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PanTiltJointVelocityCommandAckReportType (PanTiltJointVelocityCommandAckReportType&&) = default;
                PanTiltJointVelocityCommandAckReportType& operator=(PanTiltJointVelocityCommandAckReportType&&) = default;
                PanTiltJointVelocityCommandAckReportType& operator=(const PanTiltJointVelocityCommandAckReportType&) = default;
                PanTiltJointVelocityCommandAckReportType(const PanTiltJointVelocityCommandAckReportType&) = default;
                #else
                PanTiltJointVelocityCommandAckReportType(PanTiltJointVelocityCommandAckReportType&& other_) OMG_NOEXCEPT;  
                PanTiltJointVelocityCommandAckReportType& operator=(PanTiltJointVelocityCommandAckReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const PanTiltJointVelocityCommandAckReportType& other_) const;
                bool operator != (const PanTiltJointVelocityCommandAckReportType& other_) const;

                void swap(PanTiltJointVelocityCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_panVelocity_;
                double m_tiltVelocity_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(PanTiltJointVelocityCommandAckReportType& a, PanTiltJointVelocityCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltJointVelocityCommandAckReportType& sample);

        } // namespace PanTiltJointVelocityControl  
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
        struct topic_type_name< UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReportType > {
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

#endif // PanTiltJointVelocityCommandAckReportType_1735772377_hpp

