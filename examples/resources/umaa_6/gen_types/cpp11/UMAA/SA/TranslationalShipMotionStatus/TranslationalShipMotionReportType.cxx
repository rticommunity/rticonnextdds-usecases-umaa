

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TranslationalShipMotionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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
#include "TranslationalShipMotionReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TranslationalShipMotionReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace TranslationalShipMotionStatus {

            // ---- TranslationalShipMotionReportType: 

            TranslationalShipMotionReportType::TranslationalShipMotionReportType()  {

            }   

            TranslationalShipMotionReportType::TranslationalShipMotionReportType (const ::dds::core::optional< double >& heave_,const ::dds::core::optional< double >& surge_,const ::dds::core::optional< double >& sway_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_heave_(heave_), 
                m_surge_(surge_), 
                m_sway_(sway_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void TranslationalShipMotionReportType::swap(TranslationalShipMotionReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_heave_, other_.m_heave_);
                swap(m_surge_, other_.m_surge_);
                swap(m_sway_, other_.m_sway_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool TranslationalShipMotionReportType::operator == (const TranslationalShipMotionReportType& other_) const {
                if (m_heave_.has_value() != other_.m_heave_.has_value()) {
                    return false;
                } else if (m_heave_.has_value()) {
                    if (std::fabs(*m_heave_ - *other_.m_heave_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_heave_ - *other_.m_heave_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_surge_.has_value() != other_.m_surge_.has_value()) {
                    return false;
                } else if (m_surge_.has_value()) {
                    if (std::fabs(*m_surge_ - *other_.m_surge_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_surge_ - *other_.m_surge_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_sway_.has_value() != other_.m_sway_.has_value()) {
                    return false;
                } else if (m_sway_.has_value()) {
                    if (std::fabs(*m_sway_ - *other_.m_sway_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_sway_ - *other_.m_sway_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool TranslationalShipMotionReportType::operator != (const TranslationalShipMotionReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TranslationalShipMotionReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "heave: " << sample.heave ()<<", ";
                o << "surge: " << sample.surge ()<<", ";
                o << "sway: " << sample.sway ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace TranslationalShipMotionStatus  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TranslationalShipMotionReportType_g_tc_members[5]=
                {

                    {
                        (char *)"heave",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"surge",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sway",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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

                static DDS_TypeCode TranslationalShipMotionReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        TranslationalShipMotionReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TranslationalShipMotionReportType*/

                if (is_initialized) {
                    return &TranslationalShipMotionReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TranslationalShipMotionReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TranslationalShipMotionReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::Down_AliasTag_t>::get().native();
                TranslationalShipMotionReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::Forward_AliasTag_t>::get().native();
                TranslationalShipMotionReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::Left_AliasTag_t>::get().native();
                TranslationalShipMotionReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TranslationalShipMotionReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                TranslationalShipMotionReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TranslationalShipMotionReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                TranslationalShipMotionReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TranslationalShipMotionReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                TranslationalShipMotionReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TranslationalShipMotionReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TranslationalShipMotionReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TranslationalShipMotionReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                TranslationalShipMotionReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &TranslationalShipMotionReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType *sample;

                static RTIXCdrMemberAccessInfo TranslationalShipMotionReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TranslationalShipMotionReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TranslationalShipMotionReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType);
                if (sample == NULL) {
                    return NULL;
                }

                TranslationalShipMotionReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heave() - (char *)sample);

                TranslationalShipMotionReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->surge() - (char *)sample);

                TranslationalShipMotionReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sway() - (char *)sample);

                TranslationalShipMotionReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                TranslationalShipMotionReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                TranslationalShipMotionReportType_g_sampleAccessInfo.memberAccessInfos = 
                TranslationalShipMotionReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TranslationalShipMotionReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TranslationalShipMotionReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TranslationalShipMotionReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TranslationalShipMotionReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >;

                TranslationalShipMotionReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TranslationalShipMotionReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TranslationalShipMotionReportType_g_typePlugin = 
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

                return &TranslationalShipMotionReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportTypePlugin_new,
                ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TranslationalShipMotionReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TranslationalShipMotionReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::from_cdr_buffer(::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TranslationalShipMotionReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::reset_sample(::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.heave());
            ::rti::topic::reset_sample(sample.surge());
            ::rti::topic::reset_sample(sample.sway());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType >::allocate_sample(::UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
