

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingType_1335779745_hpp
#define HeadingType_1335779745_hpp

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
#include "UMAA/Common/Orientation/HeadingCurrentDirectionType.hpp"
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
#include "UMAA/Common/Orientation/HeadingMagneticNorthType.hpp"
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
#include "UMAA/Common/Orientation/HeadingTrueNorthType.hpp"
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
#include "UMAA/Common/Orientation/HeadingWindDirectionType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {
            namespace HeadingType_Specializations {
                enum class HeadingType_Selectors {
                    HEADINGTRUENORTHTYPE_SELECT, 
                    HEADINGCURRENTDIRECTIONTYPE_SELECT, 
                    HEADINGMAGNETICNORTHTYPE_SELECT, 
                    HEADINGWINDDIRECTIONTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HeadingType_Selectors& sample);

                class NDDSUSERDllExport HeadingType_Union {
                  public:

                    HeadingType_Union();

                    ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Orientation::HeadingTrueNorthType& HeadingTrueNorthType_data()  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingTrueNorthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingTrueNorthType_data_;
                    }

                    const ::UMAA::Common::Orientation::HeadingTrueNorthType& HeadingTrueNorthType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingTrueNorthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingTrueNorthType_data_;
                    }

                    void HeadingTrueNorthType_data(const ::UMAA::Common::Orientation::HeadingTrueNorthType& value) {
                        m_u_.m_HeadingTrueNorthType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT);
                    }

                    void HeadingTrueNorthType_data(::UMAA::Common::Orientation::HeadingTrueNorthType&& value) {
                        m_u_.m_HeadingTrueNorthType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT);
                    }
                    ::UMAA::Common::Orientation::HeadingCurrentDirectionType& HeadingCurrentDirectionType_data()  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingCurrentDirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingCurrentDirectionType_data_;
                    }

                    const ::UMAA::Common::Orientation::HeadingCurrentDirectionType& HeadingCurrentDirectionType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingCurrentDirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingCurrentDirectionType_data_;
                    }

                    void HeadingCurrentDirectionType_data(const ::UMAA::Common::Orientation::HeadingCurrentDirectionType& value) {
                        m_u_.m_HeadingCurrentDirectionType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT);
                    }

                    void HeadingCurrentDirectionType_data(::UMAA::Common::Orientation::HeadingCurrentDirectionType&& value) {
                        m_u_.m_HeadingCurrentDirectionType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT);
                    }
                    ::UMAA::Common::Orientation::HeadingMagneticNorthType& HeadingMagneticNorthType_data()  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingMagneticNorthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingMagneticNorthType_data_;
                    }

                    const ::UMAA::Common::Orientation::HeadingMagneticNorthType& HeadingMagneticNorthType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingMagneticNorthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingMagneticNorthType_data_;
                    }

                    void HeadingMagneticNorthType_data(const ::UMAA::Common::Orientation::HeadingMagneticNorthType& value) {
                        m_u_.m_HeadingMagneticNorthType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT);
                    }

                    void HeadingMagneticNorthType_data(::UMAA::Common::Orientation::HeadingMagneticNorthType&& value) {
                        m_u_.m_HeadingMagneticNorthType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT);
                    }
                    ::UMAA::Common::Orientation::HeadingWindDirectionType& HeadingWindDirectionType_data()  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingWindDirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingWindDirectionType_data_;
                    }

                    const ::UMAA::Common::Orientation::HeadingWindDirectionType& HeadingWindDirectionType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::HeadingWindDirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingWindDirectionType_data_;
                    }

                    void HeadingWindDirectionType_data(const ::UMAA::Common::Orientation::HeadingWindDirectionType& value) {
                        m_u_.m_HeadingWindDirectionType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT);
                    }

                    void HeadingWindDirectionType_data(::UMAA::Common::Orientation::HeadingWindDirectionType&& value) {
                        m_u_.m_HeadingWindDirectionType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT);
                    }
                    bool operator == (const HeadingType_Union& other_) const;
                    bool operator != (const HeadingType_Union& other_) const;
                    static ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors default_discriminator();

                    void swap(HeadingType_Union& other_) noexcept ;

                  private:

                    ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Orientation::HeadingTrueNorthType m_HeadingTrueNorthType_data_;
                        ::UMAA::Common::Orientation::HeadingCurrentDirectionType m_HeadingCurrentDirectionType_data_;
                        ::UMAA::Common::Orientation::HeadingMagneticNorthType m_HeadingMagneticNorthType_data_;
                        ::UMAA::Common::Orientation::HeadingWindDirectionType m_HeadingWindDirectionType_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Orientation::HeadingTrueNorthType& HeadingTrueNorthType_data_,const ::UMAA::Common::Orientation::HeadingCurrentDirectionType& HeadingCurrentDirectionType_data_,const ::UMAA::Common::Orientation::HeadingMagneticNorthType& HeadingMagneticNorthType_data_,const ::UMAA::Common::Orientation::HeadingWindDirectionType& HeadingWindDirectionType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(HeadingType_Union& a, HeadingType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HeadingType_Union& sample);

            } // namespace HeadingType_Specializations  

            class NDDSUSERDllExport HeadingType {
              public:

                HeadingType();

                explicit HeadingType(const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& HeadingType_subtypes_);

                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& HeadingType_subtypes() noexcept {
                    return m_HeadingType_subtypes_;
                }

                const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& HeadingType_subtypes() const noexcept {
                    return m_HeadingType_subtypes_;
                }

                void HeadingType_subtypes(const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& value) {

                    m_HeadingType_subtypes_ = value;
                }

                void HeadingType_subtypes(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union&& value) {
                    m_HeadingType_subtypes_ = std::move(value);
                }
                bool operator == (const HeadingType& other_) const;
                bool operator != (const HeadingType& other_) const;

                void swap(HeadingType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union m_HeadingType_subtypes_;

            };

            inline void swap(HeadingType& a, HeadingType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HeadingType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors>
        {
            static const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::HeadingType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::HeadingType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::HeadingType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::HeadingType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::HeadingType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::HeadingType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::HeadingType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::HeadingType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors>
        {
            static const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::HeadingType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::HeadingType > {
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

#endif // HeadingType_1335779745_hpp

