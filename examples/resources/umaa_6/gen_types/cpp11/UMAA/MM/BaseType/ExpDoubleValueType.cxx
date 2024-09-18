

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpDoubleValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ExpDoubleValueTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ExpDoubleValueType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ExpDoubleValueType: 

            ExpDoubleValueType::ExpDoubleValueType() :
                m_doubleValue_ (0.0)  {

            }   

            ExpDoubleValueType::ExpDoubleValueType (double doubleValue_):
                m_doubleValue_(doubleValue_) {
            }

            void ExpDoubleValueType::swap(ExpDoubleValueType& other_)  noexcept 
            {
                using std::swap;
                swap(m_doubleValue_, other_.m_doubleValue_);
            }  

            bool ExpDoubleValueType::operator == (const ExpDoubleValueType& other_) const {
                if (std::fabs(m_doubleValue_ - other_.m_doubleValue_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_doubleValue_ - other_.m_doubleValue_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool ExpDoubleValueType::operator != (const ExpDoubleValueType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ExpDoubleValueType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "doubleValue: " << std::setprecision(15) << sample.doubleValue ();
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
        struct native_type_code< ::UMAA::MM::BaseType::ExpDoubleValueType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ExpDoubleValueType_g_tc_members[1]=
                {

                    {
                        (char *)"doubleValue",/* Member name */
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

                static DDS_TypeCode ExpDoubleValueType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ExpDoubleValueType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExpDoubleValueType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExpDoubleValueType*/

                if (is_initialized) {
                    return &ExpDoubleValueType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ExpDoubleValueType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExpDoubleValueType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DoubleValue_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ExpDoubleValueType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ExpDoubleValueType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ExpDoubleValueType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ExpDoubleValueType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ExpDoubleValueType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ExpDoubleValueType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ExpDoubleValueType_g_tc._data._sampleAccessInfo = sample_access_info();
                ExpDoubleValueType_g_tc._data._typePlugin = type_plugin_info();    

                return &ExpDoubleValueType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ExpDoubleValueType *sample;

                static RTIXCdrMemberAccessInfo ExpDoubleValueType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExpDoubleValueType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExpDoubleValueType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ExpDoubleValueType);
                if (sample == NULL) {
                    return NULL;
                }

                ExpDoubleValueType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->doubleValue() - (char *)sample);

                ExpDoubleValueType_g_sampleAccessInfo.memberAccessInfos = 
                ExpDoubleValueType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ExpDoubleValueType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ExpDoubleValueType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ExpDoubleValueType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExpDoubleValueType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExpDoubleValueType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ExpDoubleValueType >;

                ExpDoubleValueType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExpDoubleValueType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExpDoubleValueType_g_typePlugin = 
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

                return &ExpDoubleValueType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ExpDoubleValueType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ExpDoubleValueType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ExpDoubleValueType >::reset_sample(::UMAA::MM::BaseType::ExpDoubleValueType& sample) 
        {
            sample.doubleValue(0.0);
        }

        void topic_type_support< ::UMAA::MM::BaseType::ExpDoubleValueType >::allocate_sample(::UMAA::MM::BaseType::ExpDoubleValueType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE