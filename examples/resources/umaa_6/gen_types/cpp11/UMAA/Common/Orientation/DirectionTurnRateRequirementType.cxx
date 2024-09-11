

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionTurnRateRequirementType.idl
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
#include "DirectionTurnRateRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionTurnRateRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- DirectionTurnRateRequirementType: 

            DirectionTurnRateRequirementType::DirectionTurnRateRequirementType() :
                m_directionRate_ (0.0)  {

            }   

            DirectionTurnRateRequirementType::DirectionTurnRateRequirementType (double directionRate_,const ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >& directionRateTolerance_):
                m_directionRate_(directionRate_), 
                m_directionRateTolerance_(directionRateTolerance_) {
            }

            void DirectionTurnRateRequirementType::swap(DirectionTurnRateRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_directionRate_, other_.m_directionRate_);
                swap(m_directionRateTolerance_, other_.m_directionRateTolerance_);
            }  

            bool DirectionTurnRateRequirementType::operator == (const DirectionTurnRateRequirementType& other_) const {
                if (std::fabs(m_directionRate_ - other_.m_directionRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_directionRate_ - other_.m_directionRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_directionRateTolerance_ != other_.m_directionRateTolerance_) {
                    return false;
                }
                return true;
            }

            bool DirectionTurnRateRequirementType::operator != (const DirectionTurnRateRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionTurnRateRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "directionRate: " << std::setprecision(15) << sample.directionRate ()<<", ";
                o << "directionRateTolerance: " << sample.directionRateTolerance ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

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
        struct native_type_code< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionTurnRateRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"directionRate",/* Member name */
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
                        (char *)"directionRateTolerance",/* Member name */
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

                static DDS_TypeCode DirectionTurnRateRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionTurnRateRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DirectionTurnRateRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionTurnRateRequirementType*/

                if (is_initialized) {
                    return &DirectionTurnRateRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionTurnRateRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionTurnRateRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                DirectionTurnRateRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DirectionTurnRateRequirementType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DirectionTurnRateRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionTurnRateRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionTurnRateRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionTurnRateRequirementType *sample;

                static RTIXCdrMemberAccessInfo DirectionTurnRateRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionTurnRateRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionTurnRateRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionTurnRateRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionTurnRateRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->directionRate() - (char *)sample);

                DirectionTurnRateRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->directionRateTolerance() - (char *)sample);

                DirectionTurnRateRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionTurnRateRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionTurnRateRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionTurnRateRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionTurnRateRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionTurnRateRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionTurnRateRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType >;

                DirectionTurnRateRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionTurnRateRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionTurnRateRequirementType_g_typePlugin = 
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

                return &DirectionTurnRateRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType >::reset_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementType& sample) 
        {
            sample.directionRate(0.0);
            ::rti::topic::reset_sample(sample.directionRateTolerance());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType >::allocate_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
