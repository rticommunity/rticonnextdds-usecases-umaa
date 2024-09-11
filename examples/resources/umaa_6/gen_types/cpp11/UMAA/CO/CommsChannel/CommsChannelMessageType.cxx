

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelMessageType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelMessageTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelMessageType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannel {

            // ---- CommsChannelMessageType: 

            CommsChannelMessageType::CommsChannelMessageType() :
                m_messageSize_ (0) ,
                m_messageType_ ("")  {

            }   

            CommsChannelMessageType::CommsChannelMessageType (const ::UMAA::Common::Measurement::NumericGUID& messageID_,int32_t messageSize_,const ::UMAA::Common::Measurement::DateTime& messageTimeStamp_,const std::string& messageType_):
                m_messageID_(messageID_), 
                m_messageSize_(messageSize_), 
                m_messageTimeStamp_(messageTimeStamp_), 
                m_messageType_(messageType_) {
            }

            void CommsChannelMessageType::swap(CommsChannelMessageType& other_)  noexcept 
            {
                using std::swap;
                swap(m_messageID_, other_.m_messageID_);
                swap(m_messageSize_, other_.m_messageSize_);
                swap(m_messageTimeStamp_, other_.m_messageTimeStamp_);
                swap(m_messageType_, other_.m_messageType_);
            }  

            bool CommsChannelMessageType::operator == (const CommsChannelMessageType& other_) const {
                if (m_messageID_ != other_.m_messageID_) {
                    return false;
                }
                if (m_messageSize_ != other_.m_messageSize_) {
                    return false;
                }
                if (m_messageTimeStamp_ != other_.m_messageTimeStamp_) {
                    return false;
                }
                if (m_messageType_ != other_.m_messageType_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelMessageType::operator != (const CommsChannelMessageType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelMessageType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "messageID: " << sample.messageID ()<<", ";
                o << "messageSize: " << sample.messageSize ()<<", ";
                o << "messageTimeStamp: " << sample.messageTimeStamp ()<<", ";
                o << "messageType: " << sample.messageType ();
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
        struct native_type_code< ::UMAA::CO::CommsChannel::CommsChannelMessageType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelMessageType_g_tc_members[4]=
                {

                    {
                        (char *)"messageID",/* Member name */
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
                        (char *)"messageSize",/* Member name */
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
                        (char *)"messageTimeStamp",/* Member name */
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
                    }, 
                    {
                        (char *)"messageType",/* Member name */
                        {
                            3,/* Representation ID */
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

                static DDS_TypeCode CommsChannelMessageType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannel::CommsChannelMessageType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        CommsChannelMessageType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelMessageType*/

                if (is_initialized) {
                    return &CommsChannelMessageType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelMessageType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelMessageType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelMessageType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t>::get().native();
                CommsChannelMessageType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelMessageType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelMessageType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                CommsChannelMessageType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelMessageType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                CommsChannelMessageType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommsChannelMessageType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CommsChannelMessageType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelMessageType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelMessageType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannel::CommsChannelMessageType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelMessageType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelMessageType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelMessageType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannel::CommsChannelMessageType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelMessageType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageID() - (char *)sample);

                CommsChannelMessageType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageSize() - (char *)sample);

                CommsChannelMessageType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageTimeStamp() - (char *)sample);

                CommsChannelMessageType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageType() - (char *)sample);

                CommsChannelMessageType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelMessageType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannel::CommsChannelMessageType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelMessageType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelMessageType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelMessageType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelMessageType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannel::CommsChannelMessageType >;

                CommsChannelMessageType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelMessageType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelMessageType_g_typePlugin = 
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

                return &CommsChannelMessageType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelMessageType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannel::CommsChannelMessageType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageType >::reset_sample(::UMAA::CO::CommsChannel::CommsChannelMessageType& sample) 
        {
            ::rti::topic::reset_sample(sample.messageID());
            sample.messageSize(0);
            ::rti::topic::reset_sample(sample.messageTimeStamp());
            sample.messageType("");
        }

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageType >::allocate_sample(::UMAA::CO::CommsChannel::CommsChannelMessageType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.messageID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageTimeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageType(),  -1, 1023L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
