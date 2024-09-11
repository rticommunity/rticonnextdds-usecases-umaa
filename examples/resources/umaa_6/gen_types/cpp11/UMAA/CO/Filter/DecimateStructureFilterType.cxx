

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DecimateStructureFilterType.idl
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
#include "DecimateStructureFilterTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DecimateStructureFilterType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace Filter {

            // ---- DecimateStructureFilterType: 

            DecimateStructureFilterType::DecimateStructureFilterType() :
                m_setSendMostRecent_ (0) ,
                m_waitTime_ (0.0)  {

            }   

            DecimateStructureFilterType::DecimateStructureFilterType (bool setSendMostRecent_,double waitTime_):
                m_setSendMostRecent_(setSendMostRecent_), 
                m_waitTime_(waitTime_) {
            }

            void DecimateStructureFilterType::swap(DecimateStructureFilterType& other_)  noexcept 
            {
                using std::swap;
                swap(m_setSendMostRecent_, other_.m_setSendMostRecent_);
                swap(m_waitTime_, other_.m_waitTime_);
            }  

            bool DecimateStructureFilterType::operator == (const DecimateStructureFilterType& other_) const {
                if (m_setSendMostRecent_ != other_.m_setSendMostRecent_) {
                    return false;
                }
                if (std::fabs(m_waitTime_ - other_.m_waitTime_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_waitTime_ - other_.m_waitTime_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool DecimateStructureFilterType::operator != (const DecimateStructureFilterType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DecimateStructureFilterType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "setSendMostRecent: " << sample.setSendMostRecent ()<<", ";
                o << "waitTime: " << std::setprecision(15) << sample.waitTime ();
                o <<"]";
                return o;
            }

        } // namespace Filter  

    } // namespace CO  

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
        struct native_type_code< ::UMAA::CO::Filter::DecimateStructureFilterType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DecimateStructureFilterType_g_tc_members[2]=
                {

                    {
                        (char *)"setSendMostRecent",/* Member name */
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
                        (char *)"waitTime",/* Member name */
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

                static DDS_TypeCode DecimateStructureFilterType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::Filter::DecimateStructureFilterType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DecimateStructureFilterType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DecimateStructureFilterType*/

                if (is_initialized) {
                    return &DecimateStructureFilterType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DecimateStructureFilterType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DecimateStructureFilterType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DecimateStructureFilterType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DecimateStructureFilterType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DecimateStructureFilterType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                DecimateStructureFilterType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DecimateStructureFilterType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DecimateStructureFilterType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DecimateStructureFilterType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DecimateStructureFilterType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DecimateStructureFilterType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DecimateStructureFilterType_g_tc._data._sampleAccessInfo = sample_access_info();
                DecimateStructureFilterType_g_tc._data._typePlugin = type_plugin_info();    

                return &DecimateStructureFilterType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::Filter::DecimateStructureFilterType *sample;

                static RTIXCdrMemberAccessInfo DecimateStructureFilterType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DecimateStructureFilterType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DecimateStructureFilterType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::Filter::DecimateStructureFilterType);
                if (sample == NULL) {
                    return NULL;
                }

                DecimateStructureFilterType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setSendMostRecent() - (char *)sample);

                DecimateStructureFilterType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waitTime() - (char *)sample);

                DecimateStructureFilterType_g_sampleAccessInfo.memberAccessInfos = 
                DecimateStructureFilterType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::Filter::DecimateStructureFilterType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DecimateStructureFilterType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DecimateStructureFilterType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DecimateStructureFilterType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DecimateStructureFilterType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::Filter::DecimateStructureFilterType >;

                DecimateStructureFilterType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DecimateStructureFilterType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DecimateStructureFilterType_g_typePlugin = 
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

                return &DecimateStructureFilterType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::Filter::DecimateStructureFilterType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::Filter::DecimateStructureFilterType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::Filter::DecimateStructureFilterType >::reset_sample(::UMAA::CO::Filter::DecimateStructureFilterType& sample) 
        {
            sample.setSendMostRecent(0);
            sample.waitTime(0.0);
        }

        void topic_type_support< ::UMAA::CO::Filter::DecimateStructureFilterType >::allocate_sample(::UMAA::CO::Filter::DecimateStructureFilterType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
