

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterCharacteristicsReportType.idl
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
#include "WaterCharacteristicsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WaterCharacteristicsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace WaterCharacteristicsStatus {

            // ---- WaterCharacteristicsReportType: 

            WaterCharacteristicsReportType::WaterCharacteristicsReportType() :
                m_depth_ (0.0)  {

            }   

            WaterCharacteristicsReportType::WaterCharacteristicsReportType (const ::dds::core::optional< double >& conductivity_,const ::dds::core::optional< double >& density_,double depth_,const ::dds::core::optional< double >& pressure_,const ::dds::core::optional< double >& salinity_,const ::dds::core::optional< double >& soundVelocity_,const ::dds::core::optional< double >& temperature_,const ::dds::core::optional< double >& turbidity_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_conductivity_(conductivity_), 
                m_density_(density_), 
                m_depth_(depth_), 
                m_pressure_(pressure_), 
                m_salinity_(salinity_), 
                m_soundVelocity_(soundVelocity_), 
                m_temperature_(temperature_), 
                m_turbidity_(turbidity_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void WaterCharacteristicsReportType::swap(WaterCharacteristicsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_conductivity_, other_.m_conductivity_);
                swap(m_density_, other_.m_density_);
                swap(m_depth_, other_.m_depth_);
                swap(m_pressure_, other_.m_pressure_);
                swap(m_salinity_, other_.m_salinity_);
                swap(m_soundVelocity_, other_.m_soundVelocity_);
                swap(m_temperature_, other_.m_temperature_);
                swap(m_turbidity_, other_.m_turbidity_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool WaterCharacteristicsReportType::operator == (const WaterCharacteristicsReportType& other_) const {
                if (m_conductivity_.has_value() != other_.m_conductivity_.has_value()) {
                    return false;
                } else if (m_conductivity_.has_value()) {
                    if (std::fabs(*m_conductivity_ - *other_.m_conductivity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_conductivity_ - *other_.m_conductivity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_density_.has_value() != other_.m_density_.has_value()) {
                    return false;
                } else if (m_density_.has_value()) {
                    if (std::fabs(*m_density_ - *other_.m_density_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_density_ - *other_.m_density_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_depth_ - other_.m_depth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_depth_ - other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pressure_.has_value() != other_.m_pressure_.has_value()) {
                    return false;
                } else if (m_pressure_.has_value()) {
                    if (std::fabs(*m_pressure_ - *other_.m_pressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pressure_ - *other_.m_pressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_salinity_.has_value() != other_.m_salinity_.has_value()) {
                    return false;
                } else if (m_salinity_.has_value()) {
                    if (std::fabs(*m_salinity_ - *other_.m_salinity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_salinity_ - *other_.m_salinity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_soundVelocity_.has_value() != other_.m_soundVelocity_.has_value()) {
                    return false;
                } else if (m_soundVelocity_.has_value()) {
                    if (std::fabs(*m_soundVelocity_ - *other_.m_soundVelocity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_soundVelocity_ - *other_.m_soundVelocity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_temperature_.has_value() != other_.m_temperature_.has_value()) {
                    return false;
                } else if (m_temperature_.has_value()) {
                    if (std::fabs(*m_temperature_ - *other_.m_temperature_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_temperature_ - *other_.m_temperature_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_turbidity_.has_value() != other_.m_turbidity_.has_value()) {
                    return false;
                } else if (m_turbidity_.has_value()) {
                    if (std::fabs(*m_turbidity_ - *other_.m_turbidity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_turbidity_ - *other_.m_turbidity_) < (std::numeric_limits< double>::min)())) {
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

            bool WaterCharacteristicsReportType::operator != (const WaterCharacteristicsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WaterCharacteristicsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "conductivity: " << sample.conductivity ()<<", ";
                o << "density: " << sample.density ()<<", ";
                o << "depth: " << std::setprecision(15) << sample.depth ()<<", ";
                o << "pressure: " << sample.pressure ()<<", ";
                o << "salinity: " << sample.salinity ()<<", ";
                o << "soundVelocity: " << sample.soundVelocity ()<<", ";
                o << "temperature: " << sample.temperature ()<<", ";
                o << "turbidity: " << sample.turbidity ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace WaterCharacteristicsStatus  

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
        struct native_type_code< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaterCharacteristicsReportType_g_tc_members[10]=
                {

                    {
                        (char *)"conductivity",/* Member name */
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
                        (char *)"density",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"salinity",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"soundVelocity",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"temperature",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"turbidity",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WaterCharacteristicsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        WaterCharacteristicsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaterCharacteristicsReportType*/

                if (is_initialized) {
                    return &WaterCharacteristicsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaterCharacteristicsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WaterCharacteristicsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Conductivity_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Density_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PressurePascals_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Salinity_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Turbidity_AliasTag_t>::get().native();
                WaterCharacteristicsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                WaterCharacteristicsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                WaterCharacteristicsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaterCharacteristicsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterCharacteristicsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterCharacteristicsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WaterCharacteristicsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaterCharacteristicsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaterCharacteristicsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType *sample;

                static RTIXCdrMemberAccessInfo WaterCharacteristicsReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaterCharacteristicsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaterCharacteristicsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WaterCharacteristicsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->conductivity() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->density() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pressure() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->salinity() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->soundVelocity() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temperature() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->turbidity() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WaterCharacteristicsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WaterCharacteristicsReportType_g_sampleAccessInfo.memberAccessInfos = 
                WaterCharacteristicsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaterCharacteristicsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaterCharacteristicsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaterCharacteristicsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaterCharacteristicsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >;

                WaterCharacteristicsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaterCharacteristicsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaterCharacteristicsReportType_g_typePlugin = 
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

                return &WaterCharacteristicsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportTypePlugin_new,
                ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WaterCharacteristicsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WaterCharacteristicsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::from_cdr_buffer(::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WaterCharacteristicsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::reset_sample(::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.conductivity());
            ::rti::topic::reset_sample(sample.density());
            sample.depth(0.0);
            ::rti::topic::reset_sample(sample.pressure());
            ::rti::topic::reset_sample(sample.salinity());
            ::rti::topic::reset_sample(sample.soundVelocity());
            ::rti::topic::reset_sample(sample.temperature());
            ::rti::topic::reset_sample(sample.turbidity());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType >::allocate_sample(::UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
