

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2D_PlatformXYZ.idl
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
#include "Position2D_PlatformXYZPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Position2D_PlatformXYZ.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Position2D_PlatformXYZ: 

            Position2D_PlatformXYZ::Position2D_PlatformXYZ() :
                m_xAxis_ (0.0) ,
                m_yAxis_ (0.0)  {

            }   

            Position2D_PlatformXYZ::Position2D_PlatformXYZ (double xAxis_,double yAxis_):
                m_xAxis_(xAxis_), 
                m_yAxis_(yAxis_) {
            }

            void Position2D_PlatformXYZ::swap(Position2D_PlatformXYZ& other_)  noexcept 
            {
                using std::swap;
                swap(m_xAxis_, other_.m_xAxis_);
                swap(m_yAxis_, other_.m_yAxis_);
            }  

            bool Position2D_PlatformXYZ::operator == (const Position2D_PlatformXYZ& other_) const {
                if (std::fabs(m_xAxis_ - other_.m_xAxis_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_xAxis_ - other_.m_xAxis_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yAxis_ - other_.m_yAxis_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yAxis_ - other_.m_yAxis_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool Position2D_PlatformXYZ::operator != (const Position2D_PlatformXYZ& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Position2D_PlatformXYZ& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "xAxis: " << std::setprecision(15) << sample.xAxis ()<<", ";
                o << "yAxis: " << std::setprecision(15) << sample.yAxis ();
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
        struct native_type_code< ::UMAA::Common::Measurement::Position2D_PlatformXYZ > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Position2D_PlatformXYZ_g_tc_members[2]=
                {

                    {
                        (char *)"xAxis",/* Member name */
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
                        (char *)"yAxis",/* Member name */
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
                    }
                };

                static DDS_TypeCode Position2D_PlatformXYZ_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Position2D_PlatformXYZ", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Position2D_PlatformXYZ_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Position2D_PlatformXYZ*/

                if (is_initialized) {
                    return &Position2D_PlatformXYZ_g_tc;
                }

                is_initialized = RTI_TRUE;

                Position2D_PlatformXYZ_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Position2D_PlatformXYZ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::Forward_AliasTag_t>::get().native();
                Position2D_PlatformXYZ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::Right_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._minValue._u.double_value = -20000000LL;
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[0]._annotations._maxValue._u.double_value = 20000000ULL;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._minValue._u.double_value = -20000000LL;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position2D_PlatformXYZ_g_tc_members[1]._annotations._maxValue._u.double_value = 20000000ULL;

                Position2D_PlatformXYZ_g_tc._data._sampleAccessInfo = sample_access_info();
                Position2D_PlatformXYZ_g_tc._data._typePlugin = type_plugin_info();    

                return &Position2D_PlatformXYZ_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Position2D_PlatformXYZ *sample;

                static RTIXCdrMemberAccessInfo Position2D_PlatformXYZ_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Position2D_PlatformXYZ_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Position2D_PlatformXYZ_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Position2D_PlatformXYZ);
                if (sample == NULL) {
                    return NULL;
                }

                Position2D_PlatformXYZ_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->xAxis() - (char *)sample);

                Position2D_PlatformXYZ_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yAxis() - (char *)sample);

                Position2D_PlatformXYZ_g_sampleAccessInfo.memberAccessInfos = 
                Position2D_PlatformXYZ_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Position2D_PlatformXYZ);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Position2D_PlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Position2D_PlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Position2D_PlatformXYZ_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Position2D_PlatformXYZ_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >;

                Position2D_PlatformXYZ_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Position2D_PlatformXYZ_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Position2D_PlatformXYZ_g_typePlugin = 
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

                return &Position2D_PlatformXYZ_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Position2D_PlatformXYZPlugin_new,
                ::UMAA::Common::Measurement::Position2D_PlatformXYZPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Position2D_PlatformXYZ& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Position2D_PlatformXYZPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Position2D_PlatformXYZPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::from_cdr_buffer(::UMAA::Common::Measurement::Position2D_PlatformXYZ& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Position2D_PlatformXYZPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Position2D_PlatformXYZ from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::reset_sample(::UMAA::Common::Measurement::Position2D_PlatformXYZ& sample) 
        {
            sample.xAxis(0.0);
            sample.yAxis(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >::allocate_sample(::UMAA::Common::Measurement::Position2D_PlatformXYZ& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
