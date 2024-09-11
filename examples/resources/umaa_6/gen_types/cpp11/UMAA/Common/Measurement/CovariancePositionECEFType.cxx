

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionECEFType.idl
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
#include "CovariancePositionECEFTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovariancePositionECEFType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovariancePositionECEFType: 

            CovariancePositionECEFType::CovariancePositionECEFType() :
                m_pxPx_ (0.0) ,
                m_pyPy_ (0.0)  {

            }   

            CovariancePositionECEFType::CovariancePositionECEFType (double pxPx_,const ::dds::core::optional< double >& pxPy_,const ::dds::core::optional< double >& pxPz_,double pyPy_,const ::dds::core::optional< double >& pyPz_,const ::dds::core::optional< double >& pzPz_):
                m_pxPx_(pxPx_), 
                m_pxPy_(pxPy_), 
                m_pxPz_(pxPz_), 
                m_pyPy_(pyPy_), 
                m_pyPz_(pyPz_), 
                m_pzPz_(pzPz_) {
            }

            void CovariancePositionECEFType::swap(CovariancePositionECEFType& other_)  noexcept 
            {
                using std::swap;
                swap(m_pxPx_, other_.m_pxPx_);
                swap(m_pxPy_, other_.m_pxPy_);
                swap(m_pxPz_, other_.m_pxPz_);
                swap(m_pyPy_, other_.m_pyPy_);
                swap(m_pyPz_, other_.m_pyPz_);
                swap(m_pzPz_, other_.m_pzPz_);
            }  

            bool CovariancePositionECEFType::operator == (const CovariancePositionECEFType& other_) const {
                if (std::fabs(m_pxPx_ - other_.m_pxPx_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pxPx_ - other_.m_pxPx_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pxPy_.has_value() != other_.m_pxPy_.has_value()) {
                    return false;
                } else if (m_pxPy_.has_value()) {
                    if (std::fabs(*m_pxPy_ - *other_.m_pxPy_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pxPy_ - *other_.m_pxPy_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pxPz_.has_value() != other_.m_pxPz_.has_value()) {
                    return false;
                } else if (m_pxPz_.has_value()) {
                    if (std::fabs(*m_pxPz_ - *other_.m_pxPz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pxPz_ - *other_.m_pxPz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_pyPy_ - other_.m_pyPy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pyPy_ - other_.m_pyPy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pyPz_.has_value() != other_.m_pyPz_.has_value()) {
                    return false;
                } else if (m_pyPz_.has_value()) {
                    if (std::fabs(*m_pyPz_ - *other_.m_pyPz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pyPz_ - *other_.m_pyPz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_pzPz_.has_value() != other_.m_pzPz_.has_value()) {
                    return false;
                } else if (m_pzPz_.has_value()) {
                    if (std::fabs(*m_pzPz_ - *other_.m_pzPz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pzPz_ - *other_.m_pzPz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool CovariancePositionECEFType::operator != (const CovariancePositionECEFType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovariancePositionECEFType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pxPx: " << std::setprecision(15) << sample.pxPx ()<<", ";
                o << "pxPy: " << sample.pxPy ()<<", ";
                o << "pxPz: " << sample.pxPz ()<<", ";
                o << "pyPy: " << std::setprecision(15) << sample.pyPy ()<<", ";
                o << "pyPz: " << sample.pyPz ()<<", ";
                o << "pzPz: " << sample.pzPz ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovariancePositionECEFType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovariancePositionECEFType_g_tc_members[6]=
                {

                    {
                        (char *)"pxPx",/* Member name */
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
                        (char *)"pxPy",/* Member name */
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
                        (char *)"pxPz",/* Member name */
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
                        (char *)"pyPy",/* Member name */
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
                        (char *)"pyPz",/* Member name */
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
                        (char *)"pzPz",/* Member name */
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
                    }
                };

                static DDS_TypeCode CovariancePositionECEFType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovariancePositionECEFType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovariancePositionECEFType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovariancePositionECEFType*/

                if (is_initialized) {
                    return &CovariancePositionECEFType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovariancePositionECEFType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovariancePositionECEFType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();
                CovariancePositionECEFType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();
                CovariancePositionECEFType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();
                CovariancePositionECEFType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();
                CovariancePositionECEFType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();
                CovariancePositionECEFType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovariancePositionECEFType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionECEFType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionECEFType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionECEFType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionECEFType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionECEFType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionECEFType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePositionECEFType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionECEFType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionECEFType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionECEFType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovariancePositionECEFType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovariancePositionECEFType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovariancePositionECEFType *sample;

                static RTIXCdrMemberAccessInfo CovariancePositionECEFType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovariancePositionECEFType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovariancePositionECEFType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovariancePositionECEFType);
                if (sample == NULL) {
                    return NULL;
                }

                CovariancePositionECEFType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pxPx() - (char *)sample);

                CovariancePositionECEFType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pxPy() - (char *)sample);

                CovariancePositionECEFType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pxPz() - (char *)sample);

                CovariancePositionECEFType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pyPy() - (char *)sample);

                CovariancePositionECEFType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pyPz() - (char *)sample);

                CovariancePositionECEFType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pzPz() - (char *)sample);

                CovariancePositionECEFType_g_sampleAccessInfo.memberAccessInfos = 
                CovariancePositionECEFType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovariancePositionECEFType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovariancePositionECEFType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovariancePositionECEFType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovariancePositionECEFType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovariancePositionECEFType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovariancePositionECEFType >;

                CovariancePositionECEFType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovariancePositionECEFType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovariancePositionECEFType_g_typePlugin = 
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

                return &CovariancePositionECEFType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovariancePositionECEFType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovariancePositionECEFType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionECEFType >::reset_sample(::UMAA::Common::Measurement::CovariancePositionECEFType& sample) 
        {
            sample.pxPx(0.0);
            ::rti::topic::reset_sample(sample.pxPy());
            ::rti::topic::reset_sample(sample.pxPz());
            sample.pyPy(0.0);
            ::rti::topic::reset_sample(sample.pyPz());
            ::rti::topic::reset_sample(sample.pzPz());
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePositionECEFType >::allocate_sample(::UMAA::Common::Measurement::CovariancePositionECEFType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
