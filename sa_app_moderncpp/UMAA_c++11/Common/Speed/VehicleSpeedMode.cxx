

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleSpeedMode.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "VehicleSpeedModePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "VehicleSpeedMode.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- VehicleSpeedMode: 

            VehicleSpeedMode::VehicleSpeedMode() :
                m_mode_(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC)  {

            }   

            VehicleSpeedMode::VehicleSpeedMode (const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode_):
                m_mode_(mode_) {
            }

            void VehicleSpeedMode::swap(VehicleSpeedMode& other_)  noexcept 
            {
                using std::swap;
                swap(m_mode_, other_.m_mode_);
            }  

            bool VehicleSpeedMode::operator == (const VehicleSpeedMode& other_) const {
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                return true;
            }

            bool VehicleSpeedMode::operator != (const VehicleSpeedMode& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VehicleSpeedMode& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "mode: " << sample.mode ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Speed::VehicleSpeedMode > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VehicleSpeedMode_g_tc_members[1]=
                {

                    {
                        (char *)"mode",/* Member name */
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

                static DDS_TypeCode VehicleSpeedMode_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::VehicleSpeedMode", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        VehicleSpeedMode_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VehicleSpeedMode*/

                if (is_initialized) {
                    return &VehicleSpeedMode_g_tc;
                }

                is_initialized = RTI_TRUE;

                VehicleSpeedMode_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VehicleSpeedMode_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType>::get().native();

                /* Initialize the values for member annotations. */
                VehicleSpeedMode_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VehicleSpeedMode_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                VehicleSpeedMode_g_tc._data._sampleAccessInfo = sample_access_info();
                VehicleSpeedMode_g_tc._data._typePlugin = type_plugin_info();    

                return &VehicleSpeedMode_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::VehicleSpeedMode *sample;

                static RTIXCdrMemberAccessInfo VehicleSpeedMode_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VehicleSpeedMode_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VehicleSpeedMode_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::VehicleSpeedMode);
                if (sample == NULL) {
                    return NULL;
                }

                VehicleSpeedMode_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                VehicleSpeedMode_g_sampleAccessInfo.memberAccessInfos = 
                VehicleSpeedMode_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::VehicleSpeedMode);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VehicleSpeedMode_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VehicleSpeedMode_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VehicleSpeedMode_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VehicleSpeedMode_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::VehicleSpeedMode >;

                VehicleSpeedMode_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VehicleSpeedMode_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VehicleSpeedMode_g_typePlugin = 
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

                return &VehicleSpeedMode_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::VehicleSpeedMode >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::VehicleSpeedMode >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedMode >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Speed::VehicleSpeedModePlugin_new,
                ::UMAA::Common::Speed::VehicleSpeedModePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Speed::VehicleSpeedMode >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Speed::VehicleSpeedMode& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VehicleSpeedModePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VehicleSpeedModePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedMode >::from_cdr_buffer(::UMAA::Common::Speed::VehicleSpeedMode& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VehicleSpeedModePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Speed::VehicleSpeedMode from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedMode >::reset_sample(::UMAA::Common::Speed::VehicleSpeedMode& sample) 
        {
            sample.mode(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC);
        }

        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedMode >::allocate_sample(::UMAA::Common::Speed::VehicleSpeedMode& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mode(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
