

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixReportType.idl
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
#include "GPSFixReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GPSFixReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSFixStatus {

            // ---- GPSFixReportType: 

            GPSFixReportType::GPSFixReportType() :
                m_GPSFixCommandStatus_(UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType::INITIATING) ,
                m_GPSLatLongValid_ (0) ,
                m_magneticVariation_ (0.0) ,
                m_SOG_ (0.0) ,
                m_trueCourse_ (0.0)  {

            }   

            GPSFixReportType::GPSFixReportType (const ::UMAA::Common::Measurement::Altitude_MSL& altitudeMSL_,const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType& GPSFixCommandStatus_,bool GPSLatLongValid_,double magneticVariation_,const ::UMAA::Common::Measurement::Position2DTime& position2DWithTime_,double SOG_,double trueCourse_,const ::UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_altitudeMSL_(altitudeMSL_), 
                m_GPSFixCommandStatus_(GPSFixCommandStatus_), 
                m_GPSLatLongValid_(GPSLatLongValid_), 
                m_magneticVariation_(magneticVariation_), 
                m_position2DWithTime_(position2DWithTime_), 
                m_SOG_(SOG_), 
                m_trueCourse_(trueCourse_), 
                m_velocity_(velocity_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void GPSFixReportType::swap(GPSFixReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitudeMSL_, other_.m_altitudeMSL_);
                swap(m_GPSFixCommandStatus_, other_.m_GPSFixCommandStatus_);
                swap(m_GPSLatLongValid_, other_.m_GPSLatLongValid_);
                swap(m_magneticVariation_, other_.m_magneticVariation_);
                swap(m_position2DWithTime_, other_.m_position2DWithTime_);
                swap(m_SOG_, other_.m_SOG_);
                swap(m_trueCourse_, other_.m_trueCourse_);
                swap(m_velocity_, other_.m_velocity_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool GPSFixReportType::operator == (const GPSFixReportType& other_) const {
                if (m_altitudeMSL_ != other_.m_altitudeMSL_) {
                    return false;
                }
                if (m_GPSFixCommandStatus_ != other_.m_GPSFixCommandStatus_) {
                    return false;
                }
                if (m_GPSLatLongValid_ != other_.m_GPSLatLongValid_) {
                    return false;
                }
                if (std::fabs(m_magneticVariation_ - other_.m_magneticVariation_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_magneticVariation_ - other_.m_magneticVariation_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_position2DWithTime_ != other_.m_position2DWithTime_) {
                    return false;
                }
                if (std::fabs(m_SOG_ - other_.m_SOG_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_SOG_ - other_.m_SOG_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_trueCourse_ - other_.m_trueCourse_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_trueCourse_ - other_.m_trueCourse_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_velocity_ != other_.m_velocity_) {
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

            bool GPSFixReportType::operator != (const GPSFixReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSFixReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitudeMSL: " << sample.altitudeMSL ()<<", ";
                o << "GPSFixCommandStatus: " << sample.GPSFixCommandStatus ()<<", ";
                o << "GPSLatLongValid: " << sample.GPSLatLongValid ()<<", ";
                o << "magneticVariation: " << std::setprecision(15) << sample.magneticVariation ()<<", ";
                o << "position2DWithTime: " << sample.position2DWithTime ()<<", ";
                o << "SOG: " << std::setprecision(15) << sample.SOG ()<<", ";
                o << "trueCourse: " << std::setprecision(15) << sample.trueCourse ()<<", ";
                o << "velocity: " << sample.velocity ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace GPSFixStatus  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GPSFixReportType_g_tc_members[10]=
                {

                    {
                        (char *)"altitudeMSL",/* Member name */
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
                        (char *)"GPSFixCommandStatus",/* Member name */
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
                        (char *)"GPSLatLongValid",/* Member name */
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
                        (char *)"magneticVariation",/* Member name */
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
                        (char *)"position2DWithTime",/* Member name */
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
                        (char *)"SOG",/* Member name */
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
                    }, 
                    {
                        (char *)"trueCourse",/* Member name */
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
                        (char *)"velocity",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            8,/* Representation ID */
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
                            9,/* Representation ID */
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

                static DDS_TypeCode GPSFixReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSFixStatus::GPSFixReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        GPSFixReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSFixReportType*/

                if (is_initialized) {
                    return &GPSFixReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSFixReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSFixReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_MSL>::get().native();
                GPSFixReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType>::get().native();
                GPSFixReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSFixReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t>::get().native();
                GPSFixReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2DTime>::get().native();
                GPSFixReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                GPSFixReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Course_TrueNorth_AliasTag_t>::get().native();
                GPSFixReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Velocity3D_PlatformNED>::get().native();
                GPSFixReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GPSFixReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                GPSFixReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GPSFixReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                GPSFixReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GPSFixReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                GPSFixReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                GPSFixReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSFixReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GPSFixReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                GPSFixReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                GPSFixReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 200ULL;
                GPSFixReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                GPSFixReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSFixReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSFixReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSFixReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSFixReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSFixReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::GPSFixStatus::GPSFixReportType *sample;

                static RTIXCdrMemberAccessInfo GPSFixReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSFixReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSFixReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::GPSFixStatus::GPSFixReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSFixReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeMSL() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GPSFixCommandStatus() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GPSLatLongValid() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->magneticVariation() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position2DWithTime() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SOG() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueCourse() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocity() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GPSFixReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GPSFixReportType_g_sampleAccessInfo.memberAccessInfos = 
                GPSFixReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::GPSFixStatus::GPSFixReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSFixReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSFixReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSFixReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSFixReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >;

                GPSFixReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSFixReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSFixReportType_g_typePlugin = 
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

                return &GPSFixReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::GPSFixStatus::GPSFixReportTypePlugin_new,
                ::UMAA::SEM::GPSFixStatus::GPSFixReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSFixReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSFixReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::from_cdr_buffer(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSFixReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::GPSFixStatus::GPSFixReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::reset_sample(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitudeMSL());
            sample.GPSFixCommandStatus(UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType::INITIATING);
            sample.GPSLatLongValid(0);
            sample.magneticVariation(0.0);
            ::rti::topic::reset_sample(sample.position2DWithTime());
            sample.SOG(0.0);
            sample.trueCourse(0.0);
            ::rti::topic::reset_sample(sample.velocity());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType >::allocate_sample(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.altitudeMSL(),  -1, -1);
            ::rti::topic::allocate_sample(sample.GPSFixCommandStatus(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position2DWithTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.velocity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
