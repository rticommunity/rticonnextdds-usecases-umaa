

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RollXNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RollXNEDRequirement_1181583661_hpp
#define RollXNEDRequirement_1181583661_hpp

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
#include "UMAA/Common/Orientation/RollXNEDTolerance.hpp"
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
#include "UMAA/Common/Orientation/RollXNEDType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport RollXNEDRequirement {
              public:

                RollXNEDRequirement();

                RollXNEDRequirement(const ::UMAA::Common::Orientation::RollXNEDType& roll_,const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance >& rollTolerance_);

                ::UMAA::Common::Orientation::RollXNEDType& roll() noexcept {
                    return m_roll_;
                }

                const ::UMAA::Common::Orientation::RollXNEDType& roll() const noexcept {
                    return m_roll_;
                }

                void roll(const ::UMAA::Common::Orientation::RollXNEDType& value) {

                    m_roll_ = value;
                }

                void roll(::UMAA::Common::Orientation::RollXNEDType&& value) {
                    m_roll_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance >& rollTolerance() noexcept {
                    return m_rollTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance >& rollTolerance() const noexcept {
                    return m_rollTolerance_;
                }

                void rollTolerance(const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance >& value) {

                    m_rollTolerance_ = value;
                }

                void rollTolerance(::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance >&& value) {
                    m_rollTolerance_ = std::move(value);
                }
                bool operator == (const RollXNEDRequirement& other_) const;
                bool operator != (const RollXNEDRequirement& other_) const;

                void swap(RollXNEDRequirement& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::RollXNEDType m_roll_;
                ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDTolerance > m_rollTolerance_;

            };

            inline void swap(RollXNEDRequirement& a, RollXNEDRequirement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RollXNEDRequirement& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::RollXNEDRequirement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::RollXNEDRequirement";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::RollXNEDRequirement > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::RollXNEDRequirement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::RollXNEDRequirement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::RollXNEDRequirement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::RollXNEDRequirement > {
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

#endif // RollXNEDRequirement_1181583661_hpp

