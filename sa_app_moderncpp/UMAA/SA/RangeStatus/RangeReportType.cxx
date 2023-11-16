

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RangeReportType.hpp"
#include "RangeReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace RangeStatus {

            // ---- RangeReportType: 

            RangeReportType::RangeReportType() :
                m_coordinateSystem_(UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType::SENSOR_COORDINATE_SYSTEM) ,
                m_errorMessage_ ("") ,
                m_rangeErrorCode_(UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType::INVALID_HORIZONTAL_FOV)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            RangeReportType::RangeReportType (const UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType& coordinateSystem,const ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >& dataPoints,const std::string& errorMessage,const UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& rangeErrorCode,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_coordinateSystem_( coordinateSystem ),
                m_dataPoints_( dataPoints ),
                m_errorMessage_( errorMessage ),
                m_rangeErrorCode_( rangeErrorCode ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RangeReportType::RangeReportType(RangeReportType&& other_) OMG_NOEXCEPT  :m_coordinateSystem_ (std::move(other_.m_coordinateSystem_))
            ,
            m_dataPoints_ (std::move(other_.m_dataPoints_))
            ,
            m_errorMessage_ (std::move(other_.m_errorMessage_))
            ,
            m_rangeErrorCode_ (std::move(other_.m_rangeErrorCode_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            RangeReportType& RangeReportType::operator=(RangeReportType&&  other_) OMG_NOEXCEPT {
                RangeReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RangeReportType::swap(RangeReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_coordinateSystem_, other_.m_coordinateSystem_);
                swap(m_dataPoints_, other_.m_dataPoints_);
                swap(m_errorMessage_, other_.m_errorMessage_);
                swap(m_rangeErrorCode_, other_.m_rangeErrorCode_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool RangeReportType::operator == (const RangeReportType& other_) const {
                if (m_coordinateSystem_ != other_.m_coordinateSystem_) {
                    return false;
                }
                if (m_dataPoints_ != other_.m_dataPoints_) {
                    return false;
                }
                if (m_errorMessage_ != other_.m_errorMessage_) {
                    return false;
                }
                if (m_rangeErrorCode_ != other_.m_rangeErrorCode_) {
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
            bool RangeReportType::operator != (const RangeReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RangeReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "coordinateSystem: " << sample.coordinateSystem()<<", ";
                o << "dataPoints: " << sample.dataPoints()<<", ";
                o << "errorMessage: " << sample.errorMessage()<<", ";
                o << "rangeErrorCode: " << sample.rangeErrorCode()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace RangeStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::RangeStatus::RangeReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RangeReportType_g_tc_dataPoints_sequence;

                static DDS_TypeCode_Member RangeReportType_g_tc_members[6]=
                {

                    {
                        (char *)"coordinateSystem",/* Member name */
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
                        (char *)"dataPoints",/* Member name */
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
                        (char *)"errorMessage",/* Member name */
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
                        (char *)"rangeErrorCode",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RangeReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::RangeStatus::RangeReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        RangeReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RangeReportType*/

                if (is_initialized) {
                    return &RangeReportType_g_tc;
                }

                RangeReportType_g_tc_dataPoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L > >((100L));

                RangeReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RangeReportType_g_tc_dataPoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SA::RangeStatus::RangeDataPointType>::get().native();
                RangeReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType>::get().native();
                RangeReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& RangeReportType_g_tc_dataPoints_sequence;
                RangeReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                RangeReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType>::get().native();
                RangeReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RangeReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                RangeReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RangeReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                RangeReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                RangeReportType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                RangeReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RangeReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                RangeReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                RangeReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RangeReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::RangeStatus::RangeReportType *sample;

                static RTIXCdrMemberAccessInfo RangeReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RangeReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RangeReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::RangeStatus::RangeReportType);
                if (sample == NULL) {
                    return NULL;
                }

                RangeReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coordinateSystem() - (char *)sample);

                RangeReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dataPoints() - (char *)sample);

                RangeReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errorMessage() - (char *)sample);

                RangeReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeErrorCode() - (char *)sample);

                RangeReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                RangeReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                RangeReportType_g_sampleAccessInfo.memberAccessInfos = 
                RangeReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::RangeStatus::RangeReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RangeReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RangeReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RangeReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RangeReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::RangeStatus::RangeReportType >;

                RangeReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RangeReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RangeReportType_g_typePlugin = 
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

                return &RangeReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::RangeStatus::RangeReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::RangeStatus::RangeReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::RangeStatus::RangeReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::RangeStatus::RangeReportTypePlugin_new,
                UMAA::SA::RangeStatus::RangeReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::RangeStatus::RangeReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::RangeStatus::RangeReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RangeReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RangeReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::RangeStatus::RangeReportType >::from_cdr_buffer(UMAA::SA::RangeStatus::RangeReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RangeReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::RangeStatus::RangeReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::RangeStatus::RangeReportType >::reset_sample(UMAA::SA::RangeStatus::RangeReportType& sample) 
        {
            sample.coordinateSystem(UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType::SENSOR_COORDINATE_SYSTEM);
            ::rti::topic::reset_sample(sample.dataPoints());
            sample.errorMessage("");
            sample.rangeErrorCode(UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType::INVALID_HORIZONTAL_FOV);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::RangeStatus::RangeReportType >::allocate_sample(UMAA::SA::RangeStatus::RangeReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.coordinateSystem(),  -1, -1);
            ::rti::topic::allocate_sample(sample.dataPoints(),  100L, -1);
            ::rti::topic::allocate_sample(sample.errorMessage(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.rangeErrorCode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

