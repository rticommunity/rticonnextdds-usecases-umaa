

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackPatternType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GlobalRacetrackPatternType.hpp"
#include "GlobalRacetrackPatternTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalRacetrackState {

            // ---- GlobalRacetrackPatternType: 

            GlobalRacetrackPatternType::GlobalRacetrackPatternType() :
                m_elevationAchieved_ (0) ,
                m_positionAchieved_ (0) ,
                m_speedAchieved_ (0)  {
            }   

            GlobalRacetrackPatternType::GlobalRacetrackPatternType (bool elevationAchieved,bool positionAchieved,bool speedAchieved):
                m_elevationAchieved_( elevationAchieved ),
                m_positionAchieved_( positionAchieved ),
                m_speedAchieved_( speedAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GlobalRacetrackPatternType::GlobalRacetrackPatternType(GlobalRacetrackPatternType&& other_) OMG_NOEXCEPT  :m_elevationAchieved_ (std::move(other_.m_elevationAchieved_))
            ,
            m_positionAchieved_ (std::move(other_.m_positionAchieved_))
            ,
            m_speedAchieved_ (std::move(other_.m_speedAchieved_))
            {
            } 

            GlobalRacetrackPatternType& GlobalRacetrackPatternType::operator=(GlobalRacetrackPatternType&&  other_) OMG_NOEXCEPT {
                GlobalRacetrackPatternType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GlobalRacetrackPatternType::swap(GlobalRacetrackPatternType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
            }  

            bool GlobalRacetrackPatternType::operator == (const GlobalRacetrackPatternType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_positionAchieved_ != other_.m_positionAchieved_) {
                    return false;
                }
                if (m_speedAchieved_ != other_.m_speedAchieved_) {
                    return false;
                }
                return true;
            }
            bool GlobalRacetrackPatternType::operator != (const GlobalRacetrackPatternType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRacetrackPatternType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved()<<", ";
                o << "positionAchieved: " << sample.positionAchieved()<<", ";
                o << "speedAchieved: " << sample.speedAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace GlobalRacetrackState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRacetrackPatternType_g_tc_members[3]=
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
                        (char *)"positionAchieved",/* Member name */
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
                    }, 
                    {
                        (char *)"speedAchieved",/* Member name */
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

                static DDS_TypeCode GlobalRacetrackPatternType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GlobalRacetrackPatternType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRacetrackPatternType*/

                if (is_initialized) {
                    return &GlobalRacetrackPatternType_g_tc;
                }

                GlobalRacetrackPatternType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRacetrackPatternType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalRacetrackPatternType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalRacetrackPatternType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                GlobalRacetrackPatternType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRacetrackPatternType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRacetrackPatternType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRacetrackPatternType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRacetrackPatternType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalRacetrackPatternType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                GlobalRacetrackPatternType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRacetrackPatternType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalRacetrackPatternType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType *sample;

                static RTIXCdrMemberAccessInfo GlobalRacetrackPatternType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRacetrackPatternType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackPatternType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRacetrackPatternType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                GlobalRacetrackPatternType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                GlobalRacetrackPatternType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                GlobalRacetrackPatternType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRacetrackPatternType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRacetrackPatternType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRacetrackPatternType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRacetrackPatternType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRacetrackPatternType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >;

                GlobalRacetrackPatternType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackPatternType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRacetrackPatternType_g_typePlugin = 
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

                return &GlobalRacetrackPatternType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternTypePlugin_new,
                UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRacetrackPatternTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRacetrackPatternTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::from_cdr_buffer(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRacetrackPatternTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::reset_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample) 
        {
            sample.elevationAchieved(0);
            sample.positionAchieved(0);
            sample.speedAchieved(0);
        }

        void topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType >::allocate_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

