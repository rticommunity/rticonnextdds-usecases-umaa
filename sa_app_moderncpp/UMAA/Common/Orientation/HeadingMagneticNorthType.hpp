

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingMagneticNorthType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingMagneticNorthType_629601557_hpp
#define HeadingMagneticNorthType_629601557_hpp

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
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport HeadingMagneticNorthType {
              public:
                HeadingMagneticNorthType();

                explicit HeadingMagneticNorthType(double headingMagneticNorth);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                HeadingMagneticNorthType (HeadingMagneticNorthType&&) = default;
                HeadingMagneticNorthType& operator=(HeadingMagneticNorthType&&) = default;
                HeadingMagneticNorthType& operator=(const HeadingMagneticNorthType&) = default;
                HeadingMagneticNorthType(const HeadingMagneticNorthType&) = default;
                #else
                HeadingMagneticNorthType(HeadingMagneticNorthType&& other_) OMG_NOEXCEPT;  
                HeadingMagneticNorthType& operator=(HeadingMagneticNorthType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& headingMagneticNorth() OMG_NOEXCEPT {
                    return m_headingMagneticNorth_;
                }

                const double& headingMagneticNorth() const OMG_NOEXCEPT {
                    return m_headingMagneticNorth_;
                }

                void headingMagneticNorth(double value) {
                    m_headingMagneticNorth_ = value;
                }

                bool operator == (const HeadingMagneticNorthType& other_) const;
                bool operator != (const HeadingMagneticNorthType& other_) const;

                void swap(HeadingMagneticNorthType& other_) OMG_NOEXCEPT ;

              private:

                double m_headingMagneticNorth_;

            };

            inline void swap(HeadingMagneticNorthType& a, HeadingMagneticNorthType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HeadingMagneticNorthType& sample);

        } // namespace Orientation  
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
        struct topic_type_name< UMAA::Common::Orientation::HeadingMagneticNorthType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::HeadingMagneticNorthType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Orientation::HeadingMagneticNorthType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Orientation::HeadingMagneticNorthType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Orientation::HeadingMagneticNorthType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Orientation::HeadingMagneticNorthType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Orientation::HeadingMagneticNorthType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Orientation::HeadingMagneticNorthType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Orientation::HeadingMagneticNorthType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Orientation::HeadingMagneticNorthType > {
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

#endif // HeadingMagneticNorthType_629601557_hpp

