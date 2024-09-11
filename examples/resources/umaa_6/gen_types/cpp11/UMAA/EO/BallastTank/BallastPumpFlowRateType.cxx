

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BallastPumpFlowRateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastPumpFlowRateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D:
                    o << "BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D" << " ";
                    break;
                    case BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D:
                    o << "BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- BallastPumpFlowRateTypeUnion: 

            BallastPumpFlowRateTypeUnion::Union_::Union_()  {
            }

            BallastPumpFlowRateTypeUnion::Union_::Union_(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateVariant_,const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateVariant_):
                m_MassBallastFlowRateVariant_(MassBallastFlowRateVariant_), 
                m_VolumeBallastFlowRateVariant_(VolumeBallastFlowRateVariant_) {
            }

            BallastPumpFlowRateTypeUnion::BallastPumpFlowRateTypeUnion() :m_d_(default_discriminator())
            {
            }

            void BallastPumpFlowRateTypeUnion::swap(BallastPumpFlowRateTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D):
                        {  
                            swap(m_u_.m_MassBallastFlowRateVariant_, other_.m_u_.m_MassBallastFlowRateVariant_);
                    } break;
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D):
                        {  
                            swap(m_u_.m_VolumeBallastFlowRateVariant_, other_.m_u_.m_VolumeBallastFlowRateVariant_);
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
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D):
                            {  
                                swap(m_u_.m_MassBallastFlowRateVariant_, other_.m_u_.m_MassBallastFlowRateVariant_);
                        } break;
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D):
                            {  
                                swap(m_u_.m_VolumeBallastFlowRateVariant_, other_.m_u_.m_VolumeBallastFlowRateVariant_);
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

            bool BallastPumpFlowRateTypeUnion::operator == (const BallastPumpFlowRateTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D):
                        {  
                            if (m_u_.m_MassBallastFlowRateVariant_ != other_.m_u_.m_MassBallastFlowRateVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D):
                        {  
                            if (m_u_.m_VolumeBallastFlowRateVariant_ != other_.m_u_.m_VolumeBallastFlowRateVariant_) {
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

            bool BallastPumpFlowRateTypeUnion::operator != (const BallastPumpFlowRateTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D):
                        {  
                            o << "MassBallastFlowRateVariant: " << sample.MassBallastFlowRateVariant ()<<", ";
                    } break ;
                    case (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D):
                        {  
                            o << "VolumeBallastFlowRateVariant: " << sample.VolumeBallastFlowRateVariant ();
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

            ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum BallastPumpFlowRateTypeUnion::default_discriminator() {
                return ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum(static_cast< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum >(0));
            }  

            // ---- BallastPumpFlowRateType: 

            BallastPumpFlowRateType::BallastPumpFlowRateType()  {

            }   

            BallastPumpFlowRateType::BallastPumpFlowRateType (const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& BallastPumpFlowRateTypeSubtypes_):
                m_BallastPumpFlowRateTypeSubtypes_(BallastPumpFlowRateTypeSubtypes_) {
            }

            void BallastPumpFlowRateType::swap(BallastPumpFlowRateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_BallastPumpFlowRateTypeSubtypes_, other_.m_BallastPumpFlowRateTypeSubtypes_);
            }  

            bool BallastPumpFlowRateType::operator == (const BallastPumpFlowRateType& other_) const {
                if (m_BallastPumpFlowRateTypeSubtypes_ != other_.m_BallastPumpFlowRateTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool BallastPumpFlowRateType::operator != (const BallastPumpFlowRateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "BallastPumpFlowRateTypeSubtypes: " << sample.BallastPumpFlowRateTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum>::value = ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum>::value = ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D;
        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"MASSBALLASTFLOWRATE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D), 
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
                        (char *)"VOLUMEBALLASTFLOWRATE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D), 
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

                static DDS_TypeCode BallastPumpFlowRateTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastPumpFlowRateTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateTypeEnum*/

                if (is_initialized) {
                    return &BallastPumpFlowRateTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BallastPumpFlowRateTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BallastPumpFlowRateTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BallastPumpFlowRateTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateTypeEnum_g_sampleAccessInfo;
                }

                BallastPumpFlowRateTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum >;

                BallastPumpFlowRateTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateTypeEnum_g_typePlugin = 
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

                return &BallastPumpFlowRateTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"MassBallastFlowRateVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VolumeBallastFlowRateVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastPumpFlowRateTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastPumpFlowRateTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateTypeUnion*/

                if (is_initialized) {
                    return &BallastPumpFlowRateTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastPumpFlowRateTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::MassBallastFlowRateType>::get().native();
                BallastPumpFlowRateTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::VolumeBallastFlowRateType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                BallastPumpFlowRateTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum>::get().native();

                BallastPumpFlowRateTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion *sample;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                BallastPumpFlowRateTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D);
                BallastPumpFlowRateTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MassBallastFlowRateVariant() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D);
                BallastPumpFlowRateTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VolumeBallastFlowRateVariant() - (char *)sample);

                BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion >;

                BallastPumpFlowRateTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateTypeUnion_g_typePlugin = 
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

                return &BallastPumpFlowRateTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateType_g_tc_members[1]=
                {

                    {
                        (char *)"BallastPumpFlowRateTypeSubtypes",/* Member name */
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

                static DDS_TypeCode BallastPumpFlowRateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BallastPumpFlowRateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateType*/

                if (is_initialized) {
                    return &BallastPumpFlowRateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastPumpFlowRateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                BallastPumpFlowRateType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType *sample;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastPumpFlowRateType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastPumpFlowRateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastPumpFlowRateTypeSubtypes() - (char *)sample);

                BallastPumpFlowRateType_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >;

                BallastPumpFlowRateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateType_g_typePlugin = 
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

                return &BallastPumpFlowRateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion >::reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& sample) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D);
            ::rti::topic::reset_sample(sample.MassBallastFlowRateVariant());
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D);
            ::rti::topic::reset_sample(sample.VolumeBallastFlowRateVariant());

            sample._d() = ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion >::allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D);
            ::rti::topic::allocate_sample(sample.MassBallastFlowRateVariant(),  -1, -1);
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D);
            ::rti::topic::allocate_sample(sample.VolumeBallastFlowRateVariant(),  -1, -1);

            sample._d() = ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample) 
        {
            ::rti::topic::reset_sample(sample.BallastPumpFlowRateTypeSubtypes());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.BallastPumpFlowRateTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
