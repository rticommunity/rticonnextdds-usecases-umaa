

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonStateType_335007902_hpp
#define GlobalRegularPolygonStateType_335007902_hpp

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
#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonPatternType.hpp"
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
#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonTransitType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalRegularPolygonState {
            namespace GlobalRegularPolygonStateType_Specializations {
                enum class GlobalRegularPolygonStateType_Selectors {
                    GLOBALREGULARPOLYGONTRANSITTYPE_SELECT, 
                    GLOBALREGULARPOLYGONPATTERNTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalRegularPolygonStateType_Selectors& sample);

                class NDDSUSERDllExport GlobalRegularPolygonStateType_Union {
                  public:
                    GlobalRegularPolygonStateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    GlobalRegularPolygonStateType_Union (GlobalRegularPolygonStateType_Union&&) = default;
                    GlobalRegularPolygonStateType_Union& operator=(GlobalRegularPolygonStateType_Union&&) = default;
                    GlobalRegularPolygonStateType_Union& operator=(const GlobalRegularPolygonStateType_Union&) = default;
                    GlobalRegularPolygonStateType_Union(const GlobalRegularPolygonStateType_Union&) = default;
                    #else
                    GlobalRegularPolygonStateType_Union(GlobalRegularPolygonStateType_Union&& other_) OMG_NOEXCEPT;  
                    GlobalRegularPolygonStateType_Union& operator=(GlobalRegularPolygonStateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& GlobalRegularPolygonTransitType_data()  {
                        if ( _d() != (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::GlobalRegularPolygonTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegularPolygonTransitType_data_;
                    }

                    const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& GlobalRegularPolygonTransitType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::GlobalRegularPolygonTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegularPolygonTransitType_data_;
                    }

                    void GlobalRegularPolygonTransitType_data(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& value) {
                        m_u_.m_GlobalRegularPolygonTransitType_data_ = value;
                        m_d_= (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT);
                    }

                    void GlobalRegularPolygonTransitType_data(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType&& value) {
                        m_u_.m_GlobalRegularPolygonTransitType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT);
                    }
                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType& GlobalRegularPolygonPatternType_data()  {
                        if ( _d() != (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::GlobalRegularPolygonPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegularPolygonPatternType_data_;
                    }

                    const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType& GlobalRegularPolygonPatternType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::GlobalRegularPolygonPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegularPolygonPatternType_data_;
                    }

                    void GlobalRegularPolygonPatternType_data(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType& value) {
                        m_u_.m_GlobalRegularPolygonPatternType_data_ = value;
                        m_d_= (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT);
                    }

                    void GlobalRegularPolygonPatternType_data(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType&& value) {
                        m_u_.m_GlobalRegularPolygonPatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT);
                    }

                    bool operator == (const GlobalRegularPolygonStateType_Union& other_) const;
                    bool operator != (const GlobalRegularPolygonStateType_Union& other_) const;

                    static UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors default_discriminator();  

                    void swap(GlobalRegularPolygonStateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType m_GlobalRegularPolygonTransitType_data_;
                        UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType m_GlobalRegularPolygonPatternType_data_;
                        Union_();
                        Union_(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& GlobalRegularPolygonTransitType_data,const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType& GlobalRegularPolygonPatternType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(GlobalRegularPolygonStateType_Union& a, GlobalRegularPolygonStateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRegularPolygonStateType_Union& sample);

            } // namespace GlobalRegularPolygonStateType_Specializations  

            class NDDSUSERDllExport GlobalRegularPolygonStateType {
              public:
                GlobalRegularPolygonStateType();

                explicit GlobalRegularPolygonStateType(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& GlobalRegularPolygonStateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRegularPolygonStateType (GlobalRegularPolygonStateType&&) = default;
                GlobalRegularPolygonStateType& operator=(GlobalRegularPolygonStateType&&) = default;
                GlobalRegularPolygonStateType& operator=(const GlobalRegularPolygonStateType&) = default;
                GlobalRegularPolygonStateType(const GlobalRegularPolygonStateType&) = default;
                #else
                GlobalRegularPolygonStateType(GlobalRegularPolygonStateType&& other_) OMG_NOEXCEPT;  
                GlobalRegularPolygonStateType& operator=(GlobalRegularPolygonStateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& GlobalRegularPolygonStateType_subtypes() OMG_NOEXCEPT {
                    return m_GlobalRegularPolygonStateType_subtypes_;
                }

                const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& GlobalRegularPolygonStateType_subtypes() const OMG_NOEXCEPT {
                    return m_GlobalRegularPolygonStateType_subtypes_;
                }

                void GlobalRegularPolygonStateType_subtypes(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& value) {
                    m_GlobalRegularPolygonStateType_subtypes_ = value;
                }

                void GlobalRegularPolygonStateType_subtypes(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union&& value) {
                    m_GlobalRegularPolygonStateType_subtypes_ = std::move(value);
                }

                bool operator == (const GlobalRegularPolygonStateType& other_) const;
                bool operator != (const GlobalRegularPolygonStateType& other_) const;

                void swap(GlobalRegularPolygonStateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union m_GlobalRegularPolygonStateType_subtypes_;

            };

            inline void swap(GlobalRegularPolygonStateType& a, GlobalRegularPolygonStateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRegularPolygonStateType& sample);

        } // namespace GlobalRegularPolygonState  
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
        struct topic_type_name< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors>
        {
            static const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > {
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

#endif // GlobalRegularPolygonStateType_335007902_hpp

