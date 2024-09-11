

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DirectionRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            std::ostream& operator << (std::ostream& o,const DirectionRequirementVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D:
                    o << "DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D" << " ";
                    break;
                    case DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D:
                    o << "DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D" << " ";
                    break;
                    case DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D:
                    o << "DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D" << " ";
                    break;
                    case DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D:
                    o << "DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D" << " ";
                    break;
                    case DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D:
                    o << "DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- DirectionRequirementVariantTypeUnion: 

            DirectionRequirementVariantTypeUnion::Union_::Union_()  {
            }

            DirectionRequirementVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType& DirectionCurrentRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType& DirectionMagneticNorthRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType& DirectionTrueNorthRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& DirectionTurnRateRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionWindRequirementVariantType& DirectionWindRequirementVariantVariant_):
                m_DirectionCurrentRequirementVariantVariant_(DirectionCurrentRequirementVariantVariant_), 
                m_DirectionMagneticNorthRequirementVariantVariant_(DirectionMagneticNorthRequirementVariantVariant_), 
                m_DirectionTrueNorthRequirementVariantVariant_(DirectionTrueNorthRequirementVariantVariant_), 
                m_DirectionTurnRateRequirementVariantVariant_(DirectionTurnRateRequirementVariantVariant_), 
                m_DirectionWindRequirementVariantVariant_(DirectionWindRequirementVariantVariant_) {
            }

            DirectionRequirementVariantTypeUnion::DirectionRequirementVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void DirectionRequirementVariantTypeUnion::swap(DirectionRequirementVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionCurrentRequirementVariantVariant_, other_.m_u_.m_DirectionCurrentRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionMagneticNorthRequirementVariantVariant_, other_.m_u_.m_DirectionMagneticNorthRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionTrueNorthRequirementVariantVariant_, other_.m_u_.m_DirectionTrueNorthRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionTurnRateRequirementVariantVariant_, other_.m_u_.m_DirectionTurnRateRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DirectionWindRequirementVariantVariant_, other_.m_u_.m_DirectionWindRequirementVariantVariant_);
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
                        case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionCurrentRequirementVariantVariant_, other_.m_u_.m_DirectionCurrentRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionMagneticNorthRequirementVariantVariant_, other_.m_u_.m_DirectionMagneticNorthRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionTrueNorthRequirementVariantVariant_, other_.m_u_.m_DirectionTrueNorthRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionTurnRateRequirementVariantVariant_, other_.m_u_.m_DirectionTurnRateRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DirectionWindRequirementVariantVariant_, other_.m_u_.m_DirectionWindRequirementVariantVariant_);
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

            bool DirectionRequirementVariantTypeUnion::operator == (const DirectionRequirementVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionCurrentRequirementVariantVariant_ != other_.m_u_.m_DirectionCurrentRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionMagneticNorthRequirementVariantVariant_ != other_.m_u_.m_DirectionMagneticNorthRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionTrueNorthRequirementVariantVariant_ != other_.m_u_.m_DirectionTrueNorthRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionTurnRateRequirementVariantVariant_ != other_.m_u_.m_DirectionTurnRateRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DirectionWindRequirementVariantVariant_ != other_.m_u_.m_DirectionWindRequirementVariantVariant_) {
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

            bool DirectionRequirementVariantTypeUnion::operator != (const DirectionRequirementVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionRequirementVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D):
                        {  
                            o << "DirectionCurrentRequirementVariantVariant: " << sample.DirectionCurrentRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D):
                        {  
                            o << "DirectionMagneticNorthRequirementVariantVariant: " << sample.DirectionMagneticNorthRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D):
                        {  
                            o << "DirectionTrueNorthRequirementVariantVariant: " << sample.DirectionTrueNorthRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D):
                        {  
                            o << "DirectionTurnRateRequirementVariantVariant: " << sample.DirectionTurnRateRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D):
                        {  
                            o << "DirectionWindRequirementVariantVariant: " << sample.DirectionWindRequirementVariantVariant ();
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

            ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum DirectionRequirementVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum(static_cast< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum >(0));
            }  

            // ---- DirectionRequirementVariantType: 

            DirectionRequirementVariantType::DirectionRequirementVariantType()  {

            }   

            DirectionRequirementVariantType::DirectionRequirementVariantType (const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& DirectionRequirementVariantTypeSubtypes_):
                m_DirectionRequirementVariantTypeSubtypes_(DirectionRequirementVariantTypeSubtypes_) {
            }

            void DirectionRequirementVariantType::swap(DirectionRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_DirectionRequirementVariantTypeSubtypes_, other_.m_DirectionRequirementVariantTypeSubtypes_);
            }  

            bool DirectionRequirementVariantType::operator == (const DirectionRequirementVariantType& other_) const {
                if (m_DirectionRequirementVariantTypeSubtypes_ != other_.m_DirectionRequirementVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool DirectionRequirementVariantType::operator != (const DirectionRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "DirectionRequirementVariantTypeSubtypes: " << sample.DirectionRequirementVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum>::value = ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum>::value = ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionRequirementVariantTypeEnum_g_tc_members[5]=
                {

                    {
                        (char *)"DIRECTIONCURRENTREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D), 
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
                        (char *)"DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D), 
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
                        (char *)"DIRECTIONTRUENORTHREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D), 
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
                        (char *)"DIRECTIONTURNRATEREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D), 
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
                        (char *)"DIRECTIONWINDREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D), 
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

                static DDS_TypeCode DirectionRequirementVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DirectionRequirementVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionRequirementVariantTypeEnum*/

                if (is_initialized) {
                    return &DirectionRequirementVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionRequirementVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DirectionRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DirectionRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DirectionRequirementVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionRequirementVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionRequirementVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DirectionRequirementVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionRequirementVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantTypeEnum_g_sampleAccessInfo;
                }

                DirectionRequirementVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                DirectionRequirementVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum >;

                DirectionRequirementVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionRequirementVariantTypeEnum_g_typePlugin = 
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

                return &DirectionRequirementVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionRequirementVariantTypeUnion_g_tc_members[5]=
                {

                    {
                        (char *)"DirectionCurrentRequirementVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionMagneticNorthRequirementVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionTrueNorthRequirementVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionTurnRateRequirementVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DirectionWindRequirementVariantVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DirectionRequirementVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DirectionRequirementVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionRequirementVariantTypeUnion*/

                if (is_initialized) {
                    return &DirectionRequirementVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionRequirementVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionRequirementVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType>::get().native();
                DirectionRequirementVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType>::get().native();
                DirectionRequirementVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType>::get().native();
                DirectionRequirementVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType>::get().native();
                DirectionRequirementVariantTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                DirectionRequirementVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum>::get().native();

                DirectionRequirementVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionRequirementVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionRequirementVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo DirectionRequirementVariantTypeUnion_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionRequirementVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D);
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionCurrentRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D);
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionMagneticNorthRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D);
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionTrueNorthRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D);
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionTurnRateRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D);
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionWindRequirementVariantVariant() - (char *)sample);

                DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                DirectionRequirementVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion >;

                DirectionRequirementVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionRequirementVariantTypeUnion_g_typePlugin = 
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

                return &DirectionRequirementVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionRequirementVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"DirectionRequirementVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode DirectionRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DirectionRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionRequirementVariantType*/

                if (is_initialized) {
                    return &DirectionRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                DirectionRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo DirectionRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionRequirementVariantTypeSubtypes() - (char *)sample);

                DirectionRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionRequirementVariantType >;

                DirectionRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionRequirementVariantType_g_typePlugin = 
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

                return &DirectionRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion >::reset_sample(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionCurrentRequirementVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionMagneticNorthRequirementVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionTrueNorthRequirementVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionTurnRateRequirementVariantVariant());
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DirectionWindRequirementVariantVariant());

            sample._d() = ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion >::allocate_sample(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionCurrentRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionMagneticNorthRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionTrueNorthRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionTurnRateRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DirectionWindRequirementVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantType >::reset_sample(::UMAA::Common::Orientation::DirectionRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.DirectionRequirementVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantType >::allocate_sample(::UMAA::Common::Orientation::DirectionRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.DirectionRequirementVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
