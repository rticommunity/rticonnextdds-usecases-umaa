

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackStateType_1560968254_hpp
#define GlobalRacetrackStateType_1560968254_hpp

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
#include "UMAA/MO/GlobalRacetrackState/GlobalRacetrackPatternType.hpp"
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
#include "UMAA/MO/GlobalRacetrackState/GlobalRacetrackTransitType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalRacetrackState {
            namespace GlobalRacetrackStateType_Specializations {
                enum class GlobalRacetrackStateType_Selectors {
                    GLOBALRACETRACKPATTERNTYPE_SELECT, 
                    GLOBALRACETRACKTRANSITTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalRacetrackStateType_Selectors& sample);

                class NDDSUSERDllExport GlobalRacetrackStateType_Union {
                  public:
                    GlobalRacetrackStateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    GlobalRacetrackStateType_Union (GlobalRacetrackStateType_Union&&) = default;
                    GlobalRacetrackStateType_Union& operator=(GlobalRacetrackStateType_Union&&) = default;
                    GlobalRacetrackStateType_Union& operator=(const GlobalRacetrackStateType_Union&) = default;
                    GlobalRacetrackStateType_Union(const GlobalRacetrackStateType_Union&) = default;
                    #else
                    GlobalRacetrackStateType_Union(GlobalRacetrackStateType_Union&& other_) OMG_NOEXCEPT;  
                    GlobalRacetrackStateType_Union& operator=(GlobalRacetrackStateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& GlobalRacetrackPatternType_data()  {
                        if ( _d() != (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::GlobalRacetrackPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRacetrackPatternType_data_;
                    }

                    const UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& GlobalRacetrackPatternType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::GlobalRacetrackPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRacetrackPatternType_data_;
                    }

                    void GlobalRacetrackPatternType_data(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& value) {
                        m_u_.m_GlobalRacetrackPatternType_data_ = value;
                        m_d_= (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT);
                    }

                    void GlobalRacetrackPatternType_data(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType&& value) {
                        m_u_.m_GlobalRacetrackPatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT);
                    }
                    UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType& GlobalRacetrackTransitType_data()  {
                        if ( _d() != (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::GlobalRacetrackTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRacetrackTransitType_data_;
                    }

                    const UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType& GlobalRacetrackTransitType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::GlobalRacetrackTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRacetrackTransitType_data_;
                    }

                    void GlobalRacetrackTransitType_data(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType& value) {
                        m_u_.m_GlobalRacetrackTransitType_data_ = value;
                        m_d_= (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT);
                    }

                    void GlobalRacetrackTransitType_data(UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType&& value) {
                        m_u_.m_GlobalRacetrackTransitType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT);
                    }

                    bool operator == (const GlobalRacetrackStateType_Union& other_) const;
                    bool operator != (const GlobalRacetrackStateType_Union& other_) const;

                    static UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors default_discriminator();  

                    void swap(GlobalRacetrackStateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType m_GlobalRacetrackPatternType_data_;
                        UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType m_GlobalRacetrackTransitType_data_;
                        Union_();
                        Union_(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& GlobalRacetrackPatternType_data,const UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType& GlobalRacetrackTransitType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(GlobalRacetrackStateType_Union& a, GlobalRacetrackStateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRacetrackStateType_Union& sample);

            } // namespace GlobalRacetrackStateType_Specializations  

            class NDDSUSERDllExport GlobalRacetrackStateType {
              public:
                GlobalRacetrackStateType();

                explicit GlobalRacetrackStateType(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& GlobalRacetrackStateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRacetrackStateType (GlobalRacetrackStateType&&) = default;
                GlobalRacetrackStateType& operator=(GlobalRacetrackStateType&&) = default;
                GlobalRacetrackStateType& operator=(const GlobalRacetrackStateType&) = default;
                GlobalRacetrackStateType(const GlobalRacetrackStateType&) = default;
                #else
                GlobalRacetrackStateType(GlobalRacetrackStateType&& other_) OMG_NOEXCEPT;  
                GlobalRacetrackStateType& operator=(GlobalRacetrackStateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& GlobalRacetrackStateType_subtypes() OMG_NOEXCEPT {
                    return m_GlobalRacetrackStateType_subtypes_;
                }

                const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& GlobalRacetrackStateType_subtypes() const OMG_NOEXCEPT {
                    return m_GlobalRacetrackStateType_subtypes_;
                }

                void GlobalRacetrackStateType_subtypes(const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& value) {
                    m_GlobalRacetrackStateType_subtypes_ = value;
                }

                void GlobalRacetrackStateType_subtypes(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union&& value) {
                    m_GlobalRacetrackStateType_subtypes_ = std::move(value);
                }

                bool operator == (const GlobalRacetrackStateType& other_) const;
                bool operator != (const GlobalRacetrackStateType& other_) const;

                void swap(GlobalRacetrackStateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union m_GlobalRacetrackStateType_subtypes_;

            };

            inline void swap(GlobalRacetrackStateType& a, GlobalRacetrackStateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRacetrackStateType& sample);

        } // namespace GlobalRacetrackState  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors>
        {
            static const UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > {
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

#endif // GlobalRacetrackStateType_1560968254_hpp

