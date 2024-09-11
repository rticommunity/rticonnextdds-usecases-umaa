

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionTurnRateRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DirectionTurnRateRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionTurnRateRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- DirectionTurnRateRequirementVariantType: 

            DirectionTurnRateRequirementVariantType::DirectionTurnRateRequirementVariantType()  {

            }   

            DirectionTurnRateRequirementVariantType::DirectionTurnRateRequirementVariantType (const ::UMAA::Common::Orientation::DirectionTurnRateRequirementType& directionRate_):
                m_directionRate_(directionRate_) {
            }

            void DirectionTurnRateRequirementVariantType::swap(DirectionTurnRateRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_directionRate_, other_.m_directionRate_);
            }  

            bool DirectionTurnRateRequirementVariantType::operator == (const DirectionTurnRateRequirementVariantType& other_) const {
                if (m_directionRate_ != other_.m_directionRate_) {
                    return false;
                }
                return true;
            }

            bool DirectionTurnRateRequirementVariantType::operator != (const DirectionTurnRateRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionTurnRateRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "directionRate: " << sample.directionRate ();
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
        struct native_type_code< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionTurnRateRequirementVariantType_g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode DirectionTurnRateRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DirectionTurnRateRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionTurnRateRequirementVariantType*/

                if (is_initialized) {
                    return &DirectionTurnRateRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionTurnRateRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionTurnRateRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType>::get().native();

                /* Initialize the values for member annotations. */

                DirectionTurnRateRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionTurnRateRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionTurnRateRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo DirectionTurnRateRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionTurnRateRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionTurnRateRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionTurnRateRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->directionRate() - (char *)sample);

                DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionTurnRateRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType >;

                DirectionTurnRateRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionTurnRateRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionTurnRateRequirementVariantType_g_typePlugin = 
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

                return &DirectionTurnRateRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType >::reset_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.directionRate());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType >::allocate_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.directionRate(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
