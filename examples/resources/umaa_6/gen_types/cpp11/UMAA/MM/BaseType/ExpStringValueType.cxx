

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpStringValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ExpStringValueTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ExpStringValueType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ExpStringValueType: 

            ExpStringValueType::ExpStringValueType() :
                m_stringValue_ ("")  {

            }   

            ExpStringValueType::ExpStringValueType (const std::string& stringValue_):
                m_stringValue_(stringValue_) {
            }

            void ExpStringValueType::swap(ExpStringValueType& other_)  noexcept 
            {
                using std::swap;
                swap(m_stringValue_, other_.m_stringValue_);
            }  

            bool ExpStringValueType::operator == (const ExpStringValueType& other_) const {
                if (m_stringValue_ != other_.m_stringValue_) {
                    return false;
                }
                return true;
            }

            bool ExpStringValueType::operator != (const ExpStringValueType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpStringValueType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "stringValue: " << sample.stringValue ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ExpStringValueType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpStringValueType_g_tc_members[1]=
                {

                    {
                        (char *)"stringValue",/* Member name */
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

                static DDS_TypeCode ExpStringValueType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpStringValueType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExpStringValueType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpStringValueType*/

                if (is_initialized) {
                    return &ExpStringValueType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpStringValueType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpStringValueType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringValue_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ExpStringValueType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ExpStringValueType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ExpStringValueType_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpStringValueType_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpStringValueType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpStringValueType *sample;

                static RTIXCdrMemberAccessInfo ExpStringValueType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpStringValueType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpStringValueType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpStringValueType);
                if (sample == NULL) {
                    return NULL;
                }

                ExpStringValueType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stringValue() - (char *)sample);

                ExpStringValueType_g_sampleAccessInfo.memberAccessInfos = 
                ExpStringValueType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpStringValueType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpStringValueType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpStringValueType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpStringValueType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpStringValueType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpStringValueType >;

                ExpStringValueType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpStringValueType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpStringValueType_g_typePlugin = 
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

                return &ExpStringValueType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ExpStringValueType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpStringValueType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ExpStringValueType >::reset_sample(::UMAA::MM::BaseType::ExpStringValueType& sample) 
        {
            sample.stringValue("");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpStringValueType >::allocate_sample(::UMAA::MM::BaseType::ExpStringValueType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.stringValue(),  -1, 256L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
