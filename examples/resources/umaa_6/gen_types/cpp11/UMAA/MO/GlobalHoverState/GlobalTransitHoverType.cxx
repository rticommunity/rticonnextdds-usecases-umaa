

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalTransitHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalTransitHoverTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalTransitHoverType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalHoverState {

            // ---- GlobalTransitHoverType: 

            GlobalTransitHoverType::GlobalTransitHoverType() :
                m_elevationAchieved_ (0) ,
                m_speedAchieved_ (0)  {

            }   

            GlobalTransitHoverType::GlobalTransitHoverType (bool elevationAchieved_,bool speedAchieved_):
                m_elevationAchieved_(elevationAchieved_), 
                m_speedAchieved_(speedAchieved_) {
            }

            void GlobalTransitHoverType::swap(GlobalTransitHoverType& other_)  noexcept 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
            }  

            bool GlobalTransitHoverType::operator == (const GlobalTransitHoverType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_speedAchieved_ != other_.m_speedAchieved_) {
                    return false;
                }
                return true;
            }

            bool GlobalTransitHoverType::operator != (const GlobalTransitHoverType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalTransitHoverType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "speedAchieved: " << sample.speedAchieved ();
                o <<"]";
                return o;
            }

        } // namespace GlobalHoverState  

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
        struct native_type_code< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalTransitHoverType_g_tc_members[2]=
                {

                    {
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"speedAchieved",/* Member name */
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

                static DDS_TypeCode GlobalTransitHoverType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalTransitHoverType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalTransitHoverType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalTransitHoverType*/

                if (is_initialized) {
                    return &GlobalTransitHoverType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalTransitHoverType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalTransitHoverType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalTransitHoverType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalTransitHoverType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalTransitHoverType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                GlobalTransitHoverType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalTransitHoverType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                GlobalTransitHoverType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalTransitHoverType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalTransitHoverType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType *sample;

                static RTIXCdrMemberAccessInfo GlobalTransitHoverType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalTransitHoverType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalTransitHoverType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalTransitHoverType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                GlobalTransitHoverType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                GlobalTransitHoverType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalTransitHoverType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverState::GlobalTransitHoverType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalTransitHoverType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalTransitHoverType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalTransitHoverType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalTransitHoverType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType >;

                GlobalTransitHoverType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalTransitHoverType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalTransitHoverType_g_typePlugin = 
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

                return &GlobalTransitHoverType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType >::reset_sample(::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& sample) 
        {
            sample.elevationAchieved(0);
            sample.speedAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType >::allocate_sample(::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE