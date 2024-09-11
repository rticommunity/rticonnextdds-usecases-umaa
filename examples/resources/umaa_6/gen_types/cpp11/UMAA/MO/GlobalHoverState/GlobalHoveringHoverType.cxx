

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalHoveringHoverTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalHoveringHoverType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalHoverState {

            // ---- GlobalHoveringHoverType: 

            GlobalHoveringHoverType::GlobalHoveringHoverType() :
                m_elevationAchieved_ (0) ,
                m_hoverRadiusAchieved_ (0)  {

            }   

            GlobalHoveringHoverType::GlobalHoveringHoverType (bool elevationAchieved_,const ::dds::core::optional< bool >& headingAchieved_,bool hoverRadiusAchieved_):
                m_elevationAchieved_(elevationAchieved_), 
                m_headingAchieved_(headingAchieved_), 
                m_hoverRadiusAchieved_(hoverRadiusAchieved_) {
            }

            void GlobalHoveringHoverType::swap(GlobalHoveringHoverType& other_)  noexcept 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_headingAchieved_, other_.m_headingAchieved_);
                swap(m_hoverRadiusAchieved_, other_.m_hoverRadiusAchieved_);
            }  

            bool GlobalHoveringHoverType::operator == (const GlobalHoveringHoverType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_headingAchieved_ != other_.m_headingAchieved_) {
                    return false;
                }
                if (m_hoverRadiusAchieved_ != other_.m_hoverRadiusAchieved_) {
                    return false;
                }
                return true;
            }

            bool GlobalHoveringHoverType::operator != (const GlobalHoveringHoverType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalHoveringHoverType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "headingAchieved: " << sample.headingAchieved ()<<", ";
                o << "hoverRadiusAchieved: " << sample.hoverRadiusAchieved ();
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
        struct native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoveringHoverType_g_tc_members[3]=
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
                        (char *)"headingAchieved",/* Member name */
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
                        (char *)"hoverRadiusAchieved",/* Member name */
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

                static DDS_TypeCode GlobalHoveringHoverType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoveringHoverType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GlobalHoveringHoverType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoveringHoverType*/

                if (is_initialized) {
                    return &GlobalHoveringHoverType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalHoveringHoverType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoveringHoverType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalHoveringHoverType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalHoveringHoverType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalHoveringHoverType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalHoveringHoverType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                GlobalHoveringHoverType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalHoveringHoverType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                GlobalHoveringHoverType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoveringHoverType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalHoveringHoverType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType *sample;

                static RTIXCdrMemberAccessInfo GlobalHoveringHoverType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoveringHoverType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoveringHoverType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoveringHoverType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                GlobalHoveringHoverType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingAchieved() - (char *)sample);

                GlobalHoveringHoverType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hoverRadiusAchieved() - (char *)sample);

                GlobalHoveringHoverType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoveringHoverType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoveringHoverType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoveringHoverType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoveringHoverType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoveringHoverType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType >;

                GlobalHoveringHoverType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoveringHoverType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoveringHoverType_g_typePlugin = 
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

                return &GlobalHoveringHoverType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType >::reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& sample) 
        {
            sample.elevationAchieved(0);
            ::rti::topic::reset_sample(sample.headingAchieved());
            sample.hoverRadiusAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType >::allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
