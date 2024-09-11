

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionNEDType.idl
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
#include "CovariancePositionNEDTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovariancePositionNEDType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovariancePositionNEDType: 

            CovariancePositionNEDType::CovariancePositionNEDType() :
                m_pePe_ (0.0) ,
                m_pnPn_ (0.0)  {

            }   

            CovariancePositionNEDType::CovariancePositionNEDType (const ::dds::core::optional< double >& pdPd_,const ::dds::core::optional< double >& pePd_,double pePe_,const ::dds::core::optional< double >& pnPd_,const ::dds::core::optional< double >& pnPe_,double pnPn_):
                m_pdPd_(pdPd_), 
                m_pePd_(pePd_), 
                m_pePe_(pePe_), 
                m_pnPd_(pnPd_), 
                m_pnPe_(pnPe_), 
                m_pnPn_(pnPn_) {
            }

            void CovariancePositionNEDType::swap(CovariancePositionNEDType& other_)  noexcept 
            {
                using std::swap;
                swap(m_pdPd_, other_.m_pdPd_);
                swap(m_pePd_, other_.m_pePd_);
                swap(m_pePe_, other_.m_pePe_);
                swap(m_pnPd_, other_.m_pnPd_);
                swap(m_pnPe_, other_.m_pnPe_);
                swap(m_pnPn_, other_.m_pnPn_);
            }  

            bool CovariancePositionNEDType::operator == (const CovariancePositionNEDType& other_) const {
                if (m_pdPd_.has_value() != other_.m_pdPd_.has_value()) {
                    return false;
                } else if (m_pdPd_.has_value()) {
                    if (std::fabs(*m_pdPd_ - *other_.m_pdPd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pdPd_ - *other_.m_pdPd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pePd_.has_value() != other_.m_pePd_.has_value()) {
                    return false;
                } else if (m_pePd_.has_value()) {
                    if (std::fabs(*m_pePd_ - *other_.m_pePd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pePd_ - *other_.m_pePd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_pePe_ - other_.m_pePe_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pePe_ - other_.m_pePe_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pnPd_.has_value() != other_.m_pnPd_.has_value()) {
                    return false;
                } else if (m_pnPd_.has_value()) {
                    if (std::fabs(*m_pnPd_ - *other_.m_pnPd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pnPd_ - *other_.m_pnPd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pnPe_.has_value() != other_.m_pnPe_.has_value()) {
                    return false;
                } else if (m_pnPe_.has_value()) {
                    if (std::fabs(*m_pnPe_ - *other_.m_pnPe_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pnPe_ - *other_.m_pnPe_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_pnPn_ - other_.m_pnPn_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pnPn_ - other_.m_pnPn_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovariancePositionNEDType::operator != (const CovariancePositionNEDType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovariancePositionNEDType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pdPd: " << sample.pdPd ()<<", ";
                o << "pePd: " << sample.pePd ()<<", ";
                o << "pePe: " << std::setprecision(15) << sample.pePe ()<<", ";
                o << "pnPd: " << sample.pnPd ()<<", ";
                o << "pnPe: " << sample.pnPe ()<<", ";
                o << "pnPn: " << std::setprecision(15) << sample.pnPn ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovariancePositionNEDType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovariancePositionNEDType_g_tc_members[6]=
                {

                    {
                        (char *)"pdPd",/* Member name */
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
                        (char *)"pePd",/* Member name */
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
                        (char *)"pePe",/* Member name */
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
                        (char *)"pnPd",/* Member name */
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
                        (char *)"pnPe",/* Member name */
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
                        (char *)"pnPn",/* Member name */
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
                    }
                };

                static DDS_TypeCode CovariancePositionNEDType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovariancePositionNEDType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovariancePositionNEDType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovariancePositionNEDType*/

                if (is_initialized) {
                    return &CovariancePositionNEDType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovariancePositionNEDType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovariancePositionNEDType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();
                CovariancePositionNEDType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();
                CovariancePositionNEDType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();
                CovariancePositionNEDType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();
                CovariancePositionNEDType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();
                CovariancePositionNEDType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovariancePositionNEDType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionNEDType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionNEDType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionNEDType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionNEDType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionNEDType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionNEDType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionNEDType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionNEDType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionNEDType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionNEDType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovariancePositionNEDType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovariancePositionNEDType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovariancePositionNEDType *sample;

                static RTIXCdrMemberAccessInfo CovariancePositionNEDType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovariancePositionNEDType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovariancePositionNEDType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovariancePositionNEDType);
                if (sample == NULL) {
                    return NULL;
                }

                CovariancePositionNEDType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pdPd() - (char *)sample);

                CovariancePositionNEDType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pePd() - (char *)sample);

                CovariancePositionNEDType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pePe() - (char *)sample);

                CovariancePositionNEDType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPd() - (char *)sample);

                CovariancePositionNEDType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPe() - (char *)sample);

                CovariancePositionNEDType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPn() - (char *)sample);

                CovariancePositionNEDType_g_sampleAccessInfo.memberAccessInfos = 
                CovariancePositionNEDType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovariancePositionNEDType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovariancePositionNEDType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovariancePositionNEDType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovariancePositionNEDType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovariancePositionNEDType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovariancePositionNEDType >;

                CovariancePositionNEDType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovariancePositionNEDType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovariancePositionNEDType_g_typePlugin = 
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

                return &CovariancePositionNEDType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovariancePositionNEDType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovariancePositionNEDType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionNEDType >::reset_sample(::UMAA::Common::Measurement::CovariancePositionNEDType& sample) 
        {
            ::rti::topic::reset_sample(sample.pdPd());
            ::rti::topic::reset_sample(sample.pePd());
            sample.pePe(0.0);
            ::rti::topic::reset_sample(sample.pnPd());
            ::rti::topic::reset_sample(sample.pnPe());
            sample.pnPn(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionNEDType >::allocate_sample(::UMAA::Common::Measurement::CovariancePositionNEDType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
