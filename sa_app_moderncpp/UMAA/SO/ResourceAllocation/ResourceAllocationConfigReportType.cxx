

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ResourceAllocationConfigReportType.hpp"
#include "ResourceAllocationConfigReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationConfigReportType: 

            ResourceAllocationConfigReportType::ResourceAllocationConfigReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_resourcesSetID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ResourceAllocationConfigReportType::ResourceAllocationConfigReportType (const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& resourcesSetID):
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_resourcesSetID_( resourcesSetID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ResourceAllocationConfigReportType::ResourceAllocationConfigReportType(ResourceAllocationConfigReportType&& other_) OMG_NOEXCEPT  :m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_resourcesSetID_ (std::move(other_.m_resourcesSetID_))
            {
            } 

            ResourceAllocationConfigReportType& ResourceAllocationConfigReportType::operator=(ResourceAllocationConfigReportType&&  other_) OMG_NOEXCEPT {
                ResourceAllocationConfigReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ResourceAllocationConfigReportType::swap(ResourceAllocationConfigReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_resourcesSetID_, other_.m_resourcesSetID_);
            }  

            bool ResourceAllocationConfigReportType::operator == (const ResourceAllocationConfigReportType& other_) const {
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_resourcesSetID_ != other_.m_resourcesSetID_) {
                    return false;
                }
                return true;
            }
            bool ResourceAllocationConfigReportType::operator != (const ResourceAllocationConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "resourcesSetID: " << sample.resourcesSetID() ;
                o <<"]";
                return o;
            }

            // ---- ResourceAllocationConfigReportType_ResourcesSet: 

            ResourceAllocationConfigReportType_ResourcesSet::ResourceAllocationConfigReportType_ResourcesSet()  {
                ::rti::core::fill_array( 
                    m_resourcesSetID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ResourceAllocationConfigReportType_ResourcesSet::ResourceAllocationConfigReportType_ResourcesSet (const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& relatedSources,const UMAA::Common::Measurement::NumericGUID& resourceId,const UMAA::Common::Measurement::NumericGUID& resourcesSetID,const UMAA::Common::Measurement::DateTime& resourcesTimestamp) :
                UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType(relatedSources,resourceId ),
                m_resourcesSetID_( resourcesSetID ),
                m_resourcesTimestamp_( resourcesTimestamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ResourceAllocationConfigReportType_ResourcesSet::ResourceAllocationConfigReportType_ResourcesSet(ResourceAllocationConfigReportType_ResourcesSet&& other_) OMG_NOEXCEPT  : 
            UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType(std::move(other_)),
            m_resourcesSetID_ (std::move(other_.m_resourcesSetID_))
            ,
            m_resourcesTimestamp_ (std::move(other_.m_resourcesTimestamp_))
            {
            } 

            ResourceAllocationConfigReportType_ResourcesSet& ResourceAllocationConfigReportType_ResourcesSet::operator=(ResourceAllocationConfigReportType_ResourcesSet&&  other_) OMG_NOEXCEPT {
                ResourceAllocationConfigReportType_ResourcesSet tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ResourceAllocationConfigReportType_ResourcesSet::swap(ResourceAllocationConfigReportType_ResourcesSet& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType::swap(other_);
                swap(m_resourcesSetID_, other_.m_resourcesSetID_);
                swap(m_resourcesTimestamp_, other_.m_resourcesTimestamp_);
            }  

            bool ResourceAllocationConfigReportType_ResourcesSet::operator == (const ResourceAllocationConfigReportType_ResourcesSet& other_) const {
                if (!UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType::operator == (other_)){
                    return false;
                }
                if (m_resourcesSetID_ != other_.m_resourcesSetID_) {
                    return false;
                }
                if (m_resourcesTimestamp_ != other_.m_resourcesTimestamp_) {
                    return false;
                }
                return true;
            }
            bool ResourceAllocationConfigReportType_ResourcesSet::operator != (const ResourceAllocationConfigReportType_ResourcesSet& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationConfigReportType_ResourcesSet& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << static_cast<const UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType &>(sample);
                o << "resourcesSetID: " << sample.resourcesSetID()<<", ";
                o << "resourcesTimestamp: " << sample.resourcesTimestamp() ;
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
        struct native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationConfigReportType_g_tc_members[3]=
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
                        (char *)"resourcesSetID",/* Member name */
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

                static DDS_TypeCode ResourceAllocationConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ResourceAllocationConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationConfigReportType*/

                if (is_initialized) {
                    return &ResourceAllocationConfigReportType_g_tc;
                }

                ResourceAllocationConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ResourceAllocationConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ResourceAllocationConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResourceAllocationConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationConfigReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ResourceAllocationConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ResourceAllocationConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourcesSetID() - (char *)sample);

                ResourceAllocationConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >;

                ResourceAllocationConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationConfigReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationConfigReportType_g_typePlugin = 
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

                return &ResourceAllocationConfigReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationConfigReportType_ResourcesSet_g_tc_members[2]=
                {

                    {
                        (char *)"resourcesSetID",/* Member name */
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
                        (char *)"resourcesTimestamp",/* Member name */
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

                static DDS_TypeCode ResourceAllocationConfigReportType_ResourcesSet_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationConfigReportType_ResourcesSet_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationConfigReportType_ResourcesSet*/

                if (is_initialized) {
                    return &ResourceAllocationConfigReportType_ResourcesSet_g_tc;
                }

                ResourceAllocationConfigReportType_ResourcesSet_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationConfigReportType_ResourcesSet_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ResourceAllocationConfigReportType_ResourcesSet_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationConfigReportType_ResourcesSet_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType >::get().native(); /* Base class */

                ResourceAllocationConfigReportType_ResourcesSet_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationConfigReportType_ResourcesSet_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResourceAllocationConfigReportType_ResourcesSet_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationConfigReportType_ResourcesSet_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationConfigReportType_ResourcesSet_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourcesSetID() - (char *)sample);

                ResourceAllocationConfigReportType_ResourcesSet_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourcesTimestamp() - (char *)sample);

                ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationConfigReportType_ResourcesSet_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >;

                ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationConfigReportType_ResourcesSet_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationConfigReportType_ResourcesSet_g_typePlugin = 
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

                return &ResourceAllocationConfigReportType_ResourcesSet_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_new,
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ResourceAllocationConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ResourceAllocationConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ResourceAllocationConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.resourcesSetID());
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resourcesSetID(),  -1, -1);
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_new,
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ResourceAllocationConfigReportType_ResourcesSetPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ResourceAllocationConfigReportType_ResourcesSetPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet from cdr buffer");
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample) 
        {
            // Initialize base
            topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.resourcesSetID());
            ::rti::topic::reset_sample(sample.resourcesTimestamp());
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample, int, int) 
        {
            // Initialize base
            topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.resourcesSetID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resourcesTimestamp(),  -1, -1);
        }

    }
}  

