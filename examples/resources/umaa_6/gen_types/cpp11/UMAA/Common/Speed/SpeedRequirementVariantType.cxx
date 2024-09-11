

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SpeedRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SpeedRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            std::ostream& operator << (std::ostream& o,const SpeedRequirementVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D:
                    o << "SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D" << " ";
                    break;
                    case SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D:
                    o << "SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D" << " ";
                    break;
                    case SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D:
                    o << "SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D" << " ";
                    break;
                    case SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D:
                    o << "SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D" << " ";
                    break;
                    case SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D:
                    o << "SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- SpeedRequirementVariantTypeUnion: 

            SpeedRequirementVariantTypeUnion::Union_::Union_()  {
            }

            SpeedRequirementVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Speed::AirSpeedRequirementVariantType& AirSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType& EngineRPMSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::GroundSpeedRequirementVariantType& GroundSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType& VehicleSpeedModeRequirementVariantVariant_,const ::UMAA::Common::Speed::WaterSpeedRequirementVariantType& WaterSpeedRequirementVariantVariant_):
                m_AirSpeedRequirementVariantVariant_(AirSpeedRequirementVariantVariant_), 
                m_EngineRPMSpeedRequirementVariantVariant_(EngineRPMSpeedRequirementVariantVariant_), 
                m_GroundSpeedRequirementVariantVariant_(GroundSpeedRequirementVariantVariant_), 
                m_VehicleSpeedModeRequirementVariantVariant_(VehicleSpeedModeRequirementVariantVariant_), 
                m_WaterSpeedRequirementVariantVariant_(WaterSpeedRequirementVariantVariant_) {
            }

            SpeedRequirementVariantTypeUnion::SpeedRequirementVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void SpeedRequirementVariantTypeUnion::swap(SpeedRequirementVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AirSpeedRequirementVariantVariant_, other_.m_u_.m_AirSpeedRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_EngineRPMSpeedRequirementVariantVariant_, other_.m_u_.m_EngineRPMSpeedRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_GroundSpeedRequirementVariantVariant_, other_.m_u_.m_GroundSpeedRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_VehicleSpeedModeRequirementVariantVariant_, other_.m_u_.m_VehicleSpeedModeRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_WaterSpeedRequirementVariantVariant_, other_.m_u_.m_WaterSpeedRequirementVariantVariant_);
                    } break;

                    default:
                    {
                        /*
                        * Prevents compiler warnings when discriminator is an enum.
                        */
                    }
                }
                if (_d() != other_._d()){
                    switch(::rti::topic::cdr::integer_case(other_._d())){
                        case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AirSpeedRequirementVariantVariant_, other_.m_u_.m_AirSpeedRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_EngineRPMSpeedRequirementVariantVariant_, other_.m_u_.m_EngineRPMSpeedRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_GroundSpeedRequirementVariantVariant_, other_.m_u_.m_GroundSpeedRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_VehicleSpeedModeRequirementVariantVariant_, other_.m_u_.m_VehicleSpeedModeRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_WaterSpeedRequirementVariantVariant_, other_.m_u_.m_WaterSpeedRequirementVariantVariant_);
                        } break;

                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                }
            }  

            bool SpeedRequirementVariantTypeUnion::operator == (const SpeedRequirementVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AirSpeedRequirementVariantVariant_ != other_.m_u_.m_AirSpeedRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_EngineRPMSpeedRequirementVariantVariant_ != other_.m_u_.m_EngineRPMSpeedRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_GroundSpeedRequirementVariantVariant_ != other_.m_u_.m_GroundSpeedRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_VehicleSpeedModeRequirementVariantVariant_ != other_.m_u_.m_VehicleSpeedModeRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_WaterSpeedRequirementVariantVariant_ != other_.m_u_.m_WaterSpeedRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    default:
                    {
                        /*
                        * Prevents compiler warnings when discriminator is an enum.
                        */
                    }
                }
                return true;
            }

            bool SpeedRequirementVariantTypeUnion::operator != (const SpeedRequirementVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedRequirementVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D):
                        {  
                            o << "AirSpeedRequirementVariantVariant: " << sample.AirSpeedRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D):
                        {  
                            o << "EngineRPMSpeedRequirementVariantVariant: " << sample.EngineRPMSpeedRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D):
                        {  
                            o << "GroundSpeedRequirementVariantVariant: " << sample.GroundSpeedRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D):
                        {  
                            o << "VehicleSpeedModeRequirementVariantVariant: " << sample.VehicleSpeedModeRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D):
                        {  
                            o << "WaterSpeedRequirementVariantVariant: " << sample.WaterSpeedRequirementVariantVariant ();
                    } break ;
                    default:
                    {
                        /*
                        * Prevents compiler warnings when discriminator is an enum.
                        */
                    }
                }
                o <<"]";
                return o;
            }

            ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum SpeedRequirementVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum(static_cast< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum >(0));
            }  

            // ---- SpeedRequirementVariantType: 

            SpeedRequirementVariantType::SpeedRequirementVariantType()  {

            }   

            SpeedRequirementVariantType::SpeedRequirementVariantType (const ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& SpeedRequirementVariantTypeSubtypes_):
                m_SpeedRequirementVariantTypeSubtypes_(SpeedRequirementVariantTypeSubtypes_) {
            }

            void SpeedRequirementVariantType::swap(SpeedRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_SpeedRequirementVariantTypeSubtypes_, other_.m_SpeedRequirementVariantTypeSubtypes_);
            }  

            bool SpeedRequirementVariantType::operator == (const SpeedRequirementVariantType& other_) const {
                if (m_SpeedRequirementVariantTypeSubtypes_ != other_.m_SpeedRequirementVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool SpeedRequirementVariantType::operator != (const SpeedRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "SpeedRequirementVariantTypeSubtypes: " << sample.SpeedRequirementVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum>::value = ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum>::value = ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedRequirementVariantTypeEnum_g_tc_members[5]=
                {

                    {
                        (char *)"AIRSPEEDREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ENGINERPMSPEEDREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GROUNDSPEEDREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VEHICLESPEEDMODEREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WATERSPEEDREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpeedRequirementVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedRequirementVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedRequirementVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedRequirementVariantTypeEnum*/

                if (is_initialized) {
                    return &SpeedRequirementVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedRequirementVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SpeedRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SpeedRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SpeedRequirementVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedRequirementVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedRequirementVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedRequirementVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedRequirementVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantTypeEnum_g_sampleAccessInfo;
                }

                SpeedRequirementVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                SpeedRequirementVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum >;

                SpeedRequirementVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedRequirementVariantTypeEnum_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SpeedRequirementVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedRequirementVariantTypeUnion_g_tc_members[5]=
                {

                    {
                        (char *)"AirSpeedRequirementVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EngineRPMSpeedRequirementVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GroundSpeedRequirementVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VehicleSpeedModeRequirementVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WaterSpeedRequirementVariantVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpeedRequirementVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedRequirementVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedRequirementVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedRequirementVariantTypeUnion*/

                if (is_initialized) {
                    return &SpeedRequirementVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedRequirementVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedRequirementVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::AirSpeedRequirementVariantType>::get().native();
                SpeedRequirementVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType>::get().native();
                SpeedRequirementVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::GroundSpeedRequirementVariantType>::get().native();
                SpeedRequirementVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType>::get().native();
                SpeedRequirementVariantTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::WaterSpeedRequirementVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                SpeedRequirementVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum>::get().native();

                SpeedRequirementVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedRequirementVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedRequirementVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo SpeedRequirementVariantTypeUnion_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedRequirementVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D);
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AirSpeedRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D);
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->EngineRPMSpeedRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D);
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GroundSpeedRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D);
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehicleSpeedModeRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D);
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaterSpeedRequirementVariantVariant() - (char *)sample);

                SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                SpeedRequirementVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion >;

                SpeedRequirementVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedRequirementVariantTypeUnion_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SpeedRequirementVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedRequirementVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"SpeedRequirementVariantTypeSubtypes",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpeedRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SpeedRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedRequirementVariantType*/

                if (is_initialized) {
                    return &SpeedRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                SpeedRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::SpeedRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo SpeedRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::SpeedRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedRequirementVariantTypeSubtypes() - (char *)sample);

                SpeedRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                SpeedRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedRequirementVariantType >;

                SpeedRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedRequirementVariantType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SpeedRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion >::reset_sample(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AirSpeedRequirementVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.EngineRPMSpeedRequirementVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.GroundSpeedRequirementVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.VehicleSpeedModeRequirementVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.WaterSpeedRequirementVariantVariant());

            sample._d() = ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion >::allocate_sample(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AirSpeedRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.EngineRPMSpeedRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.GroundSpeedRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.VehicleSpeedModeRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.WaterSpeedRequirementVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantType >::reset_sample(::UMAA::Common::Speed::SpeedRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.SpeedRequirementVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantType >::allocate_sample(::UMAA::Common::Speed::SpeedRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.SpeedRequirementVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
