

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstraintType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstraintType_1125315025_hpp
#define ConstraintType_1125315025_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace Constraint {

            class NDDSUSERDllExport ConstraintType {
              public:

                ConstraintType();

                ConstraintType(const ::UMAA::Common::Measurement::NumericGUID& constraintConditionalID_,const ::UMAA::Common::Measurement::NumericGUID& constraintID_,const std::string& name_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& triggerConditionalID_);

                ::UMAA::Common::Measurement::NumericGUID& constraintConditionalID() noexcept {
                    return m_constraintConditionalID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& constraintConditionalID() const noexcept {
                    return m_constraintConditionalID_;
                }

                void constraintConditionalID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_constraintConditionalID_ = value;
                }

                void constraintConditionalID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_constraintConditionalID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& constraintID() noexcept {
                    return m_constraintID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& constraintID() const noexcept {
                    return m_constraintID_;
                }

                void constraintID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_constraintID_ = value;
                }

                void constraintID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_constraintID_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& triggerConditionalID() noexcept {
                    return m_triggerConditionalID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& triggerConditionalID() const noexcept {
                    return m_triggerConditionalID_;
                }

                void triggerConditionalID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_triggerConditionalID_ = value;
                }

                void triggerConditionalID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_triggerConditionalID_ = std::move(value);
                }
                bool operator == (const ConstraintType& other_) const;
                bool operator != (const ConstraintType& other_) const;

                void swap(ConstraintType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_constraintConditionalID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_constraintID_ {};
                std::string m_name_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_triggerConditionalID_;

            };

            inline void swap(ConstraintType& a, ConstraintType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ConstraintType& sample);

        } // namespace Constraint  
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
        struct topic_type_name< ::UMAA::MM::Constraint::ConstraintType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Constraint::ConstraintType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::Constraint::ConstraintType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Constraint::ConstraintType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Constraint::ConstraintType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Constraint::ConstraintType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Constraint::ConstraintType > {
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

#endif // ConstraintType_1125315025_hpp
