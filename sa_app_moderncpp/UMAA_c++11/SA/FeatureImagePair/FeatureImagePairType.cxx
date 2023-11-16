

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImagePairType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "FeatureImagePairTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FeatureImagePairType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace FeatureImagePair {

            // ---- FeatureImagePairType: 

            FeatureImagePairType::FeatureImagePairType()  {

            }   

            FeatureImagePairType::FeatureImagePairType (const ::UMAA::Common::Measurement::NumericGUID& featureID_,const ::UMAA::Common::Measurement::NumericGUID& imageID_):
                m_featureID_(featureID_), 
                m_imageID_(imageID_) {
            }

            void FeatureImagePairType::swap(FeatureImagePairType& other_)  noexcept 
            {
                using std::swap;
                swap(m_featureID_, other_.m_featureID_);
                swap(m_imageID_, other_.m_imageID_);
            }  

            bool FeatureImagePairType::operator == (const FeatureImagePairType& other_) const {
                if (m_featureID_ != other_.m_featureID_) {
                    return false;
                }
                if (m_imageID_ != other_.m_imageID_) {
                    return false;
                }
                return true;
            }

            bool FeatureImagePairType::operator != (const FeatureImagePairType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FeatureImagePairType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "featureID: " << sample.featureID ()<<", ";
                o << "imageID: " << sample.imageID ();
                o <<"]";
                return o;
            }

        } // namespace FeatureImagePair  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::FeatureImagePair::FeatureImagePairType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FeatureImagePairType_g_tc_members[2]=
                {

                    {
                        (char *)"featureID",/* Member name */
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
                        (char *)"imageID",/* Member name */
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

                static DDS_TypeCode FeatureImagePairType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::FeatureImagePair::FeatureImagePairType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FeatureImagePairType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FeatureImagePairType*/

                if (is_initialized) {
                    return &FeatureImagePairType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FeatureImagePairType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FeatureImagePairType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                FeatureImagePairType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                FeatureImagePairType_g_tc._data._sampleAccessInfo = sample_access_info();
                FeatureImagePairType_g_tc._data._typePlugin = type_plugin_info();    

                return &FeatureImagePairType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::FeatureImagePair::FeatureImagePairType *sample;

                static RTIXCdrMemberAccessInfo FeatureImagePairType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FeatureImagePairType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FeatureImagePairType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::FeatureImagePair::FeatureImagePairType);
                if (sample == NULL) {
                    return NULL;
                }

                FeatureImagePairType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->featureID() - (char *)sample);

                FeatureImagePairType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageID() - (char *)sample);

                FeatureImagePairType_g_sampleAccessInfo.memberAccessInfos = 
                FeatureImagePairType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::FeatureImagePair::FeatureImagePairType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FeatureImagePairType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FeatureImagePairType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FeatureImagePairType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FeatureImagePairType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >;

                FeatureImagePairType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FeatureImagePairType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FeatureImagePairType_g_typePlugin = 
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

                return &FeatureImagePairType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::FeatureImagePair::FeatureImagePairTypePlugin_new,
                ::UMAA::SA::FeatureImagePair::FeatureImagePairTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::FeatureImagePair::FeatureImagePairType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FeatureImagePairTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FeatureImagePairTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::from_cdr_buffer(::UMAA::SA::FeatureImagePair::FeatureImagePairType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FeatureImagePairTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::FeatureImagePair::FeatureImagePairType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::reset_sample(::UMAA::SA::FeatureImagePair::FeatureImagePairType& sample) 
        {
            ::rti::topic::reset_sample(sample.featureID());
            ::rti::topic::reset_sample(sample.imageID());
        }

        void topic_type_support< ::UMAA::SA::FeatureImagePair::FeatureImagePairType >::allocate_sample(::UMAA::SA::FeatureImagePair::FeatureImagePairType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.featureID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.imageID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
