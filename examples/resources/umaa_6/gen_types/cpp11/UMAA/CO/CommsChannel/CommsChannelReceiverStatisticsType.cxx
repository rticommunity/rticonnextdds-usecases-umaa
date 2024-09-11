

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelReceiverStatisticsType.idl
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
#include "CommsChannelReceiverStatisticsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelReceiverStatisticsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannel {

            // ---- CommsChannelReceiverStatisticsType: 

            CommsChannelReceiverStatisticsType::CommsChannelReceiverStatisticsType() :
                m_countBytes_ (0) ,
                m_duration_ (0.0) ,
                m_numMessages_ (0)  {

            }   

            CommsChannelReceiverStatisticsType::CommsChannelReceiverStatisticsType (int32_t countBytes_,double duration_,int32_t numMessages_):
                m_countBytes_(countBytes_), 
                m_duration_(duration_), 
                m_numMessages_(numMessages_) {
            }

            void CommsChannelReceiverStatisticsType::swap(CommsChannelReceiverStatisticsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_countBytes_, other_.m_countBytes_);
                swap(m_duration_, other_.m_duration_);
                swap(m_numMessages_, other_.m_numMessages_);
            }  

            bool CommsChannelReceiverStatisticsType::operator == (const CommsChannelReceiverStatisticsType& other_) const {
                if (m_countBytes_ != other_.m_countBytes_) {
                    return false;
                }
                if (std::fabs(m_duration_ - other_.m_duration_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_duration_ - other_.m_duration_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_numMessages_ != other_.m_numMessages_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelReceiverStatisticsType::operator != (const CommsChannelReceiverStatisticsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelReceiverStatisticsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "countBytes: " << sample.countBytes ()<<", ";
                o << "duration: " << std::setprecision(15) << sample.duration ()<<", ";
                o << "numMessages: " << sample.numMessages ();
                o <<"]";
                return o;
            }

        } // namespace CommsChannel  

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
        struct native_type_code< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelReceiverStatisticsType_g_tc_members[3]=
                {

                    {
                        (char *)"countBytes",/* Member name */
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
                    }, 
                    {
                        (char *)"duration",/* Member name */
                        {
                            1,/* Representation ID */
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
                    }, 
                    {
                        (char *)"numMessages",/* Member name */
                        {
                            2,/* Representation ID */
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

                static DDS_TypeCode CommsChannelReceiverStatisticsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CommsChannelReceiverStatisticsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelReceiverStatisticsType*/

                if (is_initialized) {
                    return &CommsChannelReceiverStatisticsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelReceiverStatisticsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelReceiverStatisticsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t>::get().native();
                CommsChannelReceiverStatisticsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                CommsChannelReceiverStatisticsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverStatisticsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverStatisticsType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                CommsChannelReceiverStatisticsType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelReceiverStatisticsType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelReceiverStatisticsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelReceiverStatisticsType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelReceiverStatisticsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverStatisticsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelReceiverStatisticsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->countBytes() - (char *)sample);

                CommsChannelReceiverStatisticsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                CommsChannelReceiverStatisticsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numMessages() - (char *)sample);

                CommsChannelReceiverStatisticsType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelReceiverStatisticsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelReceiverStatisticsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelReceiverStatisticsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelReceiverStatisticsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelReceiverStatisticsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType >;

                CommsChannelReceiverStatisticsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverStatisticsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelReceiverStatisticsType_g_typePlugin = 
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

                return &CommsChannelReceiverStatisticsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType >::reset_sample(::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType& sample) 
        {
            sample.countBytes(0);
            sample.duration(0.0);
            sample.numMessages(0);
        }

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType >::allocate_sample(::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
