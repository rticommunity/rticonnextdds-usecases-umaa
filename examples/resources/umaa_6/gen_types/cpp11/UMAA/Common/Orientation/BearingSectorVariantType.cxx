

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BearingSectorVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BearingSectorVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            std::ostream& operator << (std::ostream& o,const BearingSectorVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D:
                    o << "BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D" << " ";
                    break;
                    case BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D:
                    o << "BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D" << " ";
                    break;
                    case BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D:
                    o << "BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- BearingSectorVariantTypeUnion: 

            BearingSectorVariantTypeUnion::Union_::Union_()  {
            }

            BearingSectorVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType& BearingSectorGuideCourseVariantVariant_,const ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& BearingSectorMagneticNorthVariantVariant_,const ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType& BearingSectorTrueNorthVariantVariant_):
                m_BearingSectorGuideCourseVariantVariant_(BearingSectorGuideCourseVariantVariant_), 
                m_BearingSectorMagneticNorthVariantVariant_(BearingSectorMagneticNorthVariantVariant_), 
                m_BearingSectorTrueNorthVariantVariant_(BearingSectorTrueNorthVariantVariant_) {
            }

            BearingSectorVariantTypeUnion::BearingSectorVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void BearingSectorVariantTypeUnion::swap(BearingSectorVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D):
                        {  
                            swap(m_u_.m_BearingSectorGuideCourseVariantVariant_, other_.m_u_.m_BearingSectorGuideCourseVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D):
                        {  
                            swap(m_u_.m_BearingSectorMagneticNorthVariantVariant_, other_.m_u_.m_BearingSectorMagneticNorthVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D):
                        {  
                            swap(m_u_.m_BearingSectorTrueNorthVariantVariant_, other_.m_u_.m_BearingSectorTrueNorthVariantVariant_);
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
                        case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D):
                            {  
                                swap(m_u_.m_BearingSectorGuideCourseVariantVariant_, other_.m_u_.m_BearingSectorGuideCourseVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D):
                            {  
                                swap(m_u_.m_BearingSectorMagneticNorthVariantVariant_, other_.m_u_.m_BearingSectorMagneticNorthVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D):
                            {  
                                swap(m_u_.m_BearingSectorTrueNorthVariantVariant_, other_.m_u_.m_BearingSectorTrueNorthVariantVariant_);
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

            bool BearingSectorVariantTypeUnion::operator == (const BearingSectorVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D):
                        {  
                            if (m_u_.m_BearingSectorGuideCourseVariantVariant_ != other_.m_u_.m_BearingSectorGuideCourseVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D):
                        {  
                            if (m_u_.m_BearingSectorMagneticNorthVariantVariant_ != other_.m_u_.m_BearingSectorMagneticNorthVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D):
                        {  
                            if (m_u_.m_BearingSectorTrueNorthVariantVariant_ != other_.m_u_.m_BearingSectorTrueNorthVariantVariant_) {
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

            bool BearingSectorVariantTypeUnion::operator != (const BearingSectorVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BearingSectorVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D):
                        {  
                            o << "BearingSectorGuideCourseVariantVariant: " << sample.BearingSectorGuideCourseVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D):
                        {  
                            o << "BearingSectorMagneticNorthVariantVariant: " << sample.BearingSectorMagneticNorthVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D):
                        {  
                            o << "BearingSectorTrueNorthVariantVariant: " << sample.BearingSectorTrueNorthVariantVariant ();
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

            ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum BearingSectorVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum(static_cast< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum >(0));
            }  

            // ---- BearingSectorVariantType: 

            BearingSectorVariantType::BearingSectorVariantType()  {

            }   

            BearingSectorVariantType::BearingSectorVariantType (const ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& BearingSectorVariantTypeSubtypes_):
                m_BearingSectorVariantTypeSubtypes_(BearingSectorVariantTypeSubtypes_) {
            }

            void BearingSectorVariantType::swap(BearingSectorVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_BearingSectorVariantTypeSubtypes_, other_.m_BearingSectorVariantTypeSubtypes_);
            }  

            bool BearingSectorVariantType::operator == (const BearingSectorVariantType& other_) const {
                if (m_BearingSectorVariantTypeSubtypes_ != other_.m_BearingSectorVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool BearingSectorVariantType::operator != (const BearingSectorVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BearingSectorVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "BearingSectorVariantTypeSubtypes: " << sample.BearingSectorVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum>::value = ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum>::value = ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BearingSectorVariantTypeEnum_g_tc_members[3]=
                {

                    {
                        (char *)"BEARINGSECTORGUIDECOURSEVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D), 
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
                        (char *)"BEARINGSECTORMAGNETICNORTHVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D), 
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
                        (char *)"BEARINGSECTORTRUENORTHVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D), 
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

                static DDS_TypeCode BearingSectorVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::BearingSectorVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BearingSectorVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BearingSectorVariantTypeEnum*/

                if (is_initialized) {
                    return &BearingSectorVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                BearingSectorVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BearingSectorVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BearingSectorVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BearingSectorVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                BearingSectorVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &BearingSectorVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BearingSectorVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BearingSectorVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantTypeEnum_g_sampleAccessInfo;
                }

                BearingSectorVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BearingSectorVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                BearingSectorVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::BearingSectorVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BearingSectorVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BearingSectorVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BearingSectorVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BearingSectorVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum >;

                BearingSectorVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BearingSectorVariantTypeEnum_g_typePlugin = 
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

                return &BearingSectorVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BearingSectorVariantTypeUnion_g_tc_members[3]=
                {

                    {
                        (char *)"BearingSectorGuideCourseVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BearingSectorMagneticNorthVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BearingSectorTrueNorthVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BearingSectorVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::BearingSectorVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BearingSectorVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BearingSectorVariantTypeUnion*/

                if (is_initialized) {
                    return &BearingSectorVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                BearingSectorVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BearingSectorVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType>::get().native();
                BearingSectorVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType>::get().native();
                BearingSectorVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                BearingSectorVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum>::get().native();

                BearingSectorVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                BearingSectorVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &BearingSectorVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo BearingSectorVariantTypeUnion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BearingSectorVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                BearingSectorVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D);
                BearingSectorVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BearingSectorGuideCourseVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D);
                BearingSectorVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BearingSectorMagneticNorthVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D);
                BearingSectorVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BearingSectorTrueNorthVariantVariant() - (char *)sample);

                BearingSectorVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                BearingSectorVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BearingSectorVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BearingSectorVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BearingSectorVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BearingSectorVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion >;

                BearingSectorVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BearingSectorVariantTypeUnion_g_typePlugin = 
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

                return &BearingSectorVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BearingSectorVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"BearingSectorVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode BearingSectorVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::BearingSectorVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BearingSectorVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BearingSectorVariantType*/

                if (is_initialized) {
                    return &BearingSectorVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BearingSectorVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BearingSectorVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                BearingSectorVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                BearingSectorVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &BearingSectorVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::BearingSectorVariantType *sample;

                static RTIXCdrMemberAccessInfo BearingSectorVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BearingSectorVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::BearingSectorVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                BearingSectorVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BearingSectorVariantTypeSubtypes() - (char *)sample);

                BearingSectorVariantType_g_sampleAccessInfo.memberAccessInfos = 
                BearingSectorVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::BearingSectorVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BearingSectorVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BearingSectorVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BearingSectorVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BearingSectorVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::BearingSectorVariantType >;

                BearingSectorVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BearingSectorVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BearingSectorVariantType_g_typePlugin = 
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

                return &BearingSectorVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::BearingSectorVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion >::reset_sample(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D);
            ::rti::topic::reset_sample(sample.BearingSectorGuideCourseVariantVariant());
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D);
            ::rti::topic::reset_sample(sample.BearingSectorMagneticNorthVariantVariant());
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D);
            ::rti::topic::reset_sample(sample.BearingSectorTrueNorthVariantVariant());

            sample._d() = ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion >::allocate_sample(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D);
            ::rti::topic::allocate_sample(sample.BearingSectorGuideCourseVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D);
            ::rti::topic::allocate_sample(sample.BearingSectorMagneticNorthVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D);
            ::rti::topic::allocate_sample(sample.BearingSectorTrueNorthVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantType >::reset_sample(::UMAA::Common::Orientation::BearingSectorVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.BearingSectorVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantType >::allocate_sample(::UMAA::Common::Orientation::BearingSectorVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.BearingSectorVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
