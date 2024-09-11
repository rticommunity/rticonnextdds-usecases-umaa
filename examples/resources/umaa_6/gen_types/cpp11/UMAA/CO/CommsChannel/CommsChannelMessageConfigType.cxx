

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelMessageConfigType.idl
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
#include "CommsChannelMessageConfigTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelMessageConfigType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannel {

            // ---- CommsChannelMessageConfigType: 

            CommsChannelMessageConfigType::CommsChannelMessageConfigType() :
                m_deadline_ (0.0) ,
                m_messageType_ ("") ,
                m_priority_ (0) ,
                m_purgeOption_(UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY)  {

            }   

            CommsChannelMessageConfigType::CommsChannelMessageConfigType (const ::UMAA::Common::Measurement::NumericGUID& commsChannelID_,double deadline_,const ::UMAA::Common::IdentifierType& destination_,const ::UMAA::Common::Measurement::NumericGUID& messageFilterIDs_,const std::string& messageType_,int32_t priority_,const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType& purgeOption_):
                m_commsChannelID_(commsChannelID_), 
                m_deadline_(deadline_), 
                m_destination_(destination_), 
                m_messageFilterIDs_(messageFilterIDs_), 
                m_messageType_(messageType_), 
                m_priority_(priority_), 
                m_purgeOption_(purgeOption_) {
            }

            void CommsChannelMessageConfigType::swap(CommsChannelMessageConfigType& other_)  noexcept 
            {
                using std::swap;
                swap(m_commsChannelID_, other_.m_commsChannelID_);
                swap(m_deadline_, other_.m_deadline_);
                swap(m_destination_, other_.m_destination_);
                swap(m_messageFilterIDs_, other_.m_messageFilterIDs_);
                swap(m_messageType_, other_.m_messageType_);
                swap(m_priority_, other_.m_priority_);
                swap(m_purgeOption_, other_.m_purgeOption_);
            }  

            bool CommsChannelMessageConfigType::operator == (const CommsChannelMessageConfigType& other_) const {
                if (m_commsChannelID_ != other_.m_commsChannelID_) {
                    return false;
                }
                if (std::fabs(m_deadline_ - other_.m_deadline_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_deadline_ - other_.m_deadline_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                if (m_messageFilterIDs_ != other_.m_messageFilterIDs_) {
                    return false;
                }
                if (m_messageType_ != other_.m_messageType_) {
                    return false;
                }
                if (m_priority_ != other_.m_priority_) {
                    return false;
                }
                if (m_purgeOption_ != other_.m_purgeOption_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelMessageConfigType::operator != (const CommsChannelMessageConfigType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelMessageConfigType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "commsChannelID: " << sample.commsChannelID ()<<", ";
                o << "deadline: " << std::setprecision(15) << sample.deadline ()<<", ";
                o << "destination: " << sample.destination ()<<", ";
                o << "messageFilterIDs: " << sample.messageFilterIDs ()<<", ";
                o << "messageType: " << sample.messageType ()<<", ";
                o << "priority: " << sample.priority ()<<", ";
                o << "purgeOption: " << sample.purgeOption ();
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
        struct native_type_code< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelMessageConfigType_g_tc_members[7]=
                {

                    {
                        (char *)"commsChannelID",/* Member name */
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
                        (char *)"deadline",/* Member name */
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
                        (char *)"destination",/* Member name */
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
                        (char *)"messageFilterIDs",/* Member name */
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
                    }, 
                    {
                        (char *)"messageType",/* Member name */
                        {
                            4,/* Representation ID */
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
                        (char *)"priority",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"purgeOption",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode CommsChannelMessageConfigType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannel::CommsChannelMessageConfigType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        CommsChannelMessageConfigType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelMessageConfigType*/

                if (is_initialized) {
                    return &CommsChannelMessageConfigType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelMessageConfigType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelMessageConfigType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelMessageConfigType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                CommsChannelMessageConfigType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                CommsChannelMessageConfigType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelMessageConfigType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                CommsChannelMessageConfigType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t>::get().native();
                CommsChannelMessageConfigType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelMessageConfigType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CommsChannelMessageConfigType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommsChannelMessageConfigType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelMessageConfigType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                CommsChannelMessageConfigType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommsChannelMessageConfigType_g_tc_members[6]._annotations._defaultValue._u.enumerated_value = 0;

                CommsChannelMessageConfigType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelMessageConfigType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelMessageConfigType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelMessageConfigType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelMessageConfigType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelMessageConfigType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelMessageConfigType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsChannelID() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->deadline() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageFilterIDs() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageType() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->priority() - (char *)sample);

                CommsChannelMessageConfigType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->purgeOption() - (char *)sample);

                CommsChannelMessageConfigType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelMessageConfigType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannel::CommsChannelMessageConfigType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelMessageConfigType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelMessageConfigType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelMessageConfigType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelMessageConfigType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType >;

                CommsChannelMessageConfigType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelMessageConfigType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelMessageConfigType_g_typePlugin = 
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

                return &CommsChannelMessageConfigType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType >::reset_sample(::UMAA::CO::CommsChannel::CommsChannelMessageConfigType& sample) 
        {
            ::rti::topic::reset_sample(sample.commsChannelID());
            sample.deadline(0.0);
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.messageFilterIDs());
            sample.messageType("");
            sample.priority(0);
            sample.purgeOption(UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY);
        }

        void topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType >::allocate_sample(::UMAA::CO::CommsChannel::CommsChannelMessageConfigType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.commsChannelID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageFilterIDs(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageType(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.purgeOption(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
