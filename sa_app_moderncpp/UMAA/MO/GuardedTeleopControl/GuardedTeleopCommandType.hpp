

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandType_1079252020_hpp
#define GuardedTeleopCommandType_1079252020_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
    namespace MO {
        namespace GuardedTeleopControl {

            static const std::string GuardedTeleopCommand_TOPIC = "UMAA::MO::GuardedTeleopControl::GuardedTeleopCommand";

            class NDDSUSERDllExport GuardedTeleopCommandType {
              public:
                GuardedTeleopCommandType();

                GuardedTeleopCommandType(const UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& obstacleAvoidance,double pathTolerance,bool stopOnPitchoverLimit,bool stopOnRolloverLimit,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GuardedTeleopCommandType (GuardedTeleopCommandType&&) = default;
                GuardedTeleopCommandType& operator=(GuardedTeleopCommandType&&) = default;
                GuardedTeleopCommandType& operator=(const GuardedTeleopCommandType&) = default;
                GuardedTeleopCommandType(const GuardedTeleopCommandType&) = default;
                #else
                GuardedTeleopCommandType(GuardedTeleopCommandType&& other_) OMG_NOEXCEPT;  
                GuardedTeleopCommandType& operator=(GuardedTeleopCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& obstacleAvoidance() OMG_NOEXCEPT {
                    return m_obstacleAvoidance_;
                }

                const UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& obstacleAvoidance() const OMG_NOEXCEPT {
                    return m_obstacleAvoidance_;
                }

                void obstacleAvoidance(const UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& value) {
                    m_obstacleAvoidance_ = value;
                }

                void obstacleAvoidance(UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType&& value) {
                    m_obstacleAvoidance_ = std::move(value);
                }
                double& pathTolerance() OMG_NOEXCEPT {
                    return m_pathTolerance_;
                }

                const double& pathTolerance() const OMG_NOEXCEPT {
                    return m_pathTolerance_;
                }

                void pathTolerance(double value) {
                    m_pathTolerance_ = value;
                }

                bool& stopOnPitchoverLimit() OMG_NOEXCEPT {
                    return m_stopOnPitchoverLimit_;
                }

                const bool& stopOnPitchoverLimit() const OMG_NOEXCEPT {
                    return m_stopOnPitchoverLimit_;
                }

                void stopOnPitchoverLimit(bool value) {
                    m_stopOnPitchoverLimit_ = value;
                }

                bool& stopOnRolloverLimit() OMG_NOEXCEPT {
                    return m_stopOnRolloverLimit_;
                }

                const bool& stopOnRolloverLimit() const OMG_NOEXCEPT {
                    return m_stopOnRolloverLimit_;
                }

                void stopOnRolloverLimit(bool value) {
                    m_stopOnRolloverLimit_ = value;
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
                UMAA::Common::Measurement::NumericGUID& destination() OMG_NOEXCEPT {
                    return m_destination_;
                }

                const UMAA::Common::Measurement::NumericGUID& destination() const OMG_NOEXCEPT {
                    return m_destination_;
                }

                void destination(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_destination_ = value;
                }

                void destination(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
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

                bool operator == (const GuardedTeleopCommandType& other_) const;
                bool operator != (const GuardedTeleopCommandType& other_) const;

                void swap(GuardedTeleopCommandType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType m_obstacleAvoidance_;
                double m_pathTolerance_;
                bool m_stopOnPitchoverLimit_;
                bool m_stopOnRolloverLimit_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GuardedTeleopCommandType& a, GuardedTeleopCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GuardedTeleopCommandType& sample);

        } // namespace GuardedTeleopControl  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandType > {
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

#endif // GuardedTeleopCommandType_1079252020_hpp

