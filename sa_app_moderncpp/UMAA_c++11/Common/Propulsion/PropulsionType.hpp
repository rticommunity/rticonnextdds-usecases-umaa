

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionType_1416675266_hpp
#define PropulsionType_1416675266_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

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
#include "UMAA/Common/Propulsion/PropulsiveEffortType.hpp"
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
#include "UMAA/Common/Propulsion/PropulsiveRPMType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Propulsion {
            namespace PropulsionType_Specializations {
                enum class PropulsionType_Selectors {
                    PROPULSIVEEFFORTTYPE_SELECT, 
                    PROPULSIVERPMTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PropulsionType_Selectors& sample);

                class NDDSUSERDllExport PropulsionType_Union {
                  public:

                    PropulsionType_Union();

                    ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortType_data()  {

                        if (_d() != (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::PropulsiveEffortType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveEffortType_data_;
                    }

                    const ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortType_data() const  {

                        if (_d() != (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::PropulsiveEffortType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveEffortType_data_;
                    }

                    void PropulsiveEffortType_data(const ::UMAA::Common::Propulsion::PropulsiveEffortType& value) {
                        m_u_.m_PropulsiveEffortType_data_ = value;
                        m_d_= (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT);
                    }

                    void PropulsiveEffortType_data(::UMAA::Common::Propulsion::PropulsiveEffortType&& value) {
                        m_u_.m_PropulsiveEffortType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT);
                    }
                    ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMType_data()  {

                        if (_d() != (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::PropulsiveRPMType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRPMType_data_;
                    }

                    const ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMType_data() const  {

                        if (_d() != (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::PropulsiveRPMType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PropulsiveRPMType_data_;
                    }

                    void PropulsiveRPMType_data(const ::UMAA::Common::Propulsion::PropulsiveRPMType& value) {
                        m_u_.m_PropulsiveRPMType_data_ = value;
                        m_d_= (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT);
                    }

                    void PropulsiveRPMType_data(::UMAA::Common::Propulsion::PropulsiveRPMType&& value) {
                        m_u_.m_PropulsiveRPMType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT);
                    }
                    bool operator == (const PropulsionType_Union& other_) const;
                    bool operator != (const PropulsionType_Union& other_) const;
                    static ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors default_discriminator();

                    void swap(PropulsionType_Union& other_) noexcept ;

                  private:

                    ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Propulsion::PropulsiveEffortType m_PropulsiveEffortType_data_;
                        ::UMAA::Common::Propulsion::PropulsiveRPMType m_PropulsiveRPMType_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortType_data_,const ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(PropulsionType_Union& a, PropulsionType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionType_Union& sample);

            } // namespace PropulsionType_Specializations  

            class NDDSUSERDllExport PropulsionType {
              public:

                PropulsionType();

                explicit PropulsionType(const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& PropulsionType_subtypes_);

                ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& PropulsionType_subtypes() noexcept {
                    return m_PropulsionType_subtypes_;
                }

                const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& PropulsionType_subtypes() const noexcept {
                    return m_PropulsionType_subtypes_;
                }

                void PropulsionType_subtypes(const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& value) {

                    m_PropulsionType_subtypes_ = value;
                }

                void PropulsionType_subtypes(::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union&& value) {
                    m_PropulsionType_subtypes_ = std::move(value);
                }
                bool operator == (const PropulsionType& other_) const;
                bool operator != (const PropulsionType& other_) const;

                void swap(PropulsionType& other_) noexcept ;

              private:

                ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union m_PropulsionType_subtypes_;

            };

            inline void swap(PropulsionType& a, PropulsionType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionType& sample);

        } // namespace Propulsion  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors>
        {
            static const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors value;
        };
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Propulsion::PropulsionType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Propulsion::PropulsionType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Propulsion::PropulsionType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Propulsion::PropulsionType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Propulsion::PropulsionType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Propulsion::PropulsionType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Propulsion::PropulsionType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors>
        {
            static const ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // PropulsionType_1416675266_hpp

