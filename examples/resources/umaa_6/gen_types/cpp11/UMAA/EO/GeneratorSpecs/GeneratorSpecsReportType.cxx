

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeneratorSpecsReportType.idl
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
#include "GeneratorSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GeneratorSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace GeneratorSpecs {

            // ---- GeneratorSpecsReportType: 

            GeneratorSpecsReportType::GeneratorSpecsReportType() :
                m_maxCurrent_ (0.0) ,
                m_maxPower_ (0.0) ,
                m_name_ ("") ,
                m_ratedPower_ (0.0) ,
                m_ratedVoltage_ (0.0)  {

            }   

            GeneratorSpecsReportType::GeneratorSpecsReportType (double maxCurrent_,double maxPower_,const std::string& name_,double ratedPower_,double ratedVoltage_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_maxCurrent_(maxCurrent_), 
                m_maxPower_(maxPower_), 
                m_name_(name_), 
                m_ratedPower_(ratedPower_), 
                m_ratedVoltage_(ratedVoltage_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void GeneratorSpecsReportType::swap(GeneratorSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxCurrent_, other_.m_maxCurrent_);
                swap(m_maxPower_, other_.m_maxPower_);
                swap(m_name_, other_.m_name_);
                swap(m_ratedPower_, other_.m_ratedPower_);
                swap(m_ratedVoltage_, other_.m_ratedVoltage_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool GeneratorSpecsReportType::operator == (const GeneratorSpecsReportType& other_) const {
                if (std::fabs(m_maxCurrent_ - other_.m_maxCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxCurrent_ - other_.m_maxCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxPower_ - other_.m_maxPower_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxPower_ - other_.m_maxPower_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (std::fabs(m_ratedPower_ - other_.m_ratedPower_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ratedPower_ - other_.m_ratedPower_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_ratedVoltage_ - other_.m_ratedVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ratedVoltage_ - other_.m_ratedVoltage_) < (std::numeric_limits< double>::min)())) {
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

            bool GeneratorSpecsReportType::operator != (const GeneratorSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GeneratorSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxCurrent: " << std::setprecision(15) << sample.maxCurrent ()<<", ";
                o << "maxPower: " << std::setprecision(15) << sample.maxPower ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "ratedPower: " << std::setprecision(15) << sample.ratedPower ()<<", ";
                o << "ratedVoltage: " << std::setprecision(15) << sample.ratedVoltage ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace GeneratorSpecs  

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
        struct native_type_code< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GeneratorSpecsReportType_g_tc_members[7]=
                {

                    {
                        (char *)"maxCurrent",/* Member name */
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
                        (char *)"maxPower",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"ratedPower",/* Member name */
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
                        (char *)"ratedVoltage",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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

                static DDS_TypeCode GeneratorSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        GeneratorSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GeneratorSpecsReportType*/

                if (is_initialized) {
                    return &GeneratorSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeneratorSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeneratorSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                GeneratorSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t>::get().native();
                GeneratorSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                GeneratorSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t>::get().native();
                GeneratorSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                GeneratorSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GeneratorSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                GeneratorSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                GeneratorSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeneratorSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GeneratorSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                GeneratorSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                GeneratorSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                GeneratorSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeneratorSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeneratorSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeneratorSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GeneratorSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GeneratorSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo GeneratorSpecsReportType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeneratorSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeneratorSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GeneratorSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCurrent() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPower() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ratedPower() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ratedVoltage() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GeneratorSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GeneratorSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                GeneratorSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeneratorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeneratorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeneratorSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeneratorSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >;

                GeneratorSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeneratorSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeneratorSpecsReportType_g_typePlugin = 
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

                return &GeneratorSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportTypePlugin_new,
                ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GeneratorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GeneratorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::from_cdr_buffer(::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GeneratorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::reset_sample(::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType& sample) 
        {
            sample.maxCurrent(0.0);
            sample.maxPower(0.0);
            sample.name("");
            sample.ratedPower(0.0);
            sample.ratedVoltage(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType >::allocate_sample(::UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
