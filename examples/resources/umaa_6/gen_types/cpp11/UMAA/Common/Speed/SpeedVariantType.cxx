

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SpeedVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SpeedVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            std::ostream& operator << (std::ostream& o,const SpeedVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case SpeedVariantTypeEnum::AIRSPEEDVARIANT_D:
                    o << "SpeedVariantTypeEnum::AIRSPEEDVARIANT_D" << " ";
                    break;
                    case SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D:
                    o << "SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D" << " ";
                    break;
                    case SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D:
                    o << "SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D" << " ";
                    break;
                    case SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D:
                    o << "SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D" << " ";
                    break;
                    case SpeedVariantTypeEnum::WATERSPEEDVARIANT_D:
                    o << "SpeedVariantTypeEnum::WATERSPEEDVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- SpeedVariantTypeUnion: 

            SpeedVariantTypeUnion::Union_::Union_()  {
            }

            SpeedVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Speed::AirSpeedVariantType& AirSpeedVariantVariant_,const ::UMAA::Common::Speed::EngineRPMSpeedVariantType& EngineRPMSpeedVariantVariant_,const ::UMAA::Common::Speed::GroundSpeedVariantType& GroundSpeedVariantVariant_,const ::UMAA::Common::Speed::VehicleSpeedModeVariantType& VehicleSpeedModeVariantVariant_,const ::UMAA::Common::Speed::WaterSpeedVariantType& WaterSpeedVariantVariant_):
                m_AirSpeedVariantVariant_(AirSpeedVariantVariant_), 
                m_EngineRPMSpeedVariantVariant_(EngineRPMSpeedVariantVariant_), 
                m_GroundSpeedVariantVariant_(GroundSpeedVariantVariant_), 
                m_VehicleSpeedModeVariantVariant_(VehicleSpeedModeVariantVariant_), 
                m_WaterSpeedVariantVariant_(WaterSpeedVariantVariant_) {
            }

            SpeedVariantTypeUnion::SpeedVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void SpeedVariantTypeUnion::swap(SpeedVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_AirSpeedVariantVariant_, other_.m_u_.m_AirSpeedVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_EngineRPMSpeedVariantVariant_, other_.m_u_.m_EngineRPMSpeedVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_GroundSpeedVariantVariant_, other_.m_u_.m_GroundSpeedVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D):
                        {  
                            swap(m_u_.m_VehicleSpeedModeVariantVariant_, other_.m_u_.m_VehicleSpeedModeVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_WaterSpeedVariantVariant_, other_.m_u_.m_WaterSpeedVariantVariant_);
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
                        case (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_AirSpeedVariantVariant_, other_.m_u_.m_AirSpeedVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_EngineRPMSpeedVariantVariant_, other_.m_u_.m_EngineRPMSpeedVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_GroundSpeedVariantVariant_, other_.m_u_.m_GroundSpeedVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D):
                            {  
                                swap(m_u_.m_VehicleSpeedModeVariantVariant_, other_.m_u_.m_VehicleSpeedModeVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_WaterSpeedVariantVariant_, other_.m_u_.m_WaterSpeedVariantVariant_);
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

            bool SpeedVariantTypeUnion::operator == (const SpeedVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_AirSpeedVariantVariant_ != other_.m_u_.m_AirSpeedVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_EngineRPMSpeedVariantVariant_ != other_.m_u_.m_EngineRPMSpeedVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_GroundSpeedVariantVariant_ != other_.m_u_.m_GroundSpeedVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D):
                        {  
                            if (m_u_.m_VehicleSpeedModeVariantVariant_ != other_.m_u_.m_VehicleSpeedModeVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_WaterSpeedVariantVariant_ != other_.m_u_.m_WaterSpeedVariantVariant_) {
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

            bool SpeedVariantTypeUnion::operator != (const SpeedVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D):
                        {  
                            o << "AirSpeedVariantVariant: " << sample.AirSpeedVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D):
                        {  
                            o << "EngineRPMSpeedVariantVariant: " << sample.EngineRPMSpeedVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D):
                        {  
                            o << "GroundSpeedVariantVariant: " << sample.GroundSpeedVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D):
                        {  
                            o << "VehicleSpeedModeVariantVariant: " << sample.VehicleSpeedModeVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D):
                        {  
                            o << "WaterSpeedVariantVariant: " << sample.WaterSpeedVariantVariant ();
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

            ::UMAA::Common::Speed::SpeedVariantTypeEnum SpeedVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Speed::SpeedVariantTypeEnum(static_cast< ::UMAA::Common::Speed::SpeedVariantTypeEnum >(0));
            }  

            // ---- SpeedVariantType: 

            SpeedVariantType::SpeedVariantType()  {

            }   

            SpeedVariantType::SpeedVariantType (const ::UMAA::Common::Speed::SpeedVariantTypeUnion& SpeedVariantTypeSubtypes_):
                m_SpeedVariantTypeSubtypes_(SpeedVariantTypeSubtypes_) {
            }

            void SpeedVariantType::swap(SpeedVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_SpeedVariantTypeSubtypes_, other_.m_SpeedVariantTypeSubtypes_);
            }  

            bool SpeedVariantType::operator == (const SpeedVariantType& other_) const {
                if (m_SpeedVariantTypeSubtypes_ != other_.m_SpeedVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool SpeedVariantType::operator != (const SpeedVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "SpeedVariantTypeSubtypes: " << sample.SpeedVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Speed::SpeedVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::SpeedVariantTypeEnum>::value = ::UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Speed::SpeedVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::SpeedVariantTypeEnum>::value = ::UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedVariantTypeEnum_g_tc_members[5]=
                {

                    {
                        (char *)"AIRSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D), 
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
                        (char *)"ENGINERPMSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D), 
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
                        (char *)"GROUNDSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D), 
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
                        (char *)"VEHICLESPEEDMODEVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D), 
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
                        (char *)"WATERSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D), 
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

                static DDS_TypeCode SpeedVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedVariantTypeEnum*/

                if (is_initialized) {
                    return &SpeedVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SpeedVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SpeedVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SpeedVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedVariantTypeEnum_g_sampleAccessInfo;
                }

                SpeedVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                SpeedVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedVariantTypeEnum >;

                SpeedVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedVariantTypeEnum_g_typePlugin = 
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

                return &SpeedVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedVariantTypeUnion_g_tc_members[5]=
                {

                    {
                        (char *)"AirSpeedVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EngineRPMSpeedVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GroundSpeedVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VehicleSpeedModeVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WaterSpeedVariantVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpeedVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedVariantTypeUnion*/

                if (is_initialized) {
                    return &SpeedVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::AirSpeedVariantType>::get().native();
                SpeedVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::EngineRPMSpeedVariantType>::get().native();
                SpeedVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::GroundSpeedVariantType>::get().native();
                SpeedVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::VehicleSpeedModeVariantType>::get().native();
                SpeedVariantTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::WaterSpeedVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                SpeedVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeEnum>::get().native();

                SpeedVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::SpeedVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo SpeedVariantTypeUnion_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::SpeedVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D);
                SpeedVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AirSpeedVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D);
                SpeedVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->EngineRPMSpeedVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D);
                SpeedVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GroundSpeedVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D);
                SpeedVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehicleSpeedModeVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D);
                SpeedVariantTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaterSpeedVariantVariant() - (char *)sample);

                SpeedVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                SpeedVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedVariantTypeUnion >;

                SpeedVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedVariantTypeUnion_g_typePlugin = 
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

                return &SpeedVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::SpeedVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"SpeedVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode SpeedVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SpeedVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedVariantType*/

                if (is_initialized) {
                    return &SpeedVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                SpeedVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::SpeedVariantType *sample;

                static RTIXCdrMemberAccessInfo SpeedVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::SpeedVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedVariantTypeSubtypes() - (char *)sample);

                SpeedVariantType_g_sampleAccessInfo.memberAccessInfos = 
                SpeedVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedVariantType >;

                SpeedVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedVariantType_g_typePlugin = 
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

                return &SpeedVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::SpeedVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::SpeedVariantTypeUnion >::reset_sample(::UMAA::Common::Speed::SpeedVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.AirSpeedVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.EngineRPMSpeedVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.GroundSpeedVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D);
            ::rti::topic::reset_sample(sample.VehicleSpeedModeVariantVariant());
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.WaterSpeedVariantVariant());

            sample._d() = ::UMAA::Common::Speed::SpeedVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedVariantTypeUnion >::allocate_sample(::UMAA::Common::Speed::SpeedVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.AirSpeedVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.EngineRPMSpeedVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.GroundSpeedVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D);
            ::rti::topic::allocate_sample(sample.VehicleSpeedModeVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.WaterSpeedVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Speed::SpeedVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedVariantType >::reset_sample(::UMAA::Common::Speed::SpeedVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.SpeedVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedVariantType >::allocate_sample(::UMAA::Common::Speed::SpeedVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.SpeedVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
