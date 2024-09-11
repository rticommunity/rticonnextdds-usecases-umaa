

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ResourceAllocationPriorityInfoPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ResourceAllocationPriorityInfo.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationPriorityInfo: 

            ResourceAllocationPriorityInfo::ResourceAllocationPriorityInfo()  {

            }   

            ResourceAllocationPriorityInfo::ResourceAllocationPriorityInfo (const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >& priorities_,const ::UMAA::Common::IdentifierType& resourceID_):
                m_priorities_(priorities_), 
                m_resourceID_(resourceID_) {
            }

            void ResourceAllocationPriorityInfo::swap(ResourceAllocationPriorityInfo& other_)  noexcept 
            {
                using std::swap;
                swap(m_priorities_, other_.m_priorities_);
                swap(m_resourceID_, other_.m_resourceID_);
            }  

            bool ResourceAllocationPriorityInfo::operator == (const ResourceAllocationPriorityInfo& other_) const {
                if (m_priorities_ != other_.m_priorities_) {
                    return false;
                }
                if (m_resourceID_ != other_.m_resourceID_) {
                    return false;
                }
                return true;
            }

            bool ResourceAllocationPriorityInfo::operator != (const ResourceAllocationPriorityInfo& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationPriorityInfo& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "priorities: " << sample.priorities ()<<", ";
                o << "resourceID: " << sample.resourceID ();
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
        struct native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ResourceAllocationPriorityInfo_g_tc_priorities_sequence;

                static DDS_TypeCode_Member ResourceAllocationPriorityInfo_g_tc_members[2]=
                {

                    {
                        (char *)"priorities",/* Member name */
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
                        (char *)"resourceID",/* Member name */
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
                    }
                };

                static DDS_TypeCode ResourceAllocationPriorityInfo_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationPriorityInfo_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationPriorityInfo*/

                if (is_initialized) {
                    return &ResourceAllocationPriorityInfo_g_tc;
                }

                is_initialized = RTI_TRUE;

                ResourceAllocationPriorityInfo_g_tc_priorities_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L > >((64L));

                ResourceAllocationPriorityInfo_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationPriorityInfo_g_tc_priorities_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ResourceAllocationPriorityInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ResourceAllocationPriorityInfo_g_tc_priorities_sequence;
                ResourceAllocationPriorityInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationPriorityInfo_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationPriorityInfo_g_tc._data._typePlugin = type_plugin_info();    

                return &ResourceAllocationPriorityInfo_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationPriorityInfo_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationPriorityInfo_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityInfo_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationPriorityInfo_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->priorities() - (char *)sample);

                ResourceAllocationPriorityInfo_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceID() - (char *)sample);

                ResourceAllocationPriorityInfo_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationPriorityInfo_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationPriorityInfo_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationPriorityInfo_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationPriorityInfo_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationPriorityInfo_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >;

                ResourceAllocationPriorityInfo_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityInfo_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationPriorityInfo_g_typePlugin = 
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

                return &ResourceAllocationPriorityInfo_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo& sample) 
        {
            ::rti::topic::reset_sample(sample.priorities());
            ::rti::topic::reset_sample(sample.resourceID());
        }

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.priorities(),  64L, -1);
            ::rti::topic::allocate_sample(sample.resourceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
