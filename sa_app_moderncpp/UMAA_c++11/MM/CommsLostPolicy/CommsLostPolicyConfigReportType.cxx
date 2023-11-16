

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyConfigReportType.idl
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
#include "CommsLostPolicyConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsLostPolicyConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace CommsLostPolicy {

            // ---- CommsLostPolicyConfigReportType: 

            CommsLostPolicyConfigReportType::CommsLostPolicyConfigReportType() :
                m_commsLostTimeOut_ (0.0) ,
                m_commsRegainedStop_ (0) ,
                m_commsRegainedTimeOut_ (0.0)  {

            }   

            CommsLostPolicyConfigReportType::CommsLostPolicyConfigReportType (double commsLostTimeOut_,bool commsRegainedStop_,double commsRegainedTimeOut_,const ::dds::core::optional< bool >& continueMission_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse_,const ::dds::core::optional< bool >& stopMotion_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_commsLostTimeOut_(commsLostTimeOut_), 
                m_commsRegainedStop_(commsRegainedStop_), 
                m_commsRegainedTimeOut_(commsRegainedTimeOut_), 
                m_continueMission_(continueMission_), 
                m_moveToPos_(moveToPos_), 
                m_retrotraverse_(retrotraverse_), 
                m_stopMotion_(stopMotion_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void CommsLostPolicyConfigReportType::swap(CommsLostPolicyConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_commsLostTimeOut_, other_.m_commsLostTimeOut_);
                swap(m_commsRegainedStop_, other_.m_commsRegainedStop_);
                swap(m_commsRegainedTimeOut_, other_.m_commsRegainedTimeOut_);
                swap(m_continueMission_, other_.m_continueMission_);
                swap(m_moveToPos_, other_.m_moveToPos_);
                swap(m_retrotraverse_, other_.m_retrotraverse_);
                swap(m_stopMotion_, other_.m_stopMotion_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool CommsLostPolicyConfigReportType::operator == (const CommsLostPolicyConfigReportType& other_) const {
                if (std::fabs(m_commsLostTimeOut_ - other_.m_commsLostTimeOut_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_commsLostTimeOut_ - other_.m_commsLostTimeOut_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_commsRegainedStop_ != other_.m_commsRegainedStop_) {
                    return false;
                }
                if (std::fabs(m_commsRegainedTimeOut_ - other_.m_commsRegainedTimeOut_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_commsRegainedTimeOut_ - other_.m_commsRegainedTimeOut_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_continueMission_ != other_.m_continueMission_) {
                    return false;
                }
                if (m_moveToPos_ != other_.m_moveToPos_) {
                    return false;
                }
                if (m_retrotraverse_ != other_.m_retrotraverse_) {
                    return false;
                }
                if (m_stopMotion_ != other_.m_stopMotion_) {
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

            bool CommsLostPolicyConfigReportType::operator != (const CommsLostPolicyConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsLostPolicyConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "commsLostTimeOut: " << std::setprecision(15) << sample.commsLostTimeOut ()<<", ";
                o << "commsRegainedStop: " << sample.commsRegainedStop ()<<", ";
                o << "commsRegainedTimeOut: " << std::setprecision(15) << sample.commsRegainedTimeOut ()<<", ";
                o << "continueMission: " << sample.continueMission ()<<", ";
                o << "moveToPos: " << sample.moveToPos ()<<", ";
                o << "retrotraverse: " << sample.retrotraverse ()<<", ";
                o << "stopMotion: " << sample.stopMotion ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace CommsLostPolicy  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsLostPolicyConfigReportType_g_tc_members[9]=
                {

                    {
                        (char *)"commsLostTimeOut",/* Member name */
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
                        (char *)"commsRegainedStop",/* Member name */
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
                        (char *)"commsRegainedTimeOut",/* Member name */
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
                        (char *)"continueMission",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"moveToPos",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"retrotraverse",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"stopMotion",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommsLostPolicyConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        CommsLostPolicyConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsLostPolicyConfigReportType*/

                if (is_initialized) {
                    return &CommsLostPolicyConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsLostPolicyConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsLostPolicyConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CommsLostPolicyConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CommsLostPolicyConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType>::get().native();
                CommsLostPolicyConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType>::get().native();
                CommsLostPolicyConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsLostPolicyConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 37817280ULL;
                CommsLostPolicyConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CommsLostPolicyConfigReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 37817280ULL;

                CommsLostPolicyConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsLostPolicyConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsLostPolicyConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType *sample;

                static RTIXCdrMemberAccessInfo CommsLostPolicyConfigReportType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsLostPolicyConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsLostPolicyConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsLostPolicyConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsLostTimeOut() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedStop() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedTimeOut() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->continueMission() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->moveToPos() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->retrotraverse() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopMotion() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsLostPolicyConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsLostPolicyConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                CommsLostPolicyConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsLostPolicyConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsLostPolicyConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsLostPolicyConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsLostPolicyConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >;

                CommsLostPolicyConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsLostPolicyConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsLostPolicyConfigReportType_g_typePlugin = 
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

                return &CommsLostPolicyConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportTypePlugin_new,
                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsLostPolicyConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsLostPolicyConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::from_cdr_buffer(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsLostPolicyConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::reset_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample) 
        {
            sample.commsLostTimeOut(0.0);
            sample.commsRegainedStop(0);
            sample.commsRegainedTimeOut(0.0);
            ::rti::topic::reset_sample(sample.continueMission());
            ::rti::topic::reset_sample(sample.moveToPos());
            ::rti::topic::reset_sample(sample.retrotraverse());
            ::rti::topic::reset_sample(sample.stopMotion());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType >::allocate_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
