

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationType_1949645477_hpp
#define OrientationType_1949645477_hpp

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
#include "UMAA/Common/Orientation/AttitudeType.hpp"
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
#include "UMAA/Common/Orientation/DirectionType.hpp"
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
            namespace OrientationType_Specializations {
                enum class OrientationType_Selectors {
                    DIRECTIONTYPE_SELECT, 
                    ATTITUDETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const OrientationType_Selectors& sample);

                class NDDSUSERDllExport OrientationType_Union {
                  public:

                    OrientationType_Union();

                    ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Orientation::DirectionType& DirectionType_data()  {

                        if (_d() != (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::DirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DirectionType_data_;
                    }

                    const ::UMAA::Common::Orientation::DirectionType& DirectionType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::DirectionType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DirectionType_data_;
                    }

                    void DirectionType_data(const ::UMAA::Common::Orientation::DirectionType& value) {
                        m_u_.m_DirectionType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT);
                    }

                    void DirectionType_data(::UMAA::Common::Orientation::DirectionType&& value) {
                        m_u_.m_DirectionType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT);
                    }
                    ::UMAA::Common::Orientation::AttitudeType& AttitudeType_data()  {

                        if (_d() != (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::AttitudeType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AttitudeType_data_;
                    }

                    const ::UMAA::Common::Orientation::AttitudeType& AttitudeType_data() const  {

                        if (_d() != (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::AttitudeType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AttitudeType_data_;
                    }

                    void AttitudeType_data(const ::UMAA::Common::Orientation::AttitudeType& value) {
                        m_u_.m_AttitudeType_data_ = value;
                        m_d_= (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT);
                    }

                    void AttitudeType_data(::UMAA::Common::Orientation::AttitudeType&& value) {
                        m_u_.m_AttitudeType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT);
                    }
                    bool operator == (const OrientationType_Union& other_) const;
                    bool operator != (const OrientationType_Union& other_) const;
                    static ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors default_discriminator();

                    void swap(OrientationType_Union& other_) noexcept ;

                  private:

                    ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Orientation::DirectionType m_DirectionType_data_;
                        ::UMAA::Common::Orientation::AttitudeType m_AttitudeType_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Orientation::DirectionType& DirectionType_data_,const ::UMAA::Common::Orientation::AttitudeType& AttitudeType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(OrientationType_Union& a, OrientationType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const OrientationType_Union& sample);

            } // namespace OrientationType_Specializations  

            class NDDSUSERDllExport OrientationType {
              public:

                OrientationType();

                explicit OrientationType(const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& OrientationType_subtypes_);

                ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& OrientationType_subtypes() noexcept {
                    return m_OrientationType_subtypes_;
                }

                const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& OrientationType_subtypes() const noexcept {
                    return m_OrientationType_subtypes_;
                }

                void OrientationType_subtypes(const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& value) {

                    m_OrientationType_subtypes_ = value;
                }

                void OrientationType_subtypes(::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union&& value) {
                    m_OrientationType_subtypes_ = std::move(value);
                }
                bool operator == (const OrientationType& other_) const;
                bool operator != (const OrientationType& other_) const;

                void swap(OrientationType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union m_OrientationType_subtypes_;

            };

            inline void swap(OrientationType& a, OrientationType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const OrientationType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors>
        {
            static const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::OrientationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::OrientationType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Orientation::OrientationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::OrientationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Orientation::OrientationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Orientation::OrientationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::OrientationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::OrientationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors>
        {
            static const ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::OrientationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::OrientationType > {
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

#endif // OrientationType_1949645477_hpp

