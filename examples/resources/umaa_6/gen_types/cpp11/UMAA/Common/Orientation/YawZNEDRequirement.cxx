

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YawZNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "YawZNEDRequirementPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "YawZNEDRequirement.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- YawZNEDRequirement: 

            YawZNEDRequirement::YawZNEDRequirement()  {

            }   

            YawZNEDRequirement::YawZNEDRequirement (const ::UMAA::Common::Orientation::YawZNEDType& yaw_,const ::dds::core::optional< ::UMAA::Common::Orientation::YawZNEDTolerance >& yawTolerance_):
                m_yaw_(yaw_), 
                m_yawTolerance_(yawTolerance_) {
            }

            void YawZNEDRequirement::swap(YawZNEDRequirement& other_)  noexcept 
            {
                using std::swap;
                swap(m_yaw_, other_.m_yaw_);
                swap(m_yawTolerance_, other_.m_yawTolerance_);
            }  

            bool YawZNEDRequirement::operator == (const YawZNEDRequirement& other_) const {
                if (m_yaw_ != other_.m_yaw_) {
                    return false;
                }
                if (m_yawTolerance_ != other_.m_yawTolerance_) {
                    return false;
                }
                return true;
            }

            bool YawZNEDRequirement::operator != (const YawZNEDRequirement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const YawZNEDRequirement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "yaw: " << sample.yaw ()<<", ";
                o << "yawTolerance: " << sample.yawTolerance ();
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
        struct native_type_code< ::UMAA::Common::Orientation::YawZNEDRequirement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member YawZNEDRequirement_g_tc_members[2]=
                {

                    {
                        (char *)"yaw",/* Member name */
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
                        (char *)"yawTolerance",/* Member name */
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

                static DDS_TypeCode YawZNEDRequirement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::YawZNEDRequirement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        YawZNEDRequirement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for YawZNEDRequirement*/

                if (is_initialized) {
                    return &YawZNEDRequirement_g_tc;
                }

                is_initialized = RTI_TRUE;

                YawZNEDRequirement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                YawZNEDRequirement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::YawZNEDType>::get().native();
                YawZNEDRequirement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::YawZNEDTolerance>::get().native();

                /* Initialize the values for member annotations. */

                YawZNEDRequirement_g_tc._data._sampleAccessInfo = sample_access_info();
                YawZNEDRequirement_g_tc._data._typePlugin = type_plugin_info();    

                return &YawZNEDRequirement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::YawZNEDRequirement *sample;

                static RTIXCdrMemberAccessInfo YawZNEDRequirement_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo YawZNEDRequirement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &YawZNEDRequirement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::YawZNEDRequirement);
                if (sample == NULL) {
                    return NULL;
                }

                YawZNEDRequirement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yaw() - (char *)sample);

                YawZNEDRequirement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawTolerance() - (char *)sample);

                YawZNEDRequirement_g_sampleAccessInfo.memberAccessInfos = 
                YawZNEDRequirement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::YawZNEDRequirement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        YawZNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        YawZNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                YawZNEDRequirement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                YawZNEDRequirement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::YawZNEDRequirement >;

                YawZNEDRequirement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &YawZNEDRequirement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin YawZNEDRequirement_g_typePlugin = 
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

                return &YawZNEDRequirement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::YawZNEDRequirement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::YawZNEDRequirement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::YawZNEDRequirement >::reset_sample(::UMAA::Common::Orientation::YawZNEDRequirement& sample) 
        {
            ::rti::topic::reset_sample(sample.yaw());
            ::rti::topic::reset_sample(sample.yawTolerance());
        }

        void topic_type_support< ::UMAA::Common::Orientation::YawZNEDRequirement >::allocate_sample(::UMAA::Common::Orientation::YawZNEDRequirement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.yaw(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
