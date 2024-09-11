

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LargeListMetadata.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LargeListMetadataPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LargeListMetadata.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        // ---- LargeListMetadata: 

        LargeListMetadata::LargeListMetadata() :
            m_size_ (0)  {

        }   

        LargeListMetadata::LargeListMetadata (const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& updateElementID_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& updateElementTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& startingElementID_,int32_t size_):
            m_listID_(listID_), 
            m_updateElementID_(updateElementID_), 
            m_updateElementTimestamp_(updateElementTimestamp_), 
            m_startingElementID_(startingElementID_), 
            m_size_(size_) {
        }

        void LargeListMetadata::swap(LargeListMetadata& other_)  noexcept 
        {
            using std::swap;
            swap(m_listID_, other_.m_listID_);
            swap(m_updateElementID_, other_.m_updateElementID_);
            swap(m_updateElementTimestamp_, other_.m_updateElementTimestamp_);
            swap(m_startingElementID_, other_.m_startingElementID_);
            swap(m_size_, other_.m_size_);
        }  

        bool LargeListMetadata::operator == (const LargeListMetadata& other_) const {
            if (m_listID_ != other_.m_listID_) {
                return false;
            }
            if (m_updateElementID_ != other_.m_updateElementID_) {
                return false;
            }
            if (m_updateElementTimestamp_ != other_.m_updateElementTimestamp_) {
                return false;
            }
            if (m_startingElementID_ != other_.m_startingElementID_) {
                return false;
            }
            if (m_size_ != other_.m_size_) {
                return false;
            }
            return true;
        }

        bool LargeListMetadata::operator != (const LargeListMetadata& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const LargeListMetadata& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "listID: " << sample.listID ()<<", ";
            o << "updateElementID: " << sample.updateElementID ()<<", ";
            o << "updateElementTimestamp: " << sample.updateElementTimestamp ()<<", ";
            o << "startingElementID: " << sample.startingElementID ()<<", ";
            o << "size: " << sample.size ();
            o <<"]";
            return o;
        }

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::LargeListMetadata > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LargeListMetadata_g_tc_members[5]=
                {

                    {
                        (char *)"listID",/* Member name */
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
                        (char *)"updateElementID",/* Member name */
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
                        (char *)"updateElementTimestamp",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"startingElementID",/* Member name */
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
                        (char *)"size",/* Member name */
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
                    }
                };

                static DDS_TypeCode LargeListMetadata_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::LargeListMetadata", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        LargeListMetadata_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LargeListMetadata*/

                if (is_initialized) {
                    return &LargeListMetadata_g_tc;
                }

                is_initialized = RTI_TRUE;

                LargeListMetadata_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LargeListMetadata_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LargeListMetadata_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LargeListMetadata_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                LargeListMetadata_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LargeListMetadata_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                LargeListMetadata_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                LargeListMetadata_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                LargeListMetadata_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                LargeListMetadata_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                LargeListMetadata_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                LargeListMetadata_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                LargeListMetadata_g_tc._data._sampleAccessInfo = sample_access_info();
                LargeListMetadata_g_tc._data._typePlugin = type_plugin_info();    

                return &LargeListMetadata_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::LargeListMetadata *sample;

                static RTIXCdrMemberAccessInfo LargeListMetadata_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LargeListMetadata_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LargeListMetadata_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::LargeListMetadata);
                if (sample == NULL) {
                    return NULL;
                }

                LargeListMetadata_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                LargeListMetadata_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->updateElementID() - (char *)sample);

                LargeListMetadata_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->updateElementTimestamp() - (char *)sample);

                LargeListMetadata_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startingElementID() - (char *)sample);

                LargeListMetadata_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->size() - (char *)sample);

                LargeListMetadata_g_sampleAccessInfo.memberAccessInfos = 
                LargeListMetadata_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::LargeListMetadata);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LargeListMetadata_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LargeListMetadata_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LargeListMetadata_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LargeListMetadata_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::LargeListMetadata >;

                LargeListMetadata_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LargeListMetadata_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LargeListMetadata_g_typePlugin = 
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

                return &LargeListMetadata_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::LargeListMetadata >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::LargeListMetadata >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::LargeListMetadata >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::LargeListMetadataPlugin_new,
                ::UMAA::Common::LargeListMetadataPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::LargeListMetadata >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::LargeListMetadata& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LargeListMetadataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LargeListMetadataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::LargeListMetadata >::from_cdr_buffer(::UMAA::Common::LargeListMetadata& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LargeListMetadataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::LargeListMetadata from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::LargeListMetadata >::reset_sample(::UMAA::Common::LargeListMetadata& sample) 
        {
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.updateElementID());
            ::rti::topic::reset_sample(sample.updateElementTimestamp());
            ::rti::topic::reset_sample(sample.startingElementID());
            sample.size(0);
        }

        void topic_type_support< ::UMAA::Common::LargeListMetadata >::allocate_sample(::UMAA::Common::LargeListMetadata& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.updateElementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.startingElementID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
