

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoveringHoverType_463028914_hpp
#define GlobalHoveringHoverType_463028914_hpp

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
namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {

            class NDDSUSERDllExport GlobalHoveringHoverType {
              public:

                GlobalHoveringHoverType();

                GlobalHoveringHoverType(bool elevationAchieved_,const ::dds::core::optional< bool >& headingAchieved_,bool hoverRadiusAchieved_);

                bool& elevationAchieved() noexcept {
                    return m_elevationAchieved_;
                }

                const bool& elevationAchieved() const noexcept {
                    return m_elevationAchieved_;
                }

                void elevationAchieved(bool value) {

                    m_elevationAchieved_ = value;
                }

                ::dds::core::optional< bool >& headingAchieved() noexcept {
                    return m_headingAchieved_;
                }

                const ::dds::core::optional< bool >& headingAchieved() const noexcept {
                    return m_headingAchieved_;
                }

                void headingAchieved(const ::dds::core::optional< bool >& value) {

                    m_headingAchieved_ = value;
                }

                void headingAchieved(::dds::core::optional< bool >&& value) {
                    m_headingAchieved_ = std::move(value);
                }
                bool& hoverRadiusAchieved() noexcept {
                    return m_hoverRadiusAchieved_;
                }

                const bool& hoverRadiusAchieved() const noexcept {
                    return m_hoverRadiusAchieved_;
                }

                void hoverRadiusAchieved(bool value) {

                    m_hoverRadiusAchieved_ = value;
                }

                bool operator == (const GlobalHoveringHoverType& other_) const;
                bool operator != (const GlobalHoveringHoverType& other_) const;

                void swap(GlobalHoveringHoverType& other_) noexcept ;

              private:

                bool m_elevationAchieved_;
                ::dds::core::optional< bool > m_headingAchieved_;
                bool m_hoverRadiusAchieved_;

            };

            inline void swap(GlobalHoveringHoverType& a, GlobalHoveringHoverType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoveringHoverType& sample);

        } // namespace GlobalHoverState  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverState::GlobalHoveringHoverType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType > {
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

#endif // GlobalHoveringHoverType_463028914_hpp

