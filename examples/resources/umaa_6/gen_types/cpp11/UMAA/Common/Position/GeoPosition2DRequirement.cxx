

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition2DRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GeoPosition2DRequirementPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GeoPosition2DRequirement.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Position {

            // ---- GeoPosition2DRequirement: 

            GeoPosition2DRequirement::GeoPosition2DRequirement()  {

            }   

            GeoPosition2DRequirement::GeoPosition2DRequirement (const ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >& tolerance_,const ::UMAA::Common::Measurement::GeoPosition2D& value_):
                m_tolerance_(tolerance_), 
                m_value_(value_) {
            }

            void GeoPosition2DRequirement::swap(GeoPosition2DRequirement& other_)  noexcept 
            {
                using std::swap;
                swap(m_tolerance_, other_.m_tolerance_);
                swap(m_value_, other_.m_value_);
            }  

            bool GeoPosition2DRequirement::operator == (const GeoPosition2DRequirement& other_) const {
                if (m_tolerance_ != other_.m_tolerance_) {
                    return false;
                }
                if (m_value_ != other_.m_value_) {
                    return false;
                }
                return true;
            }

            bool GeoPosition2DRequirement::operator != (const GeoPosition2DRequirement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GeoPosition2DRequirement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "tolerance: " << sample.tolerance ()<<", ";
                o << "value: " << sample.value ();
                o <<"]";
                return o;
            }

        } // namespace Position  

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
        struct native_type_code< ::UMAA::Common::Position::GeoPosition2DRequirement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GeoPosition2DRequirement_g_tc_members[2]=
                {

                    {
                        (char *)"tolerance",/* Member name */
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
                        (char *)"value",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GeoPosition2DRequirement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Position::GeoPosition2DRequirement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GeoPosition2DRequirement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GeoPosition2DRequirement*/

                if (is_initialized) {
                    return &GeoPosition2DRequirement_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeoPosition2DRequirement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeoPosition2DRequirement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Position::GeoPosition2DTolerance>::get().native();
                GeoPosition2DRequirement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();

                /* Initialize the values for member annotations. */

                GeoPosition2DRequirement_g_tc._data._sampleAccessInfo = sample_access_info();
                GeoPosition2DRequirement_g_tc._data._typePlugin = type_plugin_info();    

                return &GeoPosition2DRequirement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Position::GeoPosition2DRequirement *sample;

                static RTIXCdrMemberAccessInfo GeoPosition2DRequirement_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeoPosition2DRequirement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeoPosition2DRequirement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Position::GeoPosition2DRequirement);
                if (sample == NULL) {
                    return NULL;
                }

                GeoPosition2DRequirement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tolerance() - (char *)sample);

                GeoPosition2DRequirement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value() - (char *)sample);

                GeoPosition2DRequirement_g_sampleAccessInfo.memberAccessInfos = 
                GeoPosition2DRequirement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Position::GeoPosition2DRequirement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeoPosition2DRequirement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeoPosition2DRequirement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeoPosition2DRequirement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeoPosition2DRequirement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Position::GeoPosition2DRequirement >;

                GeoPosition2DRequirement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeoPosition2DRequirement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeoPosition2DRequirement_g_typePlugin = 
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

                return &GeoPosition2DRequirement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Position::GeoPosition2DRequirement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Position::GeoPosition2DRequirement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Position::GeoPosition2DRequirement >::reset_sample(::UMAA::Common::Position::GeoPosition2DRequirement& sample) 
        {
            ::rti::topic::reset_sample(sample.tolerance());
            ::rti::topic::reset_sample(sample.value());
        }

        void topic_type_support< ::UMAA::Common::Position::GeoPosition2DRequirement >::allocate_sample(::UMAA::Common::Position::GeoPosition2DRequirement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.value(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
