

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BeaconParametersReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BeaconParametersReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BeaconParametersStatus {

            // ---- BeaconParametersReportType: 

            BeaconParametersReportType::BeaconParametersReportType() :
                m_frequencyBand_ (0) ,
                m_IRLightsArmed_ (0) ,
                m_IRLightsOn_ (0) ,
                m_locatorArmed_ (0) ,
                m_locatorOn_ (0) ,
                m_multibandLocator_ (0) ,
                m_RGLightsArmed_ (0) ,
                m_RGLightsOn_ (0) ,
                m_transmitChannel_ (0)  {

            }   

            BeaconParametersReportType::BeaconParametersReportType (int32_t frequencyBand_,bool IRLightsArmed_,bool IRLightsOn_,bool locatorArmed_,bool locatorOn_,bool multibandLocator_,bool RGLightsArmed_,bool RGLightsOn_,int32_t transmitChannel_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_frequencyBand_(frequencyBand_), 
                m_IRLightsArmed_(IRLightsArmed_), 
                m_IRLightsOn_(IRLightsOn_), 
                m_locatorArmed_(locatorArmed_), 
                m_locatorOn_(locatorOn_), 
                m_multibandLocator_(multibandLocator_), 
                m_RGLightsArmed_(RGLightsArmed_), 
                m_RGLightsOn_(RGLightsOn_), 
                m_transmitChannel_(transmitChannel_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void BeaconParametersReportType::swap(BeaconParametersReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_frequencyBand_, other_.m_frequencyBand_);
                swap(m_IRLightsArmed_, other_.m_IRLightsArmed_);
                swap(m_IRLightsOn_, other_.m_IRLightsOn_);
                swap(m_locatorArmed_, other_.m_locatorArmed_);
                swap(m_locatorOn_, other_.m_locatorOn_);
                swap(m_multibandLocator_, other_.m_multibandLocator_);
                swap(m_RGLightsArmed_, other_.m_RGLightsArmed_);
                swap(m_RGLightsOn_, other_.m_RGLightsOn_);
                swap(m_transmitChannel_, other_.m_transmitChannel_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BeaconParametersReportType::operator == (const BeaconParametersReportType& other_) const {
                if (m_frequencyBand_ != other_.m_frequencyBand_) {
                    return false;
                }
                if (m_IRLightsArmed_ != other_.m_IRLightsArmed_) {
                    return false;
                }
                if (m_IRLightsOn_ != other_.m_IRLightsOn_) {
                    return false;
                }
                if (m_locatorArmed_ != other_.m_locatorArmed_) {
                    return false;
                }
                if (m_locatorOn_ != other_.m_locatorOn_) {
                    return false;
                }
                if (m_multibandLocator_ != other_.m_multibandLocator_) {
                    return false;
                }
                if (m_RGLightsArmed_ != other_.m_RGLightsArmed_) {
                    return false;
                }
                if (m_RGLightsOn_ != other_.m_RGLightsOn_) {
                    return false;
                }
                if (m_transmitChannel_ != other_.m_transmitChannel_) {
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

            bool BeaconParametersReportType::operator != (const BeaconParametersReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BeaconParametersReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "frequencyBand: " << sample.frequencyBand ()<<", ";
                o << "IRLightsArmed: " << sample.IRLightsArmed ()<<", ";
                o << "IRLightsOn: " << sample.IRLightsOn ()<<", ";
                o << "locatorArmed: " << sample.locatorArmed ()<<", ";
                o << "locatorOn: " << sample.locatorOn ()<<", ";
                o << "multibandLocator: " << sample.multibandLocator ()<<", ";
                o << "RGLightsArmed: " << sample.RGLightsArmed ()<<", ";
                o << "RGLightsOn: " << sample.RGLightsOn ()<<", ";
                o << "transmitChannel: " << sample.transmitChannel ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace BeaconParametersStatus  

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
        struct native_type_code< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BeaconParametersReportType_g_tc_members[11]=
                {

                    {
                        (char *)"frequencyBand",/* Member name */
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
                        (char *)"IRLightsArmed",/* Member name */
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
                        (char *)"IRLightsOn",/* Member name */
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
                        (char *)"locatorArmed",/* Member name */
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
                        (char *)"locatorOn",/* Member name */
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
                        (char *)"multibandLocator",/* Member name */
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
                        (char *)"RGLightsArmed",/* Member name */
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
                        (char *)"RGLightsOn",/* Member name */
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
                        (char *)"transmitChannel",/* Member name */
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
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            10,/* Representation ID */
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

                static DDS_TypeCode BeaconParametersReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        BeaconParametersReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BeaconParametersReportType*/

                if (is_initialized) {
                    return &BeaconParametersReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BeaconParametersReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BeaconParametersReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                BeaconParametersReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                BeaconParametersReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BeaconParametersReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                BeaconParametersReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                BeaconParametersReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                BeaconParametersReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;
                BeaconParametersReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                BeaconParametersReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[8]._annotations._defaultValue._u.long_value = 0;
                BeaconParametersReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[8]._annotations._minValue._u.long_value = -2147483648L;
                BeaconParametersReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersReportType_g_tc_members[8]._annotations._maxValue._u.long_value = 2147483647L;

                BeaconParametersReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BeaconParametersReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BeaconParametersReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType *sample;

                static RTIXCdrMemberAccessInfo BeaconParametersReportType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BeaconParametersReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BeaconParametersReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BeaconParametersReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->frequencyBand() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IRLightsArmed() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IRLightsOn() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->locatorArmed() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->locatorOn() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->multibandLocator() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RGLightsArmed() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RGLightsOn() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transmitChannel() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BeaconParametersReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BeaconParametersReportType_g_sampleAccessInfo.memberAccessInfos = 
                BeaconParametersReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BeaconParametersReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BeaconParametersReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BeaconParametersReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BeaconParametersReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >;

                BeaconParametersReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BeaconParametersReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BeaconParametersReportType_g_typePlugin = 
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

                return &BeaconParametersReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportTypePlugin_new,
                ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BeaconParametersReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BeaconParametersReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::from_cdr_buffer(::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BeaconParametersReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::reset_sample(::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType& sample) 
        {
            sample.frequencyBand(0);
            sample.IRLightsArmed(0);
            sample.IRLightsOn(0);
            sample.locatorArmed(0);
            sample.locatorOn(0);
            sample.multibandLocator(0);
            sample.RGLightsArmed(0);
            sample.RGLightsOn(0);
            sample.transmitChannel(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType >::allocate_sample(::UMAA::SEM::BeaconParametersStatus::BeaconParametersReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
