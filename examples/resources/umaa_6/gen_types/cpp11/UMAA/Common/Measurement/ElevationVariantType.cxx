

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ElevationVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ElevationVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            std::ostream& operator << (std::ostream& o,const ElevationVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D:
                    o << "ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D" << " ";
                    break;
                    case ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D:
                    o << "ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D" << " ";
                    break;
                    case ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D:
                    o << "ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D" << " ";
                    break;
                    case ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D:
                    o << "ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D" << " ";
                    break;
                    case ElevationVariantTypeEnum::DEPTHVARIANT_D:
                    o << "ElevationVariantTypeEnum::DEPTHVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- ElevationVariantTypeUnion: 

            ElevationVariantTypeUnion::Union_::Union_()  {
            }

            ElevationVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Measurement::AltitudeAGLVariantType& AltitudeAGLVariantVariant_,const ::UMAA::Common::Measurement::AltitudeASFVariantType& AltitudeASFVariantVariant_,const ::UMAA::Common::Measurement::AltitudeGeodeticVariantType& AltitudeGeodeticVariantVariant_,const ::UMAA::Common::Measurement::AltitudeMSLVariantType& AltitudeMSLVariantVariant_,const ::UMAA::Common::Measurement::DepthVariantType& DepthVariantVariant_):
                m_AltitudeAGLVariantVariant_(AltitudeAGLVariantVariant_), 
                m_AltitudeASFVariantVariant_(AltitudeASFVariantVariant_), 
                m_AltitudeGeodeticVariantVariant_(AltitudeGeodeticVariantVariant_), 
                m_AltitudeMSLVariantVariant_(AltitudeMSLVariantVariant_), 
                m_DepthVariantVariant_(DepthVariantVariant_) {
            }

            ElevationVariantTypeUnion::ElevationVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void ElevationVariantTypeUnion::swap(ElevationVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeAGLVariantVariant_, other_.m_u_.m_AltitudeAGLVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeASFVariantVariant_, other_.m_u_.m_AltitudeASFVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeGeodeticVariantVariant_, other_.m_u_.m_AltitudeGeodeticVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeMSLVariantVariant_, other_.m_u_.m_AltitudeMSLVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D):
                        {  
                            swap(m_u_.m_DepthVariantVariant_, other_.m_u_.m_DepthVariantVariant_);
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
                        case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeAGLVariantVariant_, other_.m_u_.m_AltitudeAGLVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeASFVariantVariant_, other_.m_u_.m_AltitudeASFVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeGeodeticVariantVariant_, other_.m_u_.m_AltitudeGeodeticVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeMSLVariantVariant_, other_.m_u_.m_AltitudeMSLVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D):
                            {  
                                swap(m_u_.m_DepthVariantVariant_, other_.m_u_.m_DepthVariantVariant_);
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

            bool ElevationVariantTypeUnion::operator == (const ElevationVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeAGLVariantVariant_ != other_.m_u_.m_AltitudeAGLVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeASFVariantVariant_ != other_.m_u_.m_AltitudeASFVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeGeodeticVariantVariant_ != other_.m_u_.m_AltitudeGeodeticVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeMSLVariantVariant_ != other_.m_u_.m_AltitudeMSLVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D):
                        {  
                            if (m_u_.m_DepthVariantVariant_ != other_.m_u_.m_DepthVariantVariant_) {
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

            bool ElevationVariantTypeUnion::operator != (const ElevationVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ElevationVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D):
                        {  
                            o << "AltitudeAGLVariantVariant: " << sample.AltitudeAGLVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D):
                        {  
                            o << "AltitudeASFVariantVariant: " << sample.AltitudeASFVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D):
                        {  
                            o << "AltitudeGeodeticVariantVariant: " << sample.AltitudeGeodeticVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D):
                        {  
                            o << "AltitudeMSLVariantVariant: " << sample.AltitudeMSLVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D):
                        {  
                            o << "DepthVariantVariant: " << sample.DepthVariantVariant ();
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

            ::UMAA::Common::Measurement::ElevationVariantTypeEnum ElevationVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Measurement::ElevationVariantTypeEnum(static_cast< ::UMAA::Common::Measurement::ElevationVariantTypeEnum >(0));
            }  

            // ---- ElevationVariantType: 

            ElevationVariantType::ElevationVariantType()  {

            }   

            ElevationVariantType::ElevationVariantType (const ::UMAA::Common::Measurement::ElevationVariantTypeUnion& ElevationVariantTypeSubtypes_):
                m_ElevationVariantTypeSubtypes_(ElevationVariantTypeSubtypes_) {
            }

            void ElevationVariantType::swap(ElevationVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_ElevationVariantTypeSubtypes_, other_.m_ElevationVariantTypeSubtypes_);
            }  

            bool ElevationVariantType::operator == (const ElevationVariantType& other_) const {
                if (m_ElevationVariantTypeSubtypes_ != other_.m_ElevationVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool ElevationVariantType::operator != (const ElevationVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ElevationVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ElevationVariantTypeSubtypes: " << sample.ElevationVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Measurement::ElevationVariantTypeEnum default_enumerator< ::UMAA::Common::Measurement::ElevationVariantTypeEnum>::value = ::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Measurement::ElevationVariantTypeEnum default_enumerator< ::UMAA::Common::Measurement::ElevationVariantTypeEnum>::value = ::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationVariantTypeEnum_g_tc_members[5]=
                {

                    {
                        (char *)"ALTITUDEAGLVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D), 
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
                        (char *)"ALTITUDEASFVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D), 
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
                        (char *)"ALTITUDEGEODETICVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D), 
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
                        (char *)"ALTITUDEMSLVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D), 
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
                        (char *)"DEPTHVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D), 
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

                static DDS_TypeCode ElevationVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ElevationVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationVariantTypeEnum*/

                if (is_initialized) {
                    return &ElevationVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ElevationVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ElevationVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ElevationVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ElevationVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationVariantTypeEnum_g_sampleAccessInfo;
                }

                ElevationVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ElevationVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                ElevationVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationVariantTypeEnum >;

                ElevationVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationVariantTypeEnum_g_typePlugin = 
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

                return &ElevationVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationVariantTypeUnion_g_tc_members[5]=
                {

                    {
                        (char *)"AltitudeAGLVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeASFVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeGeodeticVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeMSLVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DepthVariantVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ElevationVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ElevationVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationVariantTypeUnion*/

                if (is_initialized) {
                    return &ElevationVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeAGLVariantType>::get().native();
                ElevationVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeASFVariantType>::get().native();
                ElevationVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeGeodeticVariantType>::get().native();
                ElevationVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeMSLVariantType>::get().native();
                ElevationVariantTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DepthVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ElevationVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeEnum>::get().native();

                ElevationVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::ElevationVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo ElevationVariantTypeUnion_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::ElevationVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D);
                ElevationVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeAGLVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D);
                ElevationVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeASFVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D);
                ElevationVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeGeodeticVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D);
                ElevationVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeMSLVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D);
                ElevationVariantTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DepthVariantVariant() - (char *)sample);

                ElevationVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                ElevationVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationVariantTypeUnion >;

                ElevationVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationVariantTypeUnion_g_typePlugin = 
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

                return &ElevationVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"ElevationVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode ElevationVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ElevationVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationVariantType*/

                if (is_initialized) {
                    return &ElevationVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                ElevationVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::ElevationVariantType *sample;

                static RTIXCdrMemberAccessInfo ElevationVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::ElevationVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ElevationVariantTypeSubtypes() - (char *)sample);

                ElevationVariantType_g_sampleAccessInfo.memberAccessInfos = 
                ElevationVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationVariantType >;

                ElevationVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationVariantType_g_typePlugin = 
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

                return &ElevationVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::ElevationVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::ElevationVariantTypeUnion >::reset_sample(::UMAA::Common::Measurement::ElevationVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeAGLVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeASFVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeGeodeticVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeMSLVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D);
            ::rti::topic::reset_sample(sample.DepthVariantVariant());

            sample._d() = ::UMAA::Common::Measurement::ElevationVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationVariantTypeUnion >::allocate_sample(::UMAA::Common::Measurement::ElevationVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeAGLVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeASFVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeGeodeticVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeMSLVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D);
            ::rti::topic::allocate_sample(sample.DepthVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Measurement::ElevationVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationVariantType >::reset_sample(::UMAA::Common::Measurement::ElevationVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.ElevationVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationVariantType >::allocate_sample(::UMAA::Common::Measurement::ElevationVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ElevationVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
