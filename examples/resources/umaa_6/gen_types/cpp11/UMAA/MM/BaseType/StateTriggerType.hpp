

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StateTriggerType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StateTriggerType_2036514229_hpp
#define StateTriggerType_2036514229_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport StateTriggerType {
              public:

                StateTriggerType();

                StateTriggerType(const ::UMAA::Common::Measurement::NumericGUID& conditionalID_,const ::dds::core::optional< int32_t >& count_,const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType& state_);

                ::UMAA::Common::Measurement::NumericGUID& conditionalID() noexcept {
                    return m_conditionalID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& conditionalID() const noexcept {
                    return m_conditionalID_;
                }

                void conditionalID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_conditionalID_ = value;
                }

                void conditionalID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_conditionalID_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& count() noexcept {
                    return m_count_;
                }

                const ::dds::core::optional< int32_t >& count() const noexcept {
                    return m_count_;
                }

                void count(const ::dds::core::optional< int32_t >& value) {

                    m_count_ = value;
                }

                void count(::dds::core::optional< int32_t >&& value) {
                    m_count_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                bool operator == (const StateTriggerType& other_) const;
                bool operator != (const StateTriggerType& other_) const;

                void swap(StateTriggerType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_conditionalID_ {};
                ::dds::core::optional< int32_t > m_count_;
                ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType m_state_;

            };

            inline void swap(StateTriggerType& a, StateTriggerType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StateTriggerType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::StateTriggerType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::StateTriggerType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::StateTriggerType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::StateTriggerType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::StateTriggerType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::StateTriggerType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::StateTriggerType > {
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

#endif // StateTriggerType_2036514229_hpp

