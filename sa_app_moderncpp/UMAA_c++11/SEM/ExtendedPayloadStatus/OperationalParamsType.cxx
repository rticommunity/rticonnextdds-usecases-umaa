

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OperationalParamsType.idl
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
#include "OperationalParamsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OperationalParamsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace ExtendedPayloadStatus {

            // ---- OperationalParamsType: 

            OperationalParamsType::OperationalParamsType() :
                m_busCurrent_ (0.0) ,
                m_busVoltage_ (0.0) ,
                m_phaseCurrent_ (0.0) ,
                m_temp_ (0.0)  {

            }   

            OperationalParamsType::OperationalParamsType (double busCurrent_,double busVoltage_,double phaseCurrent_,double temp_):
                m_busCurrent_(busCurrent_), 
                m_busVoltage_(busVoltage_), 
                m_phaseCurrent_(phaseCurrent_), 
                m_temp_(temp_) {
            }

            void OperationalParamsType::swap(OperationalParamsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_busCurrent_, other_.m_busCurrent_);
                swap(m_busVoltage_, other_.m_busVoltage_);
                swap(m_phaseCurrent_, other_.m_phaseCurrent_);
                swap(m_temp_, other_.m_temp_);
            }  

            bool OperationalParamsType::operator == (const OperationalParamsType& other_) const {
                if (std::fabs(m_busCurrent_ - other_.m_busCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_busCurrent_ - other_.m_busCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_busVoltage_ - other_.m_busVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_busVoltage_ - other_.m_busVoltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_phaseCurrent_ - other_.m_phaseCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_phaseCurrent_ - other_.m_phaseCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_temp_ - other_.m_temp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_temp_ - other_.m_temp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool OperationalParamsType::operator != (const OperationalParamsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OperationalParamsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "busCurrent: " << std::setprecision(15) << sample.busCurrent ()<<", ";
                o << "busVoltage: " << std::setprecision(15) << sample.busVoltage ()<<", ";
                o << "phaseCurrent: " << std::setprecision(15) << sample.phaseCurrent ()<<", ";
                o << "temp: " << std::setprecision(15) << sample.temp ();
                o <<"]";
                return o;
            }

        } // namespace ExtendedPayloadStatus  

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
        struct native_type_code< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OperationalParamsType_g_tc_members[4]=
                {

                    {
                        (char *)"busCurrent",/* Member name */
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
                        (char *)"busVoltage",/* Member name */
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
                        (char *)"phaseCurrent",/* Member name */
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
                        (char *)"temp",/* Member name */
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
                    }
                };

                static DDS_TypeCode OperationalParamsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        OperationalParamsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OperationalParamsType*/

                if (is_initialized) {
                    return &OperationalParamsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                OperationalParamsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OperationalParamsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                OperationalParamsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                OperationalParamsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                OperationalParamsType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                OperationalParamsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                OperationalParamsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
                OperationalParamsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;
                OperationalParamsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                OperationalParamsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[1]._annotations._minValue._u.double_value = -100000LL;
                OperationalParamsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[1]._annotations._maxValue._u.double_value = 100000ULL;
                OperationalParamsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                OperationalParamsType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[2]._annotations._minValue._u.double_value = -100000LL;
                OperationalParamsType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[2]._annotations._maxValue._u.double_value = 100000ULL;
                OperationalParamsType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                OperationalParamsType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[3]._annotations._minValue._u.double_value = -273LL;
                OperationalParamsType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OperationalParamsType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;

                OperationalParamsType_g_tc._data._sampleAccessInfo = sample_access_info();
                OperationalParamsType_g_tc._data._typePlugin = type_plugin_info();    

                return &OperationalParamsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType *sample;

                static RTIXCdrMemberAccessInfo OperationalParamsType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OperationalParamsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OperationalParamsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType);
                if (sample == NULL) {
                    return NULL;
                }

                OperationalParamsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->busCurrent() - (char *)sample);

                OperationalParamsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->busVoltage() - (char *)sample);

                OperationalParamsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->phaseCurrent() - (char *)sample);

                OperationalParamsType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temp() - (char *)sample);

                OperationalParamsType_g_sampleAccessInfo.memberAccessInfos = 
                OperationalParamsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OperationalParamsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OperationalParamsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OperationalParamsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OperationalParamsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >;

                OperationalParamsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OperationalParamsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OperationalParamsType_g_typePlugin = 
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

                return &OperationalParamsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsTypePlugin_new,
                ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = OperationalParamsTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = OperationalParamsTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::from_cdr_buffer(::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = OperationalParamsTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::reset_sample(::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample) 
        {
            sample.busCurrent(0.0);
            sample.busVoltage(0.0);
            sample.phaseCurrent(0.0);
            sample.temp(0.0);
        }

        void topic_type_support< ::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType >::allocate_sample(::UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
