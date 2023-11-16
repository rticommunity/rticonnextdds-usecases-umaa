

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImagePairType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImagePairType_734499926_hpp
#define FeatureImagePairType_734499926_hpp

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
        namespace FeatureImagePair {

            class NDDSUSERDllExport FeatureImagePairType {
              public:
                FeatureImagePairType();

                FeatureImagePairType(const UMAA::Common::Measurement::NumericGUID& featureID,const UMAA::Common::Measurement::NumericGUID& imageID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                FeatureImagePairType (FeatureImagePairType&&) = default;
                FeatureImagePairType& operator=(FeatureImagePairType&&) = default;
                FeatureImagePairType& operator=(const FeatureImagePairType&) = default;
                FeatureImagePairType(const FeatureImagePairType&) = default;
                #else
                FeatureImagePairType(FeatureImagePairType&& other_) OMG_NOEXCEPT;  
                FeatureImagePairType& operator=(FeatureImagePairType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& featureID() OMG_NOEXCEPT {
                    return m_featureID_;
                }

                const UMAA::Common::Measurement::NumericGUID& featureID() const OMG_NOEXCEPT {
                    return m_featureID_;
                }

                void featureID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_featureID_ = value;
                }

                void featureID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_featureID_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& imageID() OMG_NOEXCEPT {
                    return m_imageID_;
                }

                const UMAA::Common::Measurement::NumericGUID& imageID() const OMG_NOEXCEPT {
                    return m_imageID_;
                }

                void imageID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_imageID_ = value;
                }

                void imageID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_imageID_ = std::move(value);
                }

                bool operator == (const FeatureImagePairType& other_) const;
                bool operator != (const FeatureImagePairType& other_) const;

                void swap(FeatureImagePairType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_featureID_;
                UMAA::Common::Measurement::NumericGUID m_imageID_;

            };

            inline void swap(FeatureImagePairType& a, FeatureImagePairType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FeatureImagePairType& sample);

        } // namespace FeatureImagePair  
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
        struct topic_type_name< UMAA::SA::FeatureImagePair::FeatureImagePairType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::FeatureImagePair::FeatureImagePairType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::FeatureImagePair::FeatureImagePairType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::FeatureImagePair::FeatureImagePairType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::FeatureImagePair::FeatureImagePairType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::FeatureImagePair::FeatureImagePairType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::FeatureImagePair::FeatureImagePairType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::FeatureImagePair::FeatureImagePairType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::FeatureImagePair::FeatureImagePairType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::FeatureImagePair::FeatureImagePairType > {
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

#endif // FeatureImagePairType_734499926_hpp

