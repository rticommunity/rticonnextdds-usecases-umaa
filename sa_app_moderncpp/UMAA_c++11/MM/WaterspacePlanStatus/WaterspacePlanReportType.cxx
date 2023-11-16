

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "WaterspacePlanReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WaterspacePlanReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace WaterspacePlanStatus {

            // ---- WaterspacePlanReportType: 

            WaterspacePlanReportType::WaterspacePlanReportType() :
                m_waterspacePlanName_ ("")  {

            }   

            WaterspacePlanReportType::WaterspacePlanReportType (const std::string& waterspacePlanName_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::PlanningZoneType, 100L >& zones_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& waterspacePlanID_):
                m_waterspacePlanName_(waterspacePlanName_), 
                m_zones_(zones_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_), 
                m_waterspacePlanID_(waterspacePlanID_) {
            }

            void WaterspacePlanReportType::swap(WaterspacePlanReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_waterspacePlanName_, other_.m_waterspacePlanName_);
                swap(m_zones_, other_.m_zones_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_waterspacePlanID_, other_.m_waterspacePlanID_);
            }  

            bool WaterspacePlanReportType::operator == (const WaterspacePlanReportType& other_) const {
                if (m_waterspacePlanName_ != other_.m_waterspacePlanName_) {
                    return false;
                }
                if (m_zones_ != other_.m_zones_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_waterspacePlanID_ != other_.m_waterspacePlanID_) {
                    return false;
                }
                return true;
            }

            bool WaterspacePlanReportType::operator != (const WaterspacePlanReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WaterspacePlanReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "waterspacePlanName: " << sample.waterspacePlanName ()<<", ";
                o << "zones: " << sample.zones ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "waterspacePlanID: " << sample.waterspacePlanID ();
                o <<"]";
                return o;
            }

        } // namespace WaterspacePlanStatus  

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
        struct native_type_code< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WaterspacePlanReportType_g_tc_zones_sequence;

                static DDS_TypeCode_Member WaterspacePlanReportType_g_tc_members[5]=
                {

                    {
                        (char *)"waterspacePlanName",/* Member name */
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
                        (char *)"zones",/* Member name */
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
                    }, 
                    {
                        (char *)"waterspacePlanID",/* Member name */
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
                    }
                };

                static DDS_TypeCode WaterspacePlanReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        WaterspacePlanReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaterspacePlanReportType*/

                if (is_initialized) {
                    return &WaterspacePlanReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaterspacePlanReportType_g_tc_zones_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::PlanningZoneType, 100L > >((100L));

                WaterspacePlanReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WaterspacePlanReportType_g_tc_zones_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::PlanningZoneType>::get().native();
                WaterspacePlanReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                WaterspacePlanReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& WaterspacePlanReportType_g_tc_zones_sequence;
                WaterspacePlanReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WaterspacePlanReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                WaterspacePlanReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WaterspacePlanReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WaterspacePlanReportType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WaterspacePlanReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaterspacePlanReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaterspacePlanReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType *sample;

                static RTIXCdrMemberAccessInfo WaterspacePlanReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaterspacePlanReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaterspacePlanReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WaterspacePlanReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waterspacePlanName() - (char *)sample);

                WaterspacePlanReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zones() - (char *)sample);

                WaterspacePlanReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WaterspacePlanReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WaterspacePlanReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waterspacePlanID() - (char *)sample);

                WaterspacePlanReportType_g_sampleAccessInfo.memberAccessInfos = 
                WaterspacePlanReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaterspacePlanReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaterspacePlanReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaterspacePlanReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaterspacePlanReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >;

                WaterspacePlanReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaterspacePlanReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaterspacePlanReportType_g_typePlugin = 
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

                return &WaterspacePlanReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportTypePlugin_new,
                ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WaterspacePlanReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WaterspacePlanReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::from_cdr_buffer(::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WaterspacePlanReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::reset_sample(::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample) 
        {
            sample.waterspacePlanName("");
            ::rti::topic::reset_sample(sample.zones());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.waterspacePlanID());
        }

        void topic_type_support< ::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType >::allocate_sample(::UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.waterspacePlanName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.zones(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waterspacePlanID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
