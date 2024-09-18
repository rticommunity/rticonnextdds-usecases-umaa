

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlSession.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ResourceAllocationControlSessionPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ResourceAllocationControlSession.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationControlSession: 

            ResourceAllocationControlSession::ResourceAllocationControlSession()  {

            }   

            ResourceAllocationControlSession::ResourceAllocationControlSession (const ::UMAA::Common::IdentifierType& controllingConsumer_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_):
                m_controllingConsumer_(controllingConsumer_), 
                m_endTime_(endTime_) {
            }

            void ResourceAllocationControlSession::swap(ResourceAllocationControlSession& other_)  noexcept 
            {
                using std::swap;
                swap(m_controllingConsumer_, other_.m_controllingConsumer_);
                swap(m_endTime_, other_.m_endTime_);
            }  

            bool ResourceAllocationControlSession::operator == (const ResourceAllocationControlSession& other_) const {
                if (m_controllingConsumer_ != other_.m_controllingConsumer_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                return true;
            }

            bool ResourceAllocationControlSession::operator != (const ResourceAllocationControlSession& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationControlSession& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "controllingConsumer: " << sample.controllingConsumer ()<<", ";
                o << "endTime: " << sample.endTime ();
                o <<"]";
                return o;
            }

        } // namespace ResourceAllocation  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationControlSession_g_tc_members[2]=
                {

                    {
                        (char *)"controllingConsumer",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ResourceAllocationControlSession_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationControlSession", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationControlSession_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationControlSession*/

                if (is_initialized) {
                    return &ResourceAllocationControlSession_g_tc;
                }

                is_initialized = RTI_TRUE;

                ResourceAllocationControlSession_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationControlSession_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ResourceAllocationControlSession_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationControlSession_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationControlSession_g_tc._data._typePlugin = type_plugin_info();    

                return &ResourceAllocationControlSession_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationControlSession_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationControlSession_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlSession_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationControlSession_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->controllingConsumer() - (char *)sample);

                ResourceAllocationControlSession_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                ResourceAllocationControlSession_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationControlSession_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationControlSession_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationControlSession_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationControlSession_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationControlSession_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >;

                ResourceAllocationControlSession_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlSession_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationControlSession_g_typePlugin = 
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

                return &ResourceAllocationControlSession_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >::reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample) 
        {
            ::rti::topic::reset_sample(sample.controllingConsumer());
            ::rti::topic::reset_sample(sample.endTime());
        }

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >::allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.controllingConsumer(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE