

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PitchYNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PitchYNEDRequirementPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PitchYNEDRequirement.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- PitchYNEDRequirement: 

            PitchYNEDRequirement::PitchYNEDRequirement()  {

            }   

            PitchYNEDRequirement::PitchYNEDRequirement (const ::UMAA::Common::Orientation::PitchYNEDType& pitch_,const ::dds::core::optional< ::UMAA::Common::Orientation::PitchYNEDTolerance >& pitchTolerance_):
                m_pitch_(pitch_), 
                m_pitchTolerance_(pitchTolerance_) {
            }

            void PitchYNEDRequirement::swap(PitchYNEDRequirement& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitch_, other_.m_pitch_);
                swap(m_pitchTolerance_, other_.m_pitchTolerance_);
            }  

            bool PitchYNEDRequirement::operator == (const PitchYNEDRequirement& other_) const {
                if (m_pitch_ != other_.m_pitch_) {
                    return false;
                }
                if (m_pitchTolerance_ != other_.m_pitchTolerance_) {
                    return false;
                }
                return true;
            }

            bool PitchYNEDRequirement::operator != (const PitchYNEDRequirement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PitchYNEDRequirement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitch: " << sample.pitch ()<<", ";
                o << "pitchTolerance: " << sample.pitchTolerance ();
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
        struct native_type_code< ::UMAA::Common::Orientation::PitchYNEDRequirement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PitchYNEDRequirement_g_tc_members[2]=
                {

                    {
                        (char *)"pitch",/* Member name */
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
                        (char *)"pitchTolerance",/* Member name */
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

                static DDS_TypeCode PitchYNEDRequirement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::PitchYNEDRequirement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PitchYNEDRequirement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PitchYNEDRequirement*/

                if (is_initialized) {
                    return &PitchYNEDRequirement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PitchYNEDRequirement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PitchYNEDRequirement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::PitchYNEDType>::get().native();
                PitchYNEDRequirement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::PitchYNEDTolerance>::get().native();

                /* Initialize the values for member annotations. */

                PitchYNEDRequirement_g_tc._data._sampleAccessInfo = sample_access_info();
                PitchYNEDRequirement_g_tc._data._typePlugin = type_plugin_info();    

                return &PitchYNEDRequirement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::PitchYNEDRequirement *sample;

                static RTIXCdrMemberAccessInfo PitchYNEDRequirement_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PitchYNEDRequirement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PitchYNEDRequirement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::PitchYNEDRequirement);
                if (sample == NULL) {
                    return NULL;
                }

                PitchYNEDRequirement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitch() - (char *)sample);

                PitchYNEDRequirement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchTolerance() - (char *)sample);

                PitchYNEDRequirement_g_sampleAccessInfo.memberAccessInfos = 
                PitchYNEDRequirement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::PitchYNEDRequirement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PitchYNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PitchYNEDRequirement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PitchYNEDRequirement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PitchYNEDRequirement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::PitchYNEDRequirement >;

                PitchYNEDRequirement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PitchYNEDRequirement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PitchYNEDRequirement_g_typePlugin = 
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

                return &PitchYNEDRequirement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::PitchYNEDRequirement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::PitchYNEDRequirement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::PitchYNEDRequirement >::reset_sample(::UMAA::Common::Orientation::PitchYNEDRequirement& sample) 
        {
            ::rti::topic::reset_sample(sample.pitch());
            ::rti::topic::reset_sample(sample.pitchTolerance());
        }

        void topic_type_support< ::UMAA::Common::Orientation::PitchYNEDRequirement >::allocate_sample(::UMAA::Common::Orientation::PitchYNEDRequirement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.pitch(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
