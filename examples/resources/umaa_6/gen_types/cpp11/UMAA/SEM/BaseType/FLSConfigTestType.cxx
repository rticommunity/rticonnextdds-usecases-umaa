

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSConfigTestType.idl
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
#include "FLSConfigTestTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FLSConfigTestType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BaseType {

            // ---- FLSConfigTestType: 

            FLSConfigTestType::FLSConfigTestType() :
                m_activeBandwidth_ (0.0) ,
                m_activeCenterFrequency_ (0.0) ,
                m_attenuation_ (0) ,
                m_beamwidth_(UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::MEDIUM) ,
                m_passiveBandwidth_ (0.0) ,
                m_passiveCenterFrequency_ (0.0) ,
                m_range_ (0.0) ,
                m_steering_ (0.0) ,
                m_upSweep_ (0) ,
                m_waveformLength_(UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_LONG)  {

            }   

            FLSConfigTestType::FLSConfigTestType (double activeBandwidth_,double activeCenterFrequency_,int32_t attenuation_,const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType& beamwidth_,double passiveBandwidth_,double passiveCenterFrequency_,double range_,double steering_,bool upSweep_,const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType& waveformLength_):
                m_activeBandwidth_(activeBandwidth_), 
                m_activeCenterFrequency_(activeCenterFrequency_), 
                m_attenuation_(attenuation_), 
                m_beamwidth_(beamwidth_), 
                m_passiveBandwidth_(passiveBandwidth_), 
                m_passiveCenterFrequency_(passiveCenterFrequency_), 
                m_range_(range_), 
                m_steering_(steering_), 
                m_upSweep_(upSweep_), 
                m_waveformLength_(waveformLength_) {
            }

            void FLSConfigTestType::swap(FLSConfigTestType& other_)  noexcept 
            {
                using std::swap;
                swap(m_activeBandwidth_, other_.m_activeBandwidth_);
                swap(m_activeCenterFrequency_, other_.m_activeCenterFrequency_);
                swap(m_attenuation_, other_.m_attenuation_);
                swap(m_beamwidth_, other_.m_beamwidth_);
                swap(m_passiveBandwidth_, other_.m_passiveBandwidth_);
                swap(m_passiveCenterFrequency_, other_.m_passiveCenterFrequency_);
                swap(m_range_, other_.m_range_);
                swap(m_steering_, other_.m_steering_);
                swap(m_upSweep_, other_.m_upSweep_);
                swap(m_waveformLength_, other_.m_waveformLength_);
            }  

            bool FLSConfigTestType::operator == (const FLSConfigTestType& other_) const {
                if (std::fabs(m_activeBandwidth_ - other_.m_activeBandwidth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_activeBandwidth_ - other_.m_activeBandwidth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_activeCenterFrequency_ - other_.m_activeCenterFrequency_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_activeCenterFrequency_ - other_.m_activeCenterFrequency_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_attenuation_ != other_.m_attenuation_) {
                    return false;
                }
                if (m_beamwidth_ != other_.m_beamwidth_) {
                    return false;
                }
                if (std::fabs(m_passiveBandwidth_ - other_.m_passiveBandwidth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_passiveBandwidth_ - other_.m_passiveBandwidth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_passiveCenterFrequency_ - other_.m_passiveCenterFrequency_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_passiveCenterFrequency_ - other_.m_passiveCenterFrequency_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_range_ - other_.m_range_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_range_ - other_.m_range_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_steering_ - other_.m_steering_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_steering_ - other_.m_steering_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_upSweep_ != other_.m_upSweep_) {
                    return false;
                }
                if (m_waveformLength_ != other_.m_waveformLength_) {
                    return false;
                }
                return true;
            }

            bool FLSConfigTestType::operator != (const FLSConfigTestType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FLSConfigTestType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "activeBandwidth: " << std::setprecision(15) << sample.activeBandwidth ()<<", ";
                o << "activeCenterFrequency: " << std::setprecision(15) << sample.activeCenterFrequency ()<<", ";
                o << "attenuation: " << sample.attenuation ()<<", ";
                o << "beamwidth: " << sample.beamwidth ()<<", ";
                o << "passiveBandwidth: " << std::setprecision(15) << sample.passiveBandwidth ()<<", ";
                o << "passiveCenterFrequency: " << std::setprecision(15) << sample.passiveCenterFrequency ()<<", ";
                o << "range: " << std::setprecision(15) << sample.range ()<<", ";
                o << "steering: " << std::setprecision(15) << sample.steering ()<<", ";
                o << "upSweep: " << sample.upSweep ()<<", ";
                o << "waveformLength: " << sample.waveformLength ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

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
        struct native_type_code< ::UMAA::SEM::BaseType::FLSConfigTestType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSConfigTestType_g_tc_members[10]=
                {

                    {
                        (char *)"activeBandwidth",/* Member name */
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
                        (char *)"activeCenterFrequency",/* Member name */
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
                        (char *)"attenuation",/* Member name */
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
                        (char *)"beamwidth",/* Member name */
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
                        (char *)"passiveBandwidth",/* Member name */
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
                        (char *)"passiveCenterFrequency",/* Member name */
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
                        (char *)"range",/* Member name */
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
                        (char *)"steering",/* Member name */
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
                        (char *)"upSweep",/* Member name */
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
                        (char *)"waveformLength",/* Member name */
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

                static DDS_TypeCode FLSConfigTestType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::FLSConfigTestType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        FLSConfigTestType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSConfigTestType*/

                if (is_initialized) {
                    return &FLSConfigTestType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSConfigTestType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FLSConfigTestType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TransmitAttenuation_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType>::get().native();
                FLSConfigTestType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementConstrained::AngleHalf_AliasTag_t>::get().native();
                FLSConfigTestType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                FLSConfigTestType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType>::get().native();

                /* Initialize the values for member annotations. */
                FLSConfigTestType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                FLSConfigTestType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                FLSConfigTestType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                FLSConfigTestType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                FLSConfigTestType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                FLSConfigTestType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                FLSConfigTestType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSConfigTestType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                FLSConfigTestType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigTestType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigTestType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigTestType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigTestType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                FLSConfigTestType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                FLSConfigTestType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSConfigTestType_g_tc_members[9]._annotations._defaultValue._u.enumerated_value = 0;

                FLSConfigTestType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSConfigTestType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSConfigTestType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BaseType::FLSConfigTestType *sample;

                static RTIXCdrMemberAccessInfo FLSConfigTestType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSConfigTestType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSConfigTestType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BaseType::FLSConfigTestType);
                if (sample == NULL) {
                    return NULL;
                }

                FLSConfigTestType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->activeBandwidth() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->activeCenterFrequency() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attenuation() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beamwidth() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->passiveBandwidth() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->passiveCenterFrequency() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->steering() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upSweep() - (char *)sample);

                FLSConfigTestType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waveformLength() - (char *)sample);

                FLSConfigTestType_g_sampleAccessInfo.memberAccessInfos = 
                FLSConfigTestType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::FLSConfigTestType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSConfigTestType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSConfigTestType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSConfigTestType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSConfigTestType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::FLSConfigTestType >;

                FLSConfigTestType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSConfigTestType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSConfigTestType_g_typePlugin = 
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

                return &FLSConfigTestType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::BaseType::FLSConfigTestType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::FLSConfigTestType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::BaseType::FLSConfigTestType >::reset_sample(::UMAA::SEM::BaseType::FLSConfigTestType& sample) 
        {
            sample.activeBandwidth(0.0);
            sample.activeCenterFrequency(0.0);
            sample.attenuation(0);
            sample.beamwidth(UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::MEDIUM);
            sample.passiveBandwidth(0.0);
            sample.passiveCenterFrequency(0.0);
            sample.range(0.0);
            sample.steering(0.0);
            sample.upSweep(0);
            sample.waveformLength(UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_LONG);
        }

        void topic_type_support< ::UMAA::SEM::BaseType::FLSConfigTestType >::allocate_sample(::UMAA::SEM::BaseType::FLSConfigTestType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.beamwidth(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waveformLength(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
