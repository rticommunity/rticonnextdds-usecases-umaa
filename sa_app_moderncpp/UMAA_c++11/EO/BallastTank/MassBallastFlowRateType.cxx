

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MassBallastFlowRateType.idl
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
#include "MassBallastFlowRateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MassBallastFlowRateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            // ---- MassBallastFlowRateType: 

            MassBallastFlowRateType::MassBallastFlowRateType() :
                m_massBallastFlowRate_ (0.0)  {

            }   

            MassBallastFlowRateType::MassBallastFlowRateType (double massBallastFlowRate_):
                m_massBallastFlowRate_(massBallastFlowRate_) {
            }

            void MassBallastFlowRateType::swap(MassBallastFlowRateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_massBallastFlowRate_, other_.m_massBallastFlowRate_);
            }  

            bool MassBallastFlowRateType::operator == (const MassBallastFlowRateType& other_) const {
                if (std::fabs(m_massBallastFlowRate_ - other_.m_massBallastFlowRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_massBallastFlowRate_ - other_.m_massBallastFlowRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool MassBallastFlowRateType::operator != (const MassBallastFlowRateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MassBallastFlowRateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "massBallastFlowRate: " << std::setprecision(15) << sample.massBallastFlowRate ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::BallastTank::MassBallastFlowRateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MassBallastFlowRateType_g_tc_members[1]=
                {

                    {
                        (char *)"massBallastFlowRate",/* Member name */
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
                    }
                };

                static DDS_TypeCode MassBallastFlowRateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::MassBallastFlowRateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MassBallastFlowRateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MassBallastFlowRateType*/

                if (is_initialized) {
                    return &MassBallastFlowRateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MassBallastFlowRateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MassBallastFlowRateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassFlowRate_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                MassBallastFlowRateType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MassBallastFlowRateType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                MassBallastFlowRateType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MassBallastFlowRateType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MassBallastFlowRateType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MassBallastFlowRateType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MassBallastFlowRateType_g_tc._data._sampleAccessInfo = sample_access_info();
                MassBallastFlowRateType_g_tc._data._typePlugin = type_plugin_info();    

                return &MassBallastFlowRateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::MassBallastFlowRateType *sample;

                static RTIXCdrMemberAccessInfo MassBallastFlowRateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MassBallastFlowRateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MassBallastFlowRateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::MassBallastFlowRateType);
                if (sample == NULL) {
                    return NULL;
                }

                MassBallastFlowRateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->massBallastFlowRate() - (char *)sample);

                MassBallastFlowRateType_g_sampleAccessInfo.memberAccessInfos = 
                MassBallastFlowRateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::MassBallastFlowRateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MassBallastFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MassBallastFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MassBallastFlowRateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MassBallastFlowRateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::MassBallastFlowRateType >;

                MassBallastFlowRateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MassBallastFlowRateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MassBallastFlowRateType_g_typePlugin = 
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

                return &MassBallastFlowRateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BallastTank::MassBallastFlowRateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::MassBallastFlowRateTypePlugin_new,
                ::UMAA::EO::BallastTank::MassBallastFlowRateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::MassBallastFlowRateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MassBallastFlowRateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MassBallastFlowRateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::from_cdr_buffer(::UMAA::EO::BallastTank::MassBallastFlowRateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MassBallastFlowRateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::MassBallastFlowRateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::reset_sample(::UMAA::EO::BallastTank::MassBallastFlowRateType& sample) 
        {
            sample.massBallastFlowRate(0.0);
        }

        void topic_type_support< ::UMAA::EO::BallastTank::MassBallastFlowRateType >::allocate_sample(::UMAA::EO::BallastTank::MassBallastFlowRateType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
