

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationAccelerationPlatformXYZType.idl
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
#include "CovarianceOrientationAccelerationPlatformXYZTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovarianceOrientationAccelerationPlatformXYZType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceOrientationAccelerationPlatformXYZType: 

            CovarianceOrientationAccelerationPlatformXYZType::CovarianceOrientationAccelerationPlatformXYZType() :
                m_rxRx_ (0.0) ,
                m_ryRy_ (0.0) ,
                m_rzRz_ (0.0)  {

            }   

            CovarianceOrientationAccelerationPlatformXYZType::CovarianceOrientationAccelerationPlatformXYZType (double rxRx_,const ::dds::core::optional< double >& rxRy_,const ::dds::core::optional< double >& rxRz_,double ryRy_,const ::dds::core::optional< double >& ryRz_,double rzRz_):
                m_rxRx_(rxRx_), 
                m_rxRy_(rxRy_), 
                m_rxRz_(rxRz_), 
                m_ryRy_(ryRy_), 
                m_ryRz_(ryRz_), 
                m_rzRz_(rzRz_) {
            }

            void CovarianceOrientationAccelerationPlatformXYZType::swap(CovarianceOrientationAccelerationPlatformXYZType& other_)  noexcept 
            {
                using std::swap;
                swap(m_rxRx_, other_.m_rxRx_);
                swap(m_rxRy_, other_.m_rxRy_);
                swap(m_rxRz_, other_.m_rxRz_);
                swap(m_ryRy_, other_.m_ryRy_);
                swap(m_ryRz_, other_.m_ryRz_);
                swap(m_rzRz_, other_.m_rzRz_);
            }  

            bool CovarianceOrientationAccelerationPlatformXYZType::operator == (const CovarianceOrientationAccelerationPlatformXYZType& other_) const {
                if (std::fabs(m_rxRx_ - other_.m_rxRx_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rxRx_ - other_.m_rxRx_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_rxRy_.has_value() != other_.m_rxRy_.has_value()) {
                    return false;
                } else if (m_rxRy_.has_value()) {
                    if (std::fabs(*m_rxRy_ - *other_.m_rxRy_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_rxRy_ - *other_.m_rxRy_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_rxRz_.has_value() != other_.m_rxRz_.has_value()) {
                    return false;
                } else if (m_rxRz_.has_value()) {
                    if (std::fabs(*m_rxRz_ - *other_.m_rxRz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_rxRz_ - *other_.m_rxRz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_ryRy_ - other_.m_ryRy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ryRy_ - other_.m_ryRy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_ryRz_.has_value() != other_.m_ryRz_.has_value()) {
                    return false;
                } else if (m_ryRz_.has_value()) {
                    if (std::fabs(*m_ryRz_ - *other_.m_ryRz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_ryRz_ - *other_.m_ryRz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_rzRz_ - other_.m_rzRz_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rzRz_ - other_.m_rzRz_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovarianceOrientationAccelerationPlatformXYZType::operator != (const CovarianceOrientationAccelerationPlatformXYZType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceOrientationAccelerationPlatformXYZType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "rxRx: " << std::setprecision(15) << sample.rxRx ()<<", ";
                o << "rxRy: " << sample.rxRy ()<<", ";
                o << "rxRz: " << sample.rxRz ()<<", ";
                o << "ryRy: " << std::setprecision(15) << sample.ryRy ()<<", ";
                o << "ryRz: " << sample.ryRz ()<<", ";
                o << "rzRz: " << std::setprecision(15) << sample.rzRz ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[6]=
                {

                    {
                        (char *)"rxRx",/* Member name */
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
                        (char *)"rxRy",/* Member name */
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
                        (char *)"rxRz",/* Member name */
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
                        (char *)"ryRy",/* Member name */
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
                        (char *)"ryRz",/* Member name */
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
                        (char *)"rzRz",/* Member name */
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

                static DDS_TypeCode CovarianceOrientationAccelerationPlatformXYZType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceOrientationAccelerationPlatformXYZType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceOrientationAccelerationPlatformXYZType*/

                if (is_initialized) {
                    return &CovarianceOrientationAccelerationPlatformXYZType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarianceOrientationAccelerationPlatformXYZType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationPlatformXYZType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationPlatformXYZType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceOrientationAccelerationPlatformXYZType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarianceOrientationAccelerationPlatformXYZType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType *sample;

                static RTIXCdrMemberAccessInfo CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rxRx() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rxRy() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rxRz() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ryRy() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ryRz() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rzRz() - (char *)sample);

                CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceOrientationAccelerationPlatformXYZType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >;

                CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationAccelerationPlatformXYZType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceOrientationAccelerationPlatformXYZType_g_typePlugin = 
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

                return &CovarianceOrientationAccelerationPlatformXYZType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >::reset_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType& sample) 
        {
            sample.rxRx(0.0);
            ::rti::topic::reset_sample(sample.rxRy());
            ::rti::topic::reset_sample(sample.rxRz());
            sample.ryRy(0.0);
            ::rti::topic::reset_sample(sample.ryRz());
            sample.rzRz(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >::allocate_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
