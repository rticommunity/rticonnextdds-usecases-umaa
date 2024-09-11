

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PrimitiveDriverExecutionStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PrimitiveDriverExecutionStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace PrimitiveDriverControl {

            // ---- PrimitiveDriverExecutionStatusReportType: 

            PrimitiveDriverExecutionStatusReportType::PrimitiveDriverExecutionStatusReportType()  {

            }   

            PrimitiveDriverExecutionStatusReportType::PrimitiveDriverExecutionStatusReportType (const ::UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort_,const ::UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_propulsiveLinearEffort_(propulsiveLinearEffort_), 
                m_propulsiveRotationalEffort_(propulsiveRotationalEffort_), 
                m_resistiveLinearEffort_(resistiveLinearEffort_), 
                m_resistiveRotationalEffort_(resistiveRotationalEffort_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void PrimitiveDriverExecutionStatusReportType::swap(PrimitiveDriverExecutionStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_propulsiveLinearEffort_, other_.m_propulsiveLinearEffort_);
                swap(m_propulsiveRotationalEffort_, other_.m_propulsiveRotationalEffort_);
                swap(m_resistiveLinearEffort_, other_.m_resistiveLinearEffort_);
                swap(m_resistiveRotationalEffort_, other_.m_resistiveRotationalEffort_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool PrimitiveDriverExecutionStatusReportType::operator == (const PrimitiveDriverExecutionStatusReportType& other_) const {
                if (m_propulsiveLinearEffort_ != other_.m_propulsiveLinearEffort_) {
                    return false;
                }
                if (m_propulsiveRotationalEffort_ != other_.m_propulsiveRotationalEffort_) {
                    return false;
                }
                if (m_resistiveLinearEffort_ != other_.m_resistiveLinearEffort_) {
                    return false;
                }
                if (m_resistiveRotationalEffort_ != other_.m_resistiveRotationalEffort_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
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

            bool PrimitiveDriverExecutionStatusReportType::operator != (const PrimitiveDriverExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PrimitiveDriverExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "propulsiveLinearEffort: " << sample.propulsiveLinearEffort ()<<", ";
                o << "propulsiveRotationalEffort: " << sample.propulsiveRotationalEffort ()<<", ";
                o << "resistiveLinearEffort: " << sample.resistiveLinearEffort ()<<", ";
                o << "resistiveRotationalEffort: " << sample.resistiveRotationalEffort ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace PrimitiveDriverControl  

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
        struct native_type_code< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrimitiveDriverExecutionStatusReportType_g_tc_members[7]=
                {

                    {
                        (char *)"propulsiveLinearEffort",/* Member name */
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
                        (char *)"propulsiveRotationalEffort",/* Member name */
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
                        (char *)"resistiveLinearEffort",/* Member name */
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
                        (char *)"resistiveRotationalEffort",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PrimitiveDriverExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        PrimitiveDriverExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PrimitiveDriverExecutionStatusReportType*/

                if (is_initialized) {
                    return &PrimitiveDriverExecutionStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PrimitiveDriverExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PrimitiveDriverExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                PrimitiveDriverExecutionStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PrimitiveDriverExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PrimitiveDriverExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &PrimitiveDriverExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveLinearEffort() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveRotationalEffort() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveLinearEffort() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveRotationalEffort() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                PrimitiveDriverExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >;

                PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverExecutionStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PrimitiveDriverExecutionStatusReportType_g_typePlugin = 
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

                return &PrimitiveDriverExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportTypePlugin_new,
                ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PrimitiveDriverExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PrimitiveDriverExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::from_cdr_buffer(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PrimitiveDriverExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::reset_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.propulsiveLinearEffort());
            ::rti::topic::reset_sample(sample.propulsiveRotationalEffort());
            ::rti::topic::reset_sample(sample.resistiveLinearEffort());
            ::rti::topic::reset_sample(sample.resistiveRotationalEffort());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType >::allocate_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.propulsiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.propulsiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
