

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PitchYNEDTolerance.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PitchYNEDTolerance_559489775_hpp
#define PitchYNEDTolerance_559489775_hpp

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
#include "UMAA/Common/Orientation/PitchYNEDType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport PitchYNEDTolerance {
              public:

                PitchYNEDTolerance();

                PitchYNEDTolerance(const ::dds::core::optional< double >& failureDelay_,const ::UMAA::Common::Orientation::PitchYNEDType& lowerlimit_,const ::UMAA::Common::Orientation::PitchYNEDType& upperlimit_);

                ::dds::core::optional< double >& failureDelay() noexcept {
                    return m_failureDelay_;
                }

                const ::dds::core::optional< double >& failureDelay() const noexcept {
                    return m_failureDelay_;
                }

                void failureDelay(const ::dds::core::optional< double >& value) {

                    m_failureDelay_ = value;
                }

                void failureDelay(::dds::core::optional< double >&& value) {
                    m_failureDelay_ = std::move(value);
                }
                ::UMAA::Common::Orientation::PitchYNEDType& lowerlimit() noexcept {
                    return m_lowerlimit_;
                }

                const ::UMAA::Common::Orientation::PitchYNEDType& lowerlimit() const noexcept {
                    return m_lowerlimit_;
                }

                void lowerlimit(const ::UMAA::Common::Orientation::PitchYNEDType& value) {

                    m_lowerlimit_ = value;
                }

                void lowerlimit(::UMAA::Common::Orientation::PitchYNEDType&& value) {
                    m_lowerlimit_ = std::move(value);
                }
                ::UMAA::Common::Orientation::PitchYNEDType& upperlimit() noexcept {
                    return m_upperlimit_;
                }

                const ::UMAA::Common::Orientation::PitchYNEDType& upperlimit() const noexcept {
                    return m_upperlimit_;
                }

                void upperlimit(const ::UMAA::Common::Orientation::PitchYNEDType& value) {

                    m_upperlimit_ = value;
                }

                void upperlimit(::UMAA::Common::Orientation::PitchYNEDType&& value) {
                    m_upperlimit_ = std::move(value);
                }
                bool operator == (const PitchYNEDTolerance& other_) const;
                bool operator != (const PitchYNEDTolerance& other_) const;

                void swap(PitchYNEDTolerance& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_failureDelay_;
                ::UMAA::Common::Orientation::PitchYNEDType m_lowerlimit_;
                ::UMAA::Common::Orientation::PitchYNEDType m_upperlimit_;

            };

            inline void swap(PitchYNEDTolerance& a, PitchYNEDTolerance& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PitchYNEDTolerance& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::PitchYNEDTolerance > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::PitchYNEDTolerance";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::PitchYNEDTolerance > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::PitchYNEDTolerance& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::PitchYNEDTolerance& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::PitchYNEDTolerance > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::PitchYNEDTolerance > {
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

#endif // PitchYNEDTolerance_559489775_hpp

