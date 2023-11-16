

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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

            RTI_CONSTEXPR_OR_CONST_STRING std::string BeaconParametersCommand_TOPIC = "UMAA::SEM::BeaconParametersControl::BeaconParametersCommand";

            class NDDSUSERDllExport BeaconParametersCommandType {
              public:

                BeaconParametersCommandType();

                BeaconParametersCommandType(int32_t frequencyBand_,bool IRLightsArmed_,bool IRLightsOn_,bool locatorArmed_,bool locatorOn_,bool multibandLocator_,bool RGLightsArmed_,bool RGLightsOn_,int32_t transmitChannel_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                int32_t& frequencyBand() noexcept {
                    return m_frequencyBand_;
                }

                const int32_t& frequencyBand() const noexcept {
                    return m_frequencyBand_;
                }

                void frequencyBand(int32_t value) {

                    m_frequencyBand_ = value;
                }

                bool& IRLightsArmed() noexcept {
                    return m_IRLightsArmed_;
                }

                const bool& IRLightsArmed() const noexcept {
                    return m_IRLightsArmed_;
                }

                void IRLightsArmed(bool value) {

                    m_IRLightsArmed_ = value;
                }

                bool& IRLightsOn() noexcept {
                    return m_IRLightsOn_;
                }

                const bool& IRLightsOn() const noexcept {
                    return m_IRLightsOn_;
                }

                void IRLightsOn(bool value) {

                    m_IRLightsOn_ = value;
                }

                bool& locatorArmed() noexcept {
                    return m_locatorArmed_;
                }

                const bool& locatorArmed() const noexcept {
                    return m_locatorArmed_;
                }

                void locatorArmed(bool value) {

                    m_locatorArmed_ = value;
                }

                bool& locatorOn() noexcept {
                    return m_locatorOn_;
                }

                const bool& locatorOn() const noexcept {
                    return m_locatorOn_;
                }

                void locatorOn(bool value) {

                    m_locatorOn_ = value;
                }

                bool& multibandLocator() noexcept {
                    return m_multibandLocator_;
                }

                const bool& multibandLocator() const noexcept {
                    return m_multibandLocator_;
                }

                void multibandLocator(bool value) {

                    m_multibandLocator_ = value;
                }

                bool& RGLightsArmed() noexcept {
                    return m_RGLightsArmed_;
                }

                const bool& RGLightsArmed() const noexcept {
                    return m_RGLightsArmed_;
                }

                void RGLightsArmed(bool value) {

                    m_RGLightsArmed_ = value;
                }

                bool& RGLightsOn() noexcept {
                    return m_RGLightsOn_;
                }

                const bool& RGLightsOn() const noexcept {
                    return m_RGLightsOn_;
                }

                void RGLightsOn(bool value) {

                    m_RGLightsOn_ = value;
                }

                int32_t& transmitChannel() noexcept {
                    return m_transmitChannel_;
                }

                const int32_t& transmitChannel() const noexcept {
                    return m_transmitChannel_;
                }

                void transmitChannel(int32_t value) {

                    m_transmitChannel_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                bool operator == (const BeaconParametersCommandType& other_) const;
                bool operator != (const BeaconParametersCommandType& other_) const;

                void swap(BeaconParametersCommandType& other_) noexcept ;

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
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_destination_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BeaconParametersCommandType& a, BeaconParametersCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BeaconParametersCommandType& sample);

        } // namespace BeaconParametersControl  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
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

#endif // BeaconParametersCommandType_328169522_hpp

