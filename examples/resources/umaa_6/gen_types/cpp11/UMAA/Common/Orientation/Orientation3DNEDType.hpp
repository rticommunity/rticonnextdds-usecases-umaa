

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DNEDType_1064310342_hpp
#define Orientation3DNEDType_1064310342_hpp

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
#include "UMAA/Common/Orientation/PitchYNEDType.hpp"
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

            class NDDSUSERDllExport Orientation3DNEDType {
              public:

                Orientation3DNEDType();

                Orientation3DNEDType(const ::UMAA::Common::Orientation::PitchYNEDType& pitch_,const ::UMAA::Common::Orientation::RollXNEDType& roll_,const ::UMAA::Common::Orientation::YawZNEDType& yaw_);

                ::UMAA::Common::Orientation::PitchYNEDType& pitch() noexcept {
                    return m_pitch_;
                }

                const ::UMAA::Common::Orientation::PitchYNEDType& pitch() const noexcept {
                    return m_pitch_;
                }

                void pitch(const ::UMAA::Common::Orientation::PitchYNEDType& value) {

                    m_pitch_ = value;
                }

                void pitch(::UMAA::Common::Orientation::PitchYNEDType&& value) {
                    m_pitch_ = std::move(value);
                }
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
                bool operator == (const Orientation3DNEDType& other_) const;
                bool operator != (const Orientation3DNEDType& other_) const;

                void swap(Orientation3DNEDType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::PitchYNEDType m_pitch_;
                ::UMAA::Common::Orientation::RollXNEDType m_roll_;
                ::UMAA::Common::Orientation::YawZNEDType m_yaw_;

            };

            inline void swap(Orientation3DNEDType& a, Orientation3DNEDType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Orientation3DNEDType& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::Orientation3DNEDType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::Orientation3DNEDType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::Orientation3DNEDType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::Orientation3DNEDType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::Orientation3DNEDType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::Orientation3DNEDType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::Orientation3DNEDType > {
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

#endif // Orientation3DNEDType_1064310342_hpp

