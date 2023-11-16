

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ResourceAllocationPriorityReportType.hpp"
#include "ResourceAllocationPriorityReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationPriorityReportType: 

            ResourceAllocationPriorityReportType::ResourceAllocationPriorityReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_prioritiesSetID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ResourceAllocationPriorityReportType::ResourceAllocationPriorityReportType (const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& prioritiesSetID):
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_prioritiesSetID_( prioritiesSetID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ResourceAllocationPriorityReportType::ResourceAllocationPriorityReportType(ResourceAllocationPriorityReportType&& other_) OMG_NOEXCEPT  :m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_prioritiesSetID_ (std::move(other_.m_prioritiesSetID_))
            {
            } 

            ResourceAllocationPriorityReportType& ResourceAllocationPriorityReportType::operator=(ResourceAllocationPriorityReportType&&  other_) OMG_NOEXCEPT {
                ResourceAllocationPriorityReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ResourceAllocationPriorityReportType::swap(ResourceAllocationPriorityReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_prioritiesSetID_, other_.m_prioritiesSetID_);
            }  

            bool ResourceAllocationPriorityReportType::operator == (const ResourceAllocationPriorityReportType& other_) const {
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_prioritiesSetID_ != other_.m_prioritiesSetID_) {
                    return false;
                }
                return true;
            }
            bool ResourceAllocationPriorityReportType::operator != (const ResourceAllocationPriorityReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationPriorityReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "prioritiesSetID: " << sample.prioritiesSetID() ;
                o <<"]";
                return o;
            }

            // ---- ResourceAllocationPriorityReportType_PrioritiesSet: 

            ResourceAllocationPriorityReportType_PrioritiesSet::ResourceAllocationPriorityReportType_PrioritiesSet()  {
                ::rti::core::fill_array( 
                    m_prioritiesSetID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ResourceAllocationPriorityReportType_PrioritiesSet::ResourceAllocationPriorityReportType_PrioritiesSet (const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& priorities,const UMAA::Common::Measurement::NumericGUID& resourceId,const UMAA::Common::Measurement::NumericGUID& prioritiesSetID,const UMAA::Common::Measurement::DateTime& prioritiesTimestamp) :
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo(priorities,resourceId ),
                m_prioritiesSetID_( prioritiesSetID ),
                m_prioritiesTimestamp_( prioritiesTimestamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ResourceAllocationPriorityReportType_PrioritiesSet::ResourceAllocationPriorityReportType_PrioritiesSet(ResourceAllocationPriorityReportType_PrioritiesSet&& other_) OMG_NOEXCEPT  : 
            UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo(std::move(other_)),
            m_prioritiesSetID_ (std::move(other_.m_prioritiesSetID_))
            ,
            m_prioritiesTimestamp_ (std::move(other_.m_prioritiesTimestamp_))
            {
            } 

            ResourceAllocationPriorityReportType_PrioritiesSet& ResourceAllocationPriorityReportType_PrioritiesSet::operator=(ResourceAllocationPriorityReportType_PrioritiesSet&&  other_) OMG_NOEXCEPT {
                ResourceAllocationPriorityReportType_PrioritiesSet tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ResourceAllocationPriorityReportType_PrioritiesSet::swap(ResourceAllocationPriorityReportType_PrioritiesSet& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo::swap(other_);
                swap(m_prioritiesSetID_, other_.m_prioritiesSetID_);
                swap(m_prioritiesTimestamp_, other_.m_prioritiesTimestamp_);
            }  

            bool ResourceAllocationPriorityReportType_PrioritiesSet::operator == (const ResourceAllocationPriorityReportType_PrioritiesSet& other_) const {
                if (!UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo::operator == (other_)){
                    return false;
                }
                if (m_prioritiesSetID_ != other_.m_prioritiesSetID_) {
                    return false;
                }
                if (m_prioritiesTimestamp_ != other_.m_prioritiesTimestamp_) {
                    return false;
                }
                return true;
            }
            bool ResourceAllocationPriorityReportType_PrioritiesSet::operator != (const ResourceAllocationPriorityReportType_PrioritiesSet& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationPriorityReportType_PrioritiesSet& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << static_cast<const UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo &>(sample);
                o << "prioritiesSetID: " << sample.prioritiesSetID()<<", ";
                o << "prioritiesTimestamp: " << sample.prioritiesTimestamp() ;
                o <<"]";
                return o;
            }

        } // namespace ResourceAllocation  

    } // namespace SO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationPriorityReportType_g_tc_members[3]=
                {

                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"prioritiesSetID",/* Member name */
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

                static DDS_TypeCode ResourceAllocationPriorityReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ResourceAllocationPriorityReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationPriorityReportType*/

                if (is_initialized) {
                    return &ResourceAllocationPriorityReportType_g_tc;
                }

                ResourceAllocationPriorityReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationPriorityReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ResourceAllocationPriorityReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ResourceAllocationPriorityReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationPriorityReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationPriorityReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResourceAllocationPriorityReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationPriorityReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationPriorityReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationPriorityReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ResourceAllocationPriorityReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ResourceAllocationPriorityReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->prioritiesSetID() - (char *)sample);

                ResourceAllocationPriorityReportType_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationPriorityReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationPriorityReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationPriorityReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationPriorityReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationPriorityReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >;

                ResourceAllocationPriorityReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationPriorityReportType_g_typePlugin = 
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
                    NULL
                };

                return &ResourceAllocationPriorityReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationPriorityReportType_PrioritiesSet_g_tc_members[2]=
                {

                    {
                        (char *)"prioritiesSetID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"prioritiesTimestamp",/* Member name */
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

                static DDS_TypeCode ResourceAllocationPriorityReportType_PrioritiesSet_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationPriorityReportType_PrioritiesSet_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationPriorityReportType_PrioritiesSet*/

                if (is_initialized) {
                    return &ResourceAllocationPriorityReportType_PrioritiesSet_g_tc;
                }

                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::get().native(); /* Base class */

                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationPriorityReportType_PrioritiesSet_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResourceAllocationPriorityReportType_PrioritiesSet_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationPriorityReportType_PrioritiesSet_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationPriorityReportType_PrioritiesSet_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->prioritiesSetID() - (char *)sample);

                ResourceAllocationPriorityReportType_PrioritiesSet_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->prioritiesTimestamp() - (char *)sample);

                ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationPriorityReportType_PrioritiesSet_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >;

                ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationPriorityReportType_PrioritiesSet_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationPriorityReportType_PrioritiesSet_g_typePlugin = 
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
                    NULL
                };

                return &ResourceAllocationPriorityReportType_PrioritiesSet_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportTypePlugin_new,
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ResourceAllocationPriorityReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ResourceAllocationPriorityReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ResourceAllocationPriorityReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.prioritiesSetID());
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType >::allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.prioritiesSetID(),  -1, -1);
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSetPlugin_new,
                UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSetPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ResourceAllocationPriorityReportType_PrioritiesSetPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ResourceAllocationPriorityReportType_PrioritiesSetPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ResourceAllocationPriorityReportType_PrioritiesSetPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet from cdr buffer");
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample) 
        {
            // Initialize base
            topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.prioritiesSetID());
            ::rti::topic::reset_sample(sample.prioritiesTimestamp());
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet >::allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample, int, int) 
        {
            // Initialize base
            topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.prioritiesSetID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.prioritiesTimestamp(),  -1, -1);
        }

    }
}  

