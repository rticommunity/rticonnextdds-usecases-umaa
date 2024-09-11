

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegionDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalRegionDriftTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalRegionDriftType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalDriftState {

            // ---- GlobalRegionDriftType: 

            GlobalRegionDriftType::GlobalRegionDriftType() :
                m_driftRadiusAchieved_ (0) ,
                m_elevationAchieved_ (0)  {

            }   

            GlobalRegionDriftType::GlobalRegionDriftType (bool driftRadiusAchieved_,bool elevationAchieved_):
                m_driftRadiusAchieved_(driftRadiusAchieved_), 
                m_elevationAchieved_(elevationAchieved_) {
            }

            void GlobalRegionDriftType::swap(GlobalRegionDriftType& other_)  noexcept 
            {
                using std::swap;
                swap(m_driftRadiusAchieved_, other_.m_driftRadiusAchieved_);
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
            }  

            bool GlobalRegionDriftType::operator == (const GlobalRegionDriftType& other_) const {
                if (m_driftRadiusAchieved_ != other_.m_driftRadiusAchieved_) {
                    return false;
                }
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                return true;
            }

            bool GlobalRegionDriftType::operator != (const GlobalRegionDriftType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRegionDriftType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "driftRadiusAchieved: " << sample.driftRadiusAchieved ()<<", ";
                o << "elevationAchieved: " << sample.elevationAchieved ();
                o <<"]";
                return o;
            }

        } // namespace GlobalDriftState  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRegionDriftType_g_tc_members[2]=
                {

                    {
                        (char *)"driftRadiusAchieved",/* Member name */
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
                        (char *)"elevationAchieved",/* Member name */
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

                static DDS_TypeCode GlobalRegionDriftType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalRegionDriftType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRegionDriftType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRegionDriftType*/

                if (is_initialized) {
                    return &GlobalRegionDriftType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalRegionDriftType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRegionDriftType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalRegionDriftType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalRegionDriftType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRegionDriftType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                GlobalRegionDriftType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRegionDriftType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRegionDriftType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRegionDriftType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalRegionDriftType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType *sample;

                static RTIXCdrMemberAccessInfo GlobalRegionDriftType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRegionDriftType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRegionDriftType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRegionDriftType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->driftRadiusAchieved() - (char *)sample);

                GlobalRegionDriftType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                GlobalRegionDriftType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRegionDriftType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalRegionDriftType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRegionDriftType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRegionDriftType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRegionDriftType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRegionDriftType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType >;

                GlobalRegionDriftType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRegionDriftType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRegionDriftType_g_typePlugin = 
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

                return &GlobalRegionDriftType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType >::reset_sample(::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& sample) 
        {
            sample.driftRadiusAchieved(0);
            sample.elevationAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType >::allocate_sample(::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
