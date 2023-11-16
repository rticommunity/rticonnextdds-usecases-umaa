

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalTransitDriftType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GlobalTransitDriftType.hpp"
#include "GlobalTransitDriftTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalDriftState {

            // ---- GlobalTransitDriftType: 

            GlobalTransitDriftType::GlobalTransitDriftType() :
                m_transitElevationAchieved_ (0) ,
                m_transitSpeedAchieved_ (0)  {
            }   

            GlobalTransitDriftType::GlobalTransitDriftType (bool transitElevationAchieved,bool transitSpeedAchieved):
                m_transitElevationAchieved_( transitElevationAchieved ),
                m_transitSpeedAchieved_( transitSpeedAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GlobalTransitDriftType::GlobalTransitDriftType(GlobalTransitDriftType&& other_) OMG_NOEXCEPT  :m_transitElevationAchieved_ (std::move(other_.m_transitElevationAchieved_))
            ,
            m_transitSpeedAchieved_ (std::move(other_.m_transitSpeedAchieved_))
            {
            } 

            GlobalTransitDriftType& GlobalTransitDriftType::operator=(GlobalTransitDriftType&&  other_) OMG_NOEXCEPT {
                GlobalTransitDriftType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GlobalTransitDriftType::swap(GlobalTransitDriftType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_transitElevationAchieved_, other_.m_transitElevationAchieved_);
                swap(m_transitSpeedAchieved_, other_.m_transitSpeedAchieved_);
            }  

            bool GlobalTransitDriftType::operator == (const GlobalTransitDriftType& other_) const {
                if (m_transitElevationAchieved_ != other_.m_transitElevationAchieved_) {
                    return false;
                }
                if (m_transitSpeedAchieved_ != other_.m_transitSpeedAchieved_) {
                    return false;
                }
                return true;
            }
            bool GlobalTransitDriftType::operator != (const GlobalTransitDriftType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalTransitDriftType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "transitElevationAchieved: " << sample.transitElevationAchieved()<<", ";
                o << "transitSpeedAchieved: " << sample.transitSpeedAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace GlobalDriftState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalDriftState::GlobalTransitDriftType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalTransitDriftType_g_tc_members[2]=
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

                static DDS_TypeCode GlobalTransitDriftType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalTransitDriftType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalTransitDriftType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalTransitDriftType*/

                if (is_initialized) {
                    return &GlobalTransitDriftType_g_tc;
                }

                GlobalTransitDriftType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalTransitDriftType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalTransitDriftType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalTransitDriftType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalTransitDriftType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                GlobalTransitDriftType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalTransitDriftType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                GlobalTransitDriftType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalTransitDriftType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalTransitDriftType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalDriftState::GlobalTransitDriftType *sample;

                static RTIXCdrMemberAccessInfo GlobalTransitDriftType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalTransitDriftType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalTransitDriftType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalDriftState::GlobalTransitDriftType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalTransitDriftType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationAchieved() - (char *)sample);

                GlobalTransitDriftType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedAchieved() - (char *)sample);

                GlobalTransitDriftType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalTransitDriftType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalDriftState::GlobalTransitDriftType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalTransitDriftType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalTransitDriftType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalTransitDriftType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalTransitDriftType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >;

                GlobalTransitDriftType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalTransitDriftType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalTransitDriftType_g_typePlugin = 
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

                return &GlobalTransitDriftType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalDriftState::GlobalTransitDriftTypePlugin_new,
                UMAA::MO::GlobalDriftState::GlobalTransitDriftTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalDriftState::GlobalTransitDriftType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalTransitDriftTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalTransitDriftTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::from_cdr_buffer(UMAA::MO::GlobalDriftState::GlobalTransitDriftType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalTransitDriftTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalDriftState::GlobalTransitDriftType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::reset_sample(UMAA::MO::GlobalDriftState::GlobalTransitDriftType& sample) 
        {
            sample.transitElevationAchieved(0);
            sample.transitSpeedAchieved(0);
        }

        void topic_type_support< UMAA::MO::GlobalDriftState::GlobalTransitDriftType >::allocate_sample(UMAA::MO::GlobalDriftState::GlobalTransitDriftType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

