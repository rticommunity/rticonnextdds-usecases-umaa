

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GuardedTeleopConfigReportType.hpp"
#include "GuardedTeleopConfigReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GuardedTeleopConfig {

            // ---- GuardedTeleopConfigReportType: 

            GuardedTeleopConfigReportType::GuardedTeleopConfigReportType() :
                m_obstacleAvoidance_(UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType::DEVIATE_FROM_PATH) ,
                m_pathTolerance_ (0.0) ,
                m_stopOnPitchoverLimit_ (0) ,
                m_stopOnRolloverLimit_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            GuardedTeleopConfigReportType::GuardedTeleopConfigReportType (const UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& obstacleAvoidance,double pathTolerance,bool stopOnPitchoverLimit,bool stopOnRolloverLimit,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_obstacleAvoidance_( obstacleAvoidance ),
                m_pathTolerance_( pathTolerance ),
                m_stopOnPitchoverLimit_( stopOnPitchoverLimit ),
                m_stopOnRolloverLimit_( stopOnRolloverLimit ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GuardedTeleopConfigReportType::GuardedTeleopConfigReportType(GuardedTeleopConfigReportType&& other_) OMG_NOEXCEPT  :m_obstacleAvoidance_ (std::move(other_.m_obstacleAvoidance_))
            ,
            m_pathTolerance_ (std::move(other_.m_pathTolerance_))
            ,
            m_stopOnPitchoverLimit_ (std::move(other_.m_stopOnPitchoverLimit_))
            ,
            m_stopOnRolloverLimit_ (std::move(other_.m_stopOnRolloverLimit_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            GuardedTeleopConfigReportType& GuardedTeleopConfigReportType::operator=(GuardedTeleopConfigReportType&&  other_) OMG_NOEXCEPT {
                GuardedTeleopConfigReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GuardedTeleopConfigReportType::swap(GuardedTeleopConfigReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_obstacleAvoidance_, other_.m_obstacleAvoidance_);
                swap(m_pathTolerance_, other_.m_pathTolerance_);
                swap(m_stopOnPitchoverLimit_, other_.m_stopOnPitchoverLimit_);
                swap(m_stopOnRolloverLimit_, other_.m_stopOnRolloverLimit_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool GuardedTeleopConfigReportType::operator == (const GuardedTeleopConfigReportType& other_) const {
                if (m_obstacleAvoidance_ != other_.m_obstacleAvoidance_) {
                    return false;
                }
                if (m_pathTolerance_ != other_.m_pathTolerance_) {
                    return false;
                }
                if (m_stopOnPitchoverLimit_ != other_.m_stopOnPitchoverLimit_) {
                    return false;
                }
                if (m_stopOnRolloverLimit_ != other_.m_stopOnRolloverLimit_) {
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
            bool GuardedTeleopConfigReportType::operator != (const GuardedTeleopConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GuardedTeleopConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "obstacleAvoidance: " << sample.obstacleAvoidance()<<", ";
                o << "pathTolerance: " << std::setprecision(15) <<sample.pathTolerance()<<", ";
                o << "stopOnPitchoverLimit: " << sample.stopOnPitchoverLimit()<<", ";
                o << "stopOnRolloverLimit: " << sample.stopOnRolloverLimit()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace GuardedTeleopConfig  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GuardedTeleopConfigReportType_g_tc_members[6]=
                {

                    {
                        (char *)"obstacleAvoidance",/* Member name */
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
                        (char *)"pathTolerance",/* Member name */
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
                        (char *)"stopOnPitchoverLimit",/* Member name */
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
                        (char *)"stopOnRolloverLimit",/* Member name */
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

                static DDS_TypeCode GuardedTeleopConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        GuardedTeleopConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GuardedTeleopConfigReportType*/

                if (is_initialized) {
                    return &GuardedTeleopConfigReportType_g_tc;
                }

                GuardedTeleopConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GuardedTeleopConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType>::get().native();
                GuardedTeleopConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GuardedTeleopConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GuardedTeleopConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GuardedTeleopConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GuardedTeleopConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                GuardedTeleopConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GuardedTeleopConfigReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopConfigReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 401056000ULL;

                GuardedTeleopConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GuardedTeleopConfigReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                GuardedTeleopConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GuardedTeleopConfigReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                GuardedTeleopConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GuardedTeleopConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GuardedTeleopConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType *sample;

                static RTIXCdrMemberAccessInfo GuardedTeleopConfigReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GuardedTeleopConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GuardedTeleopConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GuardedTeleopConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->obstacleAvoidance() - (char *)sample);

                GuardedTeleopConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathTolerance() - (char *)sample);

                GuardedTeleopConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopOnPitchoverLimit() - (char *)sample);

                GuardedTeleopConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopOnRolloverLimit() - (char *)sample);

                GuardedTeleopConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GuardedTeleopConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GuardedTeleopConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                GuardedTeleopConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GuardedTeleopConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GuardedTeleopConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GuardedTeleopConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GuardedTeleopConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >;

                GuardedTeleopConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GuardedTeleopConfigReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GuardedTeleopConfigReportType_g_typePlugin = 
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

                return &GuardedTeleopConfigReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportTypePlugin_new,
                UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GuardedTeleopConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GuardedTeleopConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::from_cdr_buffer(UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GuardedTeleopConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::reset_sample(UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType& sample) 
        {
            sample.obstacleAvoidance(UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType::DEVIATE_FROM_PATH);
            sample.pathTolerance(0.0);
            sample.stopOnPitchoverLimit(0);
            sample.stopOnRolloverLimit(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType >::allocate_sample(UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.obstacleAvoidance(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

