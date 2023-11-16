

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverStateType_1303496321_hpp
#define LocalHoverStateType_1303496321_hpp

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
#include "UMAA/MO/LocalHoverState/LocalHoveringHoverType.hpp"
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
#include "UMAA/MO/LocalHoverState/LocalTransitHoverType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalHoverState {
            namespace LocalHoverStateType_Specializations {
                enum class LocalHoverStateType_Selectors {
                    LOCALTRANSITHOVERTYPE_SELECT, 
                    LOCALHOVERINGHOVERTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LocalHoverStateType_Selectors& sample);

                class NDDSUSERDllExport LocalHoverStateType_Union {
                  public:
                    LocalHoverStateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    LocalHoverStateType_Union (LocalHoverStateType_Union&&) = default;
                    LocalHoverStateType_Union& operator=(LocalHoverStateType_Union&&) = default;
                    LocalHoverStateType_Union& operator=(const LocalHoverStateType_Union&) = default;
                    LocalHoverStateType_Union(const LocalHoverStateType_Union&) = default;
                    #else
                    LocalHoverStateType_Union(LocalHoverStateType_Union&& other_) OMG_NOEXCEPT;  
                    LocalHoverStateType_Union& operator=(LocalHoverStateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::LocalHoverState::LocalTransitHoverType& LocalTransitHoverType_data()  {
                        if ( _d() != (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::LocalTransitHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalTransitHoverType_data_;
                    }

                    const UMAA::MO::LocalHoverState::LocalTransitHoverType& LocalTransitHoverType_data() const  {
                        if ( _d() != (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::LocalTransitHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalTransitHoverType_data_;
                    }

                    void LocalTransitHoverType_data(const UMAA::MO::LocalHoverState::LocalTransitHoverType& value) {
                        m_u_.m_LocalTransitHoverType_data_ = value;
                        m_d_= (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT);
                    }

                    void LocalTransitHoverType_data(UMAA::MO::LocalHoverState::LocalTransitHoverType&& value) {
                        m_u_.m_LocalTransitHoverType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT);
                    }
                    UMAA::MO::LocalHoverState::LocalHoveringHoverType& LocalHoveringHoverType_data()  {
                        if ( _d() != (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::LocalHoveringHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalHoveringHoverType_data_;
                    }

                    const UMAA::MO::LocalHoverState::LocalHoveringHoverType& LocalHoveringHoverType_data() const  {
                        if ( _d() != (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::LocalHoveringHoverType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalHoveringHoverType_data_;
                    }

                    void LocalHoveringHoverType_data(const UMAA::MO::LocalHoverState::LocalHoveringHoverType& value) {
                        m_u_.m_LocalHoveringHoverType_data_ = value;
                        m_d_= (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT);
                    }

                    void LocalHoveringHoverType_data(UMAA::MO::LocalHoverState::LocalHoveringHoverType&& value) {
                        m_u_.m_LocalHoveringHoverType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT);
                    }

                    bool operator == (const LocalHoverStateType_Union& other_) const;
                    bool operator != (const LocalHoverStateType_Union& other_) const;

                    static UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors default_discriminator();  

                    void swap(LocalHoverStateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::LocalHoverState::LocalTransitHoverType m_LocalTransitHoverType_data_;
                        UMAA::MO::LocalHoverState::LocalHoveringHoverType m_LocalHoveringHoverType_data_;
                        Union_();
                        Union_(const UMAA::MO::LocalHoverState::LocalTransitHoverType& LocalTransitHoverType_data,const UMAA::MO::LocalHoverState::LocalHoveringHoverType& LocalHoveringHoverType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(LocalHoverStateType_Union& a, LocalHoverStateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalHoverStateType_Union& sample);

            } // namespace LocalHoverStateType_Specializations  

            class NDDSUSERDllExport LocalHoverStateType {
              public:
                LocalHoverStateType();

                explicit LocalHoverStateType(const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& LocalHoverStateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalHoverStateType (LocalHoverStateType&&) = default;
                LocalHoverStateType& operator=(LocalHoverStateType&&) = default;
                LocalHoverStateType& operator=(const LocalHoverStateType&) = default;
                LocalHoverStateType(const LocalHoverStateType&) = default;
                #else
                LocalHoverStateType(LocalHoverStateType&& other_) OMG_NOEXCEPT;  
                LocalHoverStateType& operator=(LocalHoverStateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& LocalHoverStateType_subtypes() OMG_NOEXCEPT {
                    return m_LocalHoverStateType_subtypes_;
                }

                const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& LocalHoverStateType_subtypes() const OMG_NOEXCEPT {
                    return m_LocalHoverStateType_subtypes_;
                }

                void LocalHoverStateType_subtypes(const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& value) {
                    m_LocalHoverStateType_subtypes_ = value;
                }

                void LocalHoverStateType_subtypes(UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union&& value) {
                    m_LocalHoverStateType_subtypes_ = std::move(value);
                }

                bool operator == (const LocalHoverStateType& other_) const;
                bool operator != (const LocalHoverStateType& other_) const;

                void swap(LocalHoverStateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union m_LocalHoverStateType_subtypes_;

            };

            inline void swap(LocalHoverStateType& a, LocalHoverStateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalHoverStateType& sample);

        } // namespace LocalHoverState  
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
        struct topic_type_name< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::LocalHoverState::LocalHoverStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalHoverState::LocalHoverStateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalHoverState::LocalHoverStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalHoverState::LocalHoverStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalHoverState::LocalHoverStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalHoverState::LocalHoverStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalHoverState::LocalHoverStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalHoverState::LocalHoverStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors>
        {
            static const UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalHoverState::LocalHoverStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalHoverState::LocalHoverStateType > {
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

#endif // LocalHoverStateType_1303496321_hpp

