

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GPSReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GPSReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSStatus {

            // ---- GPSReportType: 

            GPSReportType::GPSReportType() :
                m_numberSatellitesInView_ (0)  {

            }   

            GPSReportType::GPSReportType (const ::UMAA::SEM::GPSStatus::GPSClockType& clock_,int32_t numberSatellitesInView_,const ::rti::core::bounded_sequence< ::UMAA::SEM::GPSStatus::GPSSatelliteType, 300L >& satellites_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_clock_(clock_), 
                m_numberSatellitesInView_(numberSatellitesInView_), 
                m_satellites_(satellites_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void GPSReportType::swap(GPSReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_clock_, other_.m_clock_);
                swap(m_numberSatellitesInView_, other_.m_numberSatellitesInView_);
                swap(m_satellites_, other_.m_satellites_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool GPSReportType::operator == (const GPSReportType& other_) const {
                if (m_clock_ != other_.m_clock_) {
                    return false;
                }
                if (m_numberSatellitesInView_ != other_.m_numberSatellitesInView_) {
                    return false;
                }
                if (m_satellites_ != other_.m_satellites_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool GPSReportType::operator != (const GPSReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "clock: " << sample.clock ()<<", ";
                o << "numberSatellitesInView: " << sample.numberSatellitesInView ()<<", ";
                o << "satellites: " << sample.satellites ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace GPSStatus  

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
        struct native_type_code< ::UMAA::SEM::GPSStatus::GPSReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GPSReportType_g_tc_satellites_sequence;

                static DDS_TypeCode_Member GPSReportType_g_tc_members[5]=
                {

                    {
                        (char *)"clock",/* Member name */
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
                        (char *)"numberSatellitesInView",/* Member name */
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
                        (char *)"satellites",/* Member name */
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
                    }
                };

                static DDS_TypeCode GPSReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSStatus::GPSReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        GPSReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSReportType*/

                if (is_initialized) {
                    return &GPSReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSReportType_g_tc_satellites_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::SEM::GPSStatus::GPSSatelliteType, 300L > >((300L));

                GPSReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSReportType_g_tc_satellites_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::GPSStatus::GPSSatelliteType>::get().native();
                GPSReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::GPSStatus::GPSClockType>::get().native();
                GPSReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& GPSReportType_g_tc_satellites_sequence;
                GPSReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GPSReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                GPSReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                GPSReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSReportType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSReportType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::GPSStatus::GPSReportType *sample;

                static RTIXCdrMemberAccessInfo GPSReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::GPSStatus::GPSReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->clock() - (char *)sample);

                GPSReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numberSatellitesInView() - (char *)sample);

                GPSReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->satellites() - (char *)sample);

                GPSReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GPSReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GPSReportType_g_sampleAccessInfo.memberAccessInfos = 
                GPSReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::GPSStatus::GPSReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::GPSStatus::GPSReportType >;

                GPSReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSReportType_g_typePlugin = 
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

                return &GPSReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::GPSStatus::GPSReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::GPSStatus::GPSReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::GPSStatus::GPSReportTypePlugin_new,
                ::UMAA::SEM::GPSStatus::GPSReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::GPSStatus::GPSReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::GPSStatus::GPSReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSReportType >::from_cdr_buffer(::UMAA::SEM::GPSStatus::GPSReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::GPSStatus::GPSReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSReportType >::reset_sample(::UMAA::SEM::GPSStatus::GPSReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.clock());
            sample.numberSatellitesInView(0);
            ::rti::topic::reset_sample(sample.satellites());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSReportType >::allocate_sample(::UMAA::SEM::GPSStatus::GPSReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.clock(),  -1, -1);
            ::rti::topic::allocate_sample(sample.satellites(),  300L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE