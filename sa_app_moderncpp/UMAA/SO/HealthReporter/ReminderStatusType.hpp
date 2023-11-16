

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReminderStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ReminderStatusType_784038570_hpp
#define ReminderStatusType_784038570_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace HealthReporter {

            class NDDSUSERDllExport ReminderStatusType {
              public:
                ReminderStatusType();

                ReminderStatusType(const std::string& descriptor,double elapsedTime,bool reminderConfig,const UMAA::Common::Measurement::NumericGUID& reminderID,bool reminderStatus,double serviceInterval,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ReminderStatusType (ReminderStatusType&&) = default;
                ReminderStatusType& operator=(ReminderStatusType&&) = default;
                ReminderStatusType& operator=(const ReminderStatusType&) = default;
                ReminderStatusType(const ReminderStatusType&) = default;
                #else
                ReminderStatusType(ReminderStatusType&& other_) OMG_NOEXCEPT;  
                ReminderStatusType& operator=(ReminderStatusType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                std::string& descriptor() OMG_NOEXCEPT {
                    return m_descriptor_;
                }

                const std::string& descriptor() const OMG_NOEXCEPT {
                    return m_descriptor_;
                }

                void descriptor(const std::string& value) {
                    m_descriptor_ = value;
                }

                void descriptor(std::string&& value) {
                    m_descriptor_ = std::move(value);
                }
                double& elapsedTime() OMG_NOEXCEPT {
                    return m_elapsedTime_;
                }

                const double& elapsedTime() const OMG_NOEXCEPT {
                    return m_elapsedTime_;
                }

                void elapsedTime(double value) {
                    m_elapsedTime_ = value;
                }

                bool& reminderConfig() OMG_NOEXCEPT {
                    return m_reminderConfig_;
                }

                const bool& reminderConfig() const OMG_NOEXCEPT {
                    return m_reminderConfig_;
                }

                void reminderConfig(bool value) {
                    m_reminderConfig_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& reminderID() OMG_NOEXCEPT {
                    return m_reminderID_;
                }

                const UMAA::Common::Measurement::NumericGUID& reminderID() const OMG_NOEXCEPT {
                    return m_reminderID_;
                }

                void reminderID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_reminderID_ = value;
                }

                void reminderID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_reminderID_ = std::move(value);
                }
                bool& reminderStatus() OMG_NOEXCEPT {
                    return m_reminderStatus_;
                }

                const bool& reminderStatus() const OMG_NOEXCEPT {
                    return m_reminderStatus_;
                }

                void reminderStatus(bool value) {
                    m_reminderStatus_ = value;
                }

                double& serviceInterval() OMG_NOEXCEPT {
                    return m_serviceInterval_;
                }

                const double& serviceInterval() const OMG_NOEXCEPT {
                    return m_serviceInterval_;
                }

                void serviceInterval(double value) {
                    m_serviceInterval_ = value;
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

                bool operator == (const ReminderStatusType& other_) const;
                bool operator != (const ReminderStatusType& other_) const;

                void swap(ReminderStatusType& other_) OMG_NOEXCEPT ;

              private:

                std::string m_descriptor_;
                double m_elapsedTime_;
                bool m_reminderConfig_;
                UMAA::Common::Measurement::NumericGUID m_reminderID_;
                bool m_reminderStatus_;
                double m_serviceInterval_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(ReminderStatusType& a, ReminderStatusType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ReminderStatusType& sample);

        } // namespace HealthReporter  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::HealthReporter::ReminderStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::HealthReporter::ReminderStatusType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::HealthReporter::ReminderStatusType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::HealthReporter::ReminderStatusType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::HealthReporter::ReminderStatusType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::HealthReporter::ReminderStatusType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::HealthReporter::ReminderStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::HealthReporter::ReminderStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::HealthReporter::ReminderStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::HealthReporter::ReminderStatusType > {
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

#endif // ReminderStatusType_784038570_hpp

