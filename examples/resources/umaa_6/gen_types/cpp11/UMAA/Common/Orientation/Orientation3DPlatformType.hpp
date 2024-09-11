

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DPlatformType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DPlatformType_1269984291_hpp
#define Orientation3DPlatformType_1269984291_hpp

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
#include "UMAA/Common/Orientation/AlphaXPlatformType.hpp"
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
#include "UMAA/Common/Orientation/BetaYPlatformType.hpp"
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
#include "UMAA/Common/Orientation/GammaZPlatformType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport Orientation3DPlatformType {
              public:

                Orientation3DPlatformType();

                Orientation3DPlatformType(const ::UMAA::Common::Orientation::AlphaXPlatformType& alpha_,const ::UMAA::Common::Orientation::BetaYPlatformType& beta_,const ::UMAA::Common::Orientation::GammaZPlatformType& gamma_);

                ::UMAA::Common::Orientation::AlphaXPlatformType& alpha() noexcept {
                    return m_alpha_;
                }

                const ::UMAA::Common::Orientation::AlphaXPlatformType& alpha() const noexcept {
                    return m_alpha_;
                }

                void alpha(const ::UMAA::Common::Orientation::AlphaXPlatformType& value) {

                    m_alpha_ = value;
                }

                void alpha(::UMAA::Common::Orientation::AlphaXPlatformType&& value) {
                    m_alpha_ = std::move(value);
                }
                ::UMAA::Common::Orientation::BetaYPlatformType& beta() noexcept {
                    return m_beta_;
                }

                const ::UMAA::Common::Orientation::BetaYPlatformType& beta() const noexcept {
                    return m_beta_;
                }

                void beta(const ::UMAA::Common::Orientation::BetaYPlatformType& value) {

                    m_beta_ = value;
                }

                void beta(::UMAA::Common::Orientation::BetaYPlatformType&& value) {
                    m_beta_ = std::move(value);
                }
                ::UMAA::Common::Orientation::GammaZPlatformType& gamma() noexcept {
                    return m_gamma_;
                }

                const ::UMAA::Common::Orientation::GammaZPlatformType& gamma() const noexcept {
                    return m_gamma_;
                }

                void gamma(const ::UMAA::Common::Orientation::GammaZPlatformType& value) {

                    m_gamma_ = value;
                }

                void gamma(::UMAA::Common::Orientation::GammaZPlatformType&& value) {
                    m_gamma_ = std::move(value);
                }
                bool operator == (const Orientation3DPlatformType& other_) const;
                bool operator != (const Orientation3DPlatformType& other_) const;

                void swap(Orientation3DPlatformType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::AlphaXPlatformType m_alpha_;
                ::UMAA::Common::Orientation::BetaYPlatformType m_beta_;
                ::UMAA::Common::Orientation::GammaZPlatformType m_gamma_;

            };

            inline void swap(Orientation3DPlatformType& a, Orientation3DPlatformType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Orientation3DPlatformType& sample);

        } // namespace Orientation  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::Orientation::Orientation3DPlatformType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::Orientation3DPlatformType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::Orientation3DPlatformType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::Orientation3DPlatformType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::Orientation3DPlatformType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::Orientation3DPlatformType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::Orientation3DPlatformType > {
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

#endif // Orientation3DPlatformType_1269984291_hpp

