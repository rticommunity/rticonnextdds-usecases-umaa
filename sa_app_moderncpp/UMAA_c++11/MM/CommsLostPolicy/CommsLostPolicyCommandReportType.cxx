

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyCommandReportType.idl
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
#include "CommsLostPolicyCommandReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsLostPolicyCommandReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace CommsLostPolicy {

            // ---- CommsLostPolicyCommandReportType: 

            CommsLostPolicyCommandReportType::CommsLostPolicyCommandReportType() :
                m_commsLostTimeOut_ (0.0) ,
                m_commsRegainedStop_ (0) ,
                m_commsRegainedTimeOut_ (0.0)  {

            }   

            CommsLostPolicyCommandReportType::CommsLostPolicyCommandReportType (double commsLostTimeOut_,bool commsRegainedStop_,double commsRegainedTimeOut_,const ::dds::core::optional< bool >& continueMission_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse_,const ::dds::core::optional< bool >& stopMotion_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
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

            void CommsLostPolicyCommandReportType::swap(CommsLostPolicyCommandReportType& other_)  noexcept 
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

            bool CommsLostPolicyCommandReportType::operator == (const CommsLostPolicyCommandReportType& other_) const {
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

            bool CommsLostPolicyCommandReportType::operator != (const CommsLostPolicyCommandReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsLostPolicyCommandReportType& sample)
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
        struct native_type_code< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsLostPolicyCommandReportType_g_tc_members[9]=
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

                static DDS_TypeCode CommsLostPolicyCommandReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        CommsLostPolicyCommandReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsLostPolicyCommandReportType*/

                if (is_initialized) {
                    return &CommsLostPolicyCommandReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsLostPolicyCommandReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsLostPolicyCommandReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CommsLostPolicyCommandReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyCommandReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CommsLostPolicyCommandReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyCommandReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType>::get().native();
                CommsLostPolicyCommandReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType>::get().native();
                CommsLostPolicyCommandReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CommsLostPolicyCommandReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsLostPolicyCommandReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 37817280ULL;
                CommsLostPolicyCommandReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CommsLostPolicyCommandReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsLostPolicyCommandReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 37817280ULL;

                CommsLostPolicyCommandReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsLostPolicyCommandReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsLostPolicyCommandReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType *sample;

                static RTIXCdrMemberAccessInfo CommsLostPolicyCommandReportType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsLostPolicyCommandReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsLostPolicyCommandReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsLostPolicyCommandReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsLostTimeOut() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedStop() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedTimeOut() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->continueMission() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->moveToPos() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->retrotraverse() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stopMotion() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsLostPolicyCommandReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsLostPolicyCommandReportType_g_sampleAccessInfo.memberAccessInfos = 
                CommsLostPolicyCommandReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsLostPolicyCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsLostPolicyCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsLostPolicyCommandReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsLostPolicyCommandReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >;

                CommsLostPolicyCommandReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsLostPolicyCommandReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsLostPolicyCommandReportType_g_typePlugin = 
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

                return &CommsLostPolicyCommandReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportTypePlugin_new,
                ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsLostPolicyCommandReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsLostPolicyCommandReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::from_cdr_buffer(::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsLostPolicyCommandReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::reset_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType& sample) 
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

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType >::allocate_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
