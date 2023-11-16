

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpFlowRateType_2133444999_hpp
#define BallastPumpFlowRateType_2133444999_hpp

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
#include "UMAA/EO/BallastTank/MassBallastFlowRateType.hpp"
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
#include "UMAA/EO/BallastTank/VolumeBallastFlowRateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {
            namespace BallastPumpFlowRateType_Specializations {
                enum class BallastPumpFlowRateType_Selectors {
                    MASSBALLASTFLOWRATETYPE_SELECT, 
                    VOLUMEBALLASTFLOWRATETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateType_Selectors& sample);

                class NDDSUSERDllExport BallastPumpFlowRateType_Union {
                  public:

                    BallastPumpFlowRateType_Union();

                    ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateType_data()  {

                        if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::MassBallastFlowRateType_data not selected by the discriminator" );
                        }
                        return m_u_.m_MassBallastFlowRateType_data_;
                    }

                    const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateType_data() const  {

                        if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::MassBallastFlowRateType_data not selected by the discriminator" );
                        }
                        return m_u_.m_MassBallastFlowRateType_data_;
                    }

                    void MassBallastFlowRateType_data(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& value) {
                        m_u_.m_MassBallastFlowRateType_data_ = value;
                        m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT);
                    }

                    void MassBallastFlowRateType_data(::UMAA::EO::BallastTank::MassBallastFlowRateType&& value) {
                        m_u_.m_MassBallastFlowRateType_data_ = std::move(value);
                        m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT);
                    }
                    ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateType_data()  {

                        if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::VolumeBallastFlowRateType_data not selected by the discriminator" );
                        }
                        return m_u_.m_VolumeBallastFlowRateType_data_;
                    }

                    const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateType_data() const  {

                        if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::VolumeBallastFlowRateType_data not selected by the discriminator" );
                        }
                        return m_u_.m_VolumeBallastFlowRateType_data_;
                    }

                    void VolumeBallastFlowRateType_data(const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& value) {
                        m_u_.m_VolumeBallastFlowRateType_data_ = value;
                        m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT);
                    }

                    void VolumeBallastFlowRateType_data(::UMAA::EO::BallastTank::VolumeBallastFlowRateType&& value) {
                        m_u_.m_VolumeBallastFlowRateType_data_ = std::move(value);
                        m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT);
                    }
                    bool operator == (const BallastPumpFlowRateType_Union& other_) const;
                    bool operator != (const BallastPumpFlowRateType_Union& other_) const;
                    static ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors default_discriminator();

                    void swap(BallastPumpFlowRateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::EO::BallastTank::MassBallastFlowRateType m_MassBallastFlowRateType_data_;
                        ::UMAA::EO::BallastTank::VolumeBallastFlowRateType m_VolumeBallastFlowRateType_data_;
                        Union_();
                        Union_(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateType_data_,const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(BallastPumpFlowRateType_Union& a, BallastPumpFlowRateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpFlowRateType_Union& sample);

            } // namespace BallastPumpFlowRateType_Specializations  

            class NDDSUSERDllExport BallastPumpFlowRateType {
              public:

                BallastPumpFlowRateType();

                explicit BallastPumpFlowRateType(const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& BallastPumpFlowRateType_subtypes_);

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& BallastPumpFlowRateType_subtypes() noexcept {
                    return m_BallastPumpFlowRateType_subtypes_;
                }

                const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& BallastPumpFlowRateType_subtypes() const noexcept {
                    return m_BallastPumpFlowRateType_subtypes_;
                }

                void BallastPumpFlowRateType_subtypes(const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& value) {

                    m_BallastPumpFlowRateType_subtypes_ = value;
                }

                void BallastPumpFlowRateType_subtypes(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union&& value) {
                    m_BallastPumpFlowRateType_subtypes_ = std::move(value);
                }
                bool operator == (const BallastPumpFlowRateType& other_) const;
                bool operator != (const BallastPumpFlowRateType& other_) const;

                void swap(BallastPumpFlowRateType& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union m_BallastPumpFlowRateType_subtypes_;

            };

            inline void swap(BallastPumpFlowRateType& a, BallastPumpFlowRateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpFlowRateType& sample);

        } // namespace BallastTank  
    } // namespace EO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors>
        {
            static const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors value;
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
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpFlowRateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors>
        {
            static const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
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

#endif // BallastPumpFlowRateType_2133444999_hpp

