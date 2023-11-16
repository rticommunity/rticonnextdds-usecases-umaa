

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ZoneType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ZoneType_1784329639_hpp
#define ZoneType_1784329639_hpp

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
#include "UMAA/MM/BaseType/PlanningZoneType.hpp"
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
            namespace ZoneType_Specializations {
                enum class ZoneType_Selectors {
                    PLANNINGZONETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ZoneType_Selectors& sample);

                class NDDSUSERDllExport ZoneType_Union {
                  public:
                    ZoneType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    ZoneType_Union (ZoneType_Union&&) = default;
                    ZoneType_Union& operator=(ZoneType_Union&&) = default;
                    ZoneType_Union& operator=(const ZoneType_Union&) = default;
                    ZoneType_Union(const ZoneType_Union&) = default;
                    #else
                    ZoneType_Union(ZoneType_Union&& other_) OMG_NOEXCEPT;  
                    ZoneType_Union& operator=(ZoneType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MM::BaseType::PlanningZoneType& PlanningZoneType_data()  {
                        if ( _d() != (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union::PlanningZoneType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PlanningZoneType_data_;
                    }

                    const UMAA::MM::BaseType::PlanningZoneType& PlanningZoneType_data() const  {
                        if ( _d() != (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union::PlanningZoneType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PlanningZoneType_data_;
                    }

                    void PlanningZoneType_data(const UMAA::MM::BaseType::PlanningZoneType& value) {
                        m_u_.m_PlanningZoneType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT);
                    }

                    void PlanningZoneType_data(UMAA::MM::BaseType::PlanningZoneType&& value) {
                        m_u_.m_PlanningZoneType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT);
                    }

                    bool operator == (const ZoneType_Union& other_) const;
                    bool operator != (const ZoneType_Union& other_) const;

                    static UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors default_discriminator();  

                    void swap(ZoneType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MM::BaseType::PlanningZoneType m_PlanningZoneType_data_;
                        Union_();
                        Union_(const UMAA::MM::BaseType::PlanningZoneType& PlanningZoneType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(ZoneType_Union& a, ZoneType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ZoneType_Union& sample);

            } // namespace ZoneType_Specializations  

            class NDDSUSERDllExport ZoneType {
              public:
                ZoneType();

                ZoneType(const UMAA::Common::Measurement::Polygon_Volume& zone,const UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind,const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& ZoneType_subtypes,const UMAA::Common::Measurement::NumericGUID& zoneID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ZoneType (ZoneType&&) = default;
                ZoneType& operator=(ZoneType&&) = default;
                ZoneType& operator=(const ZoneType&) = default;
                ZoneType(const ZoneType&) = default;
                #else
                ZoneType(ZoneType&& other_) OMG_NOEXCEPT;  
                ZoneType& operator=(ZoneType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

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
                UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& ZoneType_subtypes() OMG_NOEXCEPT {
                    return m_ZoneType_subtypes_;
                }

                const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& ZoneType_subtypes() const OMG_NOEXCEPT {
                    return m_ZoneType_subtypes_;
                }

                void ZoneType_subtypes(const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& value) {
                    m_ZoneType_subtypes_ = value;
                }

                void ZoneType_subtypes(UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union&& value) {
                    m_ZoneType_subtypes_ = std::move(value);
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

                bool operator == (const ZoneType& other_) const;
                bool operator != (const ZoneType& other_) const;

                void swap(ZoneType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Polygon_Volume m_zone_;
                UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType m_zoneKind_;
                UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union m_ZoneType_subtypes_;
                UMAA::Common::Measurement::NumericGUID m_zoneID_;

            };

            inline void swap(ZoneType& a, ZoneType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ZoneType& sample);

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
        struct topic_type_name< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MM::BaseType::ZoneType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ZoneType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::BaseType::ZoneType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::BaseType::ZoneType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::BaseType::ZoneType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::BaseType::ZoneType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::BaseType::ZoneType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::BaseType::ZoneType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors>
        {
            static const UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::BaseType::ZoneType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::ZoneType > {
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

#endif // ZoneType_1784329639_hpp

