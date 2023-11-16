

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePolarType.idl
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
#include "CovariancePolarTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovariancePolarType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovariancePolarType: 

            CovariancePolarType::CovariancePolarType() :
                m_abAb_ (0.0) ,
                m_aiAb_ (0.0) ,
                m_aiAi_ (0.0) ,
                m_arAb_ (0.0) ,
                m_arAi_ (0.0) ,
                m_arAr_ (0.0)  {

            }   

            CovariancePolarType::CovariancePolarType (double abAb_,double aiAb_,double aiAi_,double arAb_,double arAi_,double arAr_):
                m_abAb_(abAb_), 
                m_aiAb_(aiAb_), 
                m_aiAi_(aiAi_), 
                m_arAb_(arAb_), 
                m_arAi_(arAi_), 
                m_arAr_(arAr_) {
            }

            void CovariancePolarType::swap(CovariancePolarType& other_)  noexcept 
            {
                using std::swap;
                swap(m_abAb_, other_.m_abAb_);
                swap(m_aiAb_, other_.m_aiAb_);
                swap(m_aiAi_, other_.m_aiAi_);
                swap(m_arAb_, other_.m_arAb_);
                swap(m_arAi_, other_.m_arAi_);
                swap(m_arAr_, other_.m_arAr_);
            }  

            bool CovariancePolarType::operator == (const CovariancePolarType& other_) const {
                if (std::fabs(m_abAb_ - other_.m_abAb_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_abAb_ - other_.m_abAb_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_aiAb_ - other_.m_aiAb_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_aiAb_ - other_.m_aiAb_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_aiAi_ - other_.m_aiAi_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_aiAi_ - other_.m_aiAi_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_arAb_ - other_.m_arAb_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_arAb_ - other_.m_arAb_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_arAi_ - other_.m_arAi_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_arAi_ - other_.m_arAi_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_arAr_ - other_.m_arAr_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_arAr_ - other_.m_arAr_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovariancePolarType::operator != (const CovariancePolarType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovariancePolarType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "abAb: " << std::setprecision(15) << sample.abAb ()<<", ";
                o << "aiAb: " << std::setprecision(15) << sample.aiAb ()<<", ";
                o << "aiAi: " << std::setprecision(15) << sample.aiAi ()<<", ";
                o << "arAb: " << std::setprecision(15) << sample.arAb ()<<", ";
                o << "arAi: " << std::setprecision(15) << sample.arAi ()<<", ";
                o << "arAr: " << std::setprecision(15) << sample.arAr ();
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
        struct native_type_code< ::UMAA::Common::Measurement::CovariancePolarType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovariancePolarType_g_tc_members[6]=
                {

                    {
                        (char *)"abAb",/* Member name */
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
                        (char *)"aiAb",/* Member name */
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
                        (char *)"aiAi",/* Member name */
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
                        (char *)"arAb",/* Member name */
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
                        (char *)"arAi",/* Member name */
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
                        (char *)"arAr",/* Member name */
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

                static DDS_TypeCode CovariancePolarType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovariancePolarType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovariancePolarType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovariancePolarType*/

                if (is_initialized) {
                    return &CovariancePolarType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovariancePolarType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovariancePolarType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t>::get().native();
                CovariancePolarType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t>::get().native();
                CovariancePolarType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t>::get().native();
                CovariancePolarType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle_AliasTag_t>::get().native();
                CovariancePolarType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle_AliasTag_t>::get().native();
                CovariancePolarType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarDisDis_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovariancePolarType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePolarType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePolarType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePolarType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePolarType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovariancePolarType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePolarType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePolarType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePolarType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePolarType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovariancePolarType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovariancePolarType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovariancePolarType *sample;

                static RTIXCdrMemberAccessInfo CovariancePolarType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovariancePolarType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovariancePolarType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovariancePolarType);
                if (sample == NULL) {
                    return NULL;
                }

                CovariancePolarType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->abAb() - (char *)sample);

                CovariancePolarType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aiAb() - (char *)sample);

                CovariancePolarType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aiAi() - (char *)sample);

                CovariancePolarType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAb() - (char *)sample);

                CovariancePolarType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAi() - (char *)sample);

                CovariancePolarType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAr() - (char *)sample);

                CovariancePolarType_g_sampleAccessInfo.memberAccessInfos = 
                CovariancePolarType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovariancePolarType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovariancePolarType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovariancePolarType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovariancePolarType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovariancePolarType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovariancePolarType >;

                CovariancePolarType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovariancePolarType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovariancePolarType_g_typePlugin = 
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

                return &CovariancePolarType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovariancePolarType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovariancePolarType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::CovariancePolarType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::CovariancePolarTypePlugin_new,
                ::UMAA::Common::Measurement::CovariancePolarTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::CovariancePolarType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::CovariancePolarType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovariancePolarTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovariancePolarTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePolarType >::from_cdr_buffer(::UMAA::Common::Measurement::CovariancePolarType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovariancePolarTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::CovariancePolarType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePolarType >::reset_sample(::UMAA::Common::Measurement::CovariancePolarType& sample) 
        {
            sample.abAb(0.0);
            sample.aiAb(0.0);
            sample.aiAi(0.0);
            sample.arAb(0.0);
            sample.arAi(0.0);
            sample.arAr(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovariancePolarType >::allocate_sample(::UMAA::Common::Measurement::CovariancePolarType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
