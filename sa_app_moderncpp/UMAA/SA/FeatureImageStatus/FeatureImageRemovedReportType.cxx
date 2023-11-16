

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageRemovedReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "FeatureImageRemovedReportType.hpp"
#include "FeatureImageRemovedReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace FeatureImageStatus {

            // ---- FeatureImageRemovedReportType: 

            FeatureImageRemovedReportType::FeatureImageRemovedReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            FeatureImageRemovedReportType::FeatureImageRemovedReportType (const ::rti::core::bounded_sequence< UMAA::SA::FeatureImagePair::FeatureImagePairType, 100L >& featureImagePair,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_featureImagePair_( featureImagePair ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            FeatureImageRemovedReportType::FeatureImageRemovedReportType(FeatureImageRemovedReportType&& other_) OMG_NOEXCEPT  :m_featureImagePair_ (std::move(other_.m_featureImagePair_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            FeatureImageRemovedReportType& FeatureImageRemovedReportType::operator=(FeatureImageRemovedReportType&&  other_) OMG_NOEXCEPT {
                FeatureImageRemovedReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void FeatureImageRemovedReportType::swap(FeatureImageRemovedReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_featureImagePair_, other_.m_featureImagePair_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool FeatureImageRemovedReportType::operator == (const FeatureImageRemovedReportType& other_) const {
                if (m_featureImagePair_ != other_.m_featureImagePair_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool FeatureImageRemovedReportType::operator != (const FeatureImageRemovedReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FeatureImageRemovedReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "featureImagePair: " << sample.featureImagePair()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace FeatureImageStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FeatureImageRemovedReportType_g_tc_featureImagePair_sequence;

                static DDS_TypeCode_Member FeatureImageRemovedReportType_g_tc_members[3]=
                {

                    {
                        (char *)"featureImagePair",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode FeatureImageRemovedReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        FeatureImageRemovedReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FeatureImageRemovedReportType*/

                if (is_initialized) {
                    return &FeatureImageRemovedReportType_g_tc;
                }

                FeatureImageRemovedReportType_g_tc_featureImagePair_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::SA::FeatureImagePair::FeatureImagePairType, 100L > >((100L));

                FeatureImageRemovedReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FeatureImageRemovedReportType_g_tc_featureImagePair_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SA::FeatureImagePair::FeatureImagePairType>::get().native();
                FeatureImageRemovedReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& FeatureImageRemovedReportType_g_tc_featureImagePair_sequence;
                FeatureImageRemovedReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                FeatureImageRemovedReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                FeatureImageRemovedReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                FeatureImageRemovedReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &FeatureImageRemovedReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType *sample;

                static RTIXCdrMemberAccessInfo FeatureImageRemovedReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FeatureImageRemovedReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FeatureImageRemovedReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType);
                if (sample == NULL) {
                    return NULL;
                }

                FeatureImageRemovedReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->featureImagePair() - (char *)sample);

                FeatureImageRemovedReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                FeatureImageRemovedReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                FeatureImageRemovedReportType_g_sampleAccessInfo.memberAccessInfos = 
                FeatureImageRemovedReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FeatureImageRemovedReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FeatureImageRemovedReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FeatureImageRemovedReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FeatureImageRemovedReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >;

                FeatureImageRemovedReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FeatureImageRemovedReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FeatureImageRemovedReportType_g_typePlugin = 
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

                return &FeatureImageRemovedReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportTypePlugin_new,
                UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FeatureImageRemovedReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FeatureImageRemovedReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::from_cdr_buffer(UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FeatureImageRemovedReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::reset_sample(UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.featureImagePair());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType >::allocate_sample(UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.featureImagePair(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

