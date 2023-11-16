

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionVelocityType.idl
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
#include "CovariancePositionVelocityTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovariancePositionVelocityType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovariancePositionVelocityType: 

            CovariancePositionVelocityType::CovariancePositionVelocityType() :
                m_peVe_ (0.0) ,
                m_peVn_ (0.0) ,
                m_pnVe_ (0.0) ,
                m_pnVn_ (0.0)  {

            }   

            CovariancePositionVelocityType::CovariancePositionVelocityType (const ::dds::core::optional< double >& pdVd_,const ::dds::core::optional< double >& pdVe_,const ::dds::core::optional< double >& pdVn_,const ::dds::core::optional< double >& peVd_,double peVe_,double peVn_,const ::dds::core::optional< double >& pnVd_,double pnVe_,double pnVn_):
                m_pdVd_(pdVd_), 
                m_pdVe_(pdVe_), 
                m_pdVn_(pdVn_), 
                m_peVd_(peVd_), 
                m_peVe_(peVe_), 
                m_peVn_(peVn_), 
                m_pnVd_(pnVd_), 
                m_pnVe_(pnVe_), 
                m_pnVn_(pnVn_) {
            }

            void CovariancePositionVelocityType::swap(CovariancePositionVelocityType& other_)  noexcept 
            {
                using std::swap;
                swap(m_pdVd_, other_.m_pdVd_);
                swap(m_pdVe_, other_.m_pdVe_);
                swap(m_pdVn_, other_.m_pdVn_);
                swap(m_peVd_, other_.m_peVd_);
                swap(m_peVe_, other_.m_peVe_);
                swap(m_peVn_, other_.m_peVn_);
                swap(m_pnVd_, other_.m_pnVd_);
                swap(m_pnVe_, other_.m_pnVe_);
                swap(m_pnVn_, other_.m_pnVn_);
            }  

            bool CovariancePositionVelocityType::operator == (const CovariancePositionVelocityType& other_) const {
                if (m_pdVd_.has_value() != other_.m_pdVd_.has_value()) {
                    return false;
                } else if (m_pdVd_.has_value()) {
                    if (std::fabs(*m_pdVd_ - *other_.m_pdVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pdVd_ - *other_.m_pdVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pdVe_.has_value() != other_.m_pdVe_.has_value()) {
                    return false;
                } else if (m_pdVe_.has_value()) {
                    if (std::fabs(*m_pdVe_ - *other_.m_pdVe_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pdVe_ - *other_.m_pdVe_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pdVn_.has_value() != other_.m_pdVn_.has_value()) {
                    return false;
                } else if (m_pdVn_.has_value()) {
                    if (std::fabs(*m_pdVn_ - *other_.m_pdVn_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pdVn_ - *other_.m_pdVn_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_peVd_.has_value() != other_.m_peVd_.has_value()) {
                    return false;
                } else if (m_peVd_.has_value()) {
                    if (std::fabs(*m_peVd_ - *other_.m_peVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_peVd_ - *other_.m_peVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_peVe_ - other_.m_peVe_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_peVe_ - other_.m_peVe_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_peVn_ - other_.m_peVn_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_peVn_ - other_.m_peVn_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pnVd_.has_value() != other_.m_pnVd_.has_value()) {
                    return false;
                } else if (m_pnVd_.has_value()) {
                    if (std::fabs(*m_pnVd_ - *other_.m_pnVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pnVd_ - *other_.m_pnVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_pnVe_ - other_.m_pnVe_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pnVe_ - other_.m_pnVe_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pnVn_ - other_.m_pnVn_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pnVn_ - other_.m_pnVn_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovariancePositionVelocityType::operator != (const CovariancePositionVelocityType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovariancePositionVelocityType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pdVd: " << sample.pdVd ()<<", ";
                o << "pdVe: " << sample.pdVe ()<<", ";
                o << "pdVn: " << sample.pdVn ()<<", ";
                o << "peVd: " << sample.peVd ()<<", ";
                o << "peVe: " << std::setprecision(15) << sample.peVe ()<<", ";
                o << "peVn: " << std::setprecision(15) << sample.peVn ()<<", ";
                o << "pnVd: " << sample.pnVd ()<<", ";
                o << "pnVe: " << std::setprecision(15) << sample.pnVe ()<<", ";
                o << "pnVn: " << std::setprecision(15) << sample.pnVn ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovariancePositionVelocityType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovariancePositionVelocityType_g_tc_members[9]=
                {

                    {
                        (char *)"pdVd",/* Member name */
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
                        (char *)"pdVe",/* Member name */
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
                        (char *)"pdVn",/* Member name */
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
                        (char *)"peVd",/* Member name */
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
                        (char *)"peVe",/* Member name */
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
                        (char *)"peVn",/* Member name */
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
                        (char *)"pnVd",/* Member name */
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
                        (char *)"pnVe",/* Member name */
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
                        (char *)"pnVn",/* Member name */
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
                    }
                };

                static DDS_TypeCode CovariancePositionVelocityType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovariancePositionVelocityType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        CovariancePositionVelocityType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovariancePositionVelocityType*/

                if (is_initialized) {
                    return &CovariancePositionVelocityType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovariancePositionVelocityType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovariancePositionVelocityType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();
                CovariancePositionVelocityType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovariancePositionVelocityType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionVelocityType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionVelocityType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovariancePositionVelocityType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovariancePositionVelocityType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovariancePositionVelocityType *sample;

                static RTIXCdrMemberAccessInfo CovariancePositionVelocityType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovariancePositionVelocityType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovariancePositionVelocityType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovariancePositionVelocityType);
                if (sample == NULL) {
                    return NULL;
                }

                CovariancePositionVelocityType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pdVd() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pdVe() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pdVn() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->peVd() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->peVe() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->peVn() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnVd() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnVe() - (char *)sample);

                CovariancePositionVelocityType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnVn() - (char *)sample);

                CovariancePositionVelocityType_g_sampleAccessInfo.memberAccessInfos = 
                CovariancePositionVelocityType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovariancePositionVelocityType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovariancePositionVelocityType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovariancePositionVelocityType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovariancePositionVelocityType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovariancePositionVelocityType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovariancePositionVelocityType >;

                CovariancePositionVelocityType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovariancePositionVelocityType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovariancePositionVelocityType_g_typePlugin = 
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

                return &CovariancePositionVelocityType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::CovariancePositionVelocityTypePlugin_new,
                ::UMAA::Common::Measurement::CovariancePositionVelocityTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::CovariancePositionVelocityType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovariancePositionVelocityTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovariancePositionVelocityTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::from_cdr_buffer(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovariancePositionVelocityTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::CovariancePositionVelocityType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::reset_sample(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample) 
        {
            ::rti::topic::reset_sample(sample.pdVd());
            ::rti::topic::reset_sample(sample.pdVe());
            ::rti::topic::reset_sample(sample.pdVn());
            ::rti::topic::reset_sample(sample.peVd());
            sample.peVe(0.0);
            sample.peVn(0.0);
            ::rti::topic::reset_sample(sample.pnVd());
            sample.pnVe(0.0);
            sample.pnVn(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType >::allocate_sample(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
