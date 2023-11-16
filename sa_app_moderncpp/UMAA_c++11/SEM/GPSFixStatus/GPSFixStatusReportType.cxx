

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GPSFixStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GPSFixStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSFixStatus {

            // ---- GPSFixStatusReportType: 

            GPSFixStatusReportType::GPSFixStatusReportType() :
                m_countDown_ (0) ,
                m_fixValid_ (0) ,
                m_lowBkupBattery_ (0) ,
                m_navSolution_(UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType::GPS_1) ,
                m_pCode_ (0) ,
                m_timeOut_ (0)  {

            }   

            GPSFixStatusReportType::GPSFixStatusReportType (const ::rti::core::bounded_sequence< double, 11L >& carrierToNoise_,int32_t countDown_,bool fixValid_,bool lowBkupBattery_,const ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType& navSolution_,const ::UMAA::Common::Measurement::Position3D_WGS84& originPosition_,bool pCode_,bool timeOut_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_carrierToNoise_(carrierToNoise_), 
                m_countDown_(countDown_), 
                m_fixValid_(fixValid_), 
                m_lowBkupBattery_(lowBkupBattery_), 
                m_navSolution_(navSolution_), 
                m_originPosition_(originPosition_), 
                m_pCode_(pCode_), 
                m_timeOut_(timeOut_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void GPSFixStatusReportType::swap(GPSFixStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_carrierToNoise_, other_.m_carrierToNoise_);
                swap(m_countDown_, other_.m_countDown_);
                swap(m_fixValid_, other_.m_fixValid_);
                swap(m_lowBkupBattery_, other_.m_lowBkupBattery_);
                swap(m_navSolution_, other_.m_navSolution_);
                swap(m_originPosition_, other_.m_originPosition_);
                swap(m_pCode_, other_.m_pCode_);
                swap(m_timeOut_, other_.m_timeOut_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool GPSFixStatusReportType::operator == (const GPSFixStatusReportType& other_) const {
                if (m_carrierToNoise_ != other_.m_carrierToNoise_) {
                    return false;
                }
                if (m_countDown_ != other_.m_countDown_) {
                    return false;
                }
                if (m_fixValid_ != other_.m_fixValid_) {
                    return false;
                }
                if (m_lowBkupBattery_ != other_.m_lowBkupBattery_) {
                    return false;
                }
                if (m_navSolution_ != other_.m_navSolution_) {
                    return false;
                }
                if (m_originPosition_ != other_.m_originPosition_) {
                    return false;
                }
                if (m_pCode_ != other_.m_pCode_) {
                    return false;
                }
                if (m_timeOut_ != other_.m_timeOut_) {
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

            bool GPSFixStatusReportType::operator != (const GPSFixStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSFixStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "carrierToNoise: " << sample.carrierToNoise ()<<", ";
                o << "countDown: " << sample.countDown ()<<", ";
                o << "fixValid: " << sample.fixValid ()<<", ";
                o << "lowBkupBattery: " << sample.lowBkupBattery ()<<", ";
                o << "navSolution: " << sample.navSolution ()<<", ";
                o << "originPosition: " << sample.originPosition ()<<", ";
                o << "pCode: " << sample.pCode ()<<", ";
                o << "timeOut: " << sample.timeOut ()<<", ";
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
        struct native_type_code< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GPSFixStatusReportType_g_tc_carrierToNoise_sequence;

                static DDS_TypeCode_Member GPSFixStatusReportType_g_tc_members[10]=
                {

                    {
                        (char *)"carrierToNoise",/* Member name */
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
                        (char *)"countDown",/* Member name */
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
                        (char *)"fixValid",/* Member name */
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
                        (char *)"lowBkupBattery",/* Member name */
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
                        (char *)"navSolution",/* Member name */
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
                        (char *)"originPosition",/* Member name */
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
                        (char *)"pCode",/* Member name */
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
                        (char *)"timeOut",/* Member name */
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

                static DDS_TypeCode GPSFixStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSFixStatus::GPSFixStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        GPSFixStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSFixStatusReportType*/

                if (is_initialized) {
                    return &GPSFixStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSFixStatusReportType_g_tc_carrierToNoise_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::Size_Numeral, 11L > >((11L));

                GPSFixStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSFixStatusReportType_g_tc_carrierToNoise_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Size_Numeral_AliasTag_t>::get().native();
                GPSFixStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& GPSFixStatusReportType_g_tc_carrierToNoise_sequence;
                GPSFixStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSFixStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSFixStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSFixStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType>::get().native();
                GPSFixStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3D_WGS84>::get().native();
                GPSFixStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSFixStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSFixStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GPSFixStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                GPSFixStatusReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSFixStatusReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                GPSFixStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSFixStatusReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                GPSFixStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSFixStatusReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
                GPSFixStatusReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GPSFixStatusReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                GPSFixStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GPSFixStatusReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                GPSFixStatusReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GPSFixStatusReportType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;
                GPSFixStatusReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GPSFixStatusReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                GPSFixStatusReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GPSFixStatusReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                GPSFixStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSFixStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSFixStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType *sample;

                static RTIXCdrMemberAccessInfo GPSFixStatusReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSFixStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSFixStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSFixStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->carrierToNoise() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->countDown() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fixValid() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowBkupBattery() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->navSolution() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->originPosition() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pCode() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeOut() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GPSFixStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GPSFixStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                GPSFixStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSFixStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSFixStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSFixStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSFixStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >;

                GPSFixStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSFixStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSFixStatusReportType_g_typePlugin = 
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

                return &GPSFixStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportTypePlugin_new,
                ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSFixStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSFixStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::from_cdr_buffer(::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSFixStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::reset_sample(::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.carrierToNoise());
            sample.countDown(0);
            sample.fixValid(0);
            sample.lowBkupBattery(0);
            sample.navSolution(UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType::GPS_1);
            ::rti::topic::reset_sample(sample.originPosition());
            sample.pCode(0);
            sample.timeOut(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType >::allocate_sample(::UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.carrierToNoise(),  11L, -1);
            ::rti::topic::allocate_sample(sample.navSolution(),  -1, -1);
            ::rti::topic::allocate_sample(sample.originPosition(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
