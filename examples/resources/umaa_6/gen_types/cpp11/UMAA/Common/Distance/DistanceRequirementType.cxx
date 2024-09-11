

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DistanceRequirementType.idl
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
#include "DistanceRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DistanceRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Distance {

            // ---- DistanceRequirementType: 

            DistanceRequirementType::DistanceRequirementType() :
                m_distance_ (0.0)  {

            }   

            DistanceRequirementType::DistanceRequirementType (double distance_,const ::dds::core::optional< ::UMAA::Common::Distance::DistanceToleranceType >& distanceTolerance_):
                m_distance_(distance_), 
                m_distanceTolerance_(distanceTolerance_) {
            }

            void DistanceRequirementType::swap(DistanceRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_distance_, other_.m_distance_);
                swap(m_distanceTolerance_, other_.m_distanceTolerance_);
            }  

            bool DistanceRequirementType::operator == (const DistanceRequirementType& other_) const {
                if (std::fabs(m_distance_ - other_.m_distance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distance_ - other_.m_distance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_distanceTolerance_ != other_.m_distanceTolerance_) {
                    return false;
                }
                return true;
            }

            bool DistanceRequirementType::operator != (const DistanceRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DistanceRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "distance: " << std::setprecision(15) << sample.distance ()<<", ";
                o << "distanceTolerance: " << sample.distanceTolerance ();
                o <<"]";
                return o;
            }

        } // namespace Distance  

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
        struct native_type_code< ::UMAA::Common::Distance::DistanceRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DistanceRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"distance",/* Member name */
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
                        (char *)"distanceTolerance",/* Member name */
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

                static DDS_TypeCode DistanceRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Distance::DistanceRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DistanceRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DistanceRequirementType*/

                if (is_initialized) {
                    return &DistanceRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DistanceRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DistanceRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                DistanceRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Distance::DistanceToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                DistanceRequirementType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceRequirementType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DistanceRequirementType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceRequirementType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DistanceRequirementType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceRequirementType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DistanceRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                DistanceRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &DistanceRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Distance::DistanceRequirementType *sample;

                static RTIXCdrMemberAccessInfo DistanceRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DistanceRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DistanceRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Distance::DistanceRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                DistanceRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distance() - (char *)sample);

                DistanceRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceTolerance() - (char *)sample);

                DistanceRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                DistanceRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Distance::DistanceRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DistanceRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DistanceRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DistanceRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DistanceRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Distance::DistanceRequirementType >;

                DistanceRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DistanceRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DistanceRequirementType_g_typePlugin = 
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

                return &DistanceRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Distance::DistanceRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Distance::DistanceRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Distance::DistanceRequirementType >::reset_sample(::UMAA::Common::Distance::DistanceRequirementType& sample) 
        {
            sample.distance(0.0);
            ::rti::topic::reset_sample(sample.distanceTolerance());
        }

        void topic_type_support< ::UMAA::Common::Distance::DistanceRequirementType >::allocate_sample(::UMAA::Common::Distance::DistanceRequirementType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
