

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropellerPitchAnglePropulsorRequirementType.idl
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
#include "PropellerPitchAnglePropulsorRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropellerPitchAnglePropulsorRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Angle {

            // ---- PropellerPitchAnglePropulsorRequirementType: 

            PropellerPitchAnglePropulsorRequirementType::PropellerPitchAnglePropulsorRequirementType() :
                m_propellerPitchAnglePropulsor_ (0.0)  {

            }   

            PropellerPitchAnglePropulsorRequirementType::PropellerPitchAnglePropulsorRequirementType (double propellerPitchAnglePropulsor_,const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitchAnglePropulsorTolerance_):
                m_propellerPitchAnglePropulsor_(propellerPitchAnglePropulsor_), 
                m_propellerPitchAnglePropulsorTolerance_(propellerPitchAnglePropulsorTolerance_) {
            }

            void PropellerPitchAnglePropulsorRequirementType::swap(PropellerPitchAnglePropulsorRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_propellerPitchAnglePropulsor_, other_.m_propellerPitchAnglePropulsor_);
                swap(m_propellerPitchAnglePropulsorTolerance_, other_.m_propellerPitchAnglePropulsorTolerance_);
            }  

            bool PropellerPitchAnglePropulsorRequirementType::operator == (const PropellerPitchAnglePropulsorRequirementType& other_) const {
                if (std::fabs(m_propellerPitchAnglePropulsor_ - other_.m_propellerPitchAnglePropulsor_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_propellerPitchAnglePropulsor_ - other_.m_propellerPitchAnglePropulsor_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_propellerPitchAnglePropulsorTolerance_ != other_.m_propellerPitchAnglePropulsorTolerance_) {
                    return false;
                }
                return true;
            }

            bool PropellerPitchAnglePropulsorRequirementType::operator != (const PropellerPitchAnglePropulsorRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropellerPitchAnglePropulsorRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "propellerPitchAnglePropulsor: " << std::setprecision(15) << sample.propellerPitchAnglePropulsor ()<<", ";
                o << "propellerPitchAnglePropulsorTolerance: " << sample.propellerPitchAnglePropulsorTolerance ();
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
        struct native_type_code< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropellerPitchAnglePropulsorRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"propellerPitchAnglePropulsor",/* Member name */
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
                        (char *)"propellerPitchAnglePropulsorTolerance",/* Member name */
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

                static DDS_TypeCode PropellerPitchAnglePropulsorRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropellerPitchAnglePropulsorRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropellerPitchAnglePropulsorRequirementType*/

                if (is_initialized) {
                    return &PropellerPitchAnglePropulsorRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropellerPitchAnglePropulsorRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t>::get().native();
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsorRequirementType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PropellerPitchAnglePropulsorRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropellerPitchAnglePropulsorRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropellerPitchAnglePropulsorRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType *sample;

                static RTIXCdrMemberAccessInfo PropellerPitchAnglePropulsorRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                PropellerPitchAnglePropulsorRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propellerPitchAnglePropulsor() - (char *)sample);

                PropellerPitchAnglePropulsorRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propellerPitchAnglePropulsorTolerance() - (char *)sample);

                PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                PropellerPitchAnglePropulsorRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType >;

                PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropellerPitchAnglePropulsorRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropellerPitchAnglePropulsorRequirementType_g_typePlugin = 
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

                return &PropellerPitchAnglePropulsorRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType >::reset_sample(::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType& sample) 
        {
            sample.propellerPitchAnglePropulsor(0.0);
            ::rti::topic::reset_sample(sample.propellerPitchAnglePropulsorTolerance());
        }

        void topic_type_support< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType >::allocate_sample(::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
