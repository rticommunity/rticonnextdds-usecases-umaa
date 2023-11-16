

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyCommandType_1432384990_hpp
#define CommsLostPolicyCommandType_1432384990_hpp

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
#include "UMAA/MM/CommsLostPolicy/MoveToPosPolicyType.hpp"
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
#include "UMAA/MM/CommsLostPolicy/RetrotraversePolicyType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            static const std::string CommsLostPolicyCommand_TOPIC = "UMAA::MM::CommsLostPolicy::CommsLostPolicyCommand";

            class NDDSUSERDllExport CommsLostPolicyCommandType {
              public:
                CommsLostPolicyCommandType();

                CommsLostPolicyCommandType(double commsLostTimeOut,bool commsRegainedStop,double commsRegainedTimeOut,const ::dds::core::optional< bool >& continueMission,const ::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos,const ::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse,const ::dds::core::optional< bool >& stopMotion,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CommsLostPolicyCommandType (CommsLostPolicyCommandType&&) = default;
                CommsLostPolicyCommandType& operator=(CommsLostPolicyCommandType&&) = default;
                CommsLostPolicyCommandType& operator=(const CommsLostPolicyCommandType&) = default;
                CommsLostPolicyCommandType(const CommsLostPolicyCommandType&) = default;
                #else
                CommsLostPolicyCommandType(CommsLostPolicyCommandType&& other_) OMG_NOEXCEPT;  
                CommsLostPolicyCommandType& operator=(CommsLostPolicyCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& commsLostTimeOut() OMG_NOEXCEPT {
                    return m_commsLostTimeOut_;
                }

                const double& commsLostTimeOut() const OMG_NOEXCEPT {
                    return m_commsLostTimeOut_;
                }

                void commsLostTimeOut(double value) {
                    m_commsLostTimeOut_ = value;
                }

                bool& commsRegainedStop() OMG_NOEXCEPT {
                    return m_commsRegainedStop_;
                }

                const bool& commsRegainedStop() const OMG_NOEXCEPT {
                    return m_commsRegainedStop_;
                }

                void commsRegainedStop(bool value) {
                    m_commsRegainedStop_ = value;
                }

                double& commsRegainedTimeOut() OMG_NOEXCEPT {
                    return m_commsRegainedTimeOut_;
                }

                const double& commsRegainedTimeOut() const OMG_NOEXCEPT {
                    return m_commsRegainedTimeOut_;
                }

                void commsRegainedTimeOut(double value) {
                    m_commsRegainedTimeOut_ = value;
                }

                ::dds::core::optional< bool >& continueMission() OMG_NOEXCEPT {
                    return m_continueMission_;
                }

                const ::dds::core::optional< bool >& continueMission() const OMG_NOEXCEPT {
                    return m_continueMission_;
                }

                void continueMission(const ::dds::core::optional< bool >& value) {
                    m_continueMission_ = value;
                }

                void continueMission(::dds::core::optional< bool >&& value) {
                    m_continueMission_ = std::move(value);
                }
                ::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos() OMG_NOEXCEPT {
                    return m_moveToPos_;
                }

                const ::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos() const OMG_NOEXCEPT {
                    return m_moveToPos_;
                }

                void moveToPos(const ::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& value) {
                    m_moveToPos_ = value;
                }

                void moveToPos(::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >&& value) {
                    m_moveToPos_ = std::move(value);
                }
                ::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse() OMG_NOEXCEPT {
                    return m_retrotraverse_;
                }

                const ::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse() const OMG_NOEXCEPT {
                    return m_retrotraverse_;
                }

                void retrotraverse(const ::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& value) {
                    m_retrotraverse_ = value;
                }

                void retrotraverse(::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >&& value) {
                    m_retrotraverse_ = std::move(value);
                }
                ::dds::core::optional< bool >& stopMotion() OMG_NOEXCEPT {
                    return m_stopMotion_;
                }

                const ::dds::core::optional< bool >& stopMotion() const OMG_NOEXCEPT {
                    return m_stopMotion_;
                }

                void stopMotion(const ::dds::core::optional< bool >& value) {
                    m_stopMotion_ = value;
                }

                void stopMotion(::dds::core::optional< bool >&& value) {
                    m_stopMotion_ = std::move(value);
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

                bool operator == (const CommsLostPolicyCommandType& other_) const;
                bool operator != (const CommsLostPolicyCommandType& other_) const;

                void swap(CommsLostPolicyCommandType& other_) OMG_NOEXCEPT ;

              private:

                double m_commsLostTimeOut_;
                bool m_commsRegainedStop_;
                double m_commsRegainedTimeOut_;
                ::dds::core::optional< bool > m_continueMission_;
                ::dds::core::optional< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > m_moveToPos_;
                ::dds::core::optional< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > m_retrotraverse_;
                ::dds::core::optional< bool > m_stopMotion_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CommsLostPolicyCommandType& a, CommsLostPolicyCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsLostPolicyCommandType& sample);

        } // namespace CommsLostPolicy  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandType > {
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

#endif // CommsLostPolicyCommandType_1432384990_hpp

