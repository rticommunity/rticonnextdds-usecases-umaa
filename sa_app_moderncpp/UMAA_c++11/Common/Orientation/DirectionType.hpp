

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionType_1507435713_hpp
#define DirectionType_1507435713_hpp

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
#include "UMAA/Common/Orientation/CourseType.hpp"
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
#include "UMAA/Common/Orientation/HeadingType.hpp"
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
            namespace DirectionType_Specializations {
                enum class DirectionType_Selectors {
                    COURSETYPE_SELECT, 
                    HEADINGTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DirectionType_Selectors& sample);

                class NDDSUSERDllExport DirectionType_Union {
                  public:

                    DirectionType_Union();

                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Orientation::CourseType& CourseType_data()  {

                        if (_d() != (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::CourseType_data not selected by the discriminator" );
                        }
                        return m_u_.m_CourseType_data_;
                    }

                    const ::UMAA::Common::Orientation::CourseType& CourseType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::CourseType_data not selected by the discriminator" );
                        }
                        return m_u_.m_CourseType_data_;
                    }

                    void CourseType_data(const ::UMAA::Common::Orientation::CourseType& value) {
                        m_u_.m_CourseType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT);
                    }

                    void CourseType_data(::UMAA::Common::Orientation::CourseType&& value) {
                        m_u_.m_CourseType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT);
                    }
                    ::UMAA::Common::Orientation::HeadingType& HeadingType_data()  {

                        if (_d() != (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::HeadingType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingType_data_;
                    }

                    const ::UMAA::Common::Orientation::HeadingType& HeadingType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::HeadingType_data not selected by the discriminator" );
                        }
                        return m_u_.m_HeadingType_data_;
                    }

                    void HeadingType_data(const ::UMAA::Common::Orientation::HeadingType& value) {
                        m_u_.m_HeadingType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT);
                    }

                    void HeadingType_data(::UMAA::Common::Orientation::HeadingType&& value) {
                        m_u_.m_HeadingType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT);
                    }
                    bool operator == (const DirectionType_Union& other_) const;
                    bool operator != (const DirectionType_Union& other_) const;
                    static ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors default_discriminator();

                    void swap(DirectionType_Union& other_) noexcept ;

                  private:

                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Orientation::CourseType m_CourseType_data_;
                        ::UMAA::Common::Orientation::HeadingType m_HeadingType_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Orientation::CourseType& CourseType_data_,const ::UMAA::Common::Orientation::HeadingType& HeadingType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(DirectionType_Union& a, DirectionType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionType_Union& sample);

            } // namespace DirectionType_Specializations  

            class NDDSUSERDllExport DirectionType {
              public:

                DirectionType();

                explicit DirectionType(const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& DirectionType_subtypes_);

                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& DirectionType_subtypes() noexcept {
                    return m_DirectionType_subtypes_;
                }

                const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& DirectionType_subtypes() const noexcept {
                    return m_DirectionType_subtypes_;
                }

                void DirectionType_subtypes(const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& value) {

                    m_DirectionType_subtypes_ = value;
                }

                void DirectionType_subtypes(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union&& value) {
                    m_DirectionType_subtypes_ = std::move(value);
                }
                bool operator == (const DirectionType& other_) const;
                bool operator != (const DirectionType& other_) const;

                void swap(DirectionType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union m_DirectionType_subtypes_;

            };

            inline void swap(DirectionType& a, DirectionType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors>
        {
            static const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::DirectionType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::DirectionType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::DirectionType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors>
        {
            static const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionType > {
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

#endif // DirectionType_1507435713_hpp

