

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceAccelerationPlatformXYZType.idl
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
#include "CovarianceAccelerationPlatformXYZTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovarianceAccelerationPlatformXYZType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceAccelerationPlatformXYZType: 

            CovarianceAccelerationPlatformXYZType::CovarianceAccelerationPlatformXYZType() :
                m_axAx_ (0.0) ,
                m_ayAy_ (0.0) ,
                m_azAz_ (0.0)  {

            }   

            CovarianceAccelerationPlatformXYZType::CovarianceAccelerationPlatformXYZType (double axAx_,const ::dds::core::optional< double >& axAy_,const ::dds::core::optional< double >& axAz_,double ayAy_,const ::dds::core::optional< double >& ayAz_,double azAz_):
                m_axAx_(axAx_), 
                m_axAy_(axAy_), 
                m_axAz_(axAz_), 
                m_ayAy_(ayAy_), 
                m_ayAz_(ayAz_), 
                m_azAz_(azAz_) {
            }

            void CovarianceAccelerationPlatformXYZType::swap(CovarianceAccelerationPlatformXYZType& other_)  noexcept 
            {
                using std::swap;
                swap(m_axAx_, other_.m_axAx_);
                swap(m_axAy_, other_.m_axAy_);
                swap(m_axAz_, other_.m_axAz_);
                swap(m_ayAy_, other_.m_ayAy_);
                swap(m_ayAz_, other_.m_ayAz_);
                swap(m_azAz_, other_.m_azAz_);
            }  

            bool CovarianceAccelerationPlatformXYZType::operator == (const CovarianceAccelerationPlatformXYZType& other_) const {
                if (std::fabs(m_axAx_ - other_.m_axAx_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_axAx_ - other_.m_axAx_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_axAy_.has_value() != other_.m_axAy_.has_value()) {
                    return false;
                } else if (m_axAy_.has_value()) {
                    if (std::fabs(*m_axAy_ - *other_.m_axAy_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_axAy_ - *other_.m_axAy_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_axAz_.has_value() != other_.m_axAz_.has_value()) {
                    return false;
                } else if (m_axAz_.has_value()) {
                    if (std::fabs(*m_axAz_ - *other_.m_axAz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_axAz_ - *other_.m_axAz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_ayAy_ - other_.m_ayAy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ayAy_ - other_.m_ayAy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_ayAz_.has_value() != other_.m_ayAz_.has_value()) {
                    return false;
                } else if (m_ayAz_.has_value()) {
                    if (std::fabs(*m_ayAz_ - *other_.m_ayAz_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_ayAz_ - *other_.m_ayAz_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_azAz_ - other_.m_azAz_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_azAz_ - other_.m_azAz_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovarianceAccelerationPlatformXYZType::operator != (const CovarianceAccelerationPlatformXYZType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceAccelerationPlatformXYZType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "axAx: " << std::setprecision(15) << sample.axAx ()<<", ";
                o << "axAy: " << sample.axAy ()<<", ";
                o << "axAz: " << sample.axAz ()<<", ";
                o << "ayAy: " << std::setprecision(15) << sample.ayAy ()<<", ";
                o << "ayAz: " << sample.ayAz ()<<", ";
                o << "azAz: " << std::setprecision(15) << sample.azAz ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceAccelerationPlatformXYZType_g_tc_members[6]=
                {

                    {
                        (char *)"axAx",/* Member name */
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
                        (char *)"axAy",/* Member name */
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
                        (char *)"axAz",/* Member name */
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
                        (char *)"ayAy",/* Member name */
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
                        (char *)"ayAz",/* Member name */
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
                        (char *)"azAz",/* Member name */
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

                static DDS_TypeCode CovarianceAccelerationPlatformXYZType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceAccelerationPlatformXYZType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceAccelerationPlatformXYZType*/

                if (is_initialized) {
                    return &CovarianceAccelerationPlatformXYZType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarianceAccelerationPlatformXYZType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceAccelerationPlatformXYZType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceAccelerationPlatformXYZType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceAccelerationPlatformXYZType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceAccelerationPlatformXYZType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceAccelerationPlatformXYZType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceAccelerationPlatformXYZType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceAccelerationPlatformXYZType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceAccelerationPlatformXYZType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceAccelerationPlatformXYZType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarianceAccelerationPlatformXYZType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType *sample;

                static RTIXCdrMemberAccessInfo CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->axAx() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->axAy() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->axAz() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ayAy() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ayAz() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->azAz() - (char *)sample);

                CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceAccelerationPlatformXYZType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >;

                CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceAccelerationPlatformXYZType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceAccelerationPlatformXYZType_g_typePlugin = 
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

                return &CovarianceAccelerationPlatformXYZType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >::reset_sample(::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType& sample) 
        {
            sample.axAx(0.0);
            ::rti::topic::reset_sample(sample.axAy());
            ::rti::topic::reset_sample(sample.axAz());
            sample.ayAy(0.0);
            ::rti::topic::reset_sample(sample.ayAz());
            sample.azAz(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >::allocate_sample(::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
