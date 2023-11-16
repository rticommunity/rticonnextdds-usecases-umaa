

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionRotationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionRotationType_1045182234_hpp
#define PropulsionRotationType_1045182234_hpp

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
#include "UMAA/Common/Propulsion/PropulsiveRotationAngleType.hpp"
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
#include "UMAA/Common/Propulsion/PropulsiveRotationEffortType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Propulsion {
            namespace PropulsionRotationType_Specializations {
                enum class PropulsionRotationType_Selectors {
                    PROPULSIVEROTATIONEFFORTTYPE_SELECT, 
                    PROPULSIVEROTATIONANGLETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PropulsionRotationType_Selectors& sample);

                class NDDSUSERDllExport PropulsionRotationType_Union {
                  public:
                    PropulsionRotationType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    PropulsionRotationType_Union (PropulsionRotationType_Union&&) = default;
                    PropulsionRotationType_Union& operator=(PropulsionRotationType_Union&&) = default;
                    PropulsionRotationType_Union& operator=(const PropulsionRotationType_Union&) = default;
                    PropulsionRotationType_Union(const PropulsionRotationType_Union&) = default;
                    #else
                    PropulsionRotationType_Union(PropulsionRotationType_Union&& other_) OMG_NOEXCEPT;  
                    PropulsionRotationType_Union& operator=(PropulsionRotationType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::Common::Propulsion::PropulsiveRotationEffortType& PropulsiveRotationEffortType_data()  {
                        if ( _d() != (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::PropulsiveRotationEffortType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRotationEffortType_data_;
                    }

                    const UMAA::Common::Propulsion::PropulsiveRotationEffortType& PropulsiveRotationEffortType_data() const  {
                        if ( _d() != (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::PropulsiveRotationEffortType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRotationEffortType_data_;
                    }

                    void PropulsiveRotationEffortType_data(const UMAA::Common::Propulsion::PropulsiveRotationEffortType& value) {
                        m_u_.m_PropulsiveRotationEffortType_data_ = value;
                        m_d_= (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT);
                    }

                    void PropulsiveRotationEffortType_data(UMAA::Common::Propulsion::PropulsiveRotationEffortType&& value) {
                        m_u_.m_PropulsiveRotationEffortType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT);
                    }
                    UMAA::Common::Propulsion::PropulsiveRotationAngleType& PropulsiveRotationAngleType_data()  {
                        if ( _d() != (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::PropulsiveRotationAngleType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRotationAngleType_data_;
                    }

                    const UMAA::Common::Propulsion::PropulsiveRotationAngleType& PropulsiveRotationAngleType_data() const  {
                        if ( _d() != (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::PropulsiveRotationAngleType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRotationAngleType_data_;
                    }

                    void PropulsiveRotationAngleType_data(const UMAA::Common::Propulsion::PropulsiveRotationAngleType& value) {
                        m_u_.m_PropulsiveRotationAngleType_data_ = value;
                        m_d_= (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT);
                    }

                    void PropulsiveRotationAngleType_data(UMAA::Common::Propulsion::PropulsiveRotationAngleType&& value) {
                        m_u_.m_PropulsiveRotationAngleType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT);
                    }

                    bool operator == (const PropulsionRotationType_Union& other_) const;
                    bool operator != (const PropulsionRotationType_Union& other_) const;

                    static UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors default_discriminator();  

                    void swap(PropulsionRotationType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::Common::Propulsion::PropulsiveRotationEffortType m_PropulsiveRotationEffortType_data_;
                        UMAA::Common::Propulsion::PropulsiveRotationAngleType m_PropulsiveRotationAngleType_data_;
                        Union_();
                        Union_(const UMAA::Common::Propulsion::PropulsiveRotationEffortType& PropulsiveRotationEffortType_data,const UMAA::Common::Propulsion::PropulsiveRotationAngleType& PropulsiveRotationAngleType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(PropulsionRotationType_Union& a, PropulsionRotationType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionRotationType_Union& sample);

            } // namespace PropulsionRotationType_Specializations  

            class NDDSUSERDllExport PropulsionRotationType {
              public:
                PropulsionRotationType();

                explicit PropulsionRotationType(const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& PropulsionRotationType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PropulsionRotationType (PropulsionRotationType&&) = default;
                PropulsionRotationType& operator=(PropulsionRotationType&&) = default;
                PropulsionRotationType& operator=(const PropulsionRotationType&) = default;
                PropulsionRotationType(const PropulsionRotationType&) = default;
                #else
                PropulsionRotationType(PropulsionRotationType&& other_) OMG_NOEXCEPT;  
                PropulsionRotationType& operator=(PropulsionRotationType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& PropulsionRotationType_subtypes() OMG_NOEXCEPT {
                    return m_PropulsionRotationType_subtypes_;
                }

                const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& PropulsionRotationType_subtypes() const OMG_NOEXCEPT {
                    return m_PropulsionRotationType_subtypes_;
                }

                void PropulsionRotationType_subtypes(const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& value) {
                    m_PropulsionRotationType_subtypes_ = value;
                }

                void PropulsionRotationType_subtypes(UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union&& value) {
                    m_PropulsionRotationType_subtypes_ = std::move(value);
                }

                bool operator == (const PropulsionRotationType& other_) const;
                bool operator != (const PropulsionRotationType& other_) const;

                void swap(PropulsionRotationType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union m_PropulsionRotationType_subtypes_;

            };

            inline void swap(PropulsionRotationType& a, PropulsionRotationType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionRotationType& sample);

        } // namespace Propulsion  
    } // namespace Common  
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
        struct topic_type_name< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::Common::Propulsion::PropulsionRotationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionRotationType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Propulsion::PropulsionRotationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Propulsion::PropulsionRotationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Propulsion::PropulsionRotationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Propulsion::PropulsionRotationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Propulsion::PropulsionRotationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Propulsion::PropulsionRotationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors>
        {
            static const UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Propulsion::PropulsionRotationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Propulsion::PropulsionRotationType > {
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

#endif // PropulsionRotationType_1045182234_hpp

