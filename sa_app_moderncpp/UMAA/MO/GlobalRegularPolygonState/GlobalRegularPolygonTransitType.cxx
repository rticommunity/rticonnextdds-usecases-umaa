

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonTransitType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GlobalRegularPolygonTransitType.hpp"
#include "GlobalRegularPolygonTransitTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalRegularPolygonState {

            // ---- GlobalRegularPolygonTransitType: 

            GlobalRegularPolygonTransitType::GlobalRegularPolygonTransitType() :
                m_transitElevationAchieved_ (0) ,
                m_transitSpeedAchieved_ (0)  {
            }   

            GlobalRegularPolygonTransitType::GlobalRegularPolygonTransitType (bool transitElevationAchieved,bool transitSpeedAchieved):
                m_transitElevationAchieved_( transitElevationAchieved ),
                m_transitSpeedAchieved_( transitSpeedAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GlobalRegularPolygonTransitType::GlobalRegularPolygonTransitType(GlobalRegularPolygonTransitType&& other_) OMG_NOEXCEPT  :m_transitElevationAchieved_ (std::move(other_.m_transitElevationAchieved_))
            ,
            m_transitSpeedAchieved_ (std::move(other_.m_transitSpeedAchieved_))
            {
            } 

            GlobalRegularPolygonTransitType& GlobalRegularPolygonTransitType::operator=(GlobalRegularPolygonTransitType&&  other_) OMG_NOEXCEPT {
                GlobalRegularPolygonTransitType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GlobalRegularPolygonTransitType::swap(GlobalRegularPolygonTransitType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_transitElevationAchieved_, other_.m_transitElevationAchieved_);
                swap(m_transitSpeedAchieved_, other_.m_transitSpeedAchieved_);
            }  

            bool GlobalRegularPolygonTransitType::operator == (const GlobalRegularPolygonTransitType& other_) const {
                if (m_transitElevationAchieved_ != other_.m_transitElevationAchieved_) {
                    return false;
                }
                if (m_transitSpeedAchieved_ != other_.m_transitSpeedAchieved_) {
                    return false;
                }
                return true;
            }
            bool GlobalRegularPolygonTransitType::operator != (const GlobalRegularPolygonTransitType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRegularPolygonTransitType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "transitElevationAchieved: " << sample.transitElevationAchieved()<<", ";
                o << "transitSpeedAchieved: " << sample.transitSpeedAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace GlobalRegularPolygonState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRegularPolygonTransitType_g_tc_members[2]=
                {

                    {
                        (char *)"transitElevationAchieved",/* Member name */
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
                        (char *)"transitSpeedAchieved",/* Member name */
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

                static DDS_TypeCode GlobalRegularPolygonTransitType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRegularPolygonTransitType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRegularPolygonTransitType*/

                if (is_initialized) {
                    return &GlobalRegularPolygonTransitType_g_tc;
                }

                GlobalRegularPolygonTransitType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRegularPolygonTransitType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalRegularPolygonTransitType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalRegularPolygonTransitType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRegularPolygonTransitType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRegularPolygonTransitType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRegularPolygonTransitType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRegularPolygonTransitType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRegularPolygonTransitType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalRegularPolygonTransitType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType *sample;

                static RTIXCdrMemberAccessInfo GlobalRegularPolygonTransitType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRegularPolygonTransitType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonTransitType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRegularPolygonTransitType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationAchieved() - (char *)sample);

                GlobalRegularPolygonTransitType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedAchieved() - (char *)sample);

                GlobalRegularPolygonTransitType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRegularPolygonTransitType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRegularPolygonTransitType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRegularPolygonTransitType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRegularPolygonTransitType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRegularPolygonTransitType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >;

                GlobalRegularPolygonTransitType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonTransitType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRegularPolygonTransitType_g_typePlugin = 
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
                    NULL
                };

                return &GlobalRegularPolygonTransitType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitTypePlugin_new,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRegularPolygonTransitTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRegularPolygonTransitTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::from_cdr_buffer(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRegularPolygonTransitTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::reset_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& sample) 
        {
            sample.transitElevationAchieved(0);
            sample.transitSpeedAchieved(0);
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType >::allocate_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

