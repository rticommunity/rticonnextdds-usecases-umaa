

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RhoAnglePropulsorRequirementType.idl
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
#include "RhoAnglePropulsorRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RhoAnglePropulsorRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Angle {

            // ---- RhoAnglePropulsorRequirementType: 

            RhoAnglePropulsorRequirementType::RhoAnglePropulsorRequirementType() :
                m_rhoAnglePropulsor_ (0.0)  {

            }   

            RhoAnglePropulsorRequirementType::RhoAnglePropulsorRequirementType (double rhoAnglePropulsor_,const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rhoAnglePropulsorTolerance_):
                m_rhoAnglePropulsor_(rhoAnglePropulsor_), 
                m_rhoAnglePropulsorTolerance_(rhoAnglePropulsorTolerance_) {
            }

            void RhoAnglePropulsorRequirementType::swap(RhoAnglePropulsorRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_rhoAnglePropulsor_, other_.m_rhoAnglePropulsor_);
                swap(m_rhoAnglePropulsorTolerance_, other_.m_rhoAnglePropulsorTolerance_);
            }  

            bool RhoAnglePropulsorRequirementType::operator == (const RhoAnglePropulsorRequirementType& other_) const {
                if (std::fabs(m_rhoAnglePropulsor_ - other_.m_rhoAnglePropulsor_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rhoAnglePropulsor_ - other_.m_rhoAnglePropulsor_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_rhoAnglePropulsorTolerance_ != other_.m_rhoAnglePropulsorTolerance_) {
                    return false;
                }
                return true;
            }

            bool RhoAnglePropulsorRequirementType::operator != (const RhoAnglePropulsorRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RhoAnglePropulsorRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "rhoAnglePropulsor: " << std::setprecision(15) << sample.rhoAnglePropulsor ()<<", ";
                o << "rhoAnglePropulsorTolerance: " << sample.rhoAnglePropulsorTolerance ();
                o <<"]";
                return o;
            }

        } // namespace Angle  

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
        struct native_type_code< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RhoAnglePropulsorRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"rhoAnglePropulsor",/* Member name */
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
                        (char *)"rhoAnglePropulsorTolerance",/* Member name */
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

                static DDS_TypeCode RhoAnglePropulsorRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Angle::RhoAnglePropulsorRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RhoAnglePropulsorRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RhoAnglePropulsorRequirementType*/

                if (is_initialized) {
                    return &RhoAnglePropulsorRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RhoAnglePropulsorRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RhoAnglePropulsorRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t>::get().native();
                RhoAnglePropulsorRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsorRequirementType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RhoAnglePropulsorRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                RhoAnglePropulsorRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &RhoAnglePropulsorRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType *sample;

                static RTIXCdrMemberAccessInfo RhoAnglePropulsorRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RhoAnglePropulsorRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RhoAnglePropulsorRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                RhoAnglePropulsorRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rhoAnglePropulsor() - (char *)sample);

                RhoAnglePropulsorRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rhoAnglePropulsorTolerance() - (char *)sample);

                RhoAnglePropulsorRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                RhoAnglePropulsorRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Angle::RhoAnglePropulsorRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RhoAnglePropulsorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RhoAnglePropulsorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RhoAnglePropulsorRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RhoAnglePropulsorRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType >;

                RhoAnglePropulsorRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RhoAnglePropulsorRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RhoAnglePropulsorRequirementType_g_typePlugin = 
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

                return &RhoAnglePropulsorRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType >::reset_sample(::UMAA::Common::Angle::RhoAnglePropulsorRequirementType& sample) 
        {
            sample.rhoAnglePropulsor(0.0);
            ::rti::topic::reset_sample(sample.rhoAnglePropulsorTolerance());
        }

        void topic_type_support< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType >::allocate_sample(::UMAA::Common::Angle::RhoAnglePropulsorRequirementType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
