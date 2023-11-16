

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandReportType_530883023_hpp
#define GlobalDeadReckoningCommandReportType_530883023_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#include "UMAA/Common/Measurement/CovarianceOrientationType.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionPositionType.hpp"
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
#include "UMAA/Common/Measurement/ElevationType.hpp"
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
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZ.hpp"
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
#include "UMAA/Common/Measurement/Position2D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace GlobalDeadReckoning {

            static const std::string GlobalDeadReckoningCommandReport_TOPIC = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReport";

            class NDDSUSERDllExport GlobalDeadReckoningCommandReportType {
              public:
                GlobalDeadReckoningCommandReportType();

                GlobalDeadReckoningCommandReportType(const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude,const UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance,const UMAA::Common::Measurement::ElevationType& elevation,const UMAA::Common::Measurement::Position2D& position,const UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalDeadReckoningCommandReportType (GlobalDeadReckoningCommandReportType&&) = default;
                GlobalDeadReckoningCommandReportType& operator=(GlobalDeadReckoningCommandReportType&&) = default;
                GlobalDeadReckoningCommandReportType& operator=(const GlobalDeadReckoningCommandReportType&) = default;
                GlobalDeadReckoningCommandReportType(const GlobalDeadReckoningCommandReportType&) = default;
                #else
                GlobalDeadReckoningCommandReportType(GlobalDeadReckoningCommandReportType&& other_) OMG_NOEXCEPT;  
                GlobalDeadReckoningCommandReportType& operator=(GlobalDeadReckoningCommandReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude() OMG_NOEXCEPT {
                    return m_attitude_;
                }

                const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude() const OMG_NOEXCEPT {
                    return m_attitude_;
                }

                void attitude(const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& value) {
                    m_attitude_ = value;
                }

                void attitude(UMAA::Common::Measurement::Orientation3D_PlatformXYZ&& value) {
                    m_attitude_ = std::move(value);
                }
                UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance() OMG_NOEXCEPT {
                    return m_attitudeCovariance_;
                }

                const UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance() const OMG_NOEXCEPT {
                    return m_attitudeCovariance_;
                }

                void attitudeCovariance(const UMAA::Common::Measurement::CovarianceOrientationType& value) {
                    m_attitudeCovariance_ = value;
                }

                void attitudeCovariance(UMAA::Common::Measurement::CovarianceOrientationType&& value) {
                    m_attitudeCovariance_ = std::move(value);
                }
                UMAA::Common::Measurement::ElevationType& elevation() OMG_NOEXCEPT {
                    return m_elevation_;
                }

                const UMAA::Common::Measurement::ElevationType& elevation() const OMG_NOEXCEPT {
                    return m_elevation_;
                }

                void elevation(const UMAA::Common::Measurement::ElevationType& value) {
                    m_elevation_ = value;
                }

                void elevation(UMAA::Common::Measurement::ElevationType&& value) {
                    m_elevation_ = std::move(value);
                }
                UMAA::Common::Measurement::Position2D& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const UMAA::Common::Measurement::Position2D& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const UMAA::Common::Measurement::Position2D& value) {
                    m_position_ = value;
                }

                void position(UMAA::Common::Measurement::Position2D&& value) {
                    m_position_ = std::move(value);
                }
                UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance() OMG_NOEXCEPT {
                    return m_positionCovariance_;
                }

                const UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance() const OMG_NOEXCEPT {
                    return m_positionCovariance_;
                }

                void positionCovariance(const UMAA::Common::Measurement::CovariancePositionPositionType& value) {
                    m_positionCovariance_ = value;
                }

                void positionCovariance(UMAA::Common::Measurement::CovariancePositionPositionType&& value) {
                    m_positionCovariance_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const GlobalDeadReckoningCommandReportType& other_) const;
                bool operator != (const GlobalDeadReckoningCommandReportType& other_) const;

                void swap(GlobalDeadReckoningCommandReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Orientation3D_PlatformXYZ m_attitude_;
                UMAA::Common::Measurement::CovarianceOrientationType m_attitudeCovariance_;
                UMAA::Common::Measurement::ElevationType m_elevation_;
                UMAA::Common::Measurement::Position2D m_position_;
                UMAA::Common::Measurement::CovariancePositionPositionType m_positionCovariance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GlobalDeadReckoningCommandReportType& a, GlobalDeadReckoningCommandReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDeadReckoningCommandReportType& sample);

        } // namespace GlobalDeadReckoning  
    } // namespace SA  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // GlobalDeadReckoningCommandReportType_530883023_hpp

