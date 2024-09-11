

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSenderStatisticsType.idl
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
#include "CommsChannelSenderStatisticsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelSenderStatisticsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannel {

            // ---- CommsChannelSenderStatisticsType: 

            CommsChannelSenderStatisticsType::CommsChannelSenderStatisticsType() :
                m_countBytes_ (0) ,
                m_duration_ (0.0) ,
                m_numMessages_ (0)  {

            }   

            CommsChannelSenderStatisticsType::CommsChannelSenderStatisticsType (int32_t countBytes_,double duration_,int32_t numMessages_):
                m_countBytes_(countBytes_), 
                m_duration_(duration_), 
                m_numMessages_(numMessages_) {
            }

            void CommsChannelSenderStatisticsType::swap(CommsChannelSenderStatisticsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_countBytes_, other_.m_countBytes_);
                swap(m_duration_, other_.m_duration_);
                swap(m_numMessages_, other_.m_numMessages_);
            }  

            bool CommsChannelSenderStatisticsType::operator == (const CommsChannelSenderStatisticsType& other_) const {
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

            bool CommsChannelSenderStatisticsType::operator != (const CommsChannelSenderStatisticsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelSenderStatisticsType& sample)
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
        struct native_type_code< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelSenderStatisticsType_g_tc_members[3]=
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

                static DDS_TypeCode CommsChannelSenderStatisticsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CommsChannelSenderStatisticsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelSenderStatisticsType*/

                if (is_initialized) {
                    return &CommsChannelSenderStatisticsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelSenderStatisticsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelSenderStatisticsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t>::get().native();
                CommsChannelSenderStatisticsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                CommsChannelSenderStatisticsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelSenderStatisticsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelSenderStatisticsType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                CommsChannelSenderStatisticsType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelSenderStatisticsType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelSenderStatisticsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelSenderStatisticsType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelSenderStatisticsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelSenderStatisticsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelSenderStatisticsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->countBytes() - (char *)sample);

                CommsChannelSenderStatisticsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                CommsChannelSenderStatisticsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numMessages() - (char *)sample);

                CommsChannelSenderStatisticsType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelSenderStatisticsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelSenderStatisticsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelSenderStatisticsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelSenderStatisticsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelSenderStatisticsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType >;

                CommsChannelSenderStatisticsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelSenderStatisticsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelSenderStatisticsType_g_typePlugin = 
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

                return &CommsChannelSenderStatisticsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType >::reset_sample(::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType& sample) 
        {
            sample.countBytes(0);
            sample.duration(0.0);
            sample.numMessages(0);
        }

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType >::allocate_sample(::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
