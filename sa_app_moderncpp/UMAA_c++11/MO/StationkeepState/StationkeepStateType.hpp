

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepStateType_412239531_hpp
#define StationkeepStateType_412239531_hpp

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
#include "UMAA/MO/StationkeepState/StationkeepingStationkeepType.hpp"
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
#include "UMAA/MO/StationkeepState/TransitStationkeepType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace StationkeepState {
            namespace StationkeepStateType_Specializations {
                enum class StationkeepStateType_Selectors {
                    TRANSITSTATIONKEEPTYPE_SELECT, 
                    STATIONKEEPINGSTATIONKEEPTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const StationkeepStateType_Selectors& sample);

                class NDDSUSERDllExport StationkeepStateType_Union {
                  public:

                    StationkeepStateType_Union();

                    ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MO::StationkeepState::TransitStationkeepType& TransitStationkeepType_data()  {

                        if (_d() != (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::TransitStationkeepType_data not selected by the discriminator" );
                        }
                        return m_u_.m_TransitStationkeepType_data_;
                    }

                    const ::UMAA::MO::StationkeepState::TransitStationkeepType& TransitStationkeepType_data() const  {

                        if (_d() != (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::TransitStationkeepType_data not selected by the discriminator" );
                        }
                        return m_u_.m_TransitStationkeepType_data_;
                    }

                    void TransitStationkeepType_data(const ::UMAA::MO::StationkeepState::TransitStationkeepType& value) {
                        m_u_.m_TransitStationkeepType_data_ = value;
                        m_d_= (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT);
                    }

                    void TransitStationkeepType_data(::UMAA::MO::StationkeepState::TransitStationkeepType&& value) {
                        m_u_.m_TransitStationkeepType_data_ = std::move(value);
                        m_d_= (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT);
                    }
                    ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& StationkeepingStationkeepType_data()  {

                        if (_d() != (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::StationkeepingStationkeepType_data not selected by the discriminator" );
                        }
                        return m_u_.m_StationkeepingStationkeepType_data_;
                    }

                    const ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& StationkeepingStationkeepType_data() const  {

                        if (_d() != (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::StationkeepingStationkeepType_data not selected by the discriminator" );
                        }
                        return m_u_.m_StationkeepingStationkeepType_data_;
                    }

                    void StationkeepingStationkeepType_data(const ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& value) {
                        m_u_.m_StationkeepingStationkeepType_data_ = value;
                        m_d_= (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT);
                    }

                    void StationkeepingStationkeepType_data(::UMAA::MO::StationkeepState::StationkeepingStationkeepType&& value) {
                        m_u_.m_StationkeepingStationkeepType_data_ = std::move(value);
                        m_d_= (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT);
                    }
                    bool operator == (const StationkeepStateType_Union& other_) const;
                    bool operator != (const StationkeepStateType_Union& other_) const;
                    static ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors default_discriminator();

                    void swap(StationkeepStateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MO::StationkeepState::TransitStationkeepType m_TransitStationkeepType_data_;
                        ::UMAA::MO::StationkeepState::StationkeepingStationkeepType m_StationkeepingStationkeepType_data_;
                        Union_();
                        Union_(const ::UMAA::MO::StationkeepState::TransitStationkeepType& TransitStationkeepType_data_,const ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& StationkeepingStationkeepType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(StationkeepStateType_Union& a, StationkeepStateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepStateType_Union& sample);

            } // namespace StationkeepStateType_Specializations  

            class NDDSUSERDllExport StationkeepStateType {
              public:

                StationkeepStateType();

                explicit StationkeepStateType(const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& StationkeepStateType_subtypes_);

                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& StationkeepStateType_subtypes() noexcept {
                    return m_StationkeepStateType_subtypes_;
                }

                const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& StationkeepStateType_subtypes() const noexcept {
                    return m_StationkeepStateType_subtypes_;
                }

                void StationkeepStateType_subtypes(const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& value) {

                    m_StationkeepStateType_subtypes_ = value;
                }

                void StationkeepStateType_subtypes(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union&& value) {
                    m_StationkeepStateType_subtypes_ = std::move(value);
                }
                bool operator == (const StationkeepStateType& other_) const;
                bool operator != (const StationkeepStateType& other_) const;

                void swap(StationkeepStateType& other_) noexcept ;

              private:

                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union m_StationkeepStateType_subtypes_;

            };

            inline void swap(StationkeepStateType& a, StationkeepStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepStateType& sample);

        } // namespace StationkeepState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors>
        {
            static const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors value;
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
        struct topic_type_name< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::StationkeepState::StationkeepStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::StationkeepState::StationkeepStateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::StationkeepState::StationkeepStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::StationkeepState::StationkeepStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::StationkeepState::StationkeepStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::StationkeepState::StationkeepStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::StationkeepState::StationkeepStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors>
        {
            static const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::StationkeepState::StationkeepStateType > {
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

#endif // StationkeepStateType_412239531_hpp

