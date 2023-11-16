

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftStateType_190883952_hpp
#define GlobalDriftStateType_190883952_hpp

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
#include "UMAA/MO/GlobalDriftState/GlobalRegionDriftType.hpp"
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
#include "UMAA/MO/GlobalDriftState/GlobalTransitDriftType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalDriftState {
            namespace GlobalDriftStateType_Specializations {
                enum class GlobalDriftStateType_Selectors {
                    GLOBALTRANSITDRIFTTYPE_SELECT, 
                    GLOBALREGIONDRIFTTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalDriftStateType_Selectors& sample);

                class NDDSUSERDllExport GlobalDriftStateType_Union {
                  public:
                    GlobalDriftStateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    GlobalDriftStateType_Union (GlobalDriftStateType_Union&&) = default;
                    GlobalDriftStateType_Union& operator=(GlobalDriftStateType_Union&&) = default;
                    GlobalDriftStateType_Union& operator=(const GlobalDriftStateType_Union&) = default;
                    GlobalDriftStateType_Union(const GlobalDriftStateType_Union&) = default;
                    #else
                    GlobalDriftStateType_Union(GlobalDriftStateType_Union&& other_) OMG_NOEXCEPT;  
                    GlobalDriftStateType_Union& operator=(GlobalDriftStateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftType_data()  {
                        if ( _d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::GlobalTransitDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalTransitDriftType_data_;
                    }

                    const UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::GlobalTransitDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalTransitDriftType_data_;
                    }

                    void GlobalTransitDriftType_data(const UMAA::MO::GlobalDriftState::GlobalTransitDriftType& value) {
                        m_u_.m_GlobalTransitDriftType_data_ = value;
                        m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT);
                    }

                    void GlobalTransitDriftType_data(UMAA::MO::GlobalDriftState::GlobalTransitDriftType&& value) {
                        m_u_.m_GlobalTransitDriftType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT);
                    }
                    UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftType_data()  {
                        if ( _d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::GlobalRegionDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegionDriftType_data_;
                    }

                    const UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::GlobalRegionDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalRegionDriftType_data_;
                    }

                    void GlobalRegionDriftType_data(const UMAA::MO::GlobalDriftState::GlobalRegionDriftType& value) {
                        m_u_.m_GlobalRegionDriftType_data_ = value;
                        m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT);
                    }

                    void GlobalRegionDriftType_data(UMAA::MO::GlobalDriftState::GlobalRegionDriftType&& value) {
                        m_u_.m_GlobalRegionDriftType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT);
                    }

                    bool operator == (const GlobalDriftStateType_Union& other_) const;
                    bool operator != (const GlobalDriftStateType_Union& other_) const;

                    static UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors default_discriminator();  

                    void swap(GlobalDriftStateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::GlobalDriftState::GlobalTransitDriftType m_GlobalTransitDriftType_data_;
                        UMAA::MO::GlobalDriftState::GlobalRegionDriftType m_GlobalRegionDriftType_data_;
                        Union_();
                        Union_(const UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftType_data,const UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(GlobalDriftStateType_Union& a, GlobalDriftStateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDriftStateType_Union& sample);

            } // namespace GlobalDriftStateType_Specializations  

            class NDDSUSERDllExport GlobalDriftStateType {
              public:
                GlobalDriftStateType();

                explicit GlobalDriftStateType(const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& GlobalDriftStateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalDriftStateType (GlobalDriftStateType&&) = default;
                GlobalDriftStateType& operator=(GlobalDriftStateType&&) = default;
                GlobalDriftStateType& operator=(const GlobalDriftStateType&) = default;
                GlobalDriftStateType(const GlobalDriftStateType&) = default;
                #else
                GlobalDriftStateType(GlobalDriftStateType&& other_) OMG_NOEXCEPT;  
                GlobalDriftStateType& operator=(GlobalDriftStateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& GlobalDriftStateType_subtypes() OMG_NOEXCEPT {
                    return m_GlobalDriftStateType_subtypes_;
                }

                const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& GlobalDriftStateType_subtypes() const OMG_NOEXCEPT {
                    return m_GlobalDriftStateType_subtypes_;
                }

                void GlobalDriftStateType_subtypes(const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& value) {
                    m_GlobalDriftStateType_subtypes_ = value;
                }

                void GlobalDriftStateType_subtypes(UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union&& value) {
                    m_GlobalDriftStateType_subtypes_ = std::move(value);
                }

                bool operator == (const GlobalDriftStateType& other_) const;
                bool operator != (const GlobalDriftStateType& other_) const;

                void swap(GlobalDriftStateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union m_GlobalDriftStateType_subtypes_;

            };

            inline void swap(GlobalDriftStateType& a, GlobalDriftStateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDriftStateType& sample);

        } // namespace GlobalDriftState  
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
        struct topic_type_name< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalDriftState::GlobalDriftStateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalDriftState::GlobalDriftStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors>
        {
            static const UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
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

#endif // GlobalDriftStateType_190883952_hpp

