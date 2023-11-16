

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthDetailsStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "HealthDetailsStatusType.hpp"
#include "HealthDetailsStatusTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace HealthReporter {

            // ---- HealthDetailsStatusType: 

            HealthDetailsStatusType::HealthDetailsStatusType() :
                m_code_(UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType::ACTUATOR) ,
                m_descriptor_ ("") ,
                m_resourceURN_ ("") ,
                m_severity_(UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType::INFO)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_detailID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            HealthDetailsStatusType::HealthDetailsStatusType (const UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType& code,const std::string& descriptor,const UMAA::Common::Measurement::DateTime& logTime,const std::string& resourceURN,const UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType& severity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& detailID):
                m_code_( code ),
                m_descriptor_( descriptor ),
                m_logTime_( logTime ),
                m_resourceURN_( resourceURN ),
                m_severity_( severity ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_detailID_( detailID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            HealthDetailsStatusType::HealthDetailsStatusType(HealthDetailsStatusType&& other_) OMG_NOEXCEPT  :m_code_ (std::move(other_.m_code_))
            ,
            m_descriptor_ (std::move(other_.m_descriptor_))
            ,
            m_logTime_ (std::move(other_.m_logTime_))
            ,
            m_resourceURN_ (std::move(other_.m_resourceURN_))
            ,
            m_severity_ (std::move(other_.m_severity_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_detailID_ (std::move(other_.m_detailID_))
            {
            } 

            HealthDetailsStatusType& HealthDetailsStatusType::operator=(HealthDetailsStatusType&&  other_) OMG_NOEXCEPT {
                HealthDetailsStatusType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void HealthDetailsStatusType::swap(HealthDetailsStatusType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_code_, other_.m_code_);
                swap(m_descriptor_, other_.m_descriptor_);
                swap(m_logTime_, other_.m_logTime_);
                swap(m_resourceURN_, other_.m_resourceURN_);
                swap(m_severity_, other_.m_severity_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_detailID_, other_.m_detailID_);
            }  

            bool HealthDetailsStatusType::operator == (const HealthDetailsStatusType& other_) const {
                if (m_code_ != other_.m_code_) {
                    return false;
                }
                if (m_descriptor_ != other_.m_descriptor_) {
                    return false;
                }
                if (m_logTime_ != other_.m_logTime_) {
                    return false;
                }
                if (m_resourceURN_ != other_.m_resourceURN_) {
                    return false;
                }
                if (m_severity_ != other_.m_severity_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_detailID_ != other_.m_detailID_) {
                    return false;
                }
                return true;
            }
            bool HealthDetailsStatusType::operator != (const HealthDetailsStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HealthDetailsStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "code: " << sample.code()<<", ";
                o << "descriptor: " << sample.descriptor()<<", ";
                o << "logTime: " << sample.logTime()<<", ";
                o << "resourceURN: " << sample.resourceURN()<<", ";
                o << "severity: " << sample.severity()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "detailID: " << sample.detailID() ;
                o <<"]";
                return o;
            }

        } // namespace HealthReporter  

    } // namespace SO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::HealthReporter::HealthDetailsStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HealthDetailsStatusType_g_tc_members[8]=
                {

                    {
                        (char *)"code",/* Member name */
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
                        (char *)"descriptor",/* Member name */
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
                        (char *)"logTime",/* Member name */
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
                        (char *)"resourceURN",/* Member name */
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
                        (char *)"severity",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }, 
                    {
                        (char *)"detailID",/* Member name */
                        {
                            7,/* Representation ID */
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
                    }
                };

                static DDS_TypeCode HealthDetailsStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::HealthReporter::HealthDetailsStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        HealthDetailsStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HealthDetailsStatusType*/

                if (is_initialized) {
                    return &HealthDetailsStatusType_g_tc;
                }

                HealthDetailsStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HealthDetailsStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType>::get().native();
                HealthDetailsStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                HealthDetailsStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                HealthDetailsStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                HealthDetailsStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType>::get().native();
                HealthDetailsStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthDetailsStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                HealthDetailsStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                HealthDetailsStatusType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HealthDetailsStatusType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                HealthDetailsStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                HealthDetailsStatusType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                HealthDetailsStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                HealthDetailsStatusType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                HealthDetailsStatusType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HealthDetailsStatusType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;

                HealthDetailsStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                HealthDetailsStatusType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HealthDetailsStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::HealthReporter::HealthDetailsStatusType *sample;

                static RTIXCdrMemberAccessInfo HealthDetailsStatusType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HealthDetailsStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HealthDetailsStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::HealthReporter::HealthDetailsStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                HealthDetailsStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->code() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->descriptor() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logTime() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceURN() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->severity() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                HealthDetailsStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->detailID() - (char *)sample);

                HealthDetailsStatusType_g_sampleAccessInfo.memberAccessInfos = 
                HealthDetailsStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::HealthReporter::HealthDetailsStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HealthDetailsStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HealthDetailsStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HealthDetailsStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HealthDetailsStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::HealthReporter::HealthDetailsStatusType >;

                HealthDetailsStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HealthDetailsStatusType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HealthDetailsStatusType_g_typePlugin = 
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

                return &HealthDetailsStatusType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::HealthReporter::HealthDetailsStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::HealthReporter::HealthDetailsStatusType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::HealthReporter::HealthDetailsStatusTypePlugin_new,
                UMAA::SO::HealthReporter::HealthDetailsStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::HealthReporter::HealthDetailsStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HealthDetailsStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HealthDetailsStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType >::from_cdr_buffer(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HealthDetailsStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::HealthReporter::HealthDetailsStatusType from cdr buffer");
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType >::reset_sample(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample) 
        {
            sample.code(UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType::ACTUATOR);
            sample.descriptor("");
            ::rti::topic::reset_sample(sample.logTime());
            sample.resourceURN("");
            sample.severity(UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType::INFO);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.detailID());
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType >::allocate_sample(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.code(),  -1, -1);
            ::rti::topic::allocate_sample(sample.descriptor(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.logTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resourceURN(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.severity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.detailID(),  -1, -1);
        }

    }
}  

