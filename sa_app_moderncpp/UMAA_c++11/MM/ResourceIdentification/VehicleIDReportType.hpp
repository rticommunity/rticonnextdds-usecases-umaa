

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleIDReportType_871172610_hpp
#define VehicleIDReportType_871172610_hpp

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
    namespace MM {
        namespace ResourceIdentification {

            RTI_CONSTEXPR_OR_CONST_STRING std::string VehicleIDReport_TOPIC = "UMAA::MM::ResourceIdentification::VehicleIDReport";

            class NDDSUSERDllExport VehicleIDReportType {
              public:

                VehicleIDReportType();

                VehicleIDReportType(const ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain_,bool isControlTransferCapable_,const std::string& make_,const std::string& model_,const std::string& name_,const std::string& protocol_,const std::string& type_,const ::UMAA::Common::Measurement::NumericGUID& vehicleNumber_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain() noexcept {
                    return m_domain_;
                }

                const ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain() const noexcept {
                    return m_domain_;
                }

                void domain(const ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& value) {

                    m_domain_ = value;
                }

                void domain(::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType&& value) {
                    m_domain_ = std::move(value);
                }
                bool& isControlTransferCapable() noexcept {
                    return m_isControlTransferCapable_;
                }

                const bool& isControlTransferCapable() const noexcept {
                    return m_isControlTransferCapable_;
                }

                void isControlTransferCapable(bool value) {

                    m_isControlTransferCapable_ = value;
                }

                std::string& make() noexcept {
                    return m_make_;
                }

                const std::string& make() const noexcept {
                    return m_make_;
                }

                void make(const std::string& value) {

                    m_make_ = value;
                }

                void make(std::string&& value) {
                    m_make_ = std::move(value);
                }
                std::string& model() noexcept {
                    return m_model_;
                }

                const std::string& model() const noexcept {
                    return m_model_;
                }

                void model(const std::string& value) {

                    m_model_ = value;
                }

                void model(std::string&& value) {
                    m_model_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                std::string& protocol() noexcept {
                    return m_protocol_;
                }

                const std::string& protocol() const noexcept {
                    return m_protocol_;
                }

                void protocol(const std::string& value) {

                    m_protocol_ = value;
                }

                void protocol(std::string&& value) {
                    m_protocol_ = std::move(value);
                }
                std::string& type() noexcept {
                    return m_type_;
                }

                const std::string& type() const noexcept {
                    return m_type_;
                }

                void type(const std::string& value) {

                    m_type_ = value;
                }

                void type(std::string&& value) {
                    m_type_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& vehicleNumber() noexcept {
                    return m_vehicleNumber_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& vehicleNumber() const noexcept {
                    return m_vehicleNumber_;
                }

                void vehicleNumber(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_vehicleNumber_ = value;
                }

                void vehicleNumber(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_vehicleNumber_ = std::move(value);
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
                bool operator == (const VehicleIDReportType& other_) const;
                bool operator != (const VehicleIDReportType& other_) const;

                void swap(VehicleIDReportType& other_) noexcept ;

              private:

                ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType m_domain_;
                bool m_isControlTransferCapable_;
                std::string m_make_;
                std::string m_model_;
                std::string m_name_;
                std::string m_protocol_;
                std::string m_type_;
                ::UMAA::Common::Measurement::NumericGUID m_vehicleNumber_ {};
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(VehicleIDReportType& a, VehicleIDReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VehicleIDReportType& sample);

        } // namespace ResourceIdentification  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::ResourceIdentification::VehicleIDReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ResourceIdentification::VehicleIDReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::ResourceIdentification::VehicleIDReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::ResourceIdentification::VehicleIDReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::ResourceIdentification::VehicleIDReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::ResourceIdentification::VehicleIDReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::ResourceIdentification::VehicleIDReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::ResourceIdentification::VehicleIDReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::ResourceIdentification::VehicleIDReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::ResourceIdentification::VehicleIDReportType > {
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

#endif // VehicleIDReportType_871172610_hpp

