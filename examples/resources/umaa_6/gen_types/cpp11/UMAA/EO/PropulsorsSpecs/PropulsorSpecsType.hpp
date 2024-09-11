

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorSpecsType_745393766_hpp
#define PropulsorSpecsType_745393766_hpp

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
#include "UMAA/Common/Angle/GammaAnglePropulsorToleranceType.hpp"
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
#include "UMAA/Common/Angle/PropellerPitchAnglePropulsorToleranceType.hpp"
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
#include "UMAA/Common/Angle/RhoAnglePropulsorToleranceType.hpp"
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
        namespace PropulsorsSpecs {

            class NDDSUSERDllExport PropulsorSpecsType {
              public:

                PropulsorSpecsType();

                PropulsorSpecsType(bool counterRotator_,const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gamma_,const std::string& name_,const ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& position_,const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitch_,const ::dds::core::optional< int32_t >& propulsionLowerLimit_,int32_t propulsionUpperLimit_,const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rho_);

                bool& counterRotator() noexcept {
                    return m_counterRotator_;
                }

                const bool& counterRotator() const noexcept {
                    return m_counterRotator_;
                }

                void counterRotator(bool value) {

                    m_counterRotator_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gamma() noexcept {
                    return m_gamma_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gamma() const noexcept {
                    return m_gamma_;
                }

                void gamma(const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& value) {

                    m_gamma_ = value;
                }

                void gamma(::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >&& value) {
                    m_gamma_ = std::move(value);
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
                ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitch() noexcept {
                    return m_propellerPitch_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitch() const noexcept {
                    return m_propellerPitch_;
                }

                void propellerPitch(const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& value) {

                    m_propellerPitch_ = value;
                }

                void propellerPitch(::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >&& value) {
                    m_propellerPitch_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& propulsionLowerLimit() noexcept {
                    return m_propulsionLowerLimit_;
                }

                const ::dds::core::optional< int32_t >& propulsionLowerLimit() const noexcept {
                    return m_propulsionLowerLimit_;
                }

                void propulsionLowerLimit(const ::dds::core::optional< int32_t >& value) {

                    m_propulsionLowerLimit_ = value;
                }

                void propulsionLowerLimit(::dds::core::optional< int32_t >&& value) {
                    m_propulsionLowerLimit_ = std::move(value);
                }
                int32_t& propulsionUpperLimit() noexcept {
                    return m_propulsionUpperLimit_;
                }

                const int32_t& propulsionUpperLimit() const noexcept {
                    return m_propulsionUpperLimit_;
                }

                void propulsionUpperLimit(int32_t value) {

                    m_propulsionUpperLimit_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rho() noexcept {
                    return m_rho_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rho() const noexcept {
                    return m_rho_;
                }

                void rho(const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& value) {

                    m_rho_ = value;
                }

                void rho(::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >&& value) {
                    m_rho_ = std::move(value);
                }
                bool operator == (const PropulsorSpecsType& other_) const;
                bool operator != (const PropulsorSpecsType& other_) const;

                void swap(PropulsorSpecsType& other_) noexcept ;

              private:

                bool m_counterRotator_;
                ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType > m_gamma_;
                std::string m_name_;
                ::UMAA::Common::Orientation::Orientation3DPlatformType m_orientation_;
                ::UMAA::Common::Measurement::Position3DBodyXYZ m_position_;
                ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType > m_propellerPitch_;
                ::dds::core::optional< int32_t > m_propulsionLowerLimit_;
                int32_t m_propulsionUpperLimit_;
                ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType > m_rho_;

            };

            inline void swap(PropulsorSpecsType& a, PropulsorSpecsType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsorSpecsType& sample);

        } // namespace PropulsorsSpecs  
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
        struct topic_type_name< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::PropulsorsSpecs::PropulsorSpecsType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType > {
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

#endif // PropulsorSpecsType_745393766_hpp

