

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorStatusType.idl
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
#include "PropulsorStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsorStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace PropulsorsStatus {

            // ---- PropulsorStatusType: 

            PropulsorStatusType::PropulsorStatusType() :
                m_propulsion_ (0)  {

            }   

            PropulsorStatusType::PropulsorStatusType (const ::dds::core::optional< double >& gamma_,const ::dds::core::optional< double >& propellerPitch_,int32_t propulsion_,const ::dds::core::optional< double >& rho_):
                m_gamma_(gamma_), 
                m_propellerPitch_(propellerPitch_), 
                m_propulsion_(propulsion_), 
                m_rho_(rho_) {
            }

            void PropulsorStatusType::swap(PropulsorStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_gamma_, other_.m_gamma_);
                swap(m_propellerPitch_, other_.m_propellerPitch_);
                swap(m_propulsion_, other_.m_propulsion_);
                swap(m_rho_, other_.m_rho_);
            }  

            bool PropulsorStatusType::operator == (const PropulsorStatusType& other_) const {
                if (m_gamma_.has_value() != other_.m_gamma_.has_value()) {
                    return false;
                } else if (m_gamma_.has_value()) {
                    if (std::fabs(*m_gamma_ - *other_.m_gamma_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_gamma_ - *other_.m_gamma_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_propellerPitch_.has_value() != other_.m_propellerPitch_.has_value()) {
                    return false;
                } else if (m_propellerPitch_.has_value()) {
                    if (std::fabs(*m_propellerPitch_ - *other_.m_propellerPitch_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_propellerPitch_ - *other_.m_propellerPitch_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_propulsion_ != other_.m_propulsion_) {
                    return false;
                }
                if (m_rho_.has_value() != other_.m_rho_.has_value()) {
                    return false;
                } else if (m_rho_.has_value()) {
                    if (std::fabs(*m_rho_ - *other_.m_rho_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_rho_ - *other_.m_rho_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool PropulsorStatusType::operator != (const PropulsorStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsorStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "gamma: " << sample.gamma ()<<", ";
                o << "propellerPitch: " << sample.propellerPitch ()<<", ";
                o << "propulsion: " << sample.propulsion ()<<", ";
                o << "rho: " << sample.rho ();
                o <<"]";
                return o;
            }

        } // namespace PropulsorsStatus  

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
        struct native_type_code< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsorStatusType_g_tc_members[4]=
                {

                    {
                        (char *)"gamma",/* Member name */
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
                        (char *)"propellerPitch",/* Member name */
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
                        (char *)"propulsion",/* Member name */
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
                        (char *)"rho",/* Member name */
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
                    }
                };

                static DDS_TypeCode PropulsorStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::PropulsorsStatus::PropulsorStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PropulsorStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsorStatusType*/

                if (is_initialized) {
                    return &PropulsorStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsorStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsorStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GammaAnglePropulsor_AliasTag_t>::get().native();
                PropulsorStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t>::get().native();
                PropulsorStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                PropulsorStatusType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorStatusType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorStatusType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorStatusType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PropulsorStatusType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                PropulsorStatusType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PropulsorStatusType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PropulsorStatusType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PropulsorStatusType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                PropulsorStatusType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorStatusType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorStatusType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PropulsorStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsorStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsorStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::PropulsorsStatus::PropulsorStatusType *sample;

                static RTIXCdrMemberAccessInfo PropulsorStatusType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsorStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsorStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::PropulsorsStatus::PropulsorStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsorStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gamma() - (char *)sample);

                PropulsorStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propellerPitch() - (char *)sample);

                PropulsorStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsion() - (char *)sample);

                PropulsorStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rho() - (char *)sample);

                PropulsorStatusType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsorStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::PropulsorsStatus::PropulsorStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsorStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsorStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsorStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsorStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType >;

                PropulsorStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsorStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsorStatusType_g_typePlugin = 
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

                return &PropulsorStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType >::reset_sample(::UMAA::EO::PropulsorsStatus::PropulsorStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.gamma());
            ::rti::topic::reset_sample(sample.propellerPitch());
            sample.propulsion(0);
            ::rti::topic::reset_sample(sample.rho());
        }

        void topic_type_support< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType >::allocate_sample(::UMAA::EO::PropulsorsStatus::PropulsorStatusType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
