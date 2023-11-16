

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LoiterObjectiveType_1994294626_hpp
#define LoiterObjectiveType_1994294626_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/Altitude_AGL.hpp"
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
#include "UMAA/Common/Measurement/Altitude_MSL.hpp"
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
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
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
#include "UMAA/Common/Measurement/Position3D_WGS84.hpp"
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

            class NDDSUSERDllExport LoiterObjectiveType {
              public:

                LoiterObjectiveType();

                LoiterObjectiveType(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< bool >& autoHeading_,const ::dds::core::optional< double >& bearing_,const ::dds::core::optional< double >& depth_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >& direction_,double duration_,const ::dds::core::optional< double >& heading_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >& hoverKind_,const ::dds::core::optional< double >& length_,const ::UMAA::Common::Measurement::Position3D_WGS84& position_,double speed_,const ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType& type_,double width_);

                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude() noexcept {
                    return m_altitude_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude() const noexcept {
                    return m_altitude_;
                }

                void altitude(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& value) {

                    m_altitude_ = value;
                }

                void altitude(::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >&& value) {
                    m_altitude_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() noexcept {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() const noexcept {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& value) {

                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeASF() noexcept {
                    return m_altitudeASF_;
                }

                const ::dds::core::optional< double >& altitudeASF() const noexcept {
                    return m_altitudeASF_;
                }

                void altitudeASF(const ::dds::core::optional< double >& value) {

                    m_altitudeASF_ = value;
                }

                void altitudeASF(::dds::core::optional< double >&& value) {
                    m_altitudeASF_ = std::move(value);
                }
                ::dds::core::optional< bool >& autoHeading() noexcept {
                    return m_autoHeading_;
                }

                const ::dds::core::optional< bool >& autoHeading() const noexcept {
                    return m_autoHeading_;
                }

                void autoHeading(const ::dds::core::optional< bool >& value) {

                    m_autoHeading_ = value;
                }

                void autoHeading(::dds::core::optional< bool >&& value) {
                    m_autoHeading_ = std::move(value);
                }
                ::dds::core::optional< double >& bearing() noexcept {
                    return m_bearing_;
                }

                const ::dds::core::optional< double >& bearing() const noexcept {
                    return m_bearing_;
                }

                void bearing(const ::dds::core::optional< double >& value) {

                    m_bearing_ = value;
                }

                void bearing(::dds::core::optional< double >&& value) {
                    m_bearing_ = std::move(value);
                }
                ::dds::core::optional< double >& depth() noexcept {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const noexcept {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {

                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >& direction() noexcept {
                    return m_direction_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >& direction() const noexcept {
                    return m_direction_;
                }

                void direction(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >& value) {

                    m_direction_ = value;
                }

                void direction(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >&& value) {
                    m_direction_ = std::move(value);
                }
                double& duration() noexcept {
                    return m_duration_;
                }

                const double& duration() const noexcept {
                    return m_duration_;
                }

                void duration(double value) {

                    m_duration_ = value;
                }

                ::dds::core::optional< double >& heading() noexcept {
                    return m_heading_;
                }

                const ::dds::core::optional< double >& heading() const noexcept {
                    return m_heading_;
                }

                void heading(const ::dds::core::optional< double >& value) {

                    m_heading_ = value;
                }

                void heading(::dds::core::optional< double >&& value) {
                    m_heading_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >& hoverKind() noexcept {
                    return m_hoverKind_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >& hoverKind() const noexcept {
                    return m_hoverKind_;
                }

                void hoverKind(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >& value) {

                    m_hoverKind_ = value;
                }

                void hoverKind(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >&& value) {
                    m_hoverKind_ = std::move(value);
                }
                ::dds::core::optional< double >& length() noexcept {
                    return m_length_;
                }

                const ::dds::core::optional< double >& length() const noexcept {
                    return m_length_;
                }

                void length(const ::dds::core::optional< double >& value) {

                    m_length_ = value;
                }

                void length(::dds::core::optional< double >&& value) {
                    m_length_ = std::move(value);
                }
                ::UMAA::Common::Measurement::Position3D_WGS84& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Measurement::Position3D_WGS84& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Measurement::Position3D_WGS84& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Measurement::Position3D_WGS84&& value) {
                    m_position_ = std::move(value);
                }
                double& speed() noexcept {
                    return m_speed_;
                }

                const double& speed() const noexcept {
                    return m_speed_;
                }

                void speed(double value) {

                    m_speed_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType& type() noexcept {
                    return m_type_;
                }

                const ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType& type() const noexcept {
                    return m_type_;
                }

                void type(const ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType& value) {

                    m_type_ = value;
                }

                void type(::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType&& value) {
                    m_type_ = std::move(value);
                }
                double& width() noexcept {
                    return m_width_;
                }

                const double& width() const noexcept {
                    return m_width_;
                }

                void width(double value) {

                    m_width_ = value;
                }

                bool operator == (const LoiterObjectiveType& other_) const;
                bool operator != (const LoiterObjectiveType& other_) const;

                void swap(LoiterObjectiveType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL > m_altitude_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                ::dds::core::optional< bool > m_autoHeading_;
                ::dds::core::optional< double > m_bearing_;
                ::dds::core::optional< double > m_depth_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType > m_direction_;
                double m_duration_;
                ::dds::core::optional< double > m_heading_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType > m_hoverKind_;
                ::dds::core::optional< double > m_length_;
                ::UMAA::Common::Measurement::Position3D_WGS84 m_position_;
                double m_speed_;
                ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType m_type_;
                double m_width_;

            };

            inline void swap(LoiterObjectiveType& a, LoiterObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LoiterObjectiveType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::LoiterObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::LoiterObjectiveType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::LoiterObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::LoiterObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::LoiterObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::LoiterObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::LoiterObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::LoiterObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::LoiterObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::LoiterObjectiveType > {
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

#endif // LoiterObjectiveType_1994294626_hpp

