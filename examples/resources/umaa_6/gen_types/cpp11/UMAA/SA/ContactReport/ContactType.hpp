

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactType_1508710700_hpp
#define ContactType_1508710700_hpp

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
#include "UMAA/Common/Measurement/CovariancePositionNEDType.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionVelocityNEDType.hpp"
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
#include "UMAA/Common/Measurement/CovarianceVelocityNEDType.hpp"
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
#include "UMAA/Common/Measurement/GeoPosition2D.hpp"
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
#include "UMAA/Common/Measurement/Velocity3DPlatformNEDType.hpp"
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
    namespace SA {
        namespace ContactReport {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport ContactType {
              public:

                ContactType();

                ContactType(const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::dds::core::optional< double >& altitudeMSL_,const ::dds::core::optional< std::string >& callSign_,const ::dds::core::optional< double >& confidence_,const ::UMAA::Common::Measurement::NumericGUID& contactID_,const std::string& contactName_,const ::dds::core::optional< double >& course_,const ::dds::core::optional< double >& depth_,const ::dds::core::optional< double >& heading_,const ::dds::core::optional< double >& height_,const ::dds::core::optional< double >& length_,const ::dds::core::optional< std::string >& MMSINumber_,const ::UMAA::Common::Measurement::GeoPosition2D& position_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >& positionVelocityCovariance_,const ::dds::core::optional< double >& quality_,const ::dds::core::optional< std::string >& SIDC_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >& sourceContactID_,const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType& sourceIndicator_,const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType& specialManeuverIndicator_,double speedOverGround_,const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost_,const ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >& velocity_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance_,const ::dds::core::optional< double >& width_);

                ::dds::core::optional< double >& altitudeAGL() noexcept {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< double >& altitudeAGL() const noexcept {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< double >& value) {

                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< double >&& value) {
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
                ::dds::core::optional< double >& altitudeGeodetic() noexcept {
                    return m_altitudeGeodetic_;
                }

                const ::dds::core::optional< double >& altitudeGeodetic() const noexcept {
                    return m_altitudeGeodetic_;
                }

                void altitudeGeodetic(const ::dds::core::optional< double >& value) {

                    m_altitudeGeodetic_ = value;
                }

                void altitudeGeodetic(::dds::core::optional< double >&& value) {
                    m_altitudeGeodetic_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeMSL() noexcept {
                    return m_altitudeMSL_;
                }

                const ::dds::core::optional< double >& altitudeMSL() const noexcept {
                    return m_altitudeMSL_;
                }

                void altitudeMSL(const ::dds::core::optional< double >& value) {

                    m_altitudeMSL_ = value;
                }

                void altitudeMSL(::dds::core::optional< double >&& value) {
                    m_altitudeMSL_ = std::move(value);
                }
                ::dds::core::optional< std::string >& callSign() noexcept {
                    return m_callSign_;
                }

                const ::dds::core::optional< std::string >& callSign() const noexcept {
                    return m_callSign_;
                }

                void callSign(const ::dds::core::optional< std::string >& value) {

                    m_callSign_ = value;
                }

                void callSign(::dds::core::optional< std::string >&& value) {
                    m_callSign_ = std::move(value);
                }
                ::dds::core::optional< double >& confidence() noexcept {
                    return m_confidence_;
                }

                const ::dds::core::optional< double >& confidence() const noexcept {
                    return m_confidence_;
                }

                void confidence(const ::dds::core::optional< double >& value) {

                    m_confidence_ = value;
                }

                void confidence(::dds::core::optional< double >&& value) {
                    m_confidence_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& contactID() noexcept {
                    return m_contactID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& contactID() const noexcept {
                    return m_contactID_;
                }

                void contactID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_contactID_ = value;
                }

                void contactID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactID_ = std::move(value);
                }
                std::string& contactName() noexcept {
                    return m_contactName_;
                }

                const std::string& contactName() const noexcept {
                    return m_contactName_;
                }

                void contactName(const std::string& value) {

                    m_contactName_ = value;
                }

                void contactName(std::string&& value) {
                    m_contactName_ = std::move(value);
                }
                ::dds::core::optional< double >& course() noexcept {
                    return m_course_;
                }

                const ::dds::core::optional< double >& course() const noexcept {
                    return m_course_;
                }

                void course(const ::dds::core::optional< double >& value) {

                    m_course_ = value;
                }

                void course(::dds::core::optional< double >&& value) {
                    m_course_ = std::move(value);
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
                ::dds::core::optional< double >& height() noexcept {
                    return m_height_;
                }

                const ::dds::core::optional< double >& height() const noexcept {
                    return m_height_;
                }

                void height(const ::dds::core::optional< double >& value) {

                    m_height_ = value;
                }

                void height(::dds::core::optional< double >&& value) {
                    m_height_ = std::move(value);
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
                ::dds::core::optional< std::string >& MMSINumber() noexcept {
                    return m_MMSINumber_;
                }

                const ::dds::core::optional< std::string >& MMSINumber() const noexcept {
                    return m_MMSINumber_;
                }

                void MMSINumber(const ::dds::core::optional< std::string >& value) {

                    m_MMSINumber_ = value;
                }

                void MMSINumber(::dds::core::optional< std::string >&& value) {
                    m_MMSINumber_ = std::move(value);
                }
                ::UMAA::Common::Measurement::GeoPosition2D& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Measurement::GeoPosition2D& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Measurement::GeoPosition2D& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Measurement::GeoPosition2D&& value) {
                    m_position_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance() noexcept {
                    return m_positionCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance() const noexcept {
                    return m_positionCovariance_;
                }

                void positionCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& value) {

                    m_positionCovariance_ = value;
                }

                void positionCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >&& value) {
                    m_positionCovariance_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >& positionVelocityCovariance() noexcept {
                    return m_positionVelocityCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >& positionVelocityCovariance() const noexcept {
                    return m_positionVelocityCovariance_;
                }

                void positionVelocityCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >& value) {

                    m_positionVelocityCovariance_ = value;
                }

                void positionVelocityCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >&& value) {
                    m_positionVelocityCovariance_ = std::move(value);
                }
                ::dds::core::optional< double >& quality() noexcept {
                    return m_quality_;
                }

                const ::dds::core::optional< double >& quality() const noexcept {
                    return m_quality_;
                }

                void quality(const ::dds::core::optional< double >& value) {

                    m_quality_ = value;
                }

                void quality(::dds::core::optional< double >&& value) {
                    m_quality_ = std::move(value);
                }
                ::dds::core::optional< std::string >& SIDC() noexcept {
                    return m_SIDC_;
                }

                const ::dds::core::optional< std::string >& SIDC() const noexcept {
                    return m_SIDC_;
                }

                void SIDC(const ::dds::core::optional< std::string >& value) {

                    m_SIDC_ = value;
                }

                void SIDC(::dds::core::optional< std::string >&& value) {
                    m_SIDC_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >& sourceContactID() noexcept {
                    return m_sourceContactID_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >& sourceContactID() const noexcept {
                    return m_sourceContactID_;
                }

                void sourceContactID(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >& value) {

                    m_sourceContactID_ = value;
                }

                void sourceContactID(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >&& value) {
                    m_sourceContactID_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType& sourceIndicator() noexcept {
                    return m_sourceIndicator_;
                }

                const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType& sourceIndicator() const noexcept {
                    return m_sourceIndicator_;
                }

                void sourceIndicator(const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType& value) {

                    m_sourceIndicator_ = value;
                }

                void sourceIndicator(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType&& value) {
                    m_sourceIndicator_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType& specialManeuverIndicator() noexcept {
                    return m_specialManeuverIndicator_;
                }

                const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType& specialManeuverIndicator() const noexcept {
                    return m_specialManeuverIndicator_;
                }

                void specialManeuverIndicator(const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType& value) {

                    m_specialManeuverIndicator_ = value;
                }

                void specialManeuverIndicator(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType&& value) {
                    m_specialManeuverIndicator_ = std::move(value);
                }
                double& speedOverGround() noexcept {
                    return m_speedOverGround_;
                }

                const double& speedOverGround() const noexcept {
                    return m_speedOverGround_;
                }

                void speedOverGround(double value) {

                    m_speedOverGround_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& timeFirstAcquired() noexcept {
                    return m_timeFirstAcquired_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired() const noexcept {
                    return m_timeFirstAcquired_;
                }

                void timeFirstAcquired(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeFirstAcquired_ = value;
                }

                void timeFirstAcquired(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeFirstAcquired_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost() noexcept {
                    return m_timeLost_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost() const noexcept {
                    return m_timeLost_;
                }

                void timeLost(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_timeLost_ = value;
                }

                void timeLost(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeLost_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >& velocity() noexcept {
                    return m_velocity_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >& velocity() const noexcept {
                    return m_velocity_;
                }

                void velocity(const ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >& value) {

                    m_velocity_ = value;
                }

                void velocity(::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >&& value) {
                    m_velocity_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance() noexcept {
                    return m_velocityCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance() const noexcept {
                    return m_velocityCovariance_;
                }

                void velocityCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& value) {

                    m_velocityCovariance_ = value;
                }

                void velocityCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >&& value) {
                    m_velocityCovariance_ = std::move(value);
                }
                ::dds::core::optional< double >& width() noexcept {
                    return m_width_;
                }

                const ::dds::core::optional< double >& width() const noexcept {
                    return m_width_;
                }

                void width(const ::dds::core::optional< double >& value) {

                    m_width_ = value;
                }

                void width(::dds::core::optional< double >&& value) {
                    m_width_ = std::move(value);
                }
                bool operator == (const ContactType& other_) const;
                bool operator != (const ContactType& other_) const;

                void swap(ContactType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                ::dds::core::optional< double > m_altitudeGeodetic_;
                ::dds::core::optional< double > m_altitudeMSL_;
                ::dds::core::optional< std::string > m_callSign_;
                ::dds::core::optional< double > m_confidence_;
                ::UMAA::Common::Measurement::NumericGUID m_contactID_ {};
                std::string m_contactName_;
                ::dds::core::optional< double > m_course_;
                ::dds::core::optional< double > m_depth_;
                ::dds::core::optional< double > m_heading_;
                ::dds::core::optional< double > m_height_;
                ::dds::core::optional< double > m_length_;
                ::dds::core::optional< std::string > m_MMSINumber_;
                ::UMAA::Common::Measurement::GeoPosition2D m_position_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType > m_positionCovariance_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType > m_positionVelocityCovariance_;
                ::dds::core::optional< double > m_quality_;
                ::dds::core::optional< std::string > m_SIDC_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L > m_sourceContactID_;
                ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType m_sourceIndicator_;
                ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType m_specialManeuverIndicator_;
                double m_speedOverGround_;
                ::UMAA::Common::Measurement::DateTime m_timeFirstAcquired_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_timeLost_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType > m_velocity_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > m_velocityCovariance_;
                ::dds::core::optional< double > m_width_;

            };

            inline void swap(ContactType& a, ContactType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactType& sample);

        } // namespace ContactReport  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::ContactReport::ContactType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactReport::ContactType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SA::ContactReport::ContactType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::ContactReport::ContactType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::ContactReport::ContactType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::ContactReport::ContactType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::ContactReport::ContactType > {
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

#endif // ContactType_1508710700_hpp

