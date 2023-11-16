

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WindStatusReportType_955608806_hpp
#define WindStatusReportType_955608806_hpp

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
    namespace SA {
        namespace WindStatus {

            static const std::string WindStatusReport_TOPIC = "UMAA::SA::WindStatus::WindStatusReport";

            class NDDSUSERDllExport WindStatusReportType {
              public:
                WindStatusReportType();

                WindStatusReportType(const ::dds::core::optional< double >& relativeAverageDirection,const ::dds::core::optional< double >& relativeAverageSpeed,const ::dds::core::optional< double >& relativeInstantaneousDirection,const ::dds::core::optional< double >& relativeInstantaneousSpeed,const ::dds::core::optional< double >& relativeMaximumDirection,const ::dds::core::optional< double >& relativeMaximumSpeed,const ::dds::core::optional< double >& relativeMinimumDirection,const ::dds::core::optional< double >& relativeMinimumSpeed,const ::dds::core::optional< double >& straightDeckCrossSpeed,const ::dds::core::optional< double >& straightDeckHeadSpeed,const ::dds::core::optional< double >& trueAverageDirection,const ::dds::core::optional< double >& trueAverageSpeed,const ::dds::core::optional< double >& trueInstantaneousDirection,const ::dds::core::optional< double >& trueInstantaneousSpeed,const ::dds::core::optional< double >& trueMaximumDirection,const ::dds::core::optional< double >& trueMaximumSpeed,const ::dds::core::optional< double >& trueMinimumDirection,const ::dds::core::optional< double >& trueMinimumSpeed,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WindStatusReportType (WindStatusReportType&&) = default;
                WindStatusReportType& operator=(WindStatusReportType&&) = default;
                WindStatusReportType& operator=(const WindStatusReportType&) = default;
                WindStatusReportType(const WindStatusReportType&) = default;
                #else
                WindStatusReportType(WindStatusReportType&& other_) OMG_NOEXCEPT;  
                WindStatusReportType& operator=(WindStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& relativeAverageDirection() OMG_NOEXCEPT {
                    return m_relativeAverageDirection_;
                }

                const ::dds::core::optional< double >& relativeAverageDirection() const OMG_NOEXCEPT {
                    return m_relativeAverageDirection_;
                }

                void relativeAverageDirection(const ::dds::core::optional< double >& value) {
                    m_relativeAverageDirection_ = value;
                }

                void relativeAverageDirection(::dds::core::optional< double >&& value) {
                    m_relativeAverageDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeAverageSpeed() OMG_NOEXCEPT {
                    return m_relativeAverageSpeed_;
                }

                const ::dds::core::optional< double >& relativeAverageSpeed() const OMG_NOEXCEPT {
                    return m_relativeAverageSpeed_;
                }

                void relativeAverageSpeed(const ::dds::core::optional< double >& value) {
                    m_relativeAverageSpeed_ = value;
                }

                void relativeAverageSpeed(::dds::core::optional< double >&& value) {
                    m_relativeAverageSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeInstantaneousDirection() OMG_NOEXCEPT {
                    return m_relativeInstantaneousDirection_;
                }

                const ::dds::core::optional< double >& relativeInstantaneousDirection() const OMG_NOEXCEPT {
                    return m_relativeInstantaneousDirection_;
                }

                void relativeInstantaneousDirection(const ::dds::core::optional< double >& value) {
                    m_relativeInstantaneousDirection_ = value;
                }

                void relativeInstantaneousDirection(::dds::core::optional< double >&& value) {
                    m_relativeInstantaneousDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeInstantaneousSpeed() OMG_NOEXCEPT {
                    return m_relativeInstantaneousSpeed_;
                }

                const ::dds::core::optional< double >& relativeInstantaneousSpeed() const OMG_NOEXCEPT {
                    return m_relativeInstantaneousSpeed_;
                }

                void relativeInstantaneousSpeed(const ::dds::core::optional< double >& value) {
                    m_relativeInstantaneousSpeed_ = value;
                }

                void relativeInstantaneousSpeed(::dds::core::optional< double >&& value) {
                    m_relativeInstantaneousSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMaximumDirection() OMG_NOEXCEPT {
                    return m_relativeMaximumDirection_;
                }

                const ::dds::core::optional< double >& relativeMaximumDirection() const OMG_NOEXCEPT {
                    return m_relativeMaximumDirection_;
                }

                void relativeMaximumDirection(const ::dds::core::optional< double >& value) {
                    m_relativeMaximumDirection_ = value;
                }

                void relativeMaximumDirection(::dds::core::optional< double >&& value) {
                    m_relativeMaximumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMaximumSpeed() OMG_NOEXCEPT {
                    return m_relativeMaximumSpeed_;
                }

                const ::dds::core::optional< double >& relativeMaximumSpeed() const OMG_NOEXCEPT {
                    return m_relativeMaximumSpeed_;
                }

                void relativeMaximumSpeed(const ::dds::core::optional< double >& value) {
                    m_relativeMaximumSpeed_ = value;
                }

                void relativeMaximumSpeed(::dds::core::optional< double >&& value) {
                    m_relativeMaximumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMinimumDirection() OMG_NOEXCEPT {
                    return m_relativeMinimumDirection_;
                }

                const ::dds::core::optional< double >& relativeMinimumDirection() const OMG_NOEXCEPT {
                    return m_relativeMinimumDirection_;
                }

                void relativeMinimumDirection(const ::dds::core::optional< double >& value) {
                    m_relativeMinimumDirection_ = value;
                }

                void relativeMinimumDirection(::dds::core::optional< double >&& value) {
                    m_relativeMinimumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMinimumSpeed() OMG_NOEXCEPT {
                    return m_relativeMinimumSpeed_;
                }

                const ::dds::core::optional< double >& relativeMinimumSpeed() const OMG_NOEXCEPT {
                    return m_relativeMinimumSpeed_;
                }

                void relativeMinimumSpeed(const ::dds::core::optional< double >& value) {
                    m_relativeMinimumSpeed_ = value;
                }

                void relativeMinimumSpeed(::dds::core::optional< double >&& value) {
                    m_relativeMinimumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& straightDeckCrossSpeed() OMG_NOEXCEPT {
                    return m_straightDeckCrossSpeed_;
                }

                const ::dds::core::optional< double >& straightDeckCrossSpeed() const OMG_NOEXCEPT {
                    return m_straightDeckCrossSpeed_;
                }

                void straightDeckCrossSpeed(const ::dds::core::optional< double >& value) {
                    m_straightDeckCrossSpeed_ = value;
                }

                void straightDeckCrossSpeed(::dds::core::optional< double >&& value) {
                    m_straightDeckCrossSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& straightDeckHeadSpeed() OMG_NOEXCEPT {
                    return m_straightDeckHeadSpeed_;
                }

                const ::dds::core::optional< double >& straightDeckHeadSpeed() const OMG_NOEXCEPT {
                    return m_straightDeckHeadSpeed_;
                }

                void straightDeckHeadSpeed(const ::dds::core::optional< double >& value) {
                    m_straightDeckHeadSpeed_ = value;
                }

                void straightDeckHeadSpeed(::dds::core::optional< double >&& value) {
                    m_straightDeckHeadSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueAverageDirection() OMG_NOEXCEPT {
                    return m_trueAverageDirection_;
                }

                const ::dds::core::optional< double >& trueAverageDirection() const OMG_NOEXCEPT {
                    return m_trueAverageDirection_;
                }

                void trueAverageDirection(const ::dds::core::optional< double >& value) {
                    m_trueAverageDirection_ = value;
                }

                void trueAverageDirection(::dds::core::optional< double >&& value) {
                    m_trueAverageDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueAverageSpeed() OMG_NOEXCEPT {
                    return m_trueAverageSpeed_;
                }

                const ::dds::core::optional< double >& trueAverageSpeed() const OMG_NOEXCEPT {
                    return m_trueAverageSpeed_;
                }

                void trueAverageSpeed(const ::dds::core::optional< double >& value) {
                    m_trueAverageSpeed_ = value;
                }

                void trueAverageSpeed(::dds::core::optional< double >&& value) {
                    m_trueAverageSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueInstantaneousDirection() OMG_NOEXCEPT {
                    return m_trueInstantaneousDirection_;
                }

                const ::dds::core::optional< double >& trueInstantaneousDirection() const OMG_NOEXCEPT {
                    return m_trueInstantaneousDirection_;
                }

                void trueInstantaneousDirection(const ::dds::core::optional< double >& value) {
                    m_trueInstantaneousDirection_ = value;
                }

                void trueInstantaneousDirection(::dds::core::optional< double >&& value) {
                    m_trueInstantaneousDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueInstantaneousSpeed() OMG_NOEXCEPT {
                    return m_trueInstantaneousSpeed_;
                }

                const ::dds::core::optional< double >& trueInstantaneousSpeed() const OMG_NOEXCEPT {
                    return m_trueInstantaneousSpeed_;
                }

                void trueInstantaneousSpeed(const ::dds::core::optional< double >& value) {
                    m_trueInstantaneousSpeed_ = value;
                }

                void trueInstantaneousSpeed(::dds::core::optional< double >&& value) {
                    m_trueInstantaneousSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMaximumDirection() OMG_NOEXCEPT {
                    return m_trueMaximumDirection_;
                }

                const ::dds::core::optional< double >& trueMaximumDirection() const OMG_NOEXCEPT {
                    return m_trueMaximumDirection_;
                }

                void trueMaximumDirection(const ::dds::core::optional< double >& value) {
                    m_trueMaximumDirection_ = value;
                }

                void trueMaximumDirection(::dds::core::optional< double >&& value) {
                    m_trueMaximumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMaximumSpeed() OMG_NOEXCEPT {
                    return m_trueMaximumSpeed_;
                }

                const ::dds::core::optional< double >& trueMaximumSpeed() const OMG_NOEXCEPT {
                    return m_trueMaximumSpeed_;
                }

                void trueMaximumSpeed(const ::dds::core::optional< double >& value) {
                    m_trueMaximumSpeed_ = value;
                }

                void trueMaximumSpeed(::dds::core::optional< double >&& value) {
                    m_trueMaximumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMinimumDirection() OMG_NOEXCEPT {
                    return m_trueMinimumDirection_;
                }

                const ::dds::core::optional< double >& trueMinimumDirection() const OMG_NOEXCEPT {
                    return m_trueMinimumDirection_;
                }

                void trueMinimumDirection(const ::dds::core::optional< double >& value) {
                    m_trueMinimumDirection_ = value;
                }

                void trueMinimumDirection(::dds::core::optional< double >&& value) {
                    m_trueMinimumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMinimumSpeed() OMG_NOEXCEPT {
                    return m_trueMinimumSpeed_;
                }

                const ::dds::core::optional< double >& trueMinimumSpeed() const OMG_NOEXCEPT {
                    return m_trueMinimumSpeed_;
                }

                void trueMinimumSpeed(const ::dds::core::optional< double >& value) {
                    m_trueMinimumSpeed_ = value;
                }

                void trueMinimumSpeed(::dds::core::optional< double >&& value) {
                    m_trueMinimumSpeed_ = std::move(value);
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

                bool operator == (const WindStatusReportType& other_) const;
                bool operator != (const WindStatusReportType& other_) const;

                void swap(WindStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_relativeAverageDirection_;
                ::dds::core::optional< double > m_relativeAverageSpeed_;
                ::dds::core::optional< double > m_relativeInstantaneousDirection_;
                ::dds::core::optional< double > m_relativeInstantaneousSpeed_;
                ::dds::core::optional< double > m_relativeMaximumDirection_;
                ::dds::core::optional< double > m_relativeMaximumSpeed_;
                ::dds::core::optional< double > m_relativeMinimumDirection_;
                ::dds::core::optional< double > m_relativeMinimumSpeed_;
                ::dds::core::optional< double > m_straightDeckCrossSpeed_;
                ::dds::core::optional< double > m_straightDeckHeadSpeed_;
                ::dds::core::optional< double > m_trueAverageDirection_;
                ::dds::core::optional< double > m_trueAverageSpeed_;
                ::dds::core::optional< double > m_trueInstantaneousDirection_;
                ::dds::core::optional< double > m_trueInstantaneousSpeed_;
                ::dds::core::optional< double > m_trueMaximumDirection_;
                ::dds::core::optional< double > m_trueMaximumSpeed_;
                ::dds::core::optional< double > m_trueMinimumDirection_;
                ::dds::core::optional< double > m_trueMinimumSpeed_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(WindStatusReportType& a, WindStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WindStatusReportType& sample);

        } // namespace WindStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::WindStatus::WindStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WindStatus::WindStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::WindStatus::WindStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::WindStatus::WindStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::WindStatus::WindStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::WindStatus::WindStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::WindStatus::WindStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::WindStatus::WindStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::WindStatus::WindStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::WindStatus::WindStatusReportType > {
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

#endif // WindStatusReportType_955608806_hpp

