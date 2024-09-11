

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinSpecsType_180767099_hpp
#define FinSpecsType_180767099_hpp

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
#include "UMAA/Common/Measurement/Position3DBodyXYZ.hpp"
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
#include "UMAA/Common/Orientation/Orientation3DPlatformType.hpp"
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
    namespace EO {
        namespace FinsSpecs {

            class NDDSUSERDllExport FinSpecsType {
              public:

                FinSpecsType();

                FinSpecsType(double maxDeflectionRate_,double maxNegativeDeflection_,double maxPositiveDeflection_,double minDeflectionRate_,const std::string& name_,const ::dds::core::optional< double >& nominalDeflectionRate_,const ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& position_);

                double& maxDeflectionRate() noexcept {
                    return m_maxDeflectionRate_;
                }

                const double& maxDeflectionRate() const noexcept {
                    return m_maxDeflectionRate_;
                }

                void maxDeflectionRate(double value) {

                    m_maxDeflectionRate_ = value;
                }

                double& maxNegativeDeflection() noexcept {
                    return m_maxNegativeDeflection_;
                }

                const double& maxNegativeDeflection() const noexcept {
                    return m_maxNegativeDeflection_;
                }

                void maxNegativeDeflection(double value) {

                    m_maxNegativeDeflection_ = value;
                }

                double& maxPositiveDeflection() noexcept {
                    return m_maxPositiveDeflection_;
                }

                const double& maxPositiveDeflection() const noexcept {
                    return m_maxPositiveDeflection_;
                }

                void maxPositiveDeflection(double value) {

                    m_maxPositiveDeflection_ = value;
                }

                double& minDeflectionRate() noexcept {
                    return m_minDeflectionRate_;
                }

                const double& minDeflectionRate() const noexcept {
                    return m_minDeflectionRate_;
                }

                void minDeflectionRate(double value) {

                    m_minDeflectionRate_ = value;
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
                ::dds::core::optional< double >& nominalDeflectionRate() noexcept {
                    return m_nominalDeflectionRate_;
                }

                const ::dds::core::optional< double >& nominalDeflectionRate() const noexcept {
                    return m_nominalDeflectionRate_;
                }

                void nominalDeflectionRate(const ::dds::core::optional< double >& value) {

                    m_nominalDeflectionRate_ = value;
                }

                void nominalDeflectionRate(::dds::core::optional< double >&& value) {
                    m_nominalDeflectionRate_ = std::move(value);
                }
                ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation() noexcept {
                    return m_orientation_;
                }

                const ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation() const noexcept {
                    return m_orientation_;
                }

                void orientation(const ::UMAA::Common::Orientation::Orientation3DPlatformType& value) {

                    m_orientation_ = value;
                }

                void orientation(::UMAA::Common::Orientation::Orientation3DPlatformType&& value) {
                    m_orientation_ = std::move(value);
                }
                ::UMAA::Common::Measurement::Position3DBodyXYZ& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Measurement::Position3DBodyXYZ& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Measurement::Position3DBodyXYZ& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Measurement::Position3DBodyXYZ&& value) {
                    m_position_ = std::move(value);
                }
                bool operator == (const FinSpecsType& other_) const;
                bool operator != (const FinSpecsType& other_) const;

                void swap(FinSpecsType& other_) noexcept ;

              private:

                double m_maxDeflectionRate_;
                double m_maxNegativeDeflection_;
                double m_maxPositiveDeflection_;
                double m_minDeflectionRate_;
                std::string m_name_;
                ::dds::core::optional< double > m_nominalDeflectionRate_;
                ::UMAA::Common::Orientation::Orientation3DPlatformType m_orientation_;
                ::UMAA::Common::Measurement::Position3DBodyXYZ m_position_;

            };

            inline void swap(FinSpecsType& a, FinSpecsType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FinSpecsType& sample);

        } // namespace FinsSpecs  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::FinsSpecs::FinSpecsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::FinsSpecs::FinSpecsType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::FinsSpecs::FinSpecsType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::FinsSpecs::FinSpecsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::FinsSpecs::FinSpecsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::FinsSpecs::FinSpecsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::FinsSpecs::FinSpecsType > {
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

#endif // FinSpecsType_180767099_hpp

