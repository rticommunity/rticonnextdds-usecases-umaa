

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl
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
#include "GPSSatelliteTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GPSSatelliteType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSStatus {

            // ---- GPSSatelliteType: 

            GPSSatelliteType::GPSSatelliteType()  {

            }   

            GPSSatelliteType::GPSSatelliteType (const ::dds::core::optional< double >& antennaCarrierNoiseDensity_,const ::dds::core::optional< double >& azimuth_,const ::dds::core::optional< double >& basebandCarrierNoiseDensity_,const ::dds::core::optional< double >& carrierFrequency_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& constellationType_,const ::dds::core::optional< bool >& containsAlmanacData_,const ::dds::core::optional< double >& elevation_,const ::dds::core::optional< bool >& ephemerisData_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& satelliteId_,const ::dds::core::optional< bool >& usedInFix_):
                m_antennaCarrierNoiseDensity_(antennaCarrierNoiseDensity_), 
                m_azimuth_(azimuth_), 
                m_basebandCarrierNoiseDensity_(basebandCarrierNoiseDensity_), 
                m_carrierFrequency_(carrierFrequency_), 
                m_constellationType_(constellationType_), 
                m_containsAlmanacData_(containsAlmanacData_), 
                m_elevation_(elevation_), 
                m_ephemerisData_(ephemerisData_), 
                m_satelliteId_(satelliteId_), 
                m_usedInFix_(usedInFix_) {
            }

            void GPSSatelliteType::swap(GPSSatelliteType& other_)  noexcept 
            {
                using std::swap;
                swap(m_antennaCarrierNoiseDensity_, other_.m_antennaCarrierNoiseDensity_);
                swap(m_azimuth_, other_.m_azimuth_);
                swap(m_basebandCarrierNoiseDensity_, other_.m_basebandCarrierNoiseDensity_);
                swap(m_carrierFrequency_, other_.m_carrierFrequency_);
                swap(m_constellationType_, other_.m_constellationType_);
                swap(m_containsAlmanacData_, other_.m_containsAlmanacData_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_ephemerisData_, other_.m_ephemerisData_);
                swap(m_satelliteId_, other_.m_satelliteId_);
                swap(m_usedInFix_, other_.m_usedInFix_);
            }  

            bool GPSSatelliteType::operator == (const GPSSatelliteType& other_) const {
                if (m_antennaCarrierNoiseDensity_.has_value() != other_.m_antennaCarrierNoiseDensity_.has_value()) {
                    return false;
                } else if (m_antennaCarrierNoiseDensity_.has_value()) {
                    if (std::fabs(*m_antennaCarrierNoiseDensity_ - *other_.m_antennaCarrierNoiseDensity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_antennaCarrierNoiseDensity_ - *other_.m_antennaCarrierNoiseDensity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_azimuth_.has_value() != other_.m_azimuth_.has_value()) {
                    return false;
                } else if (m_azimuth_.has_value()) {
                    if (std::fabs(*m_azimuth_ - *other_.m_azimuth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_azimuth_ - *other_.m_azimuth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_basebandCarrierNoiseDensity_.has_value() != other_.m_basebandCarrierNoiseDensity_.has_value()) {
                    return false;
                } else if (m_basebandCarrierNoiseDensity_.has_value()) {
                    if (std::fabs(*m_basebandCarrierNoiseDensity_ - *other_.m_basebandCarrierNoiseDensity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_basebandCarrierNoiseDensity_ - *other_.m_basebandCarrierNoiseDensity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_carrierFrequency_.has_value() != other_.m_carrierFrequency_.has_value()) {
                    return false;
                } else if (m_carrierFrequency_.has_value()) {
                    if (std::fabs(*m_carrierFrequency_ - *other_.m_carrierFrequency_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_carrierFrequency_ - *other_.m_carrierFrequency_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_constellationType_ != other_.m_constellationType_) {
                    return false;
                }
                if (m_containsAlmanacData_ != other_.m_containsAlmanacData_) {
                    return false;
                }
                if (m_elevation_.has_value() != other_.m_elevation_.has_value()) {
                    return false;
                } else if (m_elevation_.has_value()) {
                    if (std::fabs(*m_elevation_ - *other_.m_elevation_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_elevation_ - *other_.m_elevation_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_ephemerisData_ != other_.m_ephemerisData_) {
                    return false;
                }
                if (m_satelliteId_ != other_.m_satelliteId_) {
                    return false;
                }
                if (m_usedInFix_ != other_.m_usedInFix_) {
                    return false;
                }
                return true;
            }

            bool GPSSatelliteType::operator != (const GPSSatelliteType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSSatelliteType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "antennaCarrierNoiseDensity: " << sample.antennaCarrierNoiseDensity ()<<", ";
                o << "azimuth: " << sample.azimuth ()<<", ";
                o << "basebandCarrierNoiseDensity: " << sample.basebandCarrierNoiseDensity ()<<", ";
                o << "carrierFrequency: " << sample.carrierFrequency ()<<", ";
                o << "constellationType: " << sample.constellationType ()<<", ";
                o << "containsAlmanacData: " << sample.containsAlmanacData ()<<", ";
                o << "elevation: " << sample.elevation ()<<", ";
                o << "ephemerisData: " << sample.ephemerisData ()<<", ";
                o << "satelliteId: " << sample.satelliteId ()<<", ";
                o << "usedInFix: " << sample.usedInFix ();
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
        struct native_type_code< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GPSSatelliteType_g_tc_members[10]=
                {

                    {
                        (char *)"antennaCarrierNoiseDensity",/* Member name */
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
                        (char *)"azimuth",/* Member name */
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
                        (char *)"basebandCarrierNoiseDensity",/* Member name */
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
                        (char *)"carrierFrequency",/* Member name */
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
                        (char *)"constellationType",/* Member name */
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
                        (char *)"containsAlmanacData",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"ephemerisData",/* Member name */
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
                        (char *)"satelliteId",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"usedInFix",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GPSSatelliteType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSStatus::GPSSatelliteType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        GPSSatelliteType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSSatelliteType*/

                if (is_initialized) {
                    return &GPSSatelliteType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSSatelliteType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSSatelliteType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RadioFrequency_Hertz_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType>::get().native();
                GPSSatelliteType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSSatelliteType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GPSSatelliteType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GPSSatelliteType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GPSSatelliteType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSSatelliteType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GPSSatelliteType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSSatelliteType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GPSSatelliteType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSSatelliteType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GPSSatelliteType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[3]._annotations._minValue._u.double_value = 0.0;
                GPSSatelliteType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[3]._annotations._maxValue._u.double_value = 10000000000ULL;
                GPSSatelliteType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSSatelliteType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSSatelliteType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSSatelliteType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSSatelliteType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSSatelliteType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::GPSStatus::GPSSatelliteType *sample;

                static RTIXCdrMemberAccessInfo GPSSatelliteType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSSatelliteType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSSatelliteType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::GPSStatus::GPSSatelliteType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSSatelliteType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->antennaCarrierNoiseDensity() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->azimuth() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->basebandCarrierNoiseDensity() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->carrierFrequency() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->constellationType() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->containsAlmanacData() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ephemerisData() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->satelliteId() - (char *)sample);

                GPSSatelliteType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->usedInFix() - (char *)sample);

                GPSSatelliteType_g_sampleAccessInfo.memberAccessInfos = 
                GPSSatelliteType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::GPSStatus::GPSSatelliteType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSSatelliteType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSSatelliteType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSSatelliteType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSSatelliteType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::GPSStatus::GPSSatelliteType >;

                GPSSatelliteType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSSatelliteType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSSatelliteType_g_typePlugin = 
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

                return &GPSSatelliteType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::GPSStatus::GPSSatelliteTypePlugin_new,
                ::UMAA::SEM::GPSStatus::GPSSatelliteTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::GPSStatus::GPSSatelliteType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSSatelliteTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSSatelliteTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::from_cdr_buffer(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSSatelliteTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::GPSStatus::GPSSatelliteType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::reset_sample(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample) 
        {
            ::rti::topic::reset_sample(sample.antennaCarrierNoiseDensity());
            ::rti::topic::reset_sample(sample.azimuth());
            ::rti::topic::reset_sample(sample.basebandCarrierNoiseDensity());
            ::rti::topic::reset_sample(sample.carrierFrequency());
            ::rti::topic::reset_sample(sample.constellationType());
            ::rti::topic::reset_sample(sample.containsAlmanacData());
            ::rti::topic::reset_sample(sample.elevation());
            ::rti::topic::reset_sample(sample.ephemerisData());
            ::rti::topic::reset_sample(sample.satelliteId());
            ::rti::topic::reset_sample(sample.usedInFix());
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType >::allocate_sample(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
