

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionWindRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DirectionWindRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionWindRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- DirectionWindRequirementVariantType: 

            DirectionWindRequirementVariantType::DirectionWindRequirementVariantType()  {

            }   

            DirectionWindRequirementVariantType::DirectionWindRequirementVariantType (const ::UMAA::Common::Orientation::DirectionWindRequirement& direction_):
                m_direction_(direction_) {
            }

            void DirectionWindRequirementVariantType::swap(DirectionWindRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_direction_, other_.m_direction_);
            }  

            bool DirectionWindRequirementVariantType::operator == (const DirectionWindRequirementVariantType& other_) const {
                if (m_direction_ != other_.m_direction_) {
                    return false;
                }
                return true;
            }

            bool DirectionWindRequirementVariantType::operator != (const DirectionWindRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionWindRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "direction: " << sample.direction ();
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
        struct native_type_code< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionWindRequirementVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"direction",/* Member name */
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

                static DDS_TypeCode DirectionWindRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionWindRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DirectionWindRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionWindRequirementVariantType*/

                if (is_initialized) {
                    return &DirectionWindRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionWindRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionWindRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionWindRequirement>::get().native();

                /* Initialize the values for member annotations. */

                DirectionWindRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionWindRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionWindRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionWindRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo DirectionWindRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionWindRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionWindRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionWindRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionWindRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->direction() - (char *)sample);

                DirectionWindRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionWindRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionWindRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionWindRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionWindRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionWindRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionWindRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType >;

                DirectionWindRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionWindRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionWindRequirementVariantType_g_typePlugin = 
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

                return &DirectionWindRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType >::reset_sample(::UMAA::Common::Orientation::DirectionWindRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.direction());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionWindRequirementVariantType >::allocate_sample(::UMAA::Common::Orientation::DirectionWindRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.direction(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
