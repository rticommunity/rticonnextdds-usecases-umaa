

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankReportType.idl
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
#include "BallastTankReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastTankReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            // ---- BallastTankReportType: 

            BallastTankReportType::BallastTankReportType() :
                m_lowPressureLimit_ (0.0) ,
                m_pressure_ (0.0) ,
                m_pressureLimit_ (0.0) ,
                m_trimActive_ (0)  {

            }   

            BallastTankReportType::BallastTankReportType (const ::dds::core::optional< double >& level_,double lowPressureLimit_,const ::dds::core::optional< double >& mass_,double pressure_,double pressureLimit_,bool trimActive_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_level_(level_), 
                m_lowPressureLimit_(lowPressureLimit_), 
                m_mass_(mass_), 
                m_pressure_(pressure_), 
                m_pressureLimit_(pressureLimit_), 
                m_trimActive_(trimActive_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void BallastTankReportType::swap(BallastTankReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_level_, other_.m_level_);
                swap(m_lowPressureLimit_, other_.m_lowPressureLimit_);
                swap(m_mass_, other_.m_mass_);
                swap(m_pressure_, other_.m_pressure_);
                swap(m_pressureLimit_, other_.m_pressureLimit_);
                swap(m_trimActive_, other_.m_trimActive_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BallastTankReportType::operator == (const BallastTankReportType& other_) const {
                if (m_level_.has_value() != other_.m_level_.has_value()) {
                    return false;
                } else if (m_level_.has_value()) {
                    if (std::fabs(*m_level_ - *other_.m_level_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_level_ - *other_.m_level_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_lowPressureLimit_ - other_.m_lowPressureLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_lowPressureLimit_ - other_.m_lowPressureLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_mass_.has_value() != other_.m_mass_.has_value()) {
                    return false;
                } else if (m_mass_.has_value()) {
                    if (std::fabs(*m_mass_ - *other_.m_mass_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_mass_ - *other_.m_mass_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_pressure_ - other_.m_pressure_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pressure_ - other_.m_pressure_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pressureLimit_ - other_.m_pressureLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pressureLimit_ - other_.m_pressureLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_trimActive_ != other_.m_trimActive_) {
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

            bool BallastTankReportType::operator != (const BallastTankReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastTankReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "level: " << sample.level ()<<", ";
                o << "lowPressureLimit: " << std::setprecision(15) << sample.lowPressureLimit ()<<", ";
                o << "mass: " << sample.mass ()<<", ";
                o << "pressure: " << std::setprecision(15) << sample.pressure ()<<", ";
                o << "pressureLimit: " << std::setprecision(15) << sample.pressureLimit ()<<", ";
                o << "trimActive: " << sample.trimActive ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
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
        struct native_type_code< ::UMAA::EO::BallastTank::BallastTankReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastTankReportType_g_tc_members[8]=
                {

                    {
                        (char *)"level",/* Member name */
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
                        (char *)"lowPressureLimit",/* Member name */
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
                        (char *)"mass",/* Member name */
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
                        (char *)"pressure",/* Member name */
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
                        (char *)"pressureLimit",/* Member name */
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
                        (char *)"trimActive",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode BallastTankReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastTankReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        BallastTankReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastTankReportType*/

                if (is_initialized) {
                    return &BallastTankReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastTankReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastTankReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Volume_Percent_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BallastTankReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BallastTankReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                BallastTankReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                BallastTankReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 1000ULL;
                BallastTankReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BallastTankReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                BallastTankReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 51200ULL;
                BallastTankReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                BallastTankReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 100000000ULL;
                BallastTankReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                BallastTankReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                BallastTankReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 51200ULL;
                BallastTankReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                BallastTankReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                BallastTankReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 51200ULL;
                BallastTankReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BallastTankReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                BallastTankReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastTankReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastTankReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastTankReportType *sample;

                static RTIXCdrMemberAccessInfo BallastTankReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastTankReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastTankReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastTankReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastTankReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->level() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowPressureLimit() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mass() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pressure() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pressureLimit() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trimActive() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BallastTankReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BallastTankReportType_g_sampleAccessInfo.memberAccessInfos = 
                BallastTankReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastTankReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastTankReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastTankReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastTankReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastTankReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastTankReportType >;

                BallastTankReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastTankReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastTankReportType_g_typePlugin = 
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

                return &BallastTankReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastTankReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastTankReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastTankReportTypePlugin_new,
                ::UMAA::EO::BallastTank::BallastTankReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastTankReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastTankReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastTankReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastTankReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankReportType >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastTankReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastTankReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastTankReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankReportType >::reset_sample(::UMAA::EO::BallastTank::BallastTankReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.level());
            sample.lowPressureLimit(0.0);
            ::rti::topic::reset_sample(sample.mass());
            sample.pressure(0.0);
            sample.pressureLimit(0.0);
            sample.trimActive(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankReportType >::allocate_sample(::UMAA::EO::BallastTank::BallastTankReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
