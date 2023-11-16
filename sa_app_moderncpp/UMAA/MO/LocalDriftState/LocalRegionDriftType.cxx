

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegionDriftType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalRegionDriftType.hpp"
#include "LocalRegionDriftTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalDriftState {

            // ---- LocalRegionDriftType: 

            LocalRegionDriftType::LocalRegionDriftType() :
                m_elevationAchieved_ (0) ,
                m_positionAchieved_ (0)  {
            }   

            LocalRegionDriftType::LocalRegionDriftType (bool elevationAchieved,bool positionAchieved):
                m_elevationAchieved_( elevationAchieved ),
                m_positionAchieved_( positionAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalRegionDriftType::LocalRegionDriftType(LocalRegionDriftType&& other_) OMG_NOEXCEPT  :m_elevationAchieved_ (std::move(other_.m_elevationAchieved_))
            ,
            m_positionAchieved_ (std::move(other_.m_positionAchieved_))
            {
            } 

            LocalRegionDriftType& LocalRegionDriftType::operator=(LocalRegionDriftType&&  other_) OMG_NOEXCEPT {
                LocalRegionDriftType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalRegionDriftType::swap(LocalRegionDriftType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
            }  

            bool LocalRegionDriftType::operator == (const LocalRegionDriftType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_positionAchieved_ != other_.m_positionAchieved_) {
                    return false;
                }
                return true;
            }
            bool LocalRegionDriftType::operator != (const LocalRegionDriftType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalRegionDriftType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved()<<", ";
                o << "positionAchieved: " << sample.positionAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace LocalDriftState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalDriftState::LocalRegionDriftType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRegionDriftType_g_tc_members[2]=
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
                    }
                };

                static DDS_TypeCode LocalRegionDriftType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftState::LocalRegionDriftType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalRegionDriftType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRegionDriftType*/

                if (is_initialized) {
                    return &LocalRegionDriftType_g_tc;
                }

                LocalRegionDriftType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRegionDriftType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalRegionDriftType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LocalRegionDriftType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRegionDriftType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                LocalRegionDriftType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRegionDriftType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                LocalRegionDriftType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRegionDriftType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalRegionDriftType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalDriftState::LocalRegionDriftType *sample;

                static RTIXCdrMemberAccessInfo LocalRegionDriftType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRegionDriftType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRegionDriftType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalDriftState::LocalRegionDriftType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRegionDriftType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalRegionDriftType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                LocalRegionDriftType_g_sampleAccessInfo.memberAccessInfos = 
                LocalRegionDriftType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalDriftState::LocalRegionDriftType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRegionDriftType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRegionDriftType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRegionDriftType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRegionDriftType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalDriftState::LocalRegionDriftType >;

                LocalRegionDriftType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRegionDriftType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRegionDriftType_g_typePlugin = 
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

                return &LocalRegionDriftType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalDriftState::LocalRegionDriftType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalDriftState::LocalRegionDriftType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalDriftState::LocalRegionDriftType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalDriftState::LocalRegionDriftTypePlugin_new,
                UMAA::MO::LocalDriftState::LocalRegionDriftTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalDriftState::LocalRegionDriftType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalDriftState::LocalRegionDriftType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRegionDriftTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRegionDriftTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalRegionDriftType >::from_cdr_buffer(UMAA::MO::LocalDriftState::LocalRegionDriftType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRegionDriftTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalDriftState::LocalRegionDriftType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalRegionDriftType >::reset_sample(UMAA::MO::LocalDriftState::LocalRegionDriftType& sample) 
        {
            sample.elevationAchieved(0);
            sample.positionAchieved(0);
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalRegionDriftType >::allocate_sample(UMAA::MO::LocalDriftState::LocalRegionDriftType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

