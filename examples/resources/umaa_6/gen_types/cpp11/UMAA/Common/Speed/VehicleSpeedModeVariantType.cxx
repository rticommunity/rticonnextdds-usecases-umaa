

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleSpeedModeVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "VehicleSpeedModeVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "VehicleSpeedModeVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- VehicleSpeedModeVariantType: 

            VehicleSpeedModeVariantType::VehicleSpeedModeVariantType() :
                m_mode_(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::LRC)  {

            }   

            VehicleSpeedModeVariantType::VehicleSpeedModeVariantType (const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType& mode_):
                m_mode_(mode_) {
            }

            void VehicleSpeedModeVariantType::swap(VehicleSpeedModeVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_mode_, other_.m_mode_);
            }  

            bool VehicleSpeedModeVariantType::operator == (const VehicleSpeedModeVariantType& other_) const {
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                return true;
            }

            bool VehicleSpeedModeVariantType::operator != (const VehicleSpeedModeVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VehicleSpeedModeVariantType& sample)
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
        struct native_type_code< ::UMAA::Common::Speed::VehicleSpeedModeVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VehicleSpeedModeVariantType_g_tc_members[1]=
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

                static DDS_TypeCode VehicleSpeedModeVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::VehicleSpeedModeVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        VehicleSpeedModeVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VehicleSpeedModeVariantType*/

                if (is_initialized) {
                    return &VehicleSpeedModeVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                VehicleSpeedModeVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VehicleSpeedModeVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType>::get().native();

                /* Initialize the values for member annotations. */
                VehicleSpeedModeVariantType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VehicleSpeedModeVariantType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                VehicleSpeedModeVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                VehicleSpeedModeVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &VehicleSpeedModeVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::VehicleSpeedModeVariantType *sample;

                static RTIXCdrMemberAccessInfo VehicleSpeedModeVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VehicleSpeedModeVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VehicleSpeedModeVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::VehicleSpeedModeVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                VehicleSpeedModeVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                VehicleSpeedModeVariantType_g_sampleAccessInfo.memberAccessInfos = 
                VehicleSpeedModeVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::VehicleSpeedModeVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VehicleSpeedModeVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VehicleSpeedModeVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VehicleSpeedModeVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VehicleSpeedModeVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::VehicleSpeedModeVariantType >;

                VehicleSpeedModeVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VehicleSpeedModeVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VehicleSpeedModeVariantType_g_typePlugin = 
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

                return &VehicleSpeedModeVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::VehicleSpeedModeVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::VehicleSpeedModeVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedModeVariantType >::reset_sample(::UMAA::Common::Speed::VehicleSpeedModeVariantType& sample) 
        {
            sample.mode(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::LRC);
        }

        void topic_type_support< ::UMAA::Common::Speed::VehicleSpeedModeVariantType >::allocate_sample(::UMAA::Common::Speed::VehicleSpeedModeVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mode(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
