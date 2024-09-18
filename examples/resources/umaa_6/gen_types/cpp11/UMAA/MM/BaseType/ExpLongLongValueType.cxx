

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpLongLongValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ExpLongLongValueTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ExpLongLongValueType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ExpLongLongValueType: 

            ExpLongLongValueType::ExpLongLongValueType() :
                m_longlongValue_ (0ull)  {

            }   

            ExpLongLongValueType::ExpLongLongValueType (uint64_t longlongValue_):
                m_longlongValue_(longlongValue_) {
            }

            void ExpLongLongValueType::swap(ExpLongLongValueType& other_)  noexcept 
            {
                using std::swap;
                swap(m_longlongValue_, other_.m_longlongValue_);
            }  

            bool ExpLongLongValueType::operator == (const ExpLongLongValueType& other_) const {
                if (m_longlongValue_ != other_.m_longlongValue_) {
                    return false;
                }
                return true;
            }

            bool ExpLongLongValueType::operator != (const ExpLongLongValueType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpLongLongValueType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "longlongValue: " << sample.longlongValue ();
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
        struct native_type_code< ::UMAA::MM::BaseType::ExpLongLongValueType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpLongLongValueType_g_tc_members[1]=
                {

                    {
                        (char *)"longlongValue",/* Member name */
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

                static DDS_TypeCode ExpLongLongValueType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpLongLongValueType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExpLongLongValueType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpLongLongValueType*/

                if (is_initialized) {
                    return &ExpLongLongValueType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpLongLongValueType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpLongLongValueType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ExpLongLongValueType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                ExpLongLongValueType_g_tc_members[0]._annotations._defaultValue._u.ulong_long_value = 0ull;
                ExpLongLongValueType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                ExpLongLongValueType_g_tc_members[0]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                ExpLongLongValueType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                ExpLongLongValueType_g_tc_members[0]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                ExpLongLongValueType_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpLongLongValueType_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpLongLongValueType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpLongLongValueType *sample;

                static RTIXCdrMemberAccessInfo ExpLongLongValueType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpLongLongValueType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpLongLongValueType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpLongLongValueType);
                if (sample == NULL) {
                    return NULL;
                }

                ExpLongLongValueType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->longlongValue() - (char *)sample);

                ExpLongLongValueType_g_sampleAccessInfo.memberAccessInfos = 
                ExpLongLongValueType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpLongLongValueType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpLongLongValueType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpLongLongValueType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpLongLongValueType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpLongLongValueType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpLongLongValueType >;

                ExpLongLongValueType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpLongLongValueType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpLongLongValueType_g_typePlugin = 
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

                return &ExpLongLongValueType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ExpLongLongValueType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpLongLongValueType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ExpLongLongValueType >::reset_sample(::UMAA::MM::BaseType::ExpLongLongValueType& sample) 
        {
            sample.longlongValue(0ull);
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpLongLongValueType >::allocate_sample(::UMAA::MM::BaseType::ExpLongLongValueType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE