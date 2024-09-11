

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpIntegerValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ExpIntegerValueTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ExpIntegerValueType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ExpIntegerValueType: 

            ExpIntegerValueType::ExpIntegerValueType() :
                m_integerValue_ (0)  {

            }   

            ExpIntegerValueType::ExpIntegerValueType (int32_t integerValue_):
                m_integerValue_(integerValue_) {
            }

            void ExpIntegerValueType::swap(ExpIntegerValueType& other_)  noexcept 
            {
                using std::swap;
                swap(m_integerValue_, other_.m_integerValue_);
            }  

            bool ExpIntegerValueType::operator == (const ExpIntegerValueType& other_) const {
                if (m_integerValue_ != other_.m_integerValue_) {
                    return false;
                }
                return true;
            }

            bool ExpIntegerValueType::operator != (const ExpIntegerValueType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpIntegerValueType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "integerValue: " << sample.integerValue ();
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
        struct native_type_code< ::UMAA::MM::BaseType::ExpIntegerValueType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpIntegerValueType_g_tc_members[1]=
                {

                    {
                        (char *)"integerValue",/* Member name */
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

                static DDS_TypeCode ExpIntegerValueType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpIntegerValueType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExpIntegerValueType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpIntegerValueType*/

                if (is_initialized) {
                    return &ExpIntegerValueType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpIntegerValueType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpIntegerValueType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::IntegerValue_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ExpIntegerValueType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ExpIntegerValueType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                ExpIntegerValueType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ExpIntegerValueType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ExpIntegerValueType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ExpIntegerValueType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                ExpIntegerValueType_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpIntegerValueType_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpIntegerValueType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpIntegerValueType *sample;

                static RTIXCdrMemberAccessInfo ExpIntegerValueType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpIntegerValueType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpIntegerValueType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpIntegerValueType);
                if (sample == NULL) {
                    return NULL;
                }

                ExpIntegerValueType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->integerValue() - (char *)sample);

                ExpIntegerValueType_g_sampleAccessInfo.memberAccessInfos = 
                ExpIntegerValueType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpIntegerValueType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpIntegerValueType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpIntegerValueType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpIntegerValueType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpIntegerValueType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpIntegerValueType >;

                ExpIntegerValueType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpIntegerValueType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpIntegerValueType_g_typePlugin = 
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

                return &ExpIntegerValueType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ExpIntegerValueType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpIntegerValueType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ExpIntegerValueType >::reset_sample(::UMAA::MM::BaseType::ExpIntegerValueType& sample) 
        {
            sample.integerValue(0);
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpIntegerValueType >::allocate_sample(::UMAA::MM::BaseType::ExpIntegerValueType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
