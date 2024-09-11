

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeRateASFRequirementType.idl
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
#include "AltitudeRateASFRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AltitudeRateASFRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- AltitudeRateASFRequirementType: 

            AltitudeRateASFRequirementType::AltitudeRateASFRequirementType() :
                m_altitudeRate_ (0.0)  {

            }   

            AltitudeRateASFRequirementType::AltitudeRateASFRequirementType (double altitudeRate_,const ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >& altitudeRateTolerance_):
                m_altitudeRate_(altitudeRate_), 
                m_altitudeRateTolerance_(altitudeRateTolerance_) {
            }

            void AltitudeRateASFRequirementType::swap(AltitudeRateASFRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitudeRate_, other_.m_altitudeRate_);
                swap(m_altitudeRateTolerance_, other_.m_altitudeRateTolerance_);
            }  

            bool AltitudeRateASFRequirementType::operator == (const AltitudeRateASFRequirementType& other_) const {
                if (std::fabs(m_altitudeRate_ - other_.m_altitudeRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_altitudeRate_ - other_.m_altitudeRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_altitudeRateTolerance_ != other_.m_altitudeRateTolerance_) {
                    return false;
                }
                return true;
            }

            bool AltitudeRateASFRequirementType::operator != (const AltitudeRateASFRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AltitudeRateASFRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitudeRate: " << std::setprecision(15) << sample.altitudeRate ()<<", ";
                o << "altitudeRateTolerance: " << sample.altitudeRateTolerance ();
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
        struct native_type_code< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AltitudeRateASFRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"altitudeRate",/* Member name */
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
                        (char *)"altitudeRateTolerance",/* Member name */
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
                    }
                };

                static DDS_TypeCode AltitudeRateASFRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::AltitudeRateASFRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AltitudeRateASFRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AltitudeRateASFRequirementType*/

                if (is_initialized) {
                    return &AltitudeRateASFRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AltitudeRateASFRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AltitudeRateASFRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedASF_AliasTag_t>::get().native();
                AltitudeRateASFRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AltitudeRateASFRequirementType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AltitudeRateASFRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                AltitudeRateASFRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &AltitudeRateASFRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::AltitudeRateASFRequirementType *sample;

                static RTIXCdrMemberAccessInfo AltitudeRateASFRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AltitudeRateASFRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AltitudeRateASFRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::AltitudeRateASFRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                AltitudeRateASFRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeRate() - (char *)sample);

                AltitudeRateASFRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeRateTolerance() - (char *)sample);

                AltitudeRateASFRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                AltitudeRateASFRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AltitudeRateASFRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AltitudeRateASFRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AltitudeRateASFRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AltitudeRateASFRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AltitudeRateASFRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType >;

                AltitudeRateASFRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AltitudeRateASFRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AltitudeRateASFRequirementType_g_typePlugin = 
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

                return &AltitudeRateASFRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType >::reset_sample(::UMAA::Common::Measurement::AltitudeRateASFRequirementType& sample) 
        {
            sample.altitudeRate(0.0);
            ::rti::topic::reset_sample(sample.altitudeRateTolerance());
        }

        void topic_type_support< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType >::allocate_sample(::UMAA::Common::Measurement::AltitudeRateASFRequirementType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
