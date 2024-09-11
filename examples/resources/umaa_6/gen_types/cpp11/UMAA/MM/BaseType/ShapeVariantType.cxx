

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ShapeVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ShapeVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            std::ostream& operator << (std::ostream& o,const ShapeVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case ShapeVariantTypeEnum::ELLIPSEVARIANT_D:
                    o << "ShapeVariantTypeEnum::ELLIPSEVARIANT_D" << " ";
                    break;
                    case ShapeVariantTypeEnum::POLYGONVARIANT_D:
                    o << "ShapeVariantTypeEnum::POLYGONVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- ShapeVariantTypeUnion: 

            ShapeVariantTypeUnion::Union_::Union_()  {
            }

            ShapeVariantTypeUnion::Union_::Union_(const ::UMAA::MM::BaseType::EllipseVariantType& EllipseVariantVariant_,const ::UMAA::MM::BaseType::PolygonVariantType& PolygonVariantVariant_):
                m_EllipseVariantVariant_(EllipseVariantVariant_), 
                m_PolygonVariantVariant_(PolygonVariantVariant_) {
            }

            ShapeVariantTypeUnion::ShapeVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void ShapeVariantTypeUnion::swap(ShapeVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D):
                        {  
                            swap(m_u_.m_EllipseVariantVariant_, other_.m_u_.m_EllipseVariantVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D):
                        {  
                            swap(m_u_.m_PolygonVariantVariant_, other_.m_u_.m_PolygonVariantVariant_);
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
                        case (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D):
                            {  
                                swap(m_u_.m_EllipseVariantVariant_, other_.m_u_.m_EllipseVariantVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D):
                            {  
                                swap(m_u_.m_PolygonVariantVariant_, other_.m_u_.m_PolygonVariantVariant_);
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

            bool ShapeVariantTypeUnion::operator == (const ShapeVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D):
                        {  
                            if (m_u_.m_EllipseVariantVariant_ != other_.m_u_.m_EllipseVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D):
                        {  
                            if (m_u_.m_PolygonVariantVariant_ != other_.m_u_.m_PolygonVariantVariant_) {
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

            bool ShapeVariantTypeUnion::operator != (const ShapeVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ShapeVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D):
                        {  
                            o << "EllipseVariantVariant: " << sample.EllipseVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D):
                        {  
                            o << "PolygonVariantVariant: " << sample.PolygonVariantVariant ();
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

            ::UMAA::MM::BaseType::ShapeVariantTypeEnum ShapeVariantTypeUnion::default_discriminator() {
                return ::UMAA::MM::BaseType::ShapeVariantTypeEnum(static_cast< ::UMAA::MM::BaseType::ShapeVariantTypeEnum >(0));
            }  

            // ---- ShapeVariantType: 

            ShapeVariantType::ShapeVariantType()  {

            }   

            ShapeVariantType::ShapeVariantType (const ::UMAA::MM::BaseType::ShapeVariantTypeUnion& ShapeVariantTypeSubtypes_):
                m_ShapeVariantTypeSubtypes_(ShapeVariantTypeSubtypes_) {
            }

            void ShapeVariantType::swap(ShapeVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_ShapeVariantTypeSubtypes_, other_.m_ShapeVariantTypeSubtypes_);
            }  

            bool ShapeVariantType::operator == (const ShapeVariantType& other_) const {
                if (m_ShapeVariantTypeSubtypes_ != other_.m_ShapeVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool ShapeVariantType::operator != (const ShapeVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ShapeVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ShapeVariantTypeSubtypes: " << sample.ShapeVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MM::BaseType::ShapeVariantTypeEnum default_enumerator< ::UMAA::MM::BaseType::ShapeVariantTypeEnum>::value = ::UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MM::BaseType::ShapeVariantTypeEnum default_enumerator< ::UMAA::MM::BaseType::ShapeVariantTypeEnum>::value = ::UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ShapeVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ShapeVariantTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"ELLIPSEVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D), 
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
                        (char *)"POLYGONVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D), 
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

                static DDS_TypeCode ShapeVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ShapeVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ShapeVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ShapeVariantTypeEnum*/

                if (is_initialized) {
                    return &ShapeVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                ShapeVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ShapeVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ShapeVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ShapeVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                ShapeVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &ShapeVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ShapeVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ShapeVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ShapeVariantTypeEnum_g_sampleAccessInfo;
                }

                ShapeVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ShapeVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                ShapeVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ShapeVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ShapeVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ShapeVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ShapeVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ShapeVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ShapeVariantTypeEnum >;

                ShapeVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ShapeVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ShapeVariantTypeEnum_g_typePlugin = 
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

                return &ShapeVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ShapeVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ShapeVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ShapeVariantTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"EllipseVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PolygonVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ShapeVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ShapeVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ShapeVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ShapeVariantTypeUnion*/

                if (is_initialized) {
                    return &ShapeVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                ShapeVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ShapeVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::EllipseVariantType>::get().native();
                ShapeVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::PolygonVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ShapeVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeEnum>::get().native();

                ShapeVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                ShapeVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &ShapeVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ShapeVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo ShapeVariantTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ShapeVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ShapeVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ShapeVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                ShapeVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D);
                ShapeVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->EllipseVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D);
                ShapeVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PolygonVariantVariant() - (char *)sample);

                ShapeVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                ShapeVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ShapeVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ShapeVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ShapeVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ShapeVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ShapeVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ShapeVariantTypeUnion >;

                ShapeVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ShapeVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ShapeVariantTypeUnion_g_typePlugin = 
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

                return &ShapeVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ShapeVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ShapeVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ShapeVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"ShapeVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode ShapeVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ShapeVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ShapeVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ShapeVariantType*/

                if (is_initialized) {
                    return &ShapeVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ShapeVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ShapeVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                ShapeVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                ShapeVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &ShapeVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ShapeVariantType *sample;

                static RTIXCdrMemberAccessInfo ShapeVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ShapeVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ShapeVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ShapeVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                ShapeVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ShapeVariantTypeSubtypes() - (char *)sample);

                ShapeVariantType_g_sampleAccessInfo.memberAccessInfos = 
                ShapeVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ShapeVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ShapeVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ShapeVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ShapeVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ShapeVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ShapeVariantType >;

                ShapeVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ShapeVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ShapeVariantType_g_typePlugin = 
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

                return &ShapeVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ShapeVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ShapeVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ShapeVariantTypeUnion >::reset_sample(::UMAA::MM::BaseType::ShapeVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D);
            ::rti::topic::reset_sample(sample.EllipseVariantVariant());
            sample._d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D);
            ::rti::topic::reset_sample(sample.PolygonVariantVariant());

            sample._d() = ::UMAA::MM::BaseType::ShapeVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MM::BaseType::ShapeVariantTypeUnion >::allocate_sample(::UMAA::MM::BaseType::ShapeVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D);
            ::rti::topic::allocate_sample(sample.EllipseVariantVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D);
            ::rti::topic::allocate_sample(sample.PolygonVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::MM::BaseType::ShapeVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MM::BaseType::ShapeVariantType >::reset_sample(::UMAA::MM::BaseType::ShapeVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.ShapeVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::MM::BaseType::ShapeVariantType >::allocate_sample(::UMAA::MM::BaseType::ShapeVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ShapeVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
