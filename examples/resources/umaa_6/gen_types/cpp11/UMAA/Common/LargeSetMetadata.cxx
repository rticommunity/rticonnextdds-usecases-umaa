

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LargeSetMetadata.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LargeSetMetadataPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LargeSetMetadata.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        // ---- LargeSetMetadata: 

        LargeSetMetadata::LargeSetMetadata() :
            m_size_ (0)  {

        }   

        LargeSetMetadata::LargeSetMetadata (const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& updateElementID_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& updateElementTimestamp_,int32_t size_):
            m_setID_(setID_), 
            m_updateElementID_(updateElementID_), 
            m_updateElementTimestamp_(updateElementTimestamp_), 
            m_size_(size_) {
        }

        void LargeSetMetadata::swap(LargeSetMetadata& other_)  noexcept 
        {
            using std::swap;
            swap(m_setID_, other_.m_setID_);
            swap(m_updateElementID_, other_.m_updateElementID_);
            swap(m_updateElementTimestamp_, other_.m_updateElementTimestamp_);
            swap(m_size_, other_.m_size_);
        }  

        bool LargeSetMetadata::operator == (const LargeSetMetadata& other_) const {
            if (m_setID_ != other_.m_setID_) {
                return false;
            }
            if (m_updateElementID_ != other_.m_updateElementID_) {
                return false;
            }
            if (m_updateElementTimestamp_ != other_.m_updateElementTimestamp_) {
                return false;
            }
            if (m_size_ != other_.m_size_) {
                return false;
            }
            return true;
        }

        bool LargeSetMetadata::operator != (const LargeSetMetadata& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const LargeSetMetadata& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "setID: " << sample.setID ()<<", ";
            o << "updateElementID: " << sample.updateElementID ()<<", ";
            o << "updateElementTimestamp: " << sample.updateElementTimestamp ()<<", ";
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
        struct native_type_code< ::UMAA::Common::LargeSetMetadata > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LargeSetMetadata_g_tc_members[4]=
                {

                    {
                        (char *)"setID",/* Member name */
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
                        (char *)"size",/* Member name */
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

                static DDS_TypeCode LargeSetMetadata_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::LargeSetMetadata", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        LargeSetMetadata_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LargeSetMetadata*/

                if (is_initialized) {
                    return &LargeSetMetadata_g_tc;
                }

                is_initialized = RTI_TRUE;

                LargeSetMetadata_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LargeSetMetadata_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LargeSetMetadata_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LargeSetMetadata_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                LargeSetMetadata_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                LargeSetMetadata_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                LargeSetMetadata_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                LargeSetMetadata_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                LargeSetMetadata_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                LargeSetMetadata_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                LargeSetMetadata_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                LargeSetMetadata_g_tc._data._sampleAccessInfo = sample_access_info();
                LargeSetMetadata_g_tc._data._typePlugin = type_plugin_info();    

                return &LargeSetMetadata_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::LargeSetMetadata *sample;

                static RTIXCdrMemberAccessInfo LargeSetMetadata_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LargeSetMetadata_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LargeSetMetadata_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::LargeSetMetadata);
                if (sample == NULL) {
                    return NULL;
                }

                LargeSetMetadata_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setID() - (char *)sample);

                LargeSetMetadata_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->updateElementID() - (char *)sample);

                LargeSetMetadata_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->updateElementTimestamp() - (char *)sample);

                LargeSetMetadata_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->size() - (char *)sample);

                LargeSetMetadata_g_sampleAccessInfo.memberAccessInfos = 
                LargeSetMetadata_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::LargeSetMetadata);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LargeSetMetadata_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LargeSetMetadata_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LargeSetMetadata_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LargeSetMetadata_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::LargeSetMetadata >;

                LargeSetMetadata_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LargeSetMetadata_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LargeSetMetadata_g_typePlugin = 
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

                return &LargeSetMetadata_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::LargeSetMetadata >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::LargeSetMetadata >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::LargeSetMetadata >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::LargeSetMetadataPlugin_new,
                ::UMAA::Common::LargeSetMetadataPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::LargeSetMetadata >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::LargeSetMetadata& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LargeSetMetadataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LargeSetMetadataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::LargeSetMetadata >::from_cdr_buffer(::UMAA::Common::LargeSetMetadata& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LargeSetMetadataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::LargeSetMetadata from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::LargeSetMetadata >::reset_sample(::UMAA::Common::LargeSetMetadata& sample) 
        {
            ::rti::topic::reset_sample(sample.setID());
            ::rti::topic::reset_sample(sample.updateElementID());
            ::rti::topic::reset_sample(sample.updateElementTimestamp());
            sample.size(0);
        }

        void topic_type_support< ::UMAA::Common::LargeSetMetadata >::allocate_sample(::UMAA::Common::LargeSetMetadata& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.setID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.updateElementID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
