

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterSpecsType_2109516380_hpp
#define ThrusterSpecsType_2109516380_hpp

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
    namespace EO {
        namespace ThrusterSpecs {

            class NDDSUSERDllExport ThrusterSpecsType {
              public:
                ThrusterSpecsType();

                ThrusterSpecsType(double maxRPM,const UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType,const std::string& name);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ThrusterSpecsType (ThrusterSpecsType&&) = default;
                ThrusterSpecsType& operator=(ThrusterSpecsType&&) = default;
                ThrusterSpecsType& operator=(const ThrusterSpecsType&) = default;
                ThrusterSpecsType(const ThrusterSpecsType&) = default;
                #else
                ThrusterSpecsType(ThrusterSpecsType&& other_) OMG_NOEXCEPT;  
                ThrusterSpecsType& operator=(ThrusterSpecsType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& maxRPM() OMG_NOEXCEPT {
                    return m_maxRPM_;
                }

                const double& maxRPM() const OMG_NOEXCEPT {
                    return m_maxRPM_;
                }

                void maxRPM(double value) {
                    m_maxRPM_ = value;
                }

                UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType() OMG_NOEXCEPT {
                    return m_mountType_;
                }

                const UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType() const OMG_NOEXCEPT {
                    return m_mountType_;
                }

                void mountType(const UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& value) {
                    m_mountType_ = value;
                }

                void mountType(UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType&& value) {
                    m_mountType_ = std::move(value);
                }
                std::string& name() OMG_NOEXCEPT {
                    return m_name_;
                }

                const std::string& name() const OMG_NOEXCEPT {
                    return m_name_;
                }

                void name(const std::string& value) {
                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }

                bool operator == (const ThrusterSpecsType& other_) const;
                bool operator != (const ThrusterSpecsType& other_) const;

                void swap(ThrusterSpecsType& other_) OMG_NOEXCEPT ;

              private:

                double m_maxRPM_;
                UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType m_mountType_;
                std::string m_name_;

            };

            inline void swap(ThrusterSpecsType& a, ThrusterSpecsType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ThrusterSpecsType& sample);

        } // namespace ThrusterSpecs  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::ThrusterSpecs::ThrusterSpecsType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > {
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

#endif // ThrusterSpecsType_2109516380_hpp

