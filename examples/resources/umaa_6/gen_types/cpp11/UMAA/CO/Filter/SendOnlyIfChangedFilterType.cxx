

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SendOnlyIfChangedFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SendOnlyIfChangedFilterTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SendOnlyIfChangedFilterType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace Filter {

            // ---- SendOnlyIfChangedFilterType: 

            SendOnlyIfChangedFilterType::SendOnlyIfChangedFilterType() :
                m_sendIfChanged_ (0)  {

            }   

            SendOnlyIfChangedFilterType::SendOnlyIfChangedFilterType (bool sendIfChanged_):
                m_sendIfChanged_(sendIfChanged_) {
            }

            void SendOnlyIfChangedFilterType::swap(SendOnlyIfChangedFilterType& other_)  noexcept 
            {
                using std::swap;
                swap(m_sendIfChanged_, other_.m_sendIfChanged_);
            }  

            bool SendOnlyIfChangedFilterType::operator == (const SendOnlyIfChangedFilterType& other_) const {
                if (m_sendIfChanged_ != other_.m_sendIfChanged_) {
                    return false;
                }
                return true;
            }

            bool SendOnlyIfChangedFilterType::operator != (const SendOnlyIfChangedFilterType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SendOnlyIfChangedFilterType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "sendIfChanged: " << sample.sendIfChanged ();
                o <<"]";
                return o;
            }

        } // namespace Filter  

    } // namespace CO  

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
        struct native_type_code< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SendOnlyIfChangedFilterType_g_tc_members[1]=
                {

                    {
                        (char *)"sendIfChanged",/* Member name */
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

                static DDS_TypeCode SendOnlyIfChangedFilterType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::Filter::SendOnlyIfChangedFilterType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SendOnlyIfChangedFilterType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SendOnlyIfChangedFilterType*/

                if (is_initialized) {
                    return &SendOnlyIfChangedFilterType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SendOnlyIfChangedFilterType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SendOnlyIfChangedFilterType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                SendOnlyIfChangedFilterType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SendOnlyIfChangedFilterType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                SendOnlyIfChangedFilterType_g_tc._data._sampleAccessInfo = sample_access_info();
                SendOnlyIfChangedFilterType_g_tc._data._typePlugin = type_plugin_info();    

                return &SendOnlyIfChangedFilterType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::Filter::SendOnlyIfChangedFilterType *sample;

                static RTIXCdrMemberAccessInfo SendOnlyIfChangedFilterType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SendOnlyIfChangedFilterType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SendOnlyIfChangedFilterType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::Filter::SendOnlyIfChangedFilterType);
                if (sample == NULL) {
                    return NULL;
                }

                SendOnlyIfChangedFilterType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sendIfChanged() - (char *)sample);

                SendOnlyIfChangedFilterType_g_sampleAccessInfo.memberAccessInfos = 
                SendOnlyIfChangedFilterType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::Filter::SendOnlyIfChangedFilterType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SendOnlyIfChangedFilterType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SendOnlyIfChangedFilterType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SendOnlyIfChangedFilterType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SendOnlyIfChangedFilterType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType >;

                SendOnlyIfChangedFilterType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SendOnlyIfChangedFilterType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SendOnlyIfChangedFilterType_g_typePlugin = 
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

                return &SendOnlyIfChangedFilterType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType >::reset_sample(::UMAA::CO::Filter::SendOnlyIfChangedFilterType& sample) 
        {
            sample.sendIfChanged(0);
        }

        void topic_type_support< ::UMAA::CO::Filter::SendOnlyIfChangedFilterType >::allocate_sample(::UMAA::CO::Filter::SendOnlyIfChangedFilterType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
