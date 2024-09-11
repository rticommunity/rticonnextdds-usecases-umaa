

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ResourceAllocationControlInfoPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ResourceAllocationControlInfo.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationControlInfo: 

            ResourceAllocationControlInfo::ResourceAllocationControlInfo()  {

            }   

            ResourceAllocationControlInfo::ResourceAllocationControlInfo (const ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession_,const ::UMAA::Common::IdentifierType& resourceID_):
                m_controlSession_(controlSession_), 
                m_resourceID_(resourceID_) {
            }

            void ResourceAllocationControlInfo::swap(ResourceAllocationControlInfo& other_)  noexcept 
            {
                using std::swap;
                swap(m_controlSession_, other_.m_controlSession_);
                swap(m_resourceID_, other_.m_resourceID_);
            }  

            bool ResourceAllocationControlInfo::operator == (const ResourceAllocationControlInfo& other_) const {
                if (m_controlSession_ != other_.m_controlSession_) {
                    return false;
                }
                if (m_resourceID_ != other_.m_resourceID_) {
                    return false;
                }
                return true;
            }

            bool ResourceAllocationControlInfo::operator != (const ResourceAllocationControlInfo& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationControlInfo& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "controlSession: " << sample.controlSession ()<<", ";
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
        struct native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationControlInfo_g_tc_members[2]=
                {

                    {
                        (char *)"controlSession",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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

                static DDS_TypeCode ResourceAllocationControlInfo_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationControlInfo_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationControlInfo*/

                if (is_initialized) {
                    return &ResourceAllocationControlInfo_g_tc;
                }

                is_initialized = RTI_TRUE;

                ResourceAllocationControlInfo_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationControlInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession>::get().native();
                ResourceAllocationControlInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationControlInfo_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationControlInfo_g_tc._data._typePlugin = type_plugin_info();    

                return &ResourceAllocationControlInfo_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationControlInfo_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationControlInfo_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlInfo_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationControlInfo_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->controlSession() - (char *)sample);

                ResourceAllocationControlInfo_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceID() - (char *)sample);

                ResourceAllocationControlInfo_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationControlInfo_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationControlInfo_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationControlInfo_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationControlInfo_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationControlInfo_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >;

                ResourceAllocationControlInfo_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlInfo_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationControlInfo_g_typePlugin = 
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

                return &ResourceAllocationControlInfo_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample) 
        {
            ::rti::topic::reset_sample(sample.controlSession());
            ::rti::topic::reset_sample(sample.resourceID());
        }

        void topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
