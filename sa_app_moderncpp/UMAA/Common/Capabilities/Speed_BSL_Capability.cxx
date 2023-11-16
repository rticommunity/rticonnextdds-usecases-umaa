

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Speed_BSL_Capability.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Speed_BSL_Capability.hpp"
#include "Speed_BSL_CapabilityPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Capabilities {

            // ---- Speed_BSL_Capability: 

            Speed_BSL_Capability::Speed_BSL_Capability() :
                m_speed_ (0.0)  {
            }   

            Speed_BSL_Capability::Speed_BSL_Capability (double speed,const UMAA::Common::MeasurementSpecifications::Speed_BSL_Specification& speedDomain,const UMAA::Common::Requirements::Speed_BSL_Requirement& speedSetPoint):
                m_speed_( speed ),
                m_speedDomain_( speedDomain ),
                m_speedSetPoint_( speedSetPoint ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            Speed_BSL_Capability::Speed_BSL_Capability(Speed_BSL_Capability&& other_) OMG_NOEXCEPT  :m_speed_ (std::move(other_.m_speed_))
            ,
            m_speedDomain_ (std::move(other_.m_speedDomain_))
            ,
            m_speedSetPoint_ (std::move(other_.m_speedSetPoint_))
            {
            } 

            Speed_BSL_Capability& Speed_BSL_Capability::operator=(Speed_BSL_Capability&&  other_) OMG_NOEXCEPT {
                Speed_BSL_Capability tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void Speed_BSL_Capability::swap(Speed_BSL_Capability& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_speed_, other_.m_speed_);
                swap(m_speedDomain_, other_.m_speedDomain_);
                swap(m_speedSetPoint_, other_.m_speedSetPoint_);
            }  

            bool Speed_BSL_Capability::operator == (const Speed_BSL_Capability& other_) const {
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (m_speedDomain_ != other_.m_speedDomain_) {
                    return false;
                }
                if (m_speedSetPoint_ != other_.m_speedSetPoint_) {
                    return false;
                }
                return true;
            }
            bool Speed_BSL_Capability::operator != (const Speed_BSL_Capability& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Speed_BSL_Capability& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "speed: " << std::setprecision(15) <<sample.speed()<<", ";
                o << "speedDomain: " << sample.speedDomain()<<", ";
                o << "speedSetPoint: " << sample.speedSetPoint() ;
                o <<"]";
                return o;
            }

        } // namespace Capabilities  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Capabilities::Speed_BSL_Capability > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Speed_BSL_Capability_g_tc_members[3]=
                {

                    {
                        (char *)"speed",/* Member name */
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
                        (char *)"speedDomain",/* Member name */
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
                        (char *)"speedSetPoint",/* Member name */
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

                static DDS_TypeCode Speed_BSL_Capability_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Capabilities::Speed_BSL_Capability", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Speed_BSL_Capability_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Speed_BSL_Capability*/

                if (is_initialized) {
                    return &Speed_BSL_Capability_g_tc;
                }

                Speed_BSL_Capability_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Speed_BSL_Capability_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Speed_BSL_AliasTag_t>::get().native();
                Speed_BSL_Capability_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MeasurementSpecifications::Speed_BSL_Specification>::get().native();
                Speed_BSL_Capability_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Requirements::Speed_BSL_Requirement>::get().native();

                /* Initialize the values for member annotations. */
                Speed_BSL_Capability_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_Capability_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Speed_BSL_Capability_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_Capability_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Speed_BSL_Capability_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_Capability_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Speed_BSL_Capability_g_tc._data._sampleAccessInfo = sample_access_info();
                Speed_BSL_Capability_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Speed_BSL_Capability_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Capabilities::Speed_BSL_Capability *sample;

                static RTIXCdrMemberAccessInfo Speed_BSL_Capability_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Speed_BSL_Capability_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Speed_BSL_Capability_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Capabilities::Speed_BSL_Capability);
                if (sample == NULL) {
                    return NULL;
                }

                Speed_BSL_Capability_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                Speed_BSL_Capability_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedDomain() - (char *)sample);

                Speed_BSL_Capability_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedSetPoint() - (char *)sample);

                Speed_BSL_Capability_g_sampleAccessInfo.memberAccessInfos = 
                Speed_BSL_Capability_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Capabilities::Speed_BSL_Capability);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Speed_BSL_Capability_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Speed_BSL_Capability_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Speed_BSL_Capability_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Speed_BSL_Capability_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Capabilities::Speed_BSL_Capability >;

                Speed_BSL_Capability_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Speed_BSL_Capability_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Speed_BSL_Capability_g_typePlugin = 
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

                return &Speed_BSL_Capability_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Capabilities::Speed_BSL_Capability >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Capabilities::Speed_BSL_Capability >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Capabilities::Speed_BSL_Capability >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Capabilities::Speed_BSL_CapabilityPlugin_new,
                UMAA::Common::Capabilities::Speed_BSL_CapabilityPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Capabilities::Speed_BSL_Capability >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Capabilities::Speed_BSL_Capability& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Speed_BSL_CapabilityPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Speed_BSL_CapabilityPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Capabilities::Speed_BSL_Capability >::from_cdr_buffer(UMAA::Common::Capabilities::Speed_BSL_Capability& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Speed_BSL_CapabilityPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Capabilities::Speed_BSL_Capability from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Capabilities::Speed_BSL_Capability >::reset_sample(UMAA::Common::Capabilities::Speed_BSL_Capability& sample) 
        {
            sample.speed(0.0);
            ::rti::topic::reset_sample(sample.speedDomain());
            ::rti::topic::reset_sample(sample.speedSetPoint());
        }

        void topic_type_support< UMAA::Common::Capabilities::Speed_BSL_Capability >::allocate_sample(UMAA::Common::Capabilities::Speed_BSL_Capability& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.speedDomain(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speedSetPoint(),  -1, -1);
        }

    }
}  

