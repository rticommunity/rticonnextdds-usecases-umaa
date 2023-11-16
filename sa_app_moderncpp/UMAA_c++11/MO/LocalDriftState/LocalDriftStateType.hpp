

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftStateType_694778570_hpp
#define LocalDriftStateType_694778570_hpp

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
#include "UMAA/MO/LocalDriftState/LocalRegionDriftType.hpp"
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
#include "UMAA/MO/LocalDriftState/LocalTransitDriftType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalDriftState {
            namespace LocalDriftStateType_Specializations {
                enum class LocalDriftStateType_Selectors {
                    LOCALTRANSITDRIFTTYPE_SELECT, 
                    LOCALREGIONDRIFTTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LocalDriftStateType_Selectors& sample);

                class NDDSUSERDllExport LocalDriftStateType_Union {
                  public:

                    LocalDriftStateType_Union();

                    ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MO::LocalDriftState::LocalTransitDriftType& LocalTransitDriftType_data()  {

                        if (_d() != (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::LocalTransitDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalTransitDriftType_data_;
                    }

                    const ::UMAA::MO::LocalDriftState::LocalTransitDriftType& LocalTransitDriftType_data() const  {

                        if (_d() != (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::LocalTransitDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalTransitDriftType_data_;
                    }

                    void LocalTransitDriftType_data(const ::UMAA::MO::LocalDriftState::LocalTransitDriftType& value) {
                        m_u_.m_LocalTransitDriftType_data_ = value;
                        m_d_= (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT);
                    }

                    void LocalTransitDriftType_data(::UMAA::MO::LocalDriftState::LocalTransitDriftType&& value) {
                        m_u_.m_LocalTransitDriftType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT);
                    }
                    ::UMAA::MO::LocalDriftState::LocalRegionDriftType& LocalRegionDriftType_data()  {

                        if (_d() != (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::LocalRegionDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegionDriftType_data_;
                    }

                    const ::UMAA::MO::LocalDriftState::LocalRegionDriftType& LocalRegionDriftType_data() const  {

                        if (_d() != (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::LocalRegionDriftType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegionDriftType_data_;
                    }

                    void LocalRegionDriftType_data(const ::UMAA::MO::LocalDriftState::LocalRegionDriftType& value) {
                        m_u_.m_LocalRegionDriftType_data_ = value;
                        m_d_= (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT);
                    }

                    void LocalRegionDriftType_data(::UMAA::MO::LocalDriftState::LocalRegionDriftType&& value) {
                        m_u_.m_LocalRegionDriftType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT);
                    }
                    bool operator == (const LocalDriftStateType_Union& other_) const;
                    bool operator != (const LocalDriftStateType_Union& other_) const;
                    static ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors default_discriminator();

                    void swap(LocalDriftStateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MO::LocalDriftState::LocalTransitDriftType m_LocalTransitDriftType_data_;
                        ::UMAA::MO::LocalDriftState::LocalRegionDriftType m_LocalRegionDriftType_data_;
                        Union_();
                        Union_(const ::UMAA::MO::LocalDriftState::LocalTransitDriftType& LocalTransitDriftType_data_,const ::UMAA::MO::LocalDriftState::LocalRegionDriftType& LocalRegionDriftType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(LocalDriftStateType_Union& a, LocalDriftStateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalDriftStateType_Union& sample);

            } // namespace LocalDriftStateType_Specializations  

            class NDDSUSERDllExport LocalDriftStateType {
              public:

                LocalDriftStateType();

                explicit LocalDriftStateType(const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& LocalDriftStateType_subtypes_);

                ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& LocalDriftStateType_subtypes() noexcept {
                    return m_LocalDriftStateType_subtypes_;
                }

                const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& LocalDriftStateType_subtypes() const noexcept {
                    return m_LocalDriftStateType_subtypes_;
                }

                void LocalDriftStateType_subtypes(const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& value) {

                    m_LocalDriftStateType_subtypes_ = value;
                }

                void LocalDriftStateType_subtypes(::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union&& value) {
                    m_LocalDriftStateType_subtypes_ = std::move(value);
                }
                bool operator == (const LocalDriftStateType& other_) const;
                bool operator != (const LocalDriftStateType& other_) const;

                void swap(LocalDriftStateType& other_) noexcept ;

              private:

                ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union m_LocalDriftStateType_subtypes_;

            };

            inline void swap(LocalDriftStateType& a, LocalDriftStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalDriftStateType& sample);

        } // namespace LocalDriftState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors>
        {
            static const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors value;
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
        struct topic_type_name< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::LocalDriftState::LocalDriftStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalDriftState::LocalDriftStateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalDriftState::LocalDriftStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalDriftState::LocalDriftStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalDriftState::LocalDriftStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalDriftState::LocalDriftStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalDriftState::LocalDriftStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors>
        {
            static const ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalDriftState::LocalDriftStateType > {
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

#endif // LocalDriftStateType_694778570_hpp

