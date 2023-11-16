

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlanningZoneType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlanningZoneType_1408384440_hpp
#define PlanningZoneType_1408384440_hpp

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
#include "UMAA/Common/Measurement/Polygon_Volume.hpp"
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

            class NDDSUSERDllExport PlanningZoneType {
              public:
                PlanningZoneType();

                PlanningZoneType(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& startTime,const UMAA::Common::Measurement::Polygon_Volume& zone,const UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind,const std::string& zoneName,const UMAA::Common::Measurement::NumericGUID& zoneID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PlanningZoneType (PlanningZoneType&&) = default;
                PlanningZoneType& operator=(PlanningZoneType&&) = default;
                PlanningZoneType& operator=(const PlanningZoneType&) = default;
                PlanningZoneType(const PlanningZoneType&) = default;
                #else
                PlanningZoneType(PlanningZoneType&& other_) OMG_NOEXCEPT;  
                PlanningZoneType& operator=(PlanningZoneType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() OMG_NOEXCEPT {
                    return m_endTime_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() const OMG_NOEXCEPT {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& startTime() OMG_NOEXCEPT {
                    return m_startTime_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& startTime() const OMG_NOEXCEPT {
                    return m_startTime_;
                }

                void startTime(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_startTime_ = value;
                }

                void startTime(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_startTime_ = std::move(value);
                }
                UMAA::Common::Measurement::Polygon_Volume& zone() OMG_NOEXCEPT {
                    return m_zone_;
                }

                const UMAA::Common::Measurement::Polygon_Volume& zone() const OMG_NOEXCEPT {
                    return m_zone_;
                }

                void zone(const UMAA::Common::Measurement::Polygon_Volume& value) {
                    m_zone_ = value;
                }

                void zone(UMAA::Common::Measurement::Polygon_Volume&& value) {
                    m_zone_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind() OMG_NOEXCEPT {
                    return m_zoneKind_;
                }

                const UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind() const OMG_NOEXCEPT {
                    return m_zoneKind_;
                }

                void zoneKind(const UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& value) {
                    m_zoneKind_ = value;
                }

                void zoneKind(UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType&& value) {
                    m_zoneKind_ = std::move(value);
                }
                std::string& zoneName() OMG_NOEXCEPT {
                    return m_zoneName_;
                }

                const std::string& zoneName() const OMG_NOEXCEPT {
                    return m_zoneName_;
                }

                void zoneName(const std::string& value) {
                    m_zoneName_ = value;
                }

                void zoneName(std::string&& value) {
                    m_zoneName_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& zoneID() OMG_NOEXCEPT {
                    return m_zoneID_;
                }

                const UMAA::Common::Measurement::NumericGUID& zoneID() const OMG_NOEXCEPT {
                    return m_zoneID_;
                }

                void zoneID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_zoneID_ = value;
                }

                void zoneID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_zoneID_ = std::move(value);
                }

                bool operator == (const PlanningZoneType& other_) const;
                bool operator != (const PlanningZoneType& other_) const;

                void swap(PlanningZoneType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_endTime_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_startTime_;
                UMAA::Common::Measurement::Polygon_Volume m_zone_;
                UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType m_zoneKind_;
                std::string m_zoneName_;
                UMAA::Common::Measurement::NumericGUID m_zoneID_;

            };

            inline void swap(PlanningZoneType& a, PlanningZoneType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PlanningZoneType& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::BaseType::PlanningZoneType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::PlanningZoneType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::BaseType::PlanningZoneType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::BaseType::PlanningZoneType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::BaseType::PlanningZoneType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::BaseType::PlanningZoneType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::BaseType::PlanningZoneType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::BaseType::PlanningZoneType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::BaseType::PlanningZoneType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::PlanningZoneType > {
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

#endif // PlanningZoneType_1408384440_hpp

