

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YawZNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef YawZNEDRequirement_138228904_hpp
#define YawZNEDRequirement_138228904_hpp

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
#include "UMAA/Common/Orientation/YawZNEDTolerance.hpp"
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
#include "UMAA/Common/Orientation/YawZNEDType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport YawZNEDRequirement {
              public:

                YawZNEDRequirement();

                YawZNEDRequirement(const ::UMAA::Common::Orientation::YawZNEDType& yaw_,const ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >& yawTolerance_);

                ::UMAA::Common::Orientation::YawZNEDType& yaw() noexcept {
                    return m_yaw_;
                }

                const ::UMAA::Common::Orientation::YawZNEDType& yaw() const noexcept {
                    return m_yaw_;
                }

                void yaw(const ::UMAA::Common::Orientation::YawZNEDType& value) {

                    m_yaw_ = value;
                }

                void yaw(::UMAA::Common::Orientation::YawZNEDType&& value) {
                    m_yaw_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >& yawTolerance() noexcept {
                    return m_yawTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >& yawTolerance() const noexcept {
                    return m_yawTolerance_;
                }

                void yawTolerance(const ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >& value) {

                    m_yawTolerance_ = value;
                }

                void yawTolerance(::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >&& value) {
                    m_yawTolerance_ = std::move(value);
                }
                bool operator == (const YawZNEDRequirement& other_) const;
                bool operator != (const YawZNEDRequirement& other_) const;

                void swap(YawZNEDRequirement& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::YawZNEDType m_yaw_;
                ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance > m_yawTolerance_;

            };

            inline void swap(YawZNEDRequirement& a, YawZNEDRequirement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const YawZNEDRequirement& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::YawZNEDRequirement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::YawZNEDRequirement";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::YawZNEDRequirement > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::YawZNEDRequirement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::YawZNEDRequirement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::YawZNEDRequirement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::YawZNEDRequirement > {
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

#endif // YawZNEDRequirement_138228904_hpp

