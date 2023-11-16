

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedControlType_1610912839_hpp
#define SpeedControlType_1610912839_hpp

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
#include "UMAA/Common/Speed/EngineRPM.hpp"
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
#include "UMAA/Common/Speed/SpeedOverGround.hpp"
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
#include "UMAA/Common/Speed/SpeedThroughAir.hpp"
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
#include "UMAA/Common/Speed/SpeedThroughWater.hpp"
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
#include "UMAA/Common/Speed/VehicleSpeedMode.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {
            namespace SpeedControlType_Specializations {
                enum class SpeedControlType_Selectors {
                    SPEEDOVERGROUND_SELECT, 
                    SPEEDTHROUGHWATER_SELECT, 
                    VEHICLESPEEDMODE_SELECT, 
                    ENGINERPM_SELECT, 
                    SPEEDTHROUGHAIR_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpeedControlType_Selectors& sample);

                class NDDSUSERDllExport SpeedControlType_Union {
                  public:

                    SpeedControlType_Union();

                    ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Speed::SpeedOverGround& SpeedOverGround_data()  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedOverGround_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedOverGround_data_;
                    }

                    const ::UMAA::Common::Speed::SpeedOverGround& SpeedOverGround_data() const  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedOverGround_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedOverGround_data_;
                    }

                    void SpeedOverGround_data(const ::UMAA::Common::Speed::SpeedOverGround& value) {
                        m_u_.m_SpeedOverGround_data_ = value;
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT);
                    }

                    void SpeedOverGround_data(::UMAA::Common::Speed::SpeedOverGround&& value) {
                        m_u_.m_SpeedOverGround_data_ = std::move(value);
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT);
                    }
                    ::UMAA::Common::Speed::SpeedThroughWater& SpeedThroughWater_data()  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedThroughWater_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedThroughWater_data_;
                    }

                    const ::UMAA::Common::Speed::SpeedThroughWater& SpeedThroughWater_data() const  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedThroughWater_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedThroughWater_data_;
                    }

                    void SpeedThroughWater_data(const ::UMAA::Common::Speed::SpeedThroughWater& value) {
                        m_u_.m_SpeedThroughWater_data_ = value;
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT);
                    }

                    void SpeedThroughWater_data(::UMAA::Common::Speed::SpeedThroughWater&& value) {
                        m_u_.m_SpeedThroughWater_data_ = std::move(value);
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT);
                    }
                    ::UMAA::Common::Speed::VehicleSpeedMode& VehicleSpeedMode_data()  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::VehicleSpeedMode_data not selected by the discriminator" );
                        }
                        return m_u_.m_VehicleSpeedMode_data_;
                    }

                    const ::UMAA::Common::Speed::VehicleSpeedMode& VehicleSpeedMode_data() const  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::VehicleSpeedMode_data not selected by the discriminator" );
                        }
                        return m_u_.m_VehicleSpeedMode_data_;
                    }

                    void VehicleSpeedMode_data(const ::UMAA::Common::Speed::VehicleSpeedMode& value) {
                        m_u_.m_VehicleSpeedMode_data_ = value;
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT);
                    }

                    void VehicleSpeedMode_data(::UMAA::Common::Speed::VehicleSpeedMode&& value) {
                        m_u_.m_VehicleSpeedMode_data_ = std::move(value);
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT);
                    }
                    ::UMAA::Common::Speed::EngineRPM& EngineRPM_data()  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::EngineRPM_data not selected by the discriminator" );
                        }
                        return m_u_.m_EngineRPM_data_;
                    }

                    const ::UMAA::Common::Speed::EngineRPM& EngineRPM_data() const  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::EngineRPM_data not selected by the discriminator" );
                        }
                        return m_u_.m_EngineRPM_data_;
                    }

                    void EngineRPM_data(const ::UMAA::Common::Speed::EngineRPM& value) {
                        m_u_.m_EngineRPM_data_ = value;
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT);
                    }

                    void EngineRPM_data(::UMAA::Common::Speed::EngineRPM&& value) {
                        m_u_.m_EngineRPM_data_ = std::move(value);
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT);
                    }
                    ::UMAA::Common::Speed::SpeedThroughAir& SpeedThroughAir_data()  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedThroughAir_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedThroughAir_data_;
                    }

                    const ::UMAA::Common::Speed::SpeedThroughAir& SpeedThroughAir_data() const  {

                        if (_d() != (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::SpeedThroughAir_data not selected by the discriminator" );
                        }
                        return m_u_.m_SpeedThroughAir_data_;
                    }

                    void SpeedThroughAir_data(const ::UMAA::Common::Speed::SpeedThroughAir& value) {
                        m_u_.m_SpeedThroughAir_data_ = value;
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT);
                    }

                    void SpeedThroughAir_data(::UMAA::Common::Speed::SpeedThroughAir&& value) {
                        m_u_.m_SpeedThroughAir_data_ = std::move(value);
                        m_d_= (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT);
                    }
                    bool operator == (const SpeedControlType_Union& other_) const;
                    bool operator != (const SpeedControlType_Union& other_) const;
                    static ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors default_discriminator();

                    void swap(SpeedControlType_Union& other_) noexcept ;

                  private:

                    ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Speed::SpeedOverGround m_SpeedOverGround_data_;
                        ::UMAA::Common::Speed::SpeedThroughWater m_SpeedThroughWater_data_;
                        ::UMAA::Common::Speed::VehicleSpeedMode m_VehicleSpeedMode_data_;
                        ::UMAA::Common::Speed::EngineRPM m_EngineRPM_data_;
                        ::UMAA::Common::Speed::SpeedThroughAir m_SpeedThroughAir_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Speed::SpeedOverGround& SpeedOverGround_data_,const ::UMAA::Common::Speed::SpeedThroughWater& SpeedThroughWater_data_,const ::UMAA::Common::Speed::VehicleSpeedMode& VehicleSpeedMode_data_,const ::UMAA::Common::Speed::EngineRPM& EngineRPM_data_,const ::UMAA::Common::Speed::SpeedThroughAir& SpeedThroughAir_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(SpeedControlType_Union& a, SpeedControlType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedControlType_Union& sample);

            } // namespace SpeedControlType_Specializations  

            class NDDSUSERDllExport SpeedControlType {
              public:

                SpeedControlType();

                explicit SpeedControlType(const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& SpeedControlType_subtypes_);

                ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& SpeedControlType_subtypes() noexcept {
                    return m_SpeedControlType_subtypes_;
                }

                const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& SpeedControlType_subtypes() const noexcept {
                    return m_SpeedControlType_subtypes_;
                }

                void SpeedControlType_subtypes(const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& value) {

                    m_SpeedControlType_subtypes_ = value;
                }

                void SpeedControlType_subtypes(::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union&& value) {
                    m_SpeedControlType_subtypes_ = std::move(value);
                }
                bool operator == (const SpeedControlType& other_) const;
                bool operator != (const SpeedControlType& other_) const;

                void swap(SpeedControlType& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union m_SpeedControlType_subtypes_;

            };

            inline void swap(SpeedControlType& a, SpeedControlType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedControlType& sample);

        } // namespace Speed  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors>
        {
            static const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors value;
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
        struct topic_type_name< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Speed::SpeedControlType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedControlType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Speed::SpeedControlType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedControlType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Speed::SpeedControlType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Speed::SpeedControlType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedControlType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedControlType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors>
        {
            static const ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedControlType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedControlType > {
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

#endif // SpeedControlType_1610912839_hpp

