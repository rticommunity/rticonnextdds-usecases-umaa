

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSAdditionalConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "FLSAdditionalConfigTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FLSAdditionalConfigType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BaseType {

            std::ostream& operator << (std::ostream& o,const FLSAdditionalConfigTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D:
                    o << "FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D" << " ";
                    break;
                    case FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D:
                    o << "FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D" << " ";
                    break;
                    case FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D:
                    o << "FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- FLSAdditionalConfigTypeUnion: 

            FLSAdditionalConfigTypeUnion::Union_::Union_()  {
            }

            FLSAdditionalConfigTypeUnion::Union_::Union_(const ::UMAA::SEM::BaseType::FLSConfigSearchBottomType& FLSConfigSearchBottomVariant_,const ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& FLSConfigSearchVolumeVariant_,const ::UMAA::SEM::BaseType::FLSConfigTestType& FLSConfigTestVariant_):
                m_FLSConfigSearchBottomVariant_(FLSConfigSearchBottomVariant_), 
                m_FLSConfigSearchVolumeVariant_(FLSConfigSearchVolumeVariant_), 
                m_FLSConfigTestVariant_(FLSConfigTestVariant_) {
            }

            FLSAdditionalConfigTypeUnion::FLSAdditionalConfigTypeUnion() :m_d_(default_discriminator())
            {
            }

            void FLSAdditionalConfigTypeUnion::swap(FLSAdditionalConfigTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D):
                        {  
                            swap(m_u_.m_FLSConfigSearchBottomVariant_, other_.m_u_.m_FLSConfigSearchBottomVariant_);
                    } break;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D):
                        {  
                            swap(m_u_.m_FLSConfigSearchVolumeVariant_, other_.m_u_.m_FLSConfigSearchVolumeVariant_);
                    } break;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D):
                        {  
                            swap(m_u_.m_FLSConfigTestVariant_, other_.m_u_.m_FLSConfigTestVariant_);
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
                        case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D):
                            {  
                                swap(m_u_.m_FLSConfigSearchBottomVariant_, other_.m_u_.m_FLSConfigSearchBottomVariant_);
                        } break;
                        case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D):
                            {  
                                swap(m_u_.m_FLSConfigSearchVolumeVariant_, other_.m_u_.m_FLSConfigSearchVolumeVariant_);
                        } break;
                        case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D):
                            {  
                                swap(m_u_.m_FLSConfigTestVariant_, other_.m_u_.m_FLSConfigTestVariant_);
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

            bool FLSAdditionalConfigTypeUnion::operator == (const FLSAdditionalConfigTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D):
                        {  
                            if (m_u_.m_FLSConfigSearchBottomVariant_ != other_.m_u_.m_FLSConfigSearchBottomVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D):
                        {  
                            if (m_u_.m_FLSConfigSearchVolumeVariant_ != other_.m_u_.m_FLSConfigSearchVolumeVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D):
                        {  
                            if (m_u_.m_FLSConfigTestVariant_ != other_.m_u_.m_FLSConfigTestVariant_) {
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

            bool FLSAdditionalConfigTypeUnion::operator != (const FLSAdditionalConfigTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FLSAdditionalConfigTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D):
                        {  
                            o << "FLSConfigSearchBottomVariant: " << sample.FLSConfigSearchBottomVariant ()<<", ";
                    } break ;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D):
                        {  
                            o << "FLSConfigSearchVolumeVariant: " << sample.FLSConfigSearchVolumeVariant ()<<", ";
                    } break ;
                    case (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D):
                        {  
                            o << "FLSConfigTestVariant: " << sample.FLSConfigTestVariant ();
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

            ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum FLSAdditionalConfigTypeUnion::default_discriminator() {
                return ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum(static_cast< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum >(0));
            }  

            // ---- FLSAdditionalConfigType: 

            FLSAdditionalConfigType::FLSAdditionalConfigType()  {

            }   

            FLSAdditionalConfigType::FLSAdditionalConfigType (const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& FLSAdditionalConfigTypeSubtypes_):
                m_FLSAdditionalConfigTypeSubtypes_(FLSAdditionalConfigTypeSubtypes_) {
            }

            void FLSAdditionalConfigType::swap(FLSAdditionalConfigType& other_)  noexcept 
            {
                using std::swap;
                swap(m_FLSAdditionalConfigTypeSubtypes_, other_.m_FLSAdditionalConfigTypeSubtypes_);
            }  

            bool FLSAdditionalConfigType::operator == (const FLSAdditionalConfigType& other_) const {
                if (m_FLSAdditionalConfigTypeSubtypes_ != other_.m_FLSAdditionalConfigTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool FLSAdditionalConfigType::operator != (const FLSAdditionalConfigType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FLSAdditionalConfigType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "FLSAdditionalConfigTypeSubtypes: " << sample.FLSAdditionalConfigTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace SEM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum default_enumerator< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum>::value = ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum default_enumerator< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum>::value = ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D;
        template<>
        struct native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSAdditionalConfigTypeEnum_g_tc_members[3]=
                {

                    {
                        (char *)"FLSCONFIGSEARCHBOTTOM_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D), 
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
                        (char *)"FLSCONFIGSEARCHVOLUME_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D), 
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
                        (char *)"FLSCONFIGTEST_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D), 
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

                static DDS_TypeCode FLSAdditionalConfigTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        FLSAdditionalConfigTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSAdditionalConfigTypeEnum*/

                if (is_initialized) {
                    return &FLSAdditionalConfigTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSAdditionalConfigTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                FLSAdditionalConfigTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSAdditionalConfigTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                FLSAdditionalConfigTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSAdditionalConfigTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSAdditionalConfigTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FLSAdditionalConfigTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSAdditionalConfigTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigTypeEnum_g_sampleAccessInfo;
                }

                FLSAdditionalConfigTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                FLSAdditionalConfigTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum >;

                FLSAdditionalConfigTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSAdditionalConfigTypeEnum_g_typePlugin = 
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

                return &FLSAdditionalConfigTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSAdditionalConfigTypeUnion_g_tc_members[3]=
                {

                    {
                        (char *)"FLSConfigSearchBottomVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FLSConfigSearchVolumeVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FLSConfigTestVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode FLSAdditionalConfigTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        FLSAdditionalConfigTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSAdditionalConfigTypeUnion*/

                if (is_initialized) {
                    return &FLSAdditionalConfigTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSAdditionalConfigTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FLSAdditionalConfigTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::BaseType::FLSConfigSearchBottomType>::get().native();
                FLSAdditionalConfigTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType>::get().native();
                FLSAdditionalConfigTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::BaseType::FLSConfigTestType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                FLSAdditionalConfigTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum>::get().native();

                FLSAdditionalConfigTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSAdditionalConfigTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSAdditionalConfigTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion *sample;

                static RTIXCdrMemberAccessInfo FLSAdditionalConfigTypeUnion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSAdditionalConfigTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                FLSAdditionalConfigTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D);
                FLSAdditionalConfigTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FLSConfigSearchBottomVariant() - (char *)sample);

                sample->_d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D);
                FLSAdditionalConfigTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FLSConfigSearchVolumeVariant() - (char *)sample);

                sample->_d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D);
                FLSAdditionalConfigTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FLSConfigTestVariant() - (char *)sample);

                FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                FLSAdditionalConfigTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion >;

                FLSAdditionalConfigTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSAdditionalConfigTypeUnion_g_typePlugin = 
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

                return &FLSAdditionalConfigTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSAdditionalConfigType_g_tc_members[1]=
                {

                    {
                        (char *)"FLSAdditionalConfigTypeSubtypes",/* Member name */
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

                static DDS_TypeCode FLSAdditionalConfigType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::FLSAdditionalConfigType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FLSAdditionalConfigType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSAdditionalConfigType*/

                if (is_initialized) {
                    return &FLSAdditionalConfigType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSAdditionalConfigType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FLSAdditionalConfigType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                FLSAdditionalConfigType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSAdditionalConfigType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSAdditionalConfigType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BaseType::FLSAdditionalConfigType *sample;

                static RTIXCdrMemberAccessInfo FLSAdditionalConfigType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSAdditionalConfigType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BaseType::FLSAdditionalConfigType);
                if (sample == NULL) {
                    return NULL;
                }

                FLSAdditionalConfigType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FLSAdditionalConfigTypeSubtypes() - (char *)sample);

                FLSAdditionalConfigType_g_sampleAccessInfo.memberAccessInfos = 
                FLSAdditionalConfigType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::FLSAdditionalConfigType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSAdditionalConfigType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSAdditionalConfigType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSAdditionalConfigType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSAdditionalConfigType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::FLSAdditionalConfigType >;

                FLSAdditionalConfigType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSAdditionalConfigType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSAdditionalConfigType_g_typePlugin = 
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

                return &FLSAdditionalConfigType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::FLSAdditionalConfigType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion >::reset_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& sample) 
        {
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D);
            ::rti::topic::reset_sample(sample.FLSConfigSearchBottomVariant());
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D);
            ::rti::topic::reset_sample(sample.FLSConfigSearchVolumeVariant());
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D);
            ::rti::topic::reset_sample(sample.FLSConfigTestVariant());

            sample._d() = ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion >::allocate_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D);
            ::rti::topic::allocate_sample(sample.FLSConfigSearchBottomVariant(),  -1, -1);
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D);
            ::rti::topic::allocate_sample(sample.FLSConfigSearchVolumeVariant(),  -1, -1);
            sample._d() = (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D);
            ::rti::topic::allocate_sample(sample.FLSConfigTestVariant(),  -1, -1);

            sample._d() = ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigType >::reset_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigType& sample) 
        {
            ::rti::topic::reset_sample(sample.FLSAdditionalConfigTypeSubtypes());
        }

        void topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigType >::allocate_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.FLSAdditionalConfigTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
