

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DNEDRequirement_654085907_hpp
#define Orientation3DNEDRequirement_654085907_hpp

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
#include "UMAA/Common/Orientation/PitchYNEDRequirement.hpp"
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
#include "UMAA/Common/Orientation/RollXNEDRequirement.hpp"
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
#include "UMAA/Common/Orientation/YawZNEDRequirement.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport Orientation3DNEDRequirement {
              public:

                Orientation3DNEDRequirement();

                Orientation3DNEDRequirement(const ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >& pitchY_,const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >& rollX_,const ::UMAA::Common::Orientation::YawZNEDRequirement& yawZ_);

                ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >& pitchY() noexcept {
                    return m_pitchY_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >& pitchY() const noexcept {
                    return m_pitchY_;
                }

                void pitchY(const ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >& value) {

                    m_pitchY_ = value;
                }

                void pitchY(::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >&& value) {
                    m_pitchY_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >& rollX() noexcept {
                    return m_rollX_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >& rollX() const noexcept {
                    return m_rollX_;
                }

                void rollX(const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >& value) {

                    m_rollX_ = value;
                }

                void rollX(::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >&& value) {
                    m_rollX_ = std::move(value);
                }
                ::UMAA::Common::Orientation::YawZNEDRequirement& yawZ() noexcept {
                    return m_yawZ_;
                }

                const ::UMAA::Common::Orientation::YawZNEDRequirement& yawZ() const noexcept {
                    return m_yawZ_;
                }

                void yawZ(const ::UMAA::Common::Orientation::YawZNEDRequirement& value) {

                    m_yawZ_ = value;
                }

                void yawZ(::UMAA::Common::Orientation::YawZNEDRequirement&& value) {
                    m_yawZ_ = std::move(value);
                }
                bool operator == (const Orientation3DNEDRequirement& other_) const;
                bool operator != (const Orientation3DNEDRequirement& other_) const;

                void swap(Orientation3DNEDRequirement& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement > m_pitchY_;
                ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement > m_rollX_;
                ::UMAA::Common::Orientation::YawZNEDRequirement m_yawZ_;

            };

            inline void swap(Orientation3DNEDRequirement& a, Orientation3DNEDRequirement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Orientation3DNEDRequirement& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::Orientation3DNEDRequirement";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::Orientation3DNEDRequirement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::Orientation3DNEDRequirement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > {
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

#endif // Orientation3DNEDRequirement_654085907_hpp

