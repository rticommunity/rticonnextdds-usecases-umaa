

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DirectionVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            std::ostream& operator << (std::ostream& o,const DirectionVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D:
                    o << "DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D" << " ";
                    break;
                    case DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D:
                    o << "DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D" << " ";
                    break;
                    case DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D:
                    o << "DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D" << " ";
                    break;
                    case DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D:
                    o << "DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- DirectionVariantTypeUnion: 

            DirectionVariantTypeUnion::Union_::Union_()  {
            }

            DirectionVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Orientation::DirectionCurrentVariantType& DirectionCurrentVariantVariant_,const ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType& DirectionMagneticNorthVariantVariant_,const ::UMAA::Common::Orientation::DirectionTrueNorthVariantType& DirectionTrueNorthVariantVariant_,const ::UMAA::Common::Orientation::DirectionWindVariantType& DirectionWindVariantVariant_):
                m_DirectionCurrentVariantVariant_(DirectionCurrentVariantVariant_), 
                m_DirectionMagneticNorthVariantVariant_(DirectionMagneticNorthVariantVariant_), 
                m_DirectionTrueNorthVariantVariant_(DirectionTrueNorthVariantVariant_), 
                m_DirectionWindVariantVariant_(DirectionWindVariantVariant_) {
            }

            DirectionVariantTypeUnion::DirectionVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void DirectionVariantTypeUnion::swap(DirectionVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionCurrentVariantVariant_, other_.m_u_.m_DirectionCurrentVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionMagneticNorthVariantVariant_, other_.m_u_.m_DirectionMagneticNorthVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionTrueNorthVariantVariant_, other_.m_u_.m_DirectionTrueNorthVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionWindVariantVariant_, other_.m_u_.m_DirectionWindVariantVariant_);
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
                        case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionCurrentVariantVariant_, other_.m_u_.m_DirectionCurrentVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionMagneticNorthVariantVariant_, other_.m_u_.m_DirectionMagneticNorthVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionTrueNorthVariantVariant_, other_.m_u_.m_DirectionTrueNorthVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionWindVariantVariant_, other_.m_u_.m_DirectionWindVariantVariant_);
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

            bool DirectionVariantTypeUnion::operator == (const DirectionVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionCurrentVariantVariant_ != other_.m_u_.m_DirectionCurrentVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D):
                        {  
                            if (m_u_.m_DirectionMagneticNorthVariantVariant_ != other_.m_u_.m_DirectionMagneticNorthVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D):
                        {  
                            if (m_u_.m_DirectionTrueNorthVariantVariant_ != other_.m_u_.m_DirectionTrueNorthVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D):
                        {  
                            if (m_u_.m_DirectionWindVariantVariant_ != other_.m_u_.m_DirectionWindVariantVariant_) {
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

            bool DirectionVariantTypeUnion::operator != (const DirectionVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D):
                        {  
                            o << "DirectionCurrentVariantVariant: " << sample.DirectionCurrentVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D):
                        {  
                            o << "DirectionMagneticNorthVariantVariant: " << sample.DirectionMagneticNorthVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D):
                        {  
                            o << "DirectionTrueNorthVariantVariant: " << sample.DirectionTrueNorthVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D):
                        {  
                            o << "DirectionWindVariantVariant: " << sample.DirectionWindVariantVariant ();
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

            ::UMAA::Common::Orientation::DirectionVariantTypeEnum DirectionVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Orientation::DirectionVariantTypeEnum(static_cast< ::UMAA::Common::Orientation::DirectionVariantTypeEnum >(0));
            }  

            // ---- DirectionVariantType: 

            DirectionVariantType::DirectionVariantType()  {

            }   

            DirectionVariantType::DirectionVariantType (const ::UMAA::Common::Orientation::DirectionVariantTypeUnion& DirectionVariantTypeSubtypes_):
                m_DirectionVariantTypeSubtypes_(DirectionVariantTypeSubtypes_) {
            }

            void DirectionVariantType::swap(DirectionVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_DirectionVariantTypeSubtypes_, other_.m_DirectionVariantTypeSubtypes_);
            }  

            bool DirectionVariantType::operator == (const DirectionVariantType& other_) const {
                if (m_DirectionVariantTypeSubtypes_ != other_.m_DirectionVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool DirectionVariantType::operator != (const DirectionVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "DirectionVariantTypeSubtypes: " << sample.DirectionVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Orientation::DirectionVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::DirectionVariantTypeEnum>::value = ::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Orientation::DirectionVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::DirectionVariantTypeEnum>::value = ::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionVariantTypeEnum_g_tc_members[4]=
                {

                    {
                        (char *)"DIRECTIONCURRENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D), 
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
                        (char *)"DIRECTIONMAGNETICNORTHVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D), 
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
                        (char *)"DIRECTIONTRUENORTHVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D), 
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
                        (char *)"DIRECTIONWINDVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D), 
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

                static DDS_TypeCode DirectionVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DirectionVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionVariantTypeEnum*/

                if (is_initialized) {
                    return &DirectionVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DirectionVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DirectionVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DirectionVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DirectionVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionVariantTypeEnum_g_sampleAccessInfo;
                }

                DirectionVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DirectionVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                DirectionVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionVariantTypeEnum >;

                DirectionVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionVariantTypeEnum_g_typePlugin = 
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

                return &DirectionVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionVariantTypeUnion_g_tc_members[4]=
                {

                    {
                        (char *)"DirectionCurrentVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionMagneticNorthVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionTrueNorthVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionWindVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DirectionVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DirectionVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionVariantTypeUnion*/

                if (is_initialized) {
                    return &DirectionVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionCurrentVariantType>::get().native();
                DirectionVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType>::get().native();
                DirectionVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionTrueNorthVariantType>::get().native();
                DirectionVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionWindVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                DirectionVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeEnum>::get().native();

                DirectionVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo DirectionVariantTypeUnion_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D);
                DirectionVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionCurrentVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D);
                DirectionVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionMagneticNorthVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D);
                DirectionVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionTrueNorthVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D);
                DirectionVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionWindVariantVariant() - (char *)sample);

                DirectionVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                DirectionVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionVariantTypeUnion >;

                DirectionVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionVariantTypeUnion_g_typePlugin = 
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

                return &DirectionVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"DirectionVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode DirectionVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DirectionVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionVariantType*/

                if (is_initialized) {
                    return &DirectionVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                DirectionVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionVariantType *sample;

                static RTIXCdrMemberAccessInfo DirectionVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionVariantTypeSubtypes() - (char *)sample);

                DirectionVariantType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionVariantType >;

                DirectionVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionVariantType_g_typePlugin = 
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

                return &DirectionVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::DirectionVariantTypeUnion >::reset_sample(::UMAA::Common::Orientation::DirectionVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionCurrentVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionMagneticNorthVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionTrueNorthVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionWindVariantVariant());

            sample._d() = ::UMAA::Common::Orientation::DirectionVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionVariantTypeUnion >::allocate_sample(::UMAA::Common::Orientation::DirectionVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionCurrentVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionMagneticNorthVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionTrueNorthVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionWindVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Orientation::DirectionVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionVariantType >::reset_sample(::UMAA::Common::Orientation::DirectionVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.DirectionVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionVariantType >::allocate_sample(::UMAA::Common::Orientation::DirectionVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.DirectionVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
