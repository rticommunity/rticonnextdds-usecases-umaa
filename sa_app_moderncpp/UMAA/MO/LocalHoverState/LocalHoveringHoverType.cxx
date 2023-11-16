

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalHoveringHoverType.hpp"
#include "LocalHoveringHoverTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalHoverState {

            // ---- LocalHoveringHoverType: 

            LocalHoveringHoverType::LocalHoveringHoverType() :
                m_elevationAchieved_ (0) ,
                m_headingAchieved_ (0) ,
                m_positionAchieved_ (0)  {
            }   

            LocalHoveringHoverType::LocalHoveringHoverType (bool elevationAchieved,bool headingAchieved,bool positionAchieved):
                m_elevationAchieved_( elevationAchieved ),
                m_headingAchieved_( headingAchieved ),
                m_positionAchieved_( positionAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalHoveringHoverType::LocalHoveringHoverType(LocalHoveringHoverType&& other_) OMG_NOEXCEPT  :m_elevationAchieved_ (std::move(other_.m_elevationAchieved_))
            ,
            m_headingAchieved_ (std::move(other_.m_headingAchieved_))
            ,
            m_positionAchieved_ (std::move(other_.m_positionAchieved_))
            {
            } 

            LocalHoveringHoverType& LocalHoveringHoverType::operator=(LocalHoveringHoverType&&  other_) OMG_NOEXCEPT {
                LocalHoveringHoverType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalHoveringHoverType::swap(LocalHoveringHoverType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_headingAchieved_, other_.m_headingAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
            }  

            bool LocalHoveringHoverType::operator == (const LocalHoveringHoverType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_headingAchieved_ != other_.m_headingAchieved_) {
                    return false;
                }
                if (m_positionAchieved_ != other_.m_positionAchieved_) {
                    return false;
                }
                return true;
            }
            bool LocalHoveringHoverType::operator != (const LocalHoveringHoverType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalHoveringHoverType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved()<<", ";
                o << "headingAchieved: " << sample.headingAchieved()<<", ";
                o << "positionAchieved: " << sample.positionAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace LocalHoverState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalHoverState::LocalHoveringHoverType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalHoveringHoverType_g_tc_members[3]=
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"positionAchieved",/* Member name */
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

                static DDS_TypeCode LocalHoveringHoverType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalHoverState::LocalHoveringHoverType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LocalHoveringHoverType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalHoveringHoverType*/

                if (is_initialized) {
                    return &LocalHoveringHoverType_g_tc;
                }

                LocalHoveringHoverType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalHoveringHoverType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalHoveringHoverType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalHoveringHoverType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LocalHoveringHoverType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalHoveringHoverType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                LocalHoveringHoverType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalHoveringHoverType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                LocalHoveringHoverType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalHoveringHoverType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LocalHoveringHoverType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalHoveringHoverType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalHoveringHoverType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalHoverState::LocalHoveringHoverType *sample;

                static RTIXCdrMemberAccessInfo LocalHoveringHoverType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalHoveringHoverType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalHoveringHoverType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalHoverState::LocalHoveringHoverType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalHoveringHoverType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalHoveringHoverType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingAchieved() - (char *)sample);

                LocalHoveringHoverType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                LocalHoveringHoverType_g_sampleAccessInfo.memberAccessInfos = 
                LocalHoveringHoverType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalHoverState::LocalHoveringHoverType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalHoveringHoverType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalHoveringHoverType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalHoveringHoverType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalHoveringHoverType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalHoverState::LocalHoveringHoverType >;

                LocalHoveringHoverType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalHoveringHoverType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalHoveringHoverType_g_typePlugin = 
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

                return &LocalHoveringHoverType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalHoverState::LocalHoveringHoverTypePlugin_new,
                UMAA::MO::LocalHoverState::LocalHoveringHoverTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalHoveringHoverTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalHoveringHoverTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::from_cdr_buffer(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalHoveringHoverTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalHoverState::LocalHoveringHoverType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::reset_sample(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample) 
        {
            sample.elevationAchieved(0);
            sample.headingAchieved(0);
            sample.positionAchieved(0);
        }

        void topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType >::allocate_sample(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

