

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityReportType.idl
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
#include "PanTiltJointVelocityReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PanTiltJointVelocityReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace PanTiltJointVelocityStatus {

            // ---- PanTiltJointVelocityReportType: 

            PanTiltJointVelocityReportType::PanTiltJointVelocityReportType() :
                m_panVelocity_ (0.0) ,
                m_tiltVelocity_ (0.0)  {

            }   

            PanTiltJointVelocityReportType::PanTiltJointVelocityReportType (double panVelocity_,double tiltVelocity_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_panVelocity_(panVelocity_), 
                m_tiltVelocity_(tiltVelocity_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void PanTiltJointVelocityReportType::swap(PanTiltJointVelocityReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_panVelocity_, other_.m_panVelocity_);
                swap(m_tiltVelocity_, other_.m_tiltVelocity_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PanTiltJointVelocityReportType::operator == (const PanTiltJointVelocityReportType& other_) const {
                if (std::fabs(m_panVelocity_ - other_.m_panVelocity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_panVelocity_ - other_.m_panVelocity_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_tiltVelocity_ - other_.m_tiltVelocity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_tiltVelocity_ - other_.m_tiltVelocity_) < (std::numeric_limits< double>::min)())) {
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

            bool PanTiltJointVelocityReportType::operator != (const PanTiltJointVelocityReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PanTiltJointVelocityReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "panVelocity: " << std::setprecision(15) << sample.panVelocity ()<<", ";
                o << "tiltVelocity: " << std::setprecision(15) << sample.tiltVelocity ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace PanTiltJointVelocityStatus  

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
        struct native_type_code< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanTiltJointVelocityReportType_g_tc_members[4]=
                {

                    {
                        (char *)"panVelocity",/* Member name */
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
                        (char *)"tiltVelocity",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode PanTiltJointVelocityReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PanTiltJointVelocityReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanTiltJointVelocityReportType*/

                if (is_initialized) {
                    return &PanTiltJointVelocityReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanTiltJointVelocityReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanTiltJointVelocityReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                PanTiltJointVelocityReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                PanTiltJointVelocityReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PanTiltJointVelocityReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._minValue._u.double_value = -62.831;
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 62.831;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._minValue._u.double_value = -62.831;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointVelocityReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 62.831;

                PanTiltJointVelocityReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PanTiltJointVelocityReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &PanTiltJointVelocityReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType *sample;

                static RTIXCdrMemberAccessInfo PanTiltJointVelocityReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanTiltJointVelocityReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanTiltJointVelocityReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PanTiltJointVelocityReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panVelocity() - (char *)sample);

                PanTiltJointVelocityReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiltVelocity() - (char *)sample);

                PanTiltJointVelocityReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PanTiltJointVelocityReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PanTiltJointVelocityReportType_g_sampleAccessInfo.memberAccessInfos = 
                PanTiltJointVelocityReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanTiltJointVelocityReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanTiltJointVelocityReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanTiltJointVelocityReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanTiltJointVelocityReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >;

                PanTiltJointVelocityReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanTiltJointVelocityReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanTiltJointVelocityReportType_g_typePlugin = 
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

                return &PanTiltJointVelocityReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportTypePlugin_new,
                ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanTiltJointVelocityReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanTiltJointVelocityReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::from_cdr_buffer(::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanTiltJointVelocityReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::reset_sample(::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample) 
        {
            sample.panVelocity(0.0);
            sample.tiltVelocity(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType >::allocate_sample(::UMAA::SEM::PanTiltJointVelocityStatus::PanTiltJointVelocityReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
