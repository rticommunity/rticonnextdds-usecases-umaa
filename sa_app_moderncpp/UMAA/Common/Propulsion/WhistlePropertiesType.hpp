

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistlePropertiesType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistlePropertiesType_350957921_hpp
#define WhistlePropertiesType_350957921_hpp

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
    namespace Common {
        namespace Propulsion {

            class NDDSUSERDllExport WhistlePropertiesType {
              public:
                WhistlePropertiesType();

                WhistlePropertiesType(double restTime,double whistleNumber,const UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType& whistleType);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WhistlePropertiesType (WhistlePropertiesType&&) = default;
                WhistlePropertiesType& operator=(WhistlePropertiesType&&) = default;
                WhistlePropertiesType& operator=(const WhistlePropertiesType&) = default;
                WhistlePropertiesType(const WhistlePropertiesType&) = default;
                #else
                WhistlePropertiesType(WhistlePropertiesType&& other_) OMG_NOEXCEPT;  
                WhistlePropertiesType& operator=(WhistlePropertiesType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& restTime() OMG_NOEXCEPT {
                    return m_restTime_;
                }

                const double& restTime() const OMG_NOEXCEPT {
                    return m_restTime_;
                }

                void restTime(double value) {
                    m_restTime_ = value;
                }

                double& whistleNumber() OMG_NOEXCEPT {
                    return m_whistleNumber_;
                }

                const double& whistleNumber() const OMG_NOEXCEPT {
                    return m_whistleNumber_;
                }

                void whistleNumber(double value) {
                    m_whistleNumber_ = value;
                }

                UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType& whistleType() OMG_NOEXCEPT {
                    return m_whistleType_;
                }

                const UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType& whistleType() const OMG_NOEXCEPT {
                    return m_whistleType_;
                }

                void whistleType(const UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType& value) {
                    m_whistleType_ = value;
                }

                void whistleType(UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType&& value) {
                    m_whistleType_ = std::move(value);
                }

                bool operator == (const WhistlePropertiesType& other_) const;
                bool operator != (const WhistlePropertiesType& other_) const;

                void swap(WhistlePropertiesType& other_) OMG_NOEXCEPT ;

              private:

                double m_restTime_;
                double m_whistleNumber_;
                UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType m_whistleType_;

            };

            inline void swap(WhistlePropertiesType& a, WhistlePropertiesType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WhistlePropertiesType& sample);

        } // namespace Propulsion  
    } // namespace Common  
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
        struct topic_type_name< UMAA::Common::Propulsion::WhistlePropertiesType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::WhistlePropertiesType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Propulsion::WhistlePropertiesType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Propulsion::WhistlePropertiesType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Propulsion::WhistlePropertiesType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Propulsion::WhistlePropertiesType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Propulsion::WhistlePropertiesType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Propulsion::WhistlePropertiesType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Propulsion::WhistlePropertiesType > {
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

#endif // WhistlePropertiesType_350957921_hpp

