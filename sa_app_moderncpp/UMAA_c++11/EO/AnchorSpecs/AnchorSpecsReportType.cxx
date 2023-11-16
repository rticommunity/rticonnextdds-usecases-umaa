

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorSpecsReportType.idl
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
#include "AnchorSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AnchorSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace AnchorSpecs {

            // ---- AnchorSpecsReportType: 

            AnchorSpecsReportType::AnchorSpecsReportType() :
                m_anchorHoldingPower_ (0.0) ,
                m_anchorHoldingPowerRatio_ (0.0) ,
                m_anchorKind_(UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType::COMMERCIAL_STOCKLESS) ,
                m_anchorLocation_(UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType::BOWER) ,
                m_anchorSize_ (0.0) ,
                m_rodeLength_ (0.0) ,
                m_rodeSize_ (0.0) ,
                m_rodeWorkingLoadLimit_ (0.0)  {

            }   

            AnchorSpecsReportType::AnchorSpecsReportType (double anchorHoldingPower_,double anchorHoldingPowerRatio_,const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType& anchorKind_,const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType& anchorLocation_,double anchorSize_,double rodeLength_,double rodeSize_,double rodeWorkingLoadLimit_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_anchorHoldingPower_(anchorHoldingPower_), 
                m_anchorHoldingPowerRatio_(anchorHoldingPowerRatio_), 
                m_anchorKind_(anchorKind_), 
                m_anchorLocation_(anchorLocation_), 
                m_anchorSize_(anchorSize_), 
                m_rodeLength_(rodeLength_), 
                m_rodeSize_(rodeSize_), 
                m_rodeWorkingLoadLimit_(rodeWorkingLoadLimit_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void AnchorSpecsReportType::swap(AnchorSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_anchorHoldingPower_, other_.m_anchorHoldingPower_);
                swap(m_anchorHoldingPowerRatio_, other_.m_anchorHoldingPowerRatio_);
                swap(m_anchorKind_, other_.m_anchorKind_);
                swap(m_anchorLocation_, other_.m_anchorLocation_);
                swap(m_anchorSize_, other_.m_anchorSize_);
                swap(m_rodeLength_, other_.m_rodeLength_);
                swap(m_rodeSize_, other_.m_rodeSize_);
                swap(m_rodeWorkingLoadLimit_, other_.m_rodeWorkingLoadLimit_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool AnchorSpecsReportType::operator == (const AnchorSpecsReportType& other_) const {
                if (std::fabs(m_anchorHoldingPower_ - other_.m_anchorHoldingPower_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_anchorHoldingPower_ - other_.m_anchorHoldingPower_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_anchorHoldingPowerRatio_ - other_.m_anchorHoldingPowerRatio_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_anchorHoldingPowerRatio_ - other_.m_anchorHoldingPowerRatio_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_anchorKind_ != other_.m_anchorKind_) {
                    return false;
                }
                if (m_anchorLocation_ != other_.m_anchorLocation_) {
                    return false;
                }
                if (std::fabs(m_anchorSize_ - other_.m_anchorSize_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_anchorSize_ - other_.m_anchorSize_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rodeLength_ - other_.m_rodeLength_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rodeLength_ - other_.m_rodeLength_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rodeSize_ - other_.m_rodeSize_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rodeSize_ - other_.m_rodeSize_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rodeWorkingLoadLimit_ - other_.m_rodeWorkingLoadLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rodeWorkingLoadLimit_ - other_.m_rodeWorkingLoadLimit_) < (std::numeric_limits< double>::min)())) {
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

            bool AnchorSpecsReportType::operator != (const AnchorSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AnchorSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "anchorHoldingPower: " << std::setprecision(15) << sample.anchorHoldingPower ()<<", ";
                o << "anchorHoldingPowerRatio: " << std::setprecision(15) << sample.anchorHoldingPowerRatio ()<<", ";
                o << "anchorKind: " << sample.anchorKind ()<<", ";
                o << "anchorLocation: " << sample.anchorLocation ()<<", ";
                o << "anchorSize: " << std::setprecision(15) << sample.anchorSize ()<<", ";
                o << "rodeLength: " << std::setprecision(15) << sample.rodeLength ()<<", ";
                o << "rodeSize: " << std::setprecision(15) << sample.rodeSize ()<<", ";
                o << "rodeWorkingLoadLimit: " << std::setprecision(15) << sample.rodeWorkingLoadLimit ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace AnchorSpecs  

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
        struct native_type_code< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorSpecsReportType_g_tc_members[10]=
                {

                    {
                        (char *)"anchorHoldingPower",/* Member name */
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
                        (char *)"anchorHoldingPowerRatio",/* Member name */
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
                        (char *)"anchorKind",/* Member name */
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
                        (char *)"anchorLocation",/* Member name */
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
                        (char *)"anchorSize",/* Member name */
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
                        (char *)"rodeLength",/* Member name */
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
                        (char *)"rodeSize",/* Member name */
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
                        (char *)"rodeWorkingLoadLimit",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode AnchorSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::AnchorSpecs::AnchorSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        AnchorSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorSpecsReportType*/

                if (is_initialized) {
                    return &AnchorSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AnchorSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Size_Numeral_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType>::get().native();
                AnchorSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType>::get().native();
                AnchorSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Force_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                AnchorSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                AnchorSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                AnchorSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000000ULL;
                AnchorSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AnchorSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AnchorSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;
                AnchorSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                AnchorSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                AnchorSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 100000000ULL;
                AnchorSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                AnchorSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
                AnchorSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                AnchorSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;
                AnchorSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                AnchorSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                AnchorSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnchorSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 100000000ULL;

                AnchorSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo AnchorSpecsReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                AnchorSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anchorHoldingPower() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anchorHoldingPowerRatio() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anchorKind() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anchorLocation() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anchorSize() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rodeLength() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rodeSize() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rodeWorkingLoadLimit() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                AnchorSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                AnchorSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >;

                AnchorSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorSpecsReportType_g_typePlugin = 
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

                return &AnchorSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::AnchorSpecs::AnchorSpecsReportTypePlugin_new,
                ::UMAA::EO::AnchorSpecs::AnchorSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = AnchorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = AnchorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::from_cdr_buffer(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = AnchorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::reset_sample(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample) 
        {
            sample.anchorHoldingPower(0.0);
            sample.anchorHoldingPowerRatio(0.0);
            sample.anchorKind(UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType::COMMERCIAL_STOCKLESS);
            sample.anchorLocation(UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType::BOWER);
            sample.anchorSize(0.0);
            sample.rodeLength(0.0);
            sample.rodeSize(0.0);
            sample.rodeWorkingLoadLimit(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType >::allocate_sample(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.anchorKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.anchorLocation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
