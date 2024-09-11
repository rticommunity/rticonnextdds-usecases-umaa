

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ExpValueTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ExpValueType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            std::ostream& operator << (std::ostream& o,const ExpValueTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case ExpValueTypeEnum::EXPBINARYVALUE_D:
                    o << "ExpValueTypeEnum::EXPBINARYVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPBOOLEANVALUE_D:
                    o << "ExpValueTypeEnum::EXPBOOLEANVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPBYTEVALUE_D:
                    o << "ExpValueTypeEnum::EXPBYTEVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPCHARVALUE_D:
                    o << "ExpValueTypeEnum::EXPCHARVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPDATETIMEVALUE_D:
                    o << "ExpValueTypeEnum::EXPDATETIMEVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPDOUBLEVALUE_D:
                    o << "ExpValueTypeEnum::EXPDOUBLEVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPINTEGERVALUE_D:
                    o << "ExpValueTypeEnum::EXPINTEGERVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPLONGLONGVALUE_D:
                    o << "ExpValueTypeEnum::EXPLONGLONGVALUE_D" << " ";
                    break;
                    case ExpValueTypeEnum::EXPSTRINGVALUE_D:
                    o << "ExpValueTypeEnum::EXPSTRINGVALUE_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- ExpValueTypeUnion: 

            ExpValueTypeUnion::Union_::Union_()  {
            }

            ExpValueTypeUnion::Union_::Union_(const ::UMAA::MM::BaseType::ExpBinaryValueType& ExpBinaryValueVariant_,const ::UMAA::MM::BaseType::ExpBooleanValueType& ExpBooleanValueVariant_,const ::UMAA::MM::BaseType::ExpByteValueType& ExpByteValueVariant_,const ::UMAA::MM::BaseType::ExpCharValueType& ExpCharValueVariant_,const ::UMAA::MM::BaseType::ExpDateTimeValueType& ExpDateTimeValueVariant_,const ::UMAA::MM::BaseType::ExpDoubleValueType& ExpDoubleValueVariant_,const ::UMAA::MM::BaseType::ExpIntegerValueType& ExpIntegerValueVariant_,const ::UMAA::MM::BaseType::ExpLongLongValueType& ExpLongLongValueVariant_,const ::UMAA::MM::BaseType::ExpStringValueType& ExpStringValueVariant_):
                m_ExpBinaryValueVariant_(ExpBinaryValueVariant_), 
                m_ExpBooleanValueVariant_(ExpBooleanValueVariant_), 
                m_ExpByteValueVariant_(ExpByteValueVariant_), 
                m_ExpCharValueVariant_(ExpCharValueVariant_), 
                m_ExpDateTimeValueVariant_(ExpDateTimeValueVariant_), 
                m_ExpDoubleValueVariant_(ExpDoubleValueVariant_), 
                m_ExpIntegerValueVariant_(ExpIntegerValueVariant_), 
                m_ExpLongLongValueVariant_(ExpLongLongValueVariant_), 
                m_ExpStringValueVariant_(ExpStringValueVariant_) {
            }

            ExpValueTypeUnion::ExpValueTypeUnion() :m_d_(default_discriminator())
            {
            }

            void ExpValueTypeUnion::swap(ExpValueTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D):
                        {  
                            swap(m_u_.m_ExpBinaryValueVariant_, other_.m_u_.m_ExpBinaryValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D):
                        {  
                            swap(m_u_.m_ExpBooleanValueVariant_, other_.m_u_.m_ExpBooleanValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D):
                        {  
                            swap(m_u_.m_ExpByteValueVariant_, other_.m_u_.m_ExpByteValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D):
                        {  
                            swap(m_u_.m_ExpCharValueVariant_, other_.m_u_.m_ExpCharValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D):
                        {  
                            swap(m_u_.m_ExpDateTimeValueVariant_, other_.m_u_.m_ExpDateTimeValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D):
                        {  
                            swap(m_u_.m_ExpDoubleValueVariant_, other_.m_u_.m_ExpDoubleValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D):
                        {  
                            swap(m_u_.m_ExpIntegerValueVariant_, other_.m_u_.m_ExpIntegerValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D):
                        {  
                            swap(m_u_.m_ExpLongLongValueVariant_, other_.m_u_.m_ExpLongLongValueVariant_);
                    } break;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D):
                        {  
                            swap(m_u_.m_ExpStringValueVariant_, other_.m_u_.m_ExpStringValueVariant_);
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
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D):
                            {  
                                swap(m_u_.m_ExpBinaryValueVariant_, other_.m_u_.m_ExpBinaryValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D):
                            {  
                                swap(m_u_.m_ExpBooleanValueVariant_, other_.m_u_.m_ExpBooleanValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D):
                            {  
                                swap(m_u_.m_ExpByteValueVariant_, other_.m_u_.m_ExpByteValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D):
                            {  
                                swap(m_u_.m_ExpCharValueVariant_, other_.m_u_.m_ExpCharValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D):
                            {  
                                swap(m_u_.m_ExpDateTimeValueVariant_, other_.m_u_.m_ExpDateTimeValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D):
                            {  
                                swap(m_u_.m_ExpDoubleValueVariant_, other_.m_u_.m_ExpDoubleValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D):
                            {  
                                swap(m_u_.m_ExpIntegerValueVariant_, other_.m_u_.m_ExpIntegerValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D):
                            {  
                                swap(m_u_.m_ExpLongLongValueVariant_, other_.m_u_.m_ExpLongLongValueVariant_);
                        } break;
                        case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D):
                            {  
                                swap(m_u_.m_ExpStringValueVariant_, other_.m_u_.m_ExpStringValueVariant_);
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

            bool ExpValueTypeUnion::operator == (const ExpValueTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D):
                        {  
                            if (m_u_.m_ExpBinaryValueVariant_ != other_.m_u_.m_ExpBinaryValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D):
                        {  
                            if (m_u_.m_ExpBooleanValueVariant_ != other_.m_u_.m_ExpBooleanValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D):
                        {  
                            if (m_u_.m_ExpByteValueVariant_ != other_.m_u_.m_ExpByteValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D):
                        {  
                            if (m_u_.m_ExpCharValueVariant_ != other_.m_u_.m_ExpCharValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D):
                        {  
                            if (m_u_.m_ExpDateTimeValueVariant_ != other_.m_u_.m_ExpDateTimeValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D):
                        {  
                            if (m_u_.m_ExpDoubleValueVariant_ != other_.m_u_.m_ExpDoubleValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D):
                        {  
                            if (m_u_.m_ExpIntegerValueVariant_ != other_.m_u_.m_ExpIntegerValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D):
                        {  
                            if (m_u_.m_ExpLongLongValueVariant_ != other_.m_u_.m_ExpLongLongValueVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D):
                        {  
                            if (m_u_.m_ExpStringValueVariant_ != other_.m_u_.m_ExpStringValueVariant_) {
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

            bool ExpValueTypeUnion::operator != (const ExpValueTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpValueTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D):
                        {  
                            o << "ExpBinaryValueVariant: " << sample.ExpBinaryValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D):
                        {  
                            o << "ExpBooleanValueVariant: " << sample.ExpBooleanValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D):
                        {  
                            o << "ExpByteValueVariant: " << sample.ExpByteValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D):
                        {  
                            o << "ExpCharValueVariant: " << sample.ExpCharValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D):
                        {  
                            o << "ExpDateTimeValueVariant: " << sample.ExpDateTimeValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D):
                        {  
                            o << "ExpDoubleValueVariant: " << sample.ExpDoubleValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D):
                        {  
                            o << "ExpIntegerValueVariant: " << sample.ExpIntegerValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D):
                        {  
                            o << "ExpLongLongValueVariant: " << sample.ExpLongLongValueVariant ()<<", ";
                    } break ;
                    case (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D):
                        {  
                            o << "ExpStringValueVariant: " << sample.ExpStringValueVariant ();
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

            ::UMAA::MM::BaseType::ExpValueTypeEnum ExpValueTypeUnion::default_discriminator() {
                return ::UMAA::MM::BaseType::ExpValueTypeEnum(static_cast< ::UMAA::MM::BaseType::ExpValueTypeEnum >(0));
            }  

            // ---- ExpValueType: 

            ExpValueType::ExpValueType()  {

            }   

            ExpValueType::ExpValueType (const ::UMAA::MM::BaseType::ExpValueTypeUnion& ExpValueTypeSubtypes_):
                m_ExpValueTypeSubtypes_(ExpValueTypeSubtypes_) {
            }

            void ExpValueType::swap(ExpValueType& other_)  noexcept 
            {
                using std::swap;
                swap(m_ExpValueTypeSubtypes_, other_.m_ExpValueTypeSubtypes_);
            }  

            bool ExpValueType::operator == (const ExpValueType& other_) const {
                if (m_ExpValueTypeSubtypes_ != other_.m_ExpValueTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool ExpValueType::operator != (const ExpValueType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpValueType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ExpValueTypeSubtypes: " << sample.ExpValueTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MM::BaseType::ExpValueTypeEnum default_enumerator< ::UMAA::MM::BaseType::ExpValueTypeEnum>::value = ::UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MM::BaseType::ExpValueTypeEnum default_enumerator< ::UMAA::MM::BaseType::ExpValueTypeEnum>::value = ::UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D;
        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ExpValueTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpValueTypeEnum_g_tc_members[9]=
                {

                    {
                        (char *)"EXPBINARYVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D), 
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
                        (char *)"EXPBOOLEANVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D), 
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
                        (char *)"EXPBYTEVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D), 
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
                        (char *)"EXPCHARVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D), 
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
                        (char *)"EXPDATETIMEVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D), 
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
                        (char *)"EXPDOUBLEVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D), 
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
                        (char *)"EXPINTEGERVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D), 
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
                        (char *)"EXPLONGLONGVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D), 
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
                        (char *)"EXPSTRINGVALUE_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D), 
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

                static DDS_TypeCode ExpValueTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpValueTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ExpValueTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpValueTypeEnum*/

                if (is_initialized) {
                    return &ExpValueTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpValueTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ExpValueTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ExpValueTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ExpValueTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpValueTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpValueTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ExpValueTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpValueTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpValueTypeEnum_g_sampleAccessInfo;
                }

                ExpValueTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ExpValueTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                ExpValueTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpValueTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpValueTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpValueTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpValueTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpValueTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpValueTypeEnum >;

                ExpValueTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpValueTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpValueTypeEnum_g_typePlugin = 
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

                return &ExpValueTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpValueTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ExpValueTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpValueTypeUnion_g_tc_members[9]=
                {

                    {
                        (char *)"ExpBinaryValueVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpBooleanValueVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpByteValueVariant",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpCharValueVariant",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpDateTimeValueVariant",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpDoubleValueVariant",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpIntegerValueVariant",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpLongLongValueVariant",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ExpStringValueVariant",/* Member name */
                        {
                            9,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ExpValueTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpValueTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ExpValueTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpValueTypeUnion*/

                if (is_initialized) {
                    return &ExpValueTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpValueTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpValueTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpBinaryValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpBooleanValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpByteValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpCharValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpDateTimeValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpDoubleValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpIntegerValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpLongLongValueType>::get().native();
                ExpValueTypeUnion_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpStringValueType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ExpValueTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeEnum>::get().native();

                ExpValueTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpValueTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpValueTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpValueTypeUnion *sample;

                static RTIXCdrMemberAccessInfo ExpValueTypeUnion_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpValueTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpValueTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpValueTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                ExpValueTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpBinaryValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpBooleanValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpByteValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpCharValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpDateTimeValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpDoubleValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpIntegerValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpLongLongValueVariant() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D);
                ExpValueTypeUnion_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpStringValueVariant() - (char *)sample);

                ExpValueTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                ExpValueTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpValueTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpValueTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpValueTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpValueTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpValueTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpValueTypeUnion >;

                ExpValueTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpValueTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpValueTypeUnion_g_typePlugin = 
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

                return &ExpValueTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpValueTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ExpValueType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpValueType_g_tc_members[1]=
                {

                    {
                        (char *)"ExpValueTypeSubtypes",/* Member name */
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

                static DDS_TypeCode ExpValueType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpValueType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExpValueType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpValueType*/

                if (is_initialized) {
                    return &ExpValueType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpValueType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpValueType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                ExpValueType_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpValueType_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpValueType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpValueType *sample;

                static RTIXCdrMemberAccessInfo ExpValueType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpValueType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpValueType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpValueType);
                if (sample == NULL) {
                    return NULL;
                }

                ExpValueType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ExpValueTypeSubtypes() - (char *)sample);

                ExpValueType_g_sampleAccessInfo.memberAccessInfos = 
                ExpValueType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpValueType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpValueType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpValueType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpValueType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpValueType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpValueType >;

                ExpValueType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpValueType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpValueType_g_typePlugin = 
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

                return &ExpValueType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ExpValueType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpValueType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ExpValueTypeUnion >::reset_sample(::UMAA::MM::BaseType::ExpValueTypeUnion& sample) 
        {
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D);
            ::rti::topic::reset_sample(sample.ExpBinaryValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D);
            ::rti::topic::reset_sample(sample.ExpBooleanValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D);
            ::rti::topic::reset_sample(sample.ExpByteValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D);
            ::rti::topic::reset_sample(sample.ExpCharValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D);
            ::rti::topic::reset_sample(sample.ExpDateTimeValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D);
            ::rti::topic::reset_sample(sample.ExpDoubleValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D);
            ::rti::topic::reset_sample(sample.ExpIntegerValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D);
            ::rti::topic::reset_sample(sample.ExpLongLongValueVariant());
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D);
            ::rti::topic::reset_sample(sample.ExpStringValueVariant());

            sample._d() = ::UMAA::MM::BaseType::ExpValueTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpValueTypeUnion >::allocate_sample(::UMAA::MM::BaseType::ExpValueTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpBinaryValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpBooleanValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpByteValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpCharValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpDateTimeValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpDoubleValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpIntegerValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpLongLongValueVariant(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D);
            ::rti::topic::allocate_sample(sample.ExpStringValueVariant(),  -1, -1);

            sample._d() = ::UMAA::MM::BaseType::ExpValueTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpValueType >::reset_sample(::UMAA::MM::BaseType::ExpValueType& sample) 
        {
            ::rti::topic::reset_sample(sample.ExpValueTypeSubtypes());
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpValueType >::allocate_sample(::UMAA::MM::BaseType::ExpValueType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ExpValueTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
