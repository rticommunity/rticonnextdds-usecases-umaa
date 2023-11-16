

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RequiredSpeedControl.hpp"
#include "RequiredSpeedControlPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace VariableSpeedControl {

            // ---- RequiredSpeedControl: 

            RequiredSpeedControl::RequiredSpeedControl()  {
            }   

            RequiredSpeedControl::RequiredSpeedControl (const UMAA::Common::Speed::SpeedControlType& requiredSpeedControl):
                m_requiredSpeedControl_( requiredSpeedControl ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RequiredSpeedControl::RequiredSpeedControl(RequiredSpeedControl&& other_) OMG_NOEXCEPT  :m_requiredSpeedControl_ (std::move(other_.m_requiredSpeedControl_))
            {
            } 

            RequiredSpeedControl& RequiredSpeedControl::operator=(RequiredSpeedControl&&  other_) OMG_NOEXCEPT {
                RequiredSpeedControl tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RequiredSpeedControl::swap(RequiredSpeedControl& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_requiredSpeedControl_, other_.m_requiredSpeedControl_);
            }  

            bool RequiredSpeedControl::operator == (const RequiredSpeedControl& other_) const {
                if (m_requiredSpeedControl_ != other_.m_requiredSpeedControl_) {
                    return false;
                }
                return true;
            }
            bool RequiredSpeedControl::operator != (const RequiredSpeedControl& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RequiredSpeedControl& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "requiredSpeedControl: " << sample.requiredSpeedControl() ;
                o <<"]";
                return o;
            }

        } // namespace VariableSpeedControl  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RequiredSpeedControl_g_tc_members[1]=
                {

                    {
                        (char *)"requiredSpeedControl",/* Member name */
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
                    }
                };

                static DDS_TypeCode RequiredSpeedControl_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::VariableSpeedControl::RequiredSpeedControl", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RequiredSpeedControl_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RequiredSpeedControl*/

                if (is_initialized) {
                    return &RequiredSpeedControl_g_tc;
                }

                RequiredSpeedControl_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RequiredSpeedControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedControlType>::get().native();

                /* Initialize the values for member annotations. */

                RequiredSpeedControl_g_tc._data._sampleAccessInfo = sample_access_info();
                RequiredSpeedControl_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RequiredSpeedControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::VariableSpeedControl::RequiredSpeedControl *sample;

                static RTIXCdrMemberAccessInfo RequiredSpeedControl_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RequiredSpeedControl_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RequiredSpeedControl_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::VariableSpeedControl::RequiredSpeedControl);
                if (sample == NULL) {
                    return NULL;
                }

                RequiredSpeedControl_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->requiredSpeedControl() - (char *)sample);

                RequiredSpeedControl_g_sampleAccessInfo.memberAccessInfos = 
                RequiredSpeedControl_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::VariableSpeedControl::RequiredSpeedControl);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RequiredSpeedControl_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RequiredSpeedControl_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RequiredSpeedControl_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RequiredSpeedControl_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >;

                RequiredSpeedControl_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RequiredSpeedControl_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RequiredSpeedControl_g_typePlugin = 
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

                return &RequiredSpeedControl_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::VariableSpeedControl::RequiredSpeedControlPlugin_new,
                UMAA::Common::VariableSpeedControl::RequiredSpeedControlPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RequiredSpeedControlPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RequiredSpeedControlPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::from_cdr_buffer(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RequiredSpeedControlPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::VariableSpeedControl::RequiredSpeedControl from cdr buffer");
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::reset_sample(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample) 
        {
            ::rti::topic::reset_sample(sample.requiredSpeedControl());
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl >::allocate_sample(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.requiredSpeedControl(),  -1, -1);
        }

    }
}  

