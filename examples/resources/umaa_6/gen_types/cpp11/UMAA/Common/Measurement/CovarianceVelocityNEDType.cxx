

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityNEDType.idl
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
#include "CovarianceVelocityNEDTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovarianceVelocityNEDType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceVelocityNEDType: 

            CovarianceVelocityNEDType::CovarianceVelocityNEDType() :
                m_veVe_ (0.0) ,
                m_vnVn_ (0.0)  {

            }   

            CovarianceVelocityNEDType::CovarianceVelocityNEDType (const ::dds::core::optional< double >& vdVd_,const ::dds::core::optional< double >& veVd_,double veVe_,const ::dds::core::optional< double >& vnVd_,const ::dds::core::optional< double >& vnVe_,double vnVn_):
                m_vdVd_(vdVd_), 
                m_veVd_(veVd_), 
                m_veVe_(veVe_), 
                m_vnVd_(vnVd_), 
                m_vnVe_(vnVe_), 
                m_vnVn_(vnVn_) {
            }

            void CovarianceVelocityNEDType::swap(CovarianceVelocityNEDType& other_)  noexcept 
            {
                using std::swap;
                swap(m_vdVd_, other_.m_vdVd_);
                swap(m_veVd_, other_.m_veVd_);
                swap(m_veVe_, other_.m_veVe_);
                swap(m_vnVd_, other_.m_vnVd_);
                swap(m_vnVe_, other_.m_vnVe_);
                swap(m_vnVn_, other_.m_vnVn_);
            }  

            bool CovarianceVelocityNEDType::operator == (const CovarianceVelocityNEDType& other_) const {
                if (m_vdVd_.has_value() != other_.m_vdVd_.has_value()) {
                    return false;
                } else if (m_vdVd_.has_value()) {
                    if (std::fabs(*m_vdVd_ - *other_.m_vdVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_vdVd_ - *other_.m_vdVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_veVd_.has_value() != other_.m_veVd_.has_value()) {
                    return false;
                } else if (m_veVd_.has_value()) {
                    if (std::fabs(*m_veVd_ - *other_.m_veVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_veVd_ - *other_.m_veVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_veVe_ - other_.m_veVe_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_veVe_ - other_.m_veVe_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_vnVd_.has_value() != other_.m_vnVd_.has_value()) {
                    return false;
                } else if (m_vnVd_.has_value()) {
                    if (std::fabs(*m_vnVd_ - *other_.m_vnVd_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_vnVd_ - *other_.m_vnVd_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_vnVe_.has_value() != other_.m_vnVe_.has_value()) {
                    return false;
                } else if (m_vnVe_.has_value()) {
                    if (std::fabs(*m_vnVe_ - *other_.m_vnVe_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_vnVe_ - *other_.m_vnVe_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_vnVn_ - other_.m_vnVn_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_vnVn_ - other_.m_vnVn_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovarianceVelocityNEDType::operator != (const CovarianceVelocityNEDType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceVelocityNEDType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "vdVd: " << sample.vdVd ()<<", ";
                o << "veVd: " << sample.veVd ()<<", ";
                o << "veVe: " << std::setprecision(15) << sample.veVe ()<<", ";
                o << "vnVd: " << sample.vnVd ()<<", ";
                o << "vnVe: " << sample.vnVe ()<<", ";
                o << "vnVn: " << std::setprecision(15) << sample.vnVn ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceVelocityNEDType_g_tc_members[6]=
                {

                    {
                        (char *)"vdVd",/* Member name */
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
                        (char *)"veVd",/* Member name */
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
                        (char *)"veVe",/* Member name */
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
                        (char *)"vnVd",/* Member name */
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
                        (char *)"vnVe",/* Member name */
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
                        (char *)"vnVn",/* Member name */
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

                static DDS_TypeCode CovarianceVelocityNEDType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceVelocityNEDType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceVelocityNEDType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceVelocityNEDType*/

                if (is_initialized) {
                    return &CovarianceVelocityNEDType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarianceVelocityNEDType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceVelocityNEDType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();
                CovarianceVelocityNEDType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();
                CovarianceVelocityNEDType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();
                CovarianceVelocityNEDType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();
                CovarianceVelocityNEDType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();
                CovarianceVelocityNEDType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceVelocityNEDType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceVelocityNEDType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceVelocityNEDType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceVelocityNEDType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceVelocityNEDType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceVelocityNEDType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceVelocityNEDType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarianceVelocityNEDType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovarianceVelocityNEDType *sample;

                static RTIXCdrMemberAccessInfo CovarianceVelocityNEDType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceVelocityNEDType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceVelocityNEDType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovarianceVelocityNEDType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceVelocityNEDType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vdVd() - (char *)sample);

                CovarianceVelocityNEDType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->veVd() - (char *)sample);

                CovarianceVelocityNEDType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->veVe() - (char *)sample);

                CovarianceVelocityNEDType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vnVd() - (char *)sample);

                CovarianceVelocityNEDType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vnVe() - (char *)sample);

                CovarianceVelocityNEDType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vnVn() - (char *)sample);

                CovarianceVelocityNEDType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceVelocityNEDType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarianceVelocityNEDType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceVelocityNEDType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceVelocityNEDType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceVelocityNEDType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceVelocityNEDType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >;

                CovarianceVelocityNEDType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceVelocityNEDType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceVelocityNEDType_g_typePlugin = 
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

                return &CovarianceVelocityNEDType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >::reset_sample(::UMAA::Common::Measurement::CovarianceVelocityNEDType& sample) 
        {
            ::rti::topic::reset_sample(sample.vdVd());
            ::rti::topic::reset_sample(sample.veVd());
            sample.veVe(0.0);
            ::rti::topic::reset_sample(sample.vnVd());
            ::rti::topic::reset_sample(sample.vnVe());
            sample.vnVn(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >::allocate_sample(::UMAA::Common::Measurement::CovarianceVelocityNEDType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE