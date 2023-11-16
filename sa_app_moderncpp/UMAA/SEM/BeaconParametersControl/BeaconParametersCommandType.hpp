

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersCommandType_328169522_hpp
#define BeaconParametersCommandType_328169522_hpp

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
namespace UMAA {
    namespace SEM {
        namespace BeaconParametersControl {

            static const std::string BeaconParametersCommand_TOPIC = "UMAA::SEM::BeaconParametersControl::BeaconParametersCommand";

            class NDDSUSERDllExport BeaconParametersCommandType {
              public:
                BeaconParametersCommandType();

                BeaconParametersCommandType(int32_t frequencyBand,bool IRLightsArmed,bool IRLightsOn,bool locatorArmed,bool locatorOn,bool multibandLocator,bool RGLightsArmed,bool RGLightsOn,int32_t transmitChannel,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BeaconParametersCommandType (BeaconParametersCommandType&&) = default;
                BeaconParametersCommandType& operator=(BeaconParametersCommandType&&) = default;
                BeaconParametersCommandType& operator=(const BeaconParametersCommandType&) = default;
                BeaconParametersCommandType(const BeaconParametersCommandType&) = default;
                #else
                BeaconParametersCommandType(BeaconParametersCommandType&& other_) OMG_NOEXCEPT;  
                BeaconParametersCommandType& operator=(BeaconParametersCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& frequencyBand() OMG_NOEXCEPT {
                    return m_frequencyBand_;
                }

                const int32_t& frequencyBand() const OMG_NOEXCEPT {
                    return m_frequencyBand_;
                }

                void frequencyBand(int32_t value) {
                    m_frequencyBand_ = value;
                }

                bool& IRLightsArmed() OMG_NOEXCEPT {
                    return m_IRLightsArmed_;
                }

                const bool& IRLightsArmed() const OMG_NOEXCEPT {
                    return m_IRLightsArmed_;
                }

                void IRLightsArmed(bool value) {
                    m_IRLightsArmed_ = value;
                }

                bool& IRLightsOn() OMG_NOEXCEPT {
                    return m_IRLightsOn_;
                }

                const bool& IRLightsOn() const OMG_NOEXCEPT {
                    return m_IRLightsOn_;
                }

                void IRLightsOn(bool value) {
                    m_IRLightsOn_ = value;
                }

                bool& locatorArmed() OMG_NOEXCEPT {
                    return m_locatorArmed_;
                }

                const bool& locatorArmed() const OMG_NOEXCEPT {
                    return m_locatorArmed_;
                }

                void locatorArmed(bool value) {
                    m_locatorArmed_ = value;
                }

                bool& locatorOn() OMG_NOEXCEPT {
                    return m_locatorOn_;
                }

                const bool& locatorOn() const OMG_NOEXCEPT {
                    return m_locatorOn_;
                }

                void locatorOn(bool value) {
                    m_locatorOn_ = value;
                }

                bool& multibandLocator() OMG_NOEXCEPT {
                    return m_multibandLocator_;
                }

                const bool& multibandLocator() const OMG_NOEXCEPT {
                    return m_multibandLocator_;
                }

                void multibandLocator(bool value) {
                    m_multibandLocator_ = value;
                }

                bool& RGLightsArmed() OMG_NOEXCEPT {
                    return m_RGLightsArmed_;
                }

                const bool& RGLightsArmed() const OMG_NOEXCEPT {
                    return m_RGLightsArmed_;
                }

                void RGLightsArmed(bool value) {
                    m_RGLightsArmed_ = value;
                }

                bool& RGLightsOn() OMG_NOEXCEPT {
                    return m_RGLightsOn_;
                }

                const bool& RGLightsOn() const OMG_NOEXCEPT {
                    return m_RGLightsOn_;
                }

                void RGLightsOn(bool value) {
                    m_RGLightsOn_ = value;
                }

                int32_t& transmitChannel() OMG_NOEXCEPT {
                    return m_transmitChannel_;
                }

                const int32_t& transmitChannel() const OMG_NOEXCEPT {
                    return m_transmitChannel_;
                }

                void transmitChannel(int32_t value) {
                    m_transmitChannel_ = value;
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

                bool operator == (const BeaconParametersCommandType& other_) const;
                bool operator != (const BeaconParametersCommandType& other_) const;

                void swap(BeaconParametersCommandType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_frequencyBand_;
                bool m_IRLightsArmed_;
                bool m_IRLightsOn_;
                bool m_locatorArmed_;
                bool m_locatorOn_;
                bool m_multibandLocator_;
                bool m_RGLightsArmed_;
                bool m_RGLightsOn_;
                int32_t m_transmitChannel_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BeaconParametersCommandType& a, BeaconParametersCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BeaconParametersCommandType& sample);

        } // namespace BeaconParametersControl  
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
        struct topic_type_name< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
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

#endif // BeaconParametersCommandType_328169522_hpp

