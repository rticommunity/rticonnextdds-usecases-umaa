

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalFigure8StateType_2019986166_hpp
#define GlobalFigure8StateType_2019986166_hpp

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
#include "UMAA/MO/GlobalFigure8State/GlobalFigure8PatternType.hpp"
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
#include "UMAA/MO/GlobalFigure8State/GlobalFigure8TransitType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalFigure8State {
            namespace GlobalFigure8StateType_Specializations {
                enum class GlobalFigure8StateType_Selectors {
                    GLOBALFIGURE8PATTERNTYPE_SELECT, 
                    GLOBALFIGURE8TRANSITTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalFigure8StateType_Selectors& sample);

                class NDDSUSERDllExport GlobalFigure8StateType_Union {
                  public:
                    GlobalFigure8StateType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    GlobalFigure8StateType_Union (GlobalFigure8StateType_Union&&) = default;
                    GlobalFigure8StateType_Union& operator=(GlobalFigure8StateType_Union&&) = default;
                    GlobalFigure8StateType_Union& operator=(const GlobalFigure8StateType_Union&) = default;
                    GlobalFigure8StateType_Union(const GlobalFigure8StateType_Union&) = default;
                    #else
                    GlobalFigure8StateType_Union(GlobalFigure8StateType_Union&& other_) OMG_NOEXCEPT;  
                    GlobalFigure8StateType_Union& operator=(GlobalFigure8StateType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType& GlobalFigure8PatternType_data()  {
                        if ( _d() != (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8PATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union::GlobalFigure8PatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalFigure8PatternType_data_;
                    }

                    const UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType& GlobalFigure8PatternType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8PATTERNTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union::GlobalFigure8PatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalFigure8PatternType_data_;
                    }

                    void GlobalFigure8PatternType_data(const UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType& value) {
                        m_u_.m_GlobalFigure8PatternType_data_ = value;
                        m_d_= (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8PATTERNTYPE_SELECT);
                    }

                    void GlobalFigure8PatternType_data(UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType&& value) {
                        m_u_.m_GlobalFigure8PatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8PATTERNTYPE_SELECT);
                    }
                    UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType& GlobalFigure8TransitType_data()  {
                        if ( _d() != (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8TRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union::GlobalFigure8TransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalFigure8TransitType_data_;
                    }

                    const UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType& GlobalFigure8TransitType_data() const  {
                        if ( _d() != (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8TRANSITTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union::GlobalFigure8TransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_GlobalFigure8TransitType_data_;
                    }

                    void GlobalFigure8TransitType_data(const UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType& value) {
                        m_u_.m_GlobalFigure8TransitType_data_ = value;
                        m_d_= (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8TRANSITTYPE_SELECT);
                    }

                    void GlobalFigure8TransitType_data(UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType&& value) {
                        m_u_.m_GlobalFigure8TransitType_data_ = std::move(value);
                        m_d_= (UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors::GLOBALFIGURE8TRANSITTYPE_SELECT);
                    }

                    bool operator == (const GlobalFigure8StateType_Union& other_) const;
                    bool operator != (const GlobalFigure8StateType_Union& other_) const;

                    static UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors default_discriminator();  

                    void swap(GlobalFigure8StateType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType m_GlobalFigure8PatternType_data_;
                        UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType m_GlobalFigure8TransitType_data_;
                        Union_();
                        Union_(const UMAA::MO::GlobalFigure8State::GlobalFigure8PatternType& GlobalFigure8PatternType_data,const UMAA::MO::GlobalFigure8State::GlobalFigure8TransitType& GlobalFigure8TransitType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(GlobalFigure8StateType_Union& a, GlobalFigure8StateType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalFigure8StateType_Union& sample);

            } // namespace GlobalFigure8StateType_Specializations  

            class NDDSUSERDllExport GlobalFigure8StateType {
              public:
                GlobalFigure8StateType();

                explicit GlobalFigure8StateType(const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& GlobalFigure8StateType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalFigure8StateType (GlobalFigure8StateType&&) = default;
                GlobalFigure8StateType& operator=(GlobalFigure8StateType&&) = default;
                GlobalFigure8StateType& operator=(const GlobalFigure8StateType&) = default;
                GlobalFigure8StateType(const GlobalFigure8StateType&) = default;
                #else
                GlobalFigure8StateType(GlobalFigure8StateType&& other_) OMG_NOEXCEPT;  
                GlobalFigure8StateType& operator=(GlobalFigure8StateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& GlobalFigure8StateType_subtypes() OMG_NOEXCEPT {
                    return m_GlobalFigure8StateType_subtypes_;
                }

                const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& GlobalFigure8StateType_subtypes() const OMG_NOEXCEPT {
                    return m_GlobalFigure8StateType_subtypes_;
                }

                void GlobalFigure8StateType_subtypes(const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& value) {
                    m_GlobalFigure8StateType_subtypes_ = value;
                }

                void GlobalFigure8StateType_subtypes(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union&& value) {
                    m_GlobalFigure8StateType_subtypes_ = std::move(value);
                }

                bool operator == (const GlobalFigure8StateType& other_) const;
                bool operator != (const GlobalFigure8StateType& other_) const;

                void swap(GlobalFigure8StateType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union m_GlobalFigure8StateType_subtypes_;

            };

            inline void swap(GlobalFigure8StateType& a, GlobalFigure8StateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalFigure8StateType& sample);

        } // namespace GlobalFigure8State  
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
        struct topic_type_name< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalFigure8State::GlobalFigure8StateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalFigure8State::GlobalFigure8StateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors>
        {
            static const UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType_Specializations::GlobalFigure8StateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalFigure8State::GlobalFigure8StateType > {
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

#endif // GlobalFigure8StateType_2019986166_hpp

