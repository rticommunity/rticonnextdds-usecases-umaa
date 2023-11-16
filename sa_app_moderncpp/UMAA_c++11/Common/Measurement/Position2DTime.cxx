

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2DTime.idl
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
#include "Position2DTimePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Position2DTime.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Position2DTime: 

            Position2DTime::Position2DTime()  {

            }   

            Position2DTime::Position2DTime (const ::UMAA::Common::Measurement::Position2D& geodeticPosition_,const ::dds::core::optional< double >& timeAtPosition_):
                m_geodeticPosition_(geodeticPosition_), 
                m_timeAtPosition_(timeAtPosition_) {
            }

            void Position2DTime::swap(Position2DTime& other_)  noexcept 
            {
                using std::swap;
                swap(m_geodeticPosition_, other_.m_geodeticPosition_);
                swap(m_timeAtPosition_, other_.m_timeAtPosition_);
            }  

            bool Position2DTime::operator == (const Position2DTime& other_) const {
                if (m_geodeticPosition_ != other_.m_geodeticPosition_) {
                    return false;
                }
                if (m_timeAtPosition_.has_value() != other_.m_timeAtPosition_.has_value()) {
                    return false;
                } else if (m_timeAtPosition_.has_value()) {
                    if (std::fabs(*m_timeAtPosition_ - *other_.m_timeAtPosition_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_timeAtPosition_ - *other_.m_timeAtPosition_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool Position2DTime::operator != (const Position2DTime& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Position2DTime& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "geodeticPosition: " << sample.geodeticPosition ()<<", ";
                o << "timeAtPosition: " << sample.timeAtPosition ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Measurement::Position2DTime > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Position2DTime_g_tc_members[2]=
                {

                    {
                        (char *)"geodeticPosition",/* Member name */
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
                        (char *)"timeAtPosition",/* Member name */
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
                    }
                };

                static DDS_TypeCode Position2DTime_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Position2DTime", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Position2DTime_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Position2DTime*/

                if (is_initialized) {
                    return &Position2DTime_g_tc;
                }

                is_initialized = RTI_TRUE;

                Position2DTime_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Position2DTime_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2D>::get().native();
                Position2DTime_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::DateTime_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Position2DTime_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position2DTime_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Position2DTime_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position2DTime_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Position2DTime_g_tc._data._sampleAccessInfo = sample_access_info();
                Position2DTime_g_tc._data._typePlugin = type_plugin_info();    

                return &Position2DTime_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Position2DTime *sample;

                static RTIXCdrMemberAccessInfo Position2DTime_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Position2DTime_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Position2DTime_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Position2DTime);
                if (sample == NULL) {
                    return NULL;
                }

                Position2DTime_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticPosition() - (char *)sample);

                Position2DTime_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeAtPosition() - (char *)sample);

                Position2DTime_g_sampleAccessInfo.memberAccessInfos = 
                Position2DTime_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Position2DTime);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Position2DTime_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Position2DTime_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Position2DTime_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Position2DTime_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Position2DTime >;

                Position2DTime_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Position2DTime_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Position2DTime_g_typePlugin = 
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

                return &Position2DTime_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Position2DTime >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Position2DTime >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Position2DTime >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Position2DTimePlugin_new,
                ::UMAA::Common::Measurement::Position2DTimePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Position2DTime >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Position2DTime& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Position2DTimePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Position2DTimePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2DTime >::from_cdr_buffer(::UMAA::Common::Measurement::Position2DTime& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Position2DTimePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Position2DTime from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2DTime >::reset_sample(::UMAA::Common::Measurement::Position2DTime& sample) 
        {
            ::rti::topic::reset_sample(sample.geodeticPosition());
            ::rti::topic::reset_sample(sample.timeAtPosition());
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2DTime >::allocate_sample(::UMAA::Common::Measurement::Position2DTime& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.geodeticPosition(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
