

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MessageFilterTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MessageFilterType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace Filter {

            std::ostream& operator << (std::ostream& o,const MessageFilterTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case MessageFilterTypeEnum::ALLFILTER_D:
                    o << "MessageFilterTypeEnum::ALLFILTER_D" << " ";
                    break;
                    case MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D:
                    o << "MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D" << " ";
                    break;
                    case MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D:
                    o << "MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- MessageFilterTypeUnion: 

            MessageFilterTypeUnion::Union_::Union_()  {
            }

            MessageFilterTypeUnion::Union_::Union_(const ::UMAA::CO::Filter::AllFilterType& AllFilterVariant_,const ::UMAA::CO::Filter::DecimateStructureFilterType& DecimateStructureFilterVariant_,const ::UMAA::CO::Filter::SendOnlyIfChangedFilterType& SendOnlyIfChangedFilterVariant_):
                m_AllFilterVariant_(AllFilterVariant_), 
                m_DecimateStructureFilterVariant_(DecimateStructureFilterVariant_), 
                m_SendOnlyIfChangedFilterVariant_(SendOnlyIfChangedFilterVariant_) {
            }

            MessageFilterTypeUnion::MessageFilterTypeUnion() :m_d_(default_discriminator())
            {
            }

            void MessageFilterTypeUnion::swap(MessageFilterTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D):
                        {  
                            swap(m_u_.m_AllFilterVariant_, other_.m_u_.m_AllFilterVariant_);
                    } break;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D):
                        {  
                            swap(m_u_.m_DecimateStructureFilterVariant_, other_.m_u_.m_DecimateStructureFilterVariant_);
                    } break;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D):
                        {  
                            swap(m_u_.m_SendOnlyIfChangedFilterVariant_, other_.m_u_.m_SendOnlyIfChangedFilterVariant_);
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
                        case (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D):
                            {  
                                swap(m_u_.m_AllFilterVariant_, other_.m_u_.m_AllFilterVariant_);
                        } break;
                        case (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D):
                            {  
                                swap(m_u_.m_DecimateStructureFilterVariant_, other_.m_u_.m_DecimateStructureFilterVariant_);
                        } break;
                        case (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D):
                            {  
                                swap(m_u_.m_SendOnlyIfChangedFilterVariant_, other_.m_u_.m_SendOnlyIfChangedFilterVariant_);
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

            bool MessageFilterTypeUnion::operator == (const MessageFilterTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D):
                        {  
                            if (m_u_.m_AllFilterVariant_ != other_.m_u_.m_AllFilterVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D):
                        {  
                            if (m_u_.m_DecimateStructureFilterVariant_ != other_.m_u_.m_DecimateStructureFilterVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D):
                        {  
                            if (m_u_.m_SendOnlyIfChangedFilterVariant_ != other_.m_u_.m_SendOnlyIfChangedFilterVariant_) {
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

            bool MessageFilterTypeUnion::operator != (const MessageFilterTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MessageFilterTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D):
                        {  
                            o << "AllFilterVariant: " << sample.AllFilterVariant ()<<", ";
                    } break ;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D):
                        {  
                            o << "DecimateStructureFilterVariant: " << sample.DecimateStructureFilterVariant ()<<", ";
                    } break ;
                    case (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D):
                        {  
                            o << "SendOnlyIfChangedFilterVariant: " << sample.SendOnlyIfChangedFilterVariant ();
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

            ::UMAA::CO::Filter::MessageFilterTypeEnum MessageFilterTypeUnion::default_discriminator() {
                return ::UMAA::CO::Filter::MessageFilterTypeEnum(static_cast< ::UMAA::CO::Filter::MessageFilterTypeEnum >(0));
            }  

            // ---- MessageFilterType: 

            MessageFilterType::MessageFilterType()  {

            }   

            MessageFilterType::MessageFilterType (const ::UMAA::CO::Filter::MessageFilterTypeUnion& MessageFilterTypeSubtypes_):
                m_MessageFilterTypeSubtypes_(MessageFilterTypeSubtypes_) {
            }

            void MessageFilterType::swap(MessageFilterType& other_)  noexcept 
            {
                using std::swap;
                swap(m_MessageFilterTypeSubtypes_, other_.m_MessageFilterTypeSubtypes_);
            }  

            bool MessageFilterType::operator == (const MessageFilterType& other_) const {
                if (m_MessageFilterTypeSubtypes_ != other_.m_MessageFilterTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool MessageFilterType::operator != (const MessageFilterType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MessageFilterType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "MessageFilterTypeSubtypes: " << sample.MessageFilterTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Filter  

    } // namespace CO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::CO::Filter::MessageFilterTypeEnum default_enumerator< ::UMAA::CO::Filter::MessageFilterTypeEnum>::value = ::UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::CO::Filter::MessageFilterTypeEnum default_enumerator< ::UMAA::CO::Filter::MessageFilterTypeEnum>::value = ::UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D;
        template<>
        struct native_type_code< ::UMAA::CO::Filter::MessageFilterTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MessageFilterTypeEnum_g_tc_members[3]=
                {

                    {
                        (char *)"ALLFILTER_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D), 
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
                        (char *)"DECIMATESTRUCTUREFILTER_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D), 
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
                        (char *)"SENDONLYIFCHANGEDFILTER_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D), 
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

                static DDS_TypeCode MessageFilterTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::Filter::MessageFilterTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MessageFilterTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MessageFilterTypeEnum*/

                if (is_initialized) {
                    return &MessageFilterTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                MessageFilterTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                MessageFilterTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MessageFilterTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                MessageFilterTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                MessageFilterTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &MessageFilterTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MessageFilterTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MessageFilterTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MessageFilterTypeEnum_g_sampleAccessInfo;
                }

                MessageFilterTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MessageFilterTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                MessageFilterTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::Filter::MessageFilterTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MessageFilterTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MessageFilterTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MessageFilterTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MessageFilterTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::Filter::MessageFilterTypeEnum >;

                MessageFilterTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MessageFilterTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MessageFilterTypeEnum_g_typePlugin = 
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

                return &MessageFilterTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::Filter::MessageFilterTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::CO::Filter::MessageFilterTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MessageFilterTypeUnion_g_tc_members[3]=
                {

                    {
                        (char *)"AllFilterVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DecimateStructureFilterVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SendOnlyIfChangedFilterVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MessageFilterTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::Filter::MessageFilterTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MessageFilterTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MessageFilterTypeUnion*/

                if (is_initialized) {
                    return &MessageFilterTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                MessageFilterTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MessageFilterTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::Filter::AllFilterType>::get().native();
                MessageFilterTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::Filter::DecimateStructureFilterType>::get().native();
                MessageFilterTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                MessageFilterTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeEnum>::get().native();

                MessageFilterTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                MessageFilterTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &MessageFilterTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::Filter::MessageFilterTypeUnion *sample;

                static RTIXCdrMemberAccessInfo MessageFilterTypeUnion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MessageFilterTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MessageFilterTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::Filter::MessageFilterTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                MessageFilterTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D);
                MessageFilterTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AllFilterVariant() - (char *)sample);

                sample->_d() = (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D);
                MessageFilterTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DecimateStructureFilterVariant() - (char *)sample);

                sample->_d() = (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D);
                MessageFilterTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SendOnlyIfChangedFilterVariant() - (char *)sample);

                MessageFilterTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                MessageFilterTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::Filter::MessageFilterTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MessageFilterTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MessageFilterTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MessageFilterTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MessageFilterTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::Filter::MessageFilterTypeUnion >;

                MessageFilterTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MessageFilterTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MessageFilterTypeUnion_g_typePlugin = 
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

                return &MessageFilterTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::Filter::MessageFilterTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::CO::Filter::MessageFilterType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MessageFilterType_g_tc_members[1]=
                {

                    {
                        (char *)"MessageFilterTypeSubtypes",/* Member name */
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

                static DDS_TypeCode MessageFilterType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::Filter::MessageFilterType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MessageFilterType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MessageFilterType*/

                if (is_initialized) {
                    return &MessageFilterType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MessageFilterType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MessageFilterType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                MessageFilterType_g_tc._data._sampleAccessInfo = sample_access_info();
                MessageFilterType_g_tc._data._typePlugin = type_plugin_info();    

                return &MessageFilterType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::Filter::MessageFilterType *sample;

                static RTIXCdrMemberAccessInfo MessageFilterType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MessageFilterType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MessageFilterType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::Filter::MessageFilterType);
                if (sample == NULL) {
                    return NULL;
                }

                MessageFilterType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MessageFilterTypeSubtypes() - (char *)sample);

                MessageFilterType_g_sampleAccessInfo.memberAccessInfos = 
                MessageFilterType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::Filter::MessageFilterType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MessageFilterType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MessageFilterType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MessageFilterType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MessageFilterType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::Filter::MessageFilterType >;

                MessageFilterType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MessageFilterType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MessageFilterType_g_typePlugin = 
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

                return &MessageFilterType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::Filter::MessageFilterType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::Filter::MessageFilterType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::Filter::MessageFilterTypeUnion >::reset_sample(::UMAA::CO::Filter::MessageFilterTypeUnion& sample) 
        {
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D);
            ::rti::topic::reset_sample(sample.AllFilterVariant());
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D);
            ::rti::topic::reset_sample(sample.DecimateStructureFilterVariant());
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D);
            ::rti::topic::reset_sample(sample.SendOnlyIfChangedFilterVariant());

            sample._d() = ::UMAA::CO::Filter::MessageFilterTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::CO::Filter::MessageFilterTypeUnion >::allocate_sample(::UMAA::CO::Filter::MessageFilterTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D);
            ::rti::topic::allocate_sample(sample.AllFilterVariant(),  -1, -1);
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D);
            ::rti::topic::allocate_sample(sample.DecimateStructureFilterVariant(),  -1, -1);
            sample._d() = (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D);
            ::rti::topic::allocate_sample(sample.SendOnlyIfChangedFilterVariant(),  -1, -1);

            sample._d() = ::UMAA::CO::Filter::MessageFilterTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::CO::Filter::MessageFilterType >::reset_sample(::UMAA::CO::Filter::MessageFilterType& sample) 
        {
            ::rti::topic::reset_sample(sample.MessageFilterTypeSubtypes());
        }

        void topic_type_support< ::UMAA::CO::Filter::MessageFilterType >::allocate_sample(::UMAA::CO::Filter::MessageFilterType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.MessageFilterTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
