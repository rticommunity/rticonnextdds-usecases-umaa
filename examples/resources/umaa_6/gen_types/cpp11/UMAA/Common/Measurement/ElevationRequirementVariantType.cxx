

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ElevationRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ElevationRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            std::ostream& operator << (std::ostream& o,const ElevationRequirementVariantTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D" << " ";
                    break;
                    case ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D:
                    o << "ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- ElevationRequirementVariantTypeUnion: 

            ElevationRequirementVariantTypeUnion::Union_::Union_()  {
            }

            ElevationRequirementVariantTypeUnion::Union_::Union_(const ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType& AltitudeAGLRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType& AltitudeASFRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& AltitudeGeodeticRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType& AltitudeMSLRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType& AltitudeRateASFRequirementVariantVariant_,const ::UMAA::Common::Measurement::DepthRateRequirementVariantType& DepthRateRequirementVariantVariant_,const ::UMAA::Common::Measurement::DepthRequirementVariantType& DepthRequirementVariantVariant_):
                m_AltitudeAGLRequirementVariantVariant_(AltitudeAGLRequirementVariantVariant_), 
                m_AltitudeASFRequirementVariantVariant_(AltitudeASFRequirementVariantVariant_), 
                m_AltitudeGeodeticRequirementVariantVariant_(AltitudeGeodeticRequirementVariantVariant_), 
                m_AltitudeMSLRequirementVariantVariant_(AltitudeMSLRequirementVariantVariant_), 
                m_AltitudeRateASFRequirementVariantVariant_(AltitudeRateASFRequirementVariantVariant_), 
                m_DepthRateRequirementVariantVariant_(DepthRateRequirementVariantVariant_), 
                m_DepthRequirementVariantVariant_(DepthRequirementVariantVariant_) {
            }

            ElevationRequirementVariantTypeUnion::ElevationRequirementVariantTypeUnion() :m_d_(default_discriminator())
            {
            }

            void ElevationRequirementVariantTypeUnion::swap(ElevationRequirementVariantTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeAGLRequirementVariantVariant_, other_.m_u_.m_AltitudeAGLRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeASFRequirementVariantVariant_, other_.m_u_.m_AltitudeASFRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeGeodeticRequirementVariantVariant_, other_.m_u_.m_AltitudeGeodeticRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeMSLRequirementVariantVariant_, other_.m_u_.m_AltitudeMSLRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_AltitudeRateASFRequirementVariantVariant_, other_.m_u_.m_AltitudeRateASFRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DepthRateRequirementVariantVariant_, other_.m_u_.m_DepthRateRequirementVariantVariant_);
                    } break;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D):
                        {  
                            swap(m_u_.m_DepthRequirementVariantVariant_, other_.m_u_.m_DepthRequirementVariantVariant_);
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
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeAGLRequirementVariantVariant_, other_.m_u_.m_AltitudeAGLRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeASFRequirementVariantVariant_, other_.m_u_.m_AltitudeASFRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeGeodeticRequirementVariantVariant_, other_.m_u_.m_AltitudeGeodeticRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeMSLRequirementVariantVariant_, other_.m_u_.m_AltitudeMSLRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_AltitudeRateASFRequirementVariantVariant_, other_.m_u_.m_AltitudeRateASFRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DepthRateRequirementVariantVariant_, other_.m_u_.m_DepthRateRequirementVariantVariant_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D):
                            {  
                                swap(m_u_.m_DepthRequirementVariantVariant_, other_.m_u_.m_DepthRequirementVariantVariant_);
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

            bool ElevationRequirementVariantTypeUnion::operator == (const ElevationRequirementVariantTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeAGLRequirementVariantVariant_ != other_.m_u_.m_AltitudeAGLRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeASFRequirementVariantVariant_ != other_.m_u_.m_AltitudeASFRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeGeodeticRequirementVariantVariant_ != other_.m_u_.m_AltitudeGeodeticRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeMSLRequirementVariantVariant_ != other_.m_u_.m_AltitudeMSLRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_AltitudeRateASFRequirementVariantVariant_ != other_.m_u_.m_AltitudeRateASFRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DepthRateRequirementVariantVariant_ != other_.m_u_.m_DepthRateRequirementVariantVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D):
                        {  
                            if (m_u_.m_DepthRequirementVariantVariant_ != other_.m_u_.m_DepthRequirementVariantVariant_) {
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

            bool ElevationRequirementVariantTypeUnion::operator != (const ElevationRequirementVariantTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ElevationRequirementVariantTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D):
                        {  
                            o << "AltitudeAGLRequirementVariantVariant: " << sample.AltitudeAGLRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D):
                        {  
                            o << "AltitudeASFRequirementVariantVariant: " << sample.AltitudeASFRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D):
                        {  
                            o << "AltitudeGeodeticRequirementVariantVariant: " << sample.AltitudeGeodeticRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D):
                        {  
                            o << "AltitudeMSLRequirementVariantVariant: " << sample.AltitudeMSLRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D):
                        {  
                            o << "AltitudeRateASFRequirementVariantVariant: " << sample.AltitudeRateASFRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D):
                        {  
                            o << "DepthRateRequirementVariantVariant: " << sample.DepthRateRequirementVariantVariant ()<<", ";
                    } break ;
                    case (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D):
                        {  
                            o << "DepthRequirementVariantVariant: " << sample.DepthRequirementVariantVariant ();
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

            ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum ElevationRequirementVariantTypeUnion::default_discriminator() {
                return ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum(static_cast< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum >(0));
            }  

            // ---- ElevationRequirementVariantType: 

            ElevationRequirementVariantType::ElevationRequirementVariantType()  {

            }   

            ElevationRequirementVariantType::ElevationRequirementVariantType (const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& ElevationRequirementVariantTypeSubtypes_):
                m_ElevationRequirementVariantTypeSubtypes_(ElevationRequirementVariantTypeSubtypes_) {
            }

            void ElevationRequirementVariantType::swap(ElevationRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_ElevationRequirementVariantTypeSubtypes_, other_.m_ElevationRequirementVariantTypeSubtypes_);
            }  

            bool ElevationRequirementVariantType::operator == (const ElevationRequirementVariantType& other_) const {
                if (m_ElevationRequirementVariantTypeSubtypes_ != other_.m_ElevationRequirementVariantTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool ElevationRequirementVariantType::operator != (const ElevationRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ElevationRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ElevationRequirementVariantTypeSubtypes: " << sample.ElevationRequirementVariantTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum>::value = ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum default_enumerator< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum>::value = ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D;
        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationRequirementVariantTypeEnum_g_tc_members[7]=
                {

                    {
                        (char *)"ALTITUDEAGLREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D), 
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
                        (char *)"ALTITUDEASFREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D), 
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
                        (char *)"ALTITUDEGEODETICREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D), 
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
                        (char *)"ALTITUDEMSLREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D), 
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
                        (char *)"ALTITUDERATEASFREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D), 
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
                        (char *)"DEPTHRATEREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D), 
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
                        (char *)"DEPTHREQUIREMENTVARIANT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D), 
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

                static DDS_TypeCode ElevationRequirementVariantTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        ElevationRequirementVariantTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationRequirementVariantTypeEnum*/

                if (is_initialized) {
                    return &ElevationRequirementVariantTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationRequirementVariantTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ElevationRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ElevationRequirementVariantTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ElevationRequirementVariantTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationRequirementVariantTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationRequirementVariantTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ElevationRequirementVariantTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationRequirementVariantTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantTypeEnum_g_sampleAccessInfo;
                }

                ElevationRequirementVariantTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                ElevationRequirementVariantTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum >;

                ElevationRequirementVariantTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationRequirementVariantTypeEnum_g_typePlugin = 
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

                return &ElevationRequirementVariantTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationRequirementVariantTypeUnion_g_tc_members[7]=
                {

                    {
                        (char *)"AltitudeAGLRequirementVariantVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeASFRequirementVariantVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeGeodeticRequirementVariantVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeMSLRequirementVariantVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeRateASFRequirementVariantVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DepthRateRequirementVariantVariant",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DepthRequirementVariantVariant",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ElevationRequirementVariantTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        ElevationRequirementVariantTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationRequirementVariantTypeUnion*/

                if (is_initialized) {
                    return &ElevationRequirementVariantTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationRequirementVariantTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationRequirementVariantTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DepthRateRequirementVariantType>::get().native();
                ElevationRequirementVariantTypeUnion_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DepthRequirementVariantType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ElevationRequirementVariantTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum>::get().native();

                ElevationRequirementVariantTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationRequirementVariantTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationRequirementVariantTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion *sample;

                static RTIXCdrMemberAccessInfo ElevationRequirementVariantTypeUnion_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationRequirementVariantTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeAGLRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeASFRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeGeodeticRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeMSLRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeRateASFRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DepthRateRequirementVariantVariant() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D);
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DepthRequirementVariantVariant() - (char *)sample);

                ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                ElevationRequirementVariantTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion >;

                ElevationRequirementVariantTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationRequirementVariantTypeUnion_g_typePlugin = 
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

                return &ElevationRequirementVariantTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationRequirementVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"ElevationRequirementVariantTypeSubtypes",/* Member name */
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

                static DDS_TypeCode ElevationRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ElevationRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationRequirementVariantType*/

                if (is_initialized) {
                    return &ElevationRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElevationRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                ElevationRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &ElevationRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::ElevationRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo ElevationRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::ElevationRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ElevationRequirementVariantTypeSubtypes() - (char *)sample);

                ElevationRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                ElevationRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElevationRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElevationRequirementVariantType >;

                ElevationRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationRequirementVariantType_g_typePlugin = 
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

                return &ElevationRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElevationRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion >::reset_sample(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& sample) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeAGLRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeASFRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeGeodeticRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeMSLRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.AltitudeRateASFRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DepthRateRequirementVariantVariant());
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D);
            ::rti::topic::reset_sample(sample.DepthRequirementVariantVariant());

            sample._d() = ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion >::allocate_sample(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeAGLRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeASFRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeGeodeticRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeMSLRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.AltitudeRateASFRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DepthRateRequirementVariantVariant(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D);
            ::rti::topic::allocate_sample(sample.DepthRequirementVariantVariant(),  -1, -1);

            sample._d() = ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantType >::reset_sample(::UMAA::Common::Measurement::ElevationRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.ElevationRequirementVariantTypeSubtypes());
        }

        void topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantType >::allocate_sample(::UMAA::Common::Measurement::ElevationRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ElevationRequirementVariantTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
