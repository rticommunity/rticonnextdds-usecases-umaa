

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnnulusSectorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnnulusSectorRequirementType_1771335808_hpp
#define AnnulusSectorRequirementType_1771335808_hpp

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
#include "UMAA/Common/Orientation/BearingSectorVariantType.hpp"
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
#include "UMAA/MM/BaseType/AnnulusSectorToleranceType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport AnnulusSectorRequirementType {
              public:

                AnnulusSectorRequirementType();

                AnnulusSectorRequirementType(const ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >& annulusSectorTolerance_,double maxRange_,double minRange_,const ::UMAA::Common::Orientation::BearingSectorVariantType& sector_);

                ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >& annulusSectorTolerance() noexcept {
                    return m_annulusSectorTolerance_;
                }

                const ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >& annulusSectorTolerance() const noexcept {
                    return m_annulusSectorTolerance_;
                }

                void annulusSectorTolerance(const ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >& value) {

                    m_annulusSectorTolerance_ = value;
                }

                void annulusSectorTolerance(::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >&& value) {
                    m_annulusSectorTolerance_ = std::move(value);
                }
                double& maxRange() noexcept {
                    return m_maxRange_;
                }

                const double& maxRange() const noexcept {
                    return m_maxRange_;
                }

                void maxRange(double value) {

                    m_maxRange_ = value;
                }

                double& minRange() noexcept {
                    return m_minRange_;
                }

                const double& minRange() const noexcept {
                    return m_minRange_;
                }

                void minRange(double value) {

                    m_minRange_ = value;
                }

                ::UMAA::Common::Orientation::BearingSectorVariantType& sector() noexcept {
                    return m_sector_;
                }

                const ::UMAA::Common::Orientation::BearingSectorVariantType& sector() const noexcept {
                    return m_sector_;
                }

                void sector(const ::UMAA::Common::Orientation::BearingSectorVariantType& value) {

                    m_sector_ = value;
                }

                void sector(::UMAA::Common::Orientation::BearingSectorVariantType&& value) {
                    m_sector_ = std::move(value);
                }
                bool operator == (const AnnulusSectorRequirementType& other_) const;
                bool operator != (const AnnulusSectorRequirementType& other_) const;

                void swap(AnnulusSectorRequirementType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType > m_annulusSectorTolerance_;
                double m_maxRange_;
                double m_minRange_;
                ::UMAA::Common::Orientation::BearingSectorVariantType m_sector_;

            };

            inline void swap(AnnulusSectorRequirementType& a, AnnulusSectorRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AnnulusSectorRequirementType& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::MM::BaseType::AnnulusSectorRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::AnnulusSectorRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::AnnulusSectorRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::AnnulusSectorRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::AnnulusSectorRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::AnnulusSectorRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::AnnulusSectorRequirementType > {
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

#endif // AnnulusSectorRequirementType_1771335808_hpp

