

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverStateType_1807390999_hpp
#define GlobalHoverStateType_1807390999_hpp

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
#include "UMAA/MO/GlobalHoverState/GlobalHoveringHoverType.hpp"
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
#include "UMAA/MO/GlobalHoverState/GlobalTransitHoverType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {
            namespace GlobalHoverStateType_Specializations {
                enum class GlobalHoverStateType_Selectors {
                    GLOBALTRANSITHOVERTYPE_SELECT, 
                    GLOBALHOVERINGHOVERTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalHoverStateType_Selectors& sample);

                class NDDSUSERDllExport GlobalHoverStateType_Union {
                  public:
                    GlobalHoverStateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    GlobalHoverStateType_Union (GlobalHoverStateType_Union&&) = default;
                    GlobalHoverStateType_Union& operator=(GlobalHoverStateType_Union&&) = default;
                    GlobalHoverStateType_Union& operator=(const GlobalHoverStateType_Union&) = default;
                    GlobalHoverStateType_Union(const GlobalHoverStateType_Union&) = default;
                    #else
                    GlobalHoverStateType_Union(GlobalHoverStateType_Union&& other_) OMG_NOEXCEPT;  
                    GlobalHoverStateType_Union& operator=(GlobalHoverStateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverType_data()  {
                        if ( _d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::GlobalTransitHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalTransitHoverType_data_;
                    }

                    const UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::GlobalTransitHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalTransitHoverType_data_;
                    }

                    void GlobalTransitHoverType_data(const UMAA::MO::GlobalHoverState::GlobalTransitHoverType& value) {
                        m_u_.m_GlobalTransitHoverType_data_ = value;
                        m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT);
                    }

                    void GlobalTransitHoverType_data(UMAA::MO::GlobalHoverState::GlobalTransitHoverType&& value) {
                        m_u_.m_GlobalTransitHoverType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT);
                    }
                    UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverType_data()  {
                        if ( _d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::GlobalHoveringHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalHoveringHoverType_data_;
                    }

                    const UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::GlobalHoveringHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalHoveringHoverType_data_;
                    }

                    void GlobalHoveringHoverType_data(const UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& value) {
                        m_u_.m_GlobalHoveringHoverType_data_ = value;
                        m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT);
                    }

                    void GlobalHoveringHoverType_data(UMAA::MO::GlobalHoverState::GlobalHoveringHoverType&& value) {
                        m_u_.m_GlobalHoveringHoverType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT);
                    }

                    bool operator == (const GlobalHoverStateType_Union& other_) const;
                    bool operator != (const GlobalHoverStateType_Union& other_) const;

                    static UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors default_discriminator();  

                    void swap(GlobalHoverStateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::GlobalHoverState::GlobalTransitHoverType m_GlobalTransitHoverType_data_;
                        UMAA::MO::GlobalHoverState::GlobalHoveringHoverType m_GlobalHoveringHoverType_data_;
                        Union_();
                        Union_(const UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverType_data,const UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(GlobalHoverStateType_Union& a, GlobalHoverStateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoverStateType_Union& sample);

            } // namespace GlobalHoverStateType_Specializations  

            class NDDSUSERDllExport GlobalHoverStateType {
              public:
                GlobalHoverStateType();

                explicit GlobalHoverStateType(const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& GlobalHoverStateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalHoverStateType (GlobalHoverStateType&&) = default;
                GlobalHoverStateType& operator=(GlobalHoverStateType&&) = default;
                GlobalHoverStateType& operator=(const GlobalHoverStateType&) = default;
                GlobalHoverStateType(const GlobalHoverStateType&) = default;
                #else
                GlobalHoverStateType(GlobalHoverStateType&& other_) OMG_NOEXCEPT;  
                GlobalHoverStateType& operator=(GlobalHoverStateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& GlobalHoverStateType_subtypes() OMG_NOEXCEPT {
                    return m_GlobalHoverStateType_subtypes_;
                }

                const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& GlobalHoverStateType_subtypes() const OMG_NOEXCEPT {
                    return m_GlobalHoverStateType_subtypes_;
                }

                void GlobalHoverStateType_subtypes(const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& value) {
                    m_GlobalHoverStateType_subtypes_ = value;
                }

                void GlobalHoverStateType_subtypes(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union&& value) {
                    m_GlobalHoverStateType_subtypes_ = std::move(value);
                }

                bool operator == (const GlobalHoverStateType& other_) const;
                bool operator != (const GlobalHoverStateType& other_) const;

                void swap(GlobalHoverStateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union m_GlobalHoverStateType_subtypes_;

            };

            inline void swap(GlobalHoverStateType& a, GlobalHoverStateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoverStateType& sample);

        } // namespace GlobalHoverState  
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
        struct topic_type_name< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverState::GlobalHoverStateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors>
        {
            static const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
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

#endif // GlobalHoverStateType_1807390999_hpp

