

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Orientation3DNEDRequirementPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Orientation3DNEDRequirement.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- Orientation3DNEDRequirement: 

            Orientation3DNEDRequirement::Orientation3DNEDRequirement()  {

            }   

            Orientation3DNEDRequirement::Orientation3DNEDRequirement (const ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDRequirement >& pitchY_,const ::dds::core::optional< ::UMAA::Common::Orientation::RollXNEDRequirement >& rollX_,const ::UMAA::Common::Orientation::YawZNEDRequirement& yawZ_):
                m_pitchY_(pitchY_), 
                m_rollX_(rollX_), 
                m_yawZ_(yawZ_) {
            }

            void Orientation3DNEDRequirement::swap(Orientation3DNEDRequirement& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitchY_, other_.m_pitchY_);
                swap(m_rollX_, other_.m_rollX_);
                swap(m_yawZ_, other_.m_yawZ_);
            }  

            bool Orientation3DNEDRequirement::operator == (const Orientation3DNEDRequirement& other_) const {
                if (m_pitchY_ != other_.m_pitchY_) {
                    return false;
                }
                if (m_rollX_ != other_.m_rollX_) {
                    return false;
                }
                if (m_yawZ_ != other_.m_yawZ_) {
                    return false;
                }
                return true;
            }

            bool Orientation3DNEDRequirement::operator != (const Orientation3DNEDRequirement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Orientation3DNEDRequirement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchY: " << sample.pitchY ()<<", ";
                o << "rollX: " << sample.rollX ()<<", ";
                o << "yawZ: " << sample.yawZ ();
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
        struct native_type_code< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Orientation3DNEDRequirement_g_tc_members[3]=
                {

                    {
                        (char *)"pitchY",/* Member name */
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
                        (char *)"rollX",/* Member name */
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
                        (char *)"yawZ",/* Member name */
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
                    }
                };

                static DDS_TypeCode Orientation3DNEDRequirement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::Orientation3DNEDRequirement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Orientation3DNEDRequirement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Orientation3DNEDRequirement*/

                if (is_initialized) {
                    return &Orientation3DNEDRequirement_g_tc;
                }

                is_initialized = RTI_TRUE;

                Orientation3DNEDRequirement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Orientation3DNEDRequirement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::PitchYNEDRequirement>::get().native();
                Orientation3DNEDRequirement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::RollXNEDRequirement>::get().native();
                Orientation3DNEDRequirement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::YawZNEDRequirement>::get().native();

                /* Initialize the values for member annotations. */

                Orientation3DNEDRequirement_g_tc._data._sampleAccessInfo = sample_access_info();
                Orientation3DNEDRequirement_g_tc._data._typePlugin = type_plugin_info();    

                return &Orientation3DNEDRequirement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::Orientation3DNEDRequirement *sample;

                static RTIXCdrMemberAccessInfo Orientation3DNEDRequirement_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Orientation3DNEDRequirement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Orientation3DNEDRequirement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::Orientation3DNEDRequirement);
                if (sample == NULL) {
                    return NULL;
                }

                Orientation3DNEDRequirement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchY() - (char *)sample);

                Orientation3DNEDRequirement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollX() - (char *)sample);

                Orientation3DNEDRequirement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawZ() - (char *)sample);

                Orientation3DNEDRequirement_g_sampleAccessInfo.memberAccessInfos = 
                Orientation3DNEDRequirement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::Orientation3DNEDRequirement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Orientation3DNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Orientation3DNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Orientation3DNEDRequirement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Orientation3DNEDRequirement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >;

                Orientation3DNEDRequirement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Orientation3DNEDRequirement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Orientation3DNEDRequirement_g_typePlugin = 
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

                return &Orientation3DNEDRequirement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >::reset_sample(::UMAA::Common::Orientation::Orientation3DNEDRequirement& sample) 
        {
            ::rti::topic::reset_sample(sample.pitchY());
            ::rti::topic::reset_sample(sample.rollX());
            ::rti::topic::reset_sample(sample.yawZ());
        }

        void topic_type_support< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >::allocate_sample(::UMAA::Common::Orientation::Orientation3DNEDRequirement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.yawZ(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
