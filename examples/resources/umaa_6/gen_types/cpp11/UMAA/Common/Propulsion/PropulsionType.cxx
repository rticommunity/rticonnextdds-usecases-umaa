

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsionTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsionType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            std::ostream& operator << (std::ostream& o,const PropulsionTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case PropulsionTypeEnum::PROPULSIVEEFFORT_D:
                    o << "PropulsionTypeEnum::PROPULSIVEEFFORT_D" << " ";
                    break;
                    case PropulsionTypeEnum::PROPULSIVERPM_D:
                    o << "PropulsionTypeEnum::PROPULSIVERPM_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- PropulsionTypeUnion: 

            PropulsionTypeUnion::Union_::Union_()  {
            }

            PropulsionTypeUnion::Union_::Union_(const ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortVariant_,const ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMVariant_):
                m_PropulsiveEffortVariant_(PropulsiveEffortVariant_), 
                m_PropulsiveRPMVariant_(PropulsiveRPMVariant_) {
            }

            PropulsionTypeUnion::PropulsionTypeUnion() :m_d_(default_discriminator())
            {
            }

            void PropulsionTypeUnion::swap(PropulsionTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D):
                        {  
                            swap(m_u_.m_PropulsiveEffortVariant_, other_.m_u_.m_PropulsiveEffortVariant_);
                    } break;
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D):
                        {  
                            swap(m_u_.m_PropulsiveRPMVariant_, other_.m_u_.m_PropulsiveRPMVariant_);
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
                        case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D):
                            {  
                                swap(m_u_.m_PropulsiveEffortVariant_, other_.m_u_.m_PropulsiveEffortVariant_);
                        } break;
                        case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D):
                            {  
                                swap(m_u_.m_PropulsiveRPMVariant_, other_.m_u_.m_PropulsiveRPMVariant_);
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

            bool PropulsionTypeUnion::operator == (const PropulsionTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D):
                        {  
                            if (m_u_.m_PropulsiveEffortVariant_ != other_.m_u_.m_PropulsiveEffortVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D):
                        {  
                            if (m_u_.m_PropulsiveRPMVariant_ != other_.m_u_.m_PropulsiveRPMVariant_) {
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

            bool PropulsionTypeUnion::operator != (const PropulsionTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsionTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D):
                        {  
                            o << "PropulsiveEffortVariant: " << sample.PropulsiveEffortVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D):
                        {  
                            o << "PropulsiveRPMVariant: " << sample.PropulsiveRPMVariant ();
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

            ::UMAA::Common::Propulsion::PropulsionTypeEnum PropulsionTypeUnion::default_discriminator() {
                return ::UMAA::Common::Propulsion::PropulsionTypeEnum(static_cast< ::UMAA::Common::Propulsion::PropulsionTypeEnum >(0));
            }  

            // ---- PropulsionType: 

            PropulsionType::PropulsionType()  {

            }   

            PropulsionType::PropulsionType (const ::UMAA::Common::Propulsion::PropulsionTypeUnion& PropulsionTypeSubtypes_):
                m_PropulsionTypeSubtypes_(PropulsionTypeSubtypes_) {
            }

            void PropulsionType::swap(PropulsionType& other_)  noexcept 
            {
                using std::swap;
                swap(m_PropulsionTypeSubtypes_, other_.m_PropulsionTypeSubtypes_);
            }  

            bool PropulsionType::operator == (const PropulsionType& other_) const {
                if (m_PropulsionTypeSubtypes_ != other_.m_PropulsionTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool PropulsionType::operator != (const PropulsionType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsionType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "PropulsionTypeSubtypes: " << sample.PropulsionTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Propulsion::PropulsionTypeEnum default_enumerator< ::UMAA::Common::Propulsion::PropulsionTypeEnum>::value = ::UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Propulsion::PropulsionTypeEnum default_enumerator< ::UMAA::Common::Propulsion::PropulsionTypeEnum>::value = ::UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"PROPULSIVEEFFORT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D), 
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
                        (char *)"PROPULSIVERPM_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D), 
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

                static DDS_TypeCode PropulsionTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionTypeEnum*/

                if (is_initialized) {
                    return &PropulsionTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PropulsionTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PropulsionTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PropulsionTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PropulsionTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionTypeEnum_g_sampleAccessInfo;
                }

                PropulsionTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PropulsionTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionTypeEnum >;

                PropulsionTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionTypeEnum_g_typePlugin = 
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

                return &PropulsionTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"PropulsiveEffortVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PropulsiveRPMVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PropulsionTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionTypeUnion*/

                if (is_initialized) {
                    return &PropulsionTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsiveEffortType>::get().native();
                PropulsionTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsiveRPMType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                PropulsionTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeEnum>::get().native();

                PropulsionTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsionTypeUnion *sample;

                static RTIXCdrMemberAccessInfo PropulsionTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsionTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D);
                PropulsionTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveEffortVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D);
                PropulsionTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveRPMVariant() - (char *)sample);

                PropulsionTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionTypeUnion >;

                PropulsionTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionTypeUnion_g_typePlugin = 
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

                return &PropulsionTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionType_g_tc_members[1]=
                {

                    {
                        (char *)"PropulsionTypeSubtypes",/* Member name */
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

                static DDS_TypeCode PropulsionType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsionType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionType*/

                if (is_initialized) {
                    return &PropulsionType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                PropulsionType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsionType *sample;

                static RTIXCdrMemberAccessInfo PropulsionType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsionType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsionTypeSubtypes() - (char *)sample);

                PropulsionType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionType >;

                PropulsionType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionType_g_typePlugin = 
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

                return &PropulsionType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionTypeUnion >::reset_sample(::UMAA::Common::Propulsion::PropulsionTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D);
            ::rti::topic::reset_sample(sample.PropulsiveEffortVariant());
            sample._d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D);
            ::rti::topic::reset_sample(sample.PropulsiveRPMVariant());

            sample._d() = ::UMAA::Common::Propulsion::PropulsionTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionTypeUnion >::allocate_sample(::UMAA::Common::Propulsion::PropulsionTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D);
            ::rti::topic::allocate_sample(sample.PropulsiveEffortVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D);
            ::rti::topic::allocate_sample(sample.PropulsiveRPMVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Propulsion::PropulsionTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionType >::reset_sample(::UMAA::Common::Propulsion::PropulsionType& sample) 
        {
            ::rti::topic::reset_sample(sample.PropulsionTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionType >::allocate_sample(::UMAA::Common::Propulsion::PropulsionType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.PropulsionTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
