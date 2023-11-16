

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GuardedTeleopCommandAckReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GuardedTeleopCommandAckReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GuardedTeleopControl {

            // ---- GuardedTeleopCommandAckReportType: 

            GuardedTeleopCommandAckReportType::GuardedTeleopCommandAckReportType() :
                m_obstacleAvoidance_(UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType::DEVIATE_FROM_PATH) ,
                m_pathTolerance_ (0.0) ,
                m_stopOnPitchoverLimit_ (0) ,
                m_stopOnRolloverLimit_ (0)  {

            }   

            GuardedTeleopCommandAckReportType::GuardedTeleopCommandAckReportType (const ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType& obstacleAvoidance_,double pathTolerance_,bool stopOnPitchoverLimit_,bool stopOnRolloverLimit_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_obstacleAvoidance_(obstacleAvoidance_), 
                m_pathTolerance_(pathTolerance_), 
                m_stopOnPitchoverLimit_(stopOnPitchoverLimit_), 
                m_stopOnRolloverLimit_(stopOnRolloverLimit_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void GuardedTeleopCommandAckReportType::swap(GuardedTeleopCommandAckReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_obstacleAvoidance_, other_.m_obstacleAvoidance_);
                swap(m_pathTolerance_, other_.m_pathTolerance_);
                swap(m_stopOnPitchoverLimit_, other_.m_stopOnPitchoverLimit_);
                swap(m_stopOnRolloverLimit_, other_.m_stopOnRolloverLimit_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool GuardedTeleopCommandAckReportType::operator == (const GuardedTeleopCommandAckReportType& other_) const {
                if (m_obstacleAvoidance_ != other_.m_obstacleAvoidance_) {
                    return false;
                }
                if (std::fabs(m_pathTolerance_ - other_.m_pathTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pathTolerance_ - other_.m_pathTolerance_) < (std::numeric_limits< double>::min)())) {
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
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }

            bool GuardedTeleopCommandAckReportType::operator != (const GuardedTeleopCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GuardedTeleopCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "obstacleAvoidance: " << sample.obstacleAvoidance ()<<", ";
                o << "pathTolerance: " << std::setprecision(15) << sample.pathTolerance ()<<", ";
                o << "stopOnPitchoverLimit: " << sample.stopOnPitchoverLimit ()<<", ";
                o << "stopOnRolloverLimit: " << sample.stopOnRolloverLimit ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace GuardedTeleopControl  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GuardedTeleopCommandAckReportType_g_tc_members[6]=
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
                        (char *)"sessionID",/* Member name */
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
                    }
                };

                static DDS_TypeCode GuardedTeleopCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        GuardedTeleopCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GuardedTeleopCommandAckReportType*/

                if (is_initialized) {
                    return &GuardedTeleopCommandAckReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GuardedTeleopCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GuardedTeleopCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType>::get().native();
                GuardedTeleopCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GuardedTeleopCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GuardedTeleopCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GuardedTeleopCommandAckReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GuardedTeleopCommandAckReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                GuardedTeleopCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GuardedTeleopCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GuardedTeleopCommandAckReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 401056000ULL;
                GuardedTeleopCommandAckReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GuardedTeleopCommandAckReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                GuardedTeleopCommandAckReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GuardedTeleopCommandAckReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                GuardedTeleopCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GuardedTeleopCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GuardedTeleopCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo GuardedTeleopCommandAckReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GuardedTeleopCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GuardedTeleopCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->obstacleAvoidance() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathTolerance() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopOnPitchoverLimit() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopOnRolloverLimit() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                GuardedTeleopCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                GuardedTeleopCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GuardedTeleopCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GuardedTeleopCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GuardedTeleopCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GuardedTeleopCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >;

                GuardedTeleopCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GuardedTeleopCommandAckReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GuardedTeleopCommandAckReportType_g_typePlugin = 
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

                return &GuardedTeleopCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportTypePlugin_new,
                ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GuardedTeleopCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GuardedTeleopCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::from_cdr_buffer(::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GuardedTeleopCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::reset_sample(::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType& sample) 
        {
            sample.obstacleAvoidance(UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType::DEVIATE_FROM_PATH);
            sample.pathTolerance(0.0);
            sample.stopOnPitchoverLimit(0);
            sample.stopOnRolloverLimit(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType >::allocate_sample(::UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.obstacleAvoidance(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
