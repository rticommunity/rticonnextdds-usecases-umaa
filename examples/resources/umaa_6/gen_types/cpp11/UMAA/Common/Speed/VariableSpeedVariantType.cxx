

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "VariableSpeedVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "VariableSpeedVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            std::ostream& operator << (std::ostream& o,const VariableSpeedVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D:
                    o << "VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D" << " ";
                    break;
                    case VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D:
                    o << "VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D" << " ";
                    break;
                    case VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D:
                    o << "VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- VariableSpeedVariantTypeUnion: 

            VariableSpeedVariantTypeUnion::Union_::Union_()  {
            }

            VariableSpeedVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Speed::RecommendedSpeedVariantType& RecommendedSpeedVariantVariant_,const ::UMAA::Common::Speed::RequiredSpeedVariantType& RequiredSpeedVariantVariant_,const ::UMAA::Common::Speed::TimeWithSpeedVariantType& TimeWithSpeedVariantVariant_):
                m_RecommendedSpeedVariantVariant_(RecommendedSpeedVariantVariant_), 
                m_RequiredSpeedVariantVariant_(RequiredSpeedVariantVariant_), 
                m_TimeWithSpeedVariantVariant_(TimeWithSpeedVariantVariant_) {
            }

            VariableSpeedVariantTypeUnion::VariableSpeedVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void VariableSpeedVariantTypeUnion::swap(VariableSpeedVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_RecommendedSpeedVariantVariant_, other_.m_u_.m_RecommendedSpeedVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_RequiredSpeedVariantVariant_, other_.m_u_.m_RequiredSpeedVariantVariant_);
                    } break;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D):
                        {  
                            swap(m_u_.m_TimeWithSpeedVariantVariant_, other_.m_u_.m_TimeWithSpeedVariantVariant_);
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
                        case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_RecommendedSpeedVariantVariant_, other_.m_u_.m_RecommendedSpeedVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_RequiredSpeedVariantVariant_, other_.m_u_.m_RequiredSpeedVariantVariant_);
                        } break;
                        case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D):
                            {  
                                swap(m_u_.m_TimeWithSpeedVariantVariant_, other_.m_u_.m_TimeWithSpeedVariantVariant_);
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

            bool VariableSpeedVariantTypeUnion::operator == (const VariableSpeedVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_RecommendedSpeedVariantVariant_ != other_.m_u_.m_RecommendedSpeedVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_RequiredSpeedVariantVariant_ != other_.m_u_.m_RequiredSpeedVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D):
                        {  
                            if (m_u_.m_TimeWithSpeedVariantVariant_ != other_.m_u_.m_TimeWithSpeedVariantVariant_) {
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

            bool VariableSpeedVariantTypeUnion::operator != (const VariableSpeedVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VariableSpeedVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D):
                        {  
                            o << "RecommendedSpeedVariantVariant: " << sample.RecommendedSpeedVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D):
                        {  
                            o << "RequiredSpeedVariantVariant: " << sample.RequiredSpeedVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D):
                        {  
                            o << "TimeWithSpeedVariantVariant: " << sample.TimeWithSpeedVariantVariant ();
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

            ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum VariableSpeedVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum(static_cast< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum >(0));
            }  

            // ---- VariableSpeedVariantType: 

            VariableSpeedVariantType::VariableSpeedVariantType()  {

            }   

            VariableSpeedVariantType::VariableSpeedVariantType (const ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& VariableSpeedVariantTypeSubtypes_):
                m_VariableSpeedVariantTypeSubtypes_(VariableSpeedVariantTypeSubtypes_) {
            }

            void VariableSpeedVariantType::swap(VariableSpeedVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_VariableSpeedVariantTypeSubtypes_, other_.m_VariableSpeedVariantTypeSubtypes_);
            }  

            bool VariableSpeedVariantType::operator == (const VariableSpeedVariantType& other_) const {
                if (m_VariableSpeedVariantTypeSubtypes_ != other_.m_VariableSpeedVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool VariableSpeedVariantType::operator != (const VariableSpeedVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VariableSpeedVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "VariableSpeedVariantTypeSubtypes: " << sample.VariableSpeedVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum>::value = ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum default_enumerator< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum>::value = ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedVariantTypeEnum_g_tc_members[3]=
                {

                    {
                        (char *)"RECOMMENDEDSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D), 
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
                        (char *)"REQUIREDSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D), 
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
                        (char *)"TIMEWITHSPEEDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D), 
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

                static DDS_TypeCode VariableSpeedVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::VariableSpeedVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        VariableSpeedVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedVariantTypeEnum*/

                if (is_initialized) {
                    return &VariableSpeedVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                VariableSpeedVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                VariableSpeedVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VariableSpeedVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                VariableSpeedVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &VariableSpeedVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VariableSpeedVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantTypeEnum_g_sampleAccessInfo;
                }

                VariableSpeedVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VariableSpeedVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::VariableSpeedVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum >;

                VariableSpeedVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedVariantTypeEnum_g_typePlugin = 
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

                return &VariableSpeedVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedVariantTypeUnion_g_tc_members[3]=
                {

                    {
                        (char *)"RecommendedSpeedVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RequiredSpeedVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TimeWithSpeedVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VariableSpeedVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::VariableSpeedVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        VariableSpeedVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedVariantTypeUnion*/

                if (is_initialized) {
                    return &VariableSpeedVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                VariableSpeedVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VariableSpeedVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::RecommendedSpeedVariantType>::get().native();
                VariableSpeedVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::RequiredSpeedVariantType>::get().native();
                VariableSpeedVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::TimeWithSpeedVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                VariableSpeedVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum>::get().native();

                VariableSpeedVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &VariableSpeedVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo VariableSpeedVariantTypeUnion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                VariableSpeedVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D);
                VariableSpeedVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RecommendedSpeedVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D);
                VariableSpeedVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequiredSpeedVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D);
                VariableSpeedVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->TimeWithSpeedVariantVariant() - (char *)sample);

                VariableSpeedVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion >;

                VariableSpeedVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedVariantTypeUnion_g_typePlugin = 
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

                return &VariableSpeedVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"VariableSpeedVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode VariableSpeedVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::VariableSpeedVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        VariableSpeedVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedVariantType*/

                if (is_initialized) {
                    return &VariableSpeedVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                VariableSpeedVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VariableSpeedVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                VariableSpeedVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &VariableSpeedVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::VariableSpeedVariantType *sample;

                static RTIXCdrMemberAccessInfo VariableSpeedVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::VariableSpeedVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                VariableSpeedVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VariableSpeedVariantTypeSubtypes() - (char *)sample);

                VariableSpeedVariantType_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::VariableSpeedVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::VariableSpeedVariantType >;

                VariableSpeedVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedVariantType_g_typePlugin = 
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

                return &VariableSpeedVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::VariableSpeedVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion >::reset_sample(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.RecommendedSpeedVariantVariant());
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.RequiredSpeedVariantVariant());
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D);
            ::rti::topic::reset_sample(sample.TimeWithSpeedVariantVariant());

            sample._d() = ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion >::allocate_sample(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.RecommendedSpeedVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.RequiredSpeedVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D);
            ::rti::topic::allocate_sample(sample.TimeWithSpeedVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantType >::reset_sample(::UMAA::Common::Speed::VariableSpeedVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.VariableSpeedVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantType >::allocate_sample(::UMAA::Common::Speed::VariableSpeedVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.VariableSpeedVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
