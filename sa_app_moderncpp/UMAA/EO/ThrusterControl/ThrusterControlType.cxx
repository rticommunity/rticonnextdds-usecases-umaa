

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterControlType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ThrusterControlType.hpp"
#include "ThrusterControlTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace ThrusterControl {

            // ---- ThrusterControlType: 

            ThrusterControlType::ThrusterControlType() :
                m_effort_ (0.0) ,
                m_state_(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType::FAULT)  {
            }   

            ThrusterControlType::ThrusterControlType (double effort,const UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state):
                m_effort_( effort ),
                m_state_( state ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ThrusterControlType::ThrusterControlType(ThrusterControlType&& other_) OMG_NOEXCEPT  :m_effort_ (std::move(other_.m_effort_))
            ,
            m_state_ (std::move(other_.m_state_))
            {
            } 

            ThrusterControlType& ThrusterControlType::operator=(ThrusterControlType&&  other_) OMG_NOEXCEPT {
                ThrusterControlType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ThrusterControlType::swap(ThrusterControlType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_effort_, other_.m_effort_);
                swap(m_state_, other_.m_state_);
            }  

            bool ThrusterControlType::operator == (const ThrusterControlType& other_) const {
                if (m_effort_ != other_.m_effort_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                return true;
            }
            bool ThrusterControlType::operator != (const ThrusterControlType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ThrusterControlType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "effort: " << std::setprecision(15) <<sample.effort()<<", ";
                o << "state: " << sample.state() ;
                o <<"]";
                return o;
            }

        } // namespace ThrusterControl  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::ThrusterControl::ThrusterControlType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ThrusterControlType_g_tc_members[2]=
                {

                    {
                        (char *)"effort",/* Member name */
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
                        (char *)"state",/* Member name */
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

                static DDS_TypeCode ThrusterControlType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::ThrusterControl::ThrusterControlType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ThrusterControlType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ThrusterControlType*/

                if (is_initialized) {
                    return &ThrusterControlType_g_tc;
                }

                ThrusterControlType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ThrusterControlType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                ThrusterControlType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType>::get().native();

                /* Initialize the values for member annotations. */
                ThrusterControlType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterControlType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ThrusterControlType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterControlType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ThrusterControlType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterControlType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ThrusterControlType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ThrusterControlType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ThrusterControlType_g_tc._data._sampleAccessInfo = sample_access_info();
                ThrusterControlType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ThrusterControlType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::ThrusterControl::ThrusterControlType *sample;

                static RTIXCdrMemberAccessInfo ThrusterControlType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ThrusterControlType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ThrusterControlType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::ThrusterControl::ThrusterControlType);
                if (sample == NULL) {
                    return NULL;
                }

                ThrusterControlType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->effort() - (char *)sample);

                ThrusterControlType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                ThrusterControlType_g_sampleAccessInfo.memberAccessInfos = 
                ThrusterControlType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::ThrusterControl::ThrusterControlType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ThrusterControlType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ThrusterControlType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ThrusterControlType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ThrusterControlType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::ThrusterControl::ThrusterControlType >;

                ThrusterControlType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ThrusterControlType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ThrusterControlType_g_typePlugin = 
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

                return &ThrusterControlType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::ThrusterControl::ThrusterControlType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::ThrusterControl::ThrusterControlType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::ThrusterControl::ThrusterControlType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::ThrusterControl::ThrusterControlTypePlugin_new,
                UMAA::EO::ThrusterControl::ThrusterControlTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::ThrusterControl::ThrusterControlType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::ThrusterControl::ThrusterControlType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ThrusterControlTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ThrusterControlTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::ThrusterControl::ThrusterControlType >::from_cdr_buffer(UMAA::EO::ThrusterControl::ThrusterControlType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ThrusterControlTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::ThrusterControl::ThrusterControlType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::ThrusterControl::ThrusterControlType >::reset_sample(UMAA::EO::ThrusterControl::ThrusterControlType& sample) 
        {
            sample.effort(0.0);
            sample.state(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType::FAULT);
        }

        void topic_type_support< UMAA::EO::ThrusterControl::ThrusterControlType >::allocate_sample(UMAA::EO::ThrusterControl::ThrusterControlType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
        }

    }
}  

