

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeamWidthSpecsType.idl
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
#include "BeamWidthSpecsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BeamWidthSpecsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace IlluminatorSpecs {

            // ---- BeamWidthSpecsType: 

            BeamWidthSpecsType::BeamWidthSpecsType() :
                m_maxBeamWidth_ (0.0) ,
                m_minBeamWidth_ (0.0)  {

            }   

            BeamWidthSpecsType::BeamWidthSpecsType (double maxBeamWidth_,double minBeamWidth_):
                m_maxBeamWidth_(maxBeamWidth_), 
                m_minBeamWidth_(minBeamWidth_) {
            }

            void BeamWidthSpecsType::swap(BeamWidthSpecsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxBeamWidth_, other_.m_maxBeamWidth_);
                swap(m_minBeamWidth_, other_.m_minBeamWidth_);
            }  

            bool BeamWidthSpecsType::operator == (const BeamWidthSpecsType& other_) const {
                if (std::fabs(m_maxBeamWidth_ - other_.m_maxBeamWidth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxBeamWidth_ - other_.m_maxBeamWidth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minBeamWidth_ - other_.m_minBeamWidth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minBeamWidth_ - other_.m_minBeamWidth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool BeamWidthSpecsType::operator != (const BeamWidthSpecsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BeamWidthSpecsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxBeamWidth: " << std::setprecision(15) << sample.maxBeamWidth ()<<", ";
                o << "minBeamWidth: " << std::setprecision(15) << sample.minBeamWidth ();
                o <<"]";
                return o;
            }

        } // namespace IlluminatorSpecs  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BeamWidthSpecsType_g_tc_members[2]=
                {

                    {
                        (char *)"maxBeamWidth",/* Member name */
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
                        (char *)"minBeamWidth",/* Member name */
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

                static DDS_TypeCode BeamWidthSpecsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BeamWidthSpecsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BeamWidthSpecsType*/

                if (is_initialized) {
                    return &BeamWidthSpecsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BeamWidthSpecsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BeamWidthSpecsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t>::get().native();
                BeamWidthSpecsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BeamWidthSpecsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BeamWidthSpecsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BeamWidthSpecsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BeamWidthSpecsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BeamWidthSpecsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BeamWidthSpecsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BeamWidthSpecsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BeamWidthSpecsType_g_tc._data._sampleAccessInfo = sample_access_info();
                BeamWidthSpecsType_g_tc._data._typePlugin = type_plugin_info();    

                return &BeamWidthSpecsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType *sample;

                static RTIXCdrMemberAccessInfo BeamWidthSpecsType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BeamWidthSpecsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BeamWidthSpecsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType);
                if (sample == NULL) {
                    return NULL;
                }

                BeamWidthSpecsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxBeamWidth() - (char *)sample);

                BeamWidthSpecsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minBeamWidth() - (char *)sample);

                BeamWidthSpecsType_g_sampleAccessInfo.memberAccessInfos = 
                BeamWidthSpecsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BeamWidthSpecsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BeamWidthSpecsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BeamWidthSpecsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BeamWidthSpecsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >;

                BeamWidthSpecsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BeamWidthSpecsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BeamWidthSpecsType_g_typePlugin = 
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

                return &BeamWidthSpecsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >::reset_sample(::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType& sample) 
        {
            sample.maxBeamWidth(0.0);
            sample.minBeamWidth(0.0);
        }

        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >::allocate_sample(::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
