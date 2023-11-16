

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "EnumerationSetsPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EnumerationSets.hpp"

#include <rti/util/ostream_operators.hpp>

#undef ERROR

#undef VARIABLE_PITCH

#undef DELETE

#undef PLATFORM

namespace UMAA {

    namespace Common {

        namespace Enumeration {

            namespace AutomationEnumType {

                std::ostream& operator << (std::ostream& o,const AutomationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AutomationEnumType::AUTOMATIC:
                        o << "AutomationEnumType::AUTOMATIC" << " ";
                        break;
                        case AutomationEnumType::MANUAL:
                        o << "AutomationEnumType::MANUAL" << " ";
                        break;
                        case AutomationEnumType::SEMI_AUTOMATIC:
                        o << "AutomationEnumType::SEMI_AUTOMATIC" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AutomationEnumType  

            namespace BuiltInTestStatusEnumType {

                std::ostream& operator << (std::ostream& o,const BuiltInTestStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case BuiltInTestStatusEnumType::BIT_SUSPENDED:
                        o << "BuiltInTestStatusEnumType::BIT_SUSPENDED" << " ";
                        break;
                        case BuiltInTestStatusEnumType::BIT_FAILED:
                        o << "BuiltInTestStatusEnumType::BIT_FAILED" << " ";
                        break;
                        case BuiltInTestStatusEnumType::BIT_PASSED:
                        o << "BuiltInTestStatusEnumType::BIT_PASSED" << " ";
                        break;
                        case BuiltInTestStatusEnumType::RUNNING_BIT:
                        o << "BuiltInTestStatusEnumType::RUNNING_BIT" << " ";
                        break;
                        case BuiltInTestStatusEnumType::OFF_ABORT:
                        o << "BuiltInTestStatusEnumType::OFF_ABORT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace BuiltInTestStatusEnumType  

            namespace IRPolarityEnumType {

                std::ostream& operator << (std::ostream& o,const IRPolarityEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case IRPolarityEnumType::BLACK_HOT:
                        o << "IRPolarityEnumType::BLACK_HOT" << " ";
                        break;
                        case IRPolarityEnumType::WHITE_HOT:
                        o << "IRPolarityEnumType::WHITE_HOT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace IRPolarityEnumType  

            namespace LineSegmentEnumType {

                std::ostream& operator << (std::ostream& o,const LineSegmentEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LineSegmentEnumType::GREAT_CIRCLE:
                        o << "LineSegmentEnumType::GREAT_CIRCLE" << " ";
                        break;
                        case LineSegmentEnumType::RHUMB:
                        o << "LineSegmentEnumType::RHUMB" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace LineSegmentEnumType  

            namespace NetworkProtocolEnumType {

                std::ostream& operator << (std::ostream& o,const NetworkProtocolEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case NetworkProtocolEnumType::TCP_IPV4:
                        o << "NetworkProtocolEnumType::TCP_IPV4" << " ";
                        break;
                        case NetworkProtocolEnumType::TCP_IPV6:
                        o << "NetworkProtocolEnumType::TCP_IPV6" << " ";
                        break;
                        case NetworkProtocolEnumType::UDP_IPV4:
                        o << "NetworkProtocolEnumType::UDP_IPV4" << " ";
                        break;
                        case NetworkProtocolEnumType::UDP_IPV6:
                        o << "NetworkProtocolEnumType::UDP_IPV6" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace NetworkProtocolEnumType  

            namespace OnOffStatusEnumType {

                std::ostream& operator << (std::ostream& o,const OnOffStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case OnOffStatusEnumType::OFF:
                        o << "OnOffStatusEnumType::OFF" << " ";
                        break;
                        case OnOffStatusEnumType::ON:
                        o << "OnOffStatusEnumType::ON" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace OnOffStatusEnumType  

            namespace PlanActionEnumType {

                std::ostream& operator << (std::ostream& o,const PlanActionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PlanActionEnumType::ABORT_MISSION_LOAD_PLAN:
                        o << "PlanActionEnumType::ABORT_MISSION_LOAD_PLAN" << " ";
                        break;
                        case PlanActionEnumType::ADD_PLAN:
                        o << "PlanActionEnumType::ADD_PLAN" << " ";
                        break;
                        case PlanActionEnumType::DELETE_PLAN:
                        o << "PlanActionEnumType::DELETE_PLAN" << " ";
                        break;
                        case PlanActionEnumType::DOWNLOAD_PLAN:
                        o << "PlanActionEnumType::DOWNLOAD_PLAN" << " ";
                        break;
                        case PlanActionEnumType::RETRIEVE_PLAN:
                        o << "PlanActionEnumType::RETRIEVE_PLAN" << " ";
                        break;
                        case PlanActionEnumType::UPDATE_PLAN:
                        o << "PlanActionEnumType::UPDATE_PLAN" << " ";
                        break;
                        case PlanActionEnumType::UPLOAD_PLAN:
                        o << "PlanActionEnumType::UPLOAD_PLAN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PlanActionEnumType  

            namespace PowerStatusEnumType {

                std::ostream& operator << (std::ostream& o,const PowerStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PowerStatusEnumType::POWER_OFF:
                        o << "PowerStatusEnumType::POWER_OFF" << " ";
                        break;
                        case PowerStatusEnumType::POWER_ON:
                        o << "PowerStatusEnumType::POWER_ON" << " ";
                        break;
                        case PowerStatusEnumType::EMERGENCY_POWER:
                        o << "PowerStatusEnumType::EMERGENCY_POWER" << " ";
                        break;
                        case PowerStatusEnumType::POWER_STANDBY:
                        o << "PowerStatusEnumType::POWER_STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PowerStatusEnumType  

            namespace PrecipitationEnumType {

                std::ostream& operator << (std::ostream& o,const PrecipitationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PrecipitationEnumType::THUNDERSTORMS:
                        o << "PrecipitationEnumType::THUNDERSTORMS" << " ";
                        break;
                        case PrecipitationEnumType::FOG:
                        o << "PrecipitationEnumType::FOG" << " ";
                        break;
                        case PrecipitationEnumType::HAZE:
                        o << "PrecipitationEnumType::HAZE" << " ";
                        break;
                        case PrecipitationEnumType::SNOW:
                        o << "PrecipitationEnumType::SNOW" << " ";
                        break;
                        case PrecipitationEnumType::DRIZZLE:
                        o << "PrecipitationEnumType::DRIZZLE" << " ";
                        break;
                        case PrecipitationEnumType::RAIN:
                        o << "PrecipitationEnumType::RAIN" << " ";
                        break;
                        case PrecipitationEnumType::SHOWERS:
                        o << "PrecipitationEnumType::SHOWERS" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PrecipitationEnumType  

            namespace ResourceAllocationStatusEnumType {

                std::ostream& operator << (std::ostream& o,const ResourceAllocationStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ResourceAllocationStatusEnumType::FORCED_ALLOCATION:
                        o << "ResourceAllocationStatusEnumType::FORCED_ALLOCATION" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY:
                        o << "ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::ALLOCATED:
                        o << "ResourceAllocationStatusEnumType::ALLOCATED" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY:
                        o << "ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::AVAILABLE:
                        o << "ResourceAllocationStatusEnumType::AVAILABLE" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::RELEASED:
                        o << "ResourceAllocationStatusEnumType::RELEASED" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::TEMPORARILY_UNAVAILABLE:
                        o << "ResourceAllocationStatusEnumType::TEMPORARILY_UNAVAILABLE" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::UNAVAILABLE:
                        o << "ResourceAllocationStatusEnumType::UNAVAILABLE" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::FAULT:
                        o << "ResourceAllocationStatusEnumType::FAULT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ResourceAllocationStatusEnumType  

            namespace SpecificLOIEnumType {

                std::ostream& operator << (std::ostream& o,const SpecificLOIEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case SpecificLOIEnumType::LOI_1:
                        o << "SpecificLOIEnumType::LOI_1" << " ";
                        break;
                        case SpecificLOIEnumType::LOI_2:
                        o << "SpecificLOIEnumType::LOI_2" << " ";
                        break;
                        case SpecificLOIEnumType::LOI_3:
                        o << "SpecificLOIEnumType::LOI_3" << " ";
                        break;
                        case SpecificLOIEnumType::LOI_4:
                        o << "SpecificLOIEnumType::LOI_4" << " ";
                        break;
                        case SpecificLOIEnumType::LOI_5:
                        o << "SpecificLOIEnumType::LOI_5" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace SpecificLOIEnumType  

        } // namespace Enumeration  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType default_enumerator< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType>::value = ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::AUTOMATIC;
        const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>::value = ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED;
        const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType default_enumerator< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType>::value = ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType::BLACK_HOT;
        const ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType>::value = ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::GREAT_CIRCLE;
        const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType default_enumerator< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType>::value = ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV4;
        const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>::value = ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF;
        const ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType default_enumerator< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType>::value = ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::ABORT_MISSION_LOAD_PLAN;
        const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>::value = ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF;
        const ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType>::value = ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::THUNDERSTORMS;
        const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType>::value = ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION;
        const ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType>::value = ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_1;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType default_enumerator< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType>::value = ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::AUTOMATIC;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AutomationEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"AUTOMATIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::AUTOMATIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MANUAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::MANUAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SEMI_AUTOMATIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::SEMI_AUTOMATIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AutomationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        AutomationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AutomationEnumType*/

                if (is_initialized) {
                    return &AutomationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AutomationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AutomationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AutomationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AutomationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AutomationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AutomationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AutomationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AutomationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AutomationEnumType_g_sampleAccessInfo;
                }

                AutomationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AutomationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AutomationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AutomationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AutomationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AutomationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AutomationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType >;

                AutomationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AutomationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AutomationEnumType_g_typePlugin = 
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

                return &AutomationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::BooleanEnumType_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BooleanEnumType_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Enumeration::BooleanEnumType", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for  BooleanEnumType */

                if (is_initialized) {
                    return &BooleanEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BooleanEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BooleanEnumType_g_tc._data._typeCode =  (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                BooleanEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BooleanEnumType_g_tc._data._annotations._defaultValue._u.boolean_value = 0;

                BooleanEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                BooleanEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &BooleanEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BooleanEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BooleanEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BooleanEnumType_g_sampleAccessInfo;
                }

                BooleanEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BooleanEnumType_g_sampleAccessInfo.memberAccessInfos = 
                BooleanEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::BooleanEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BooleanEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BooleanEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BooleanEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BooleanEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::BooleanEnumType >;

                BooleanEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BooleanEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BooleanEnumType_g_typePlugin = 
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

                return &BooleanEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Enumeration::BooleanEnumType_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::BooleanEnumType_AliasTag_t >::get())));
        }

        const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>::value = ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BuiltInTestStatusEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"BIT_SUSPENDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BIT_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BIT_PASSED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_PASSED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RUNNING_BIT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::RUNNING_BIT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF_ABORT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::OFF_ABORT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BuiltInTestStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        BuiltInTestStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BuiltInTestStatusEnumType*/

                if (is_initialized) {
                    return &BuiltInTestStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BuiltInTestStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BuiltInTestStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BuiltInTestStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BuiltInTestStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                BuiltInTestStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &BuiltInTestStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BuiltInTestStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BuiltInTestStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BuiltInTestStatusEnumType_g_sampleAccessInfo;
                }

                BuiltInTestStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BuiltInTestStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                BuiltInTestStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BuiltInTestStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BuiltInTestStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BuiltInTestStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BuiltInTestStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType >;

                BuiltInTestStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BuiltInTestStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BuiltInTestStatusEnumType_g_typePlugin = 
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

                return &BuiltInTestStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType default_enumerator< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType>::value = ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType::BLACK_HOT;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IRPolarityEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"BLACK_HOT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType::BLACK_HOT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WHITE_HOT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType::WHITE_HOT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IRPolarityEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        IRPolarityEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IRPolarityEnumType*/

                if (is_initialized) {
                    return &IRPolarityEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                IRPolarityEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                IRPolarityEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                IRPolarityEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                IRPolarityEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                IRPolarityEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &IRPolarityEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IRPolarityEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IRPolarityEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IRPolarityEnumType_g_sampleAccessInfo;
                }

                IRPolarityEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IRPolarityEnumType_g_sampleAccessInfo.memberAccessInfos = 
                IRPolarityEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IRPolarityEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IRPolarityEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IRPolarityEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IRPolarityEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType >;

                IRPolarityEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IRPolarityEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IRPolarityEnumType_g_typePlugin = 
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

                return &IRPolarityEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType>::value = ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::GREAT_CIRCLE;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LineSegmentEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"GREAT_CIRCLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::GREAT_CIRCLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RHUMB",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::RHUMB), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LineSegmentEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LineSegmentEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LineSegmentEnumType*/

                if (is_initialized) {
                    return &LineSegmentEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LineSegmentEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LineSegmentEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LineSegmentEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LineSegmentEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                LineSegmentEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &LineSegmentEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LineSegmentEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LineSegmentEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LineSegmentEnumType_g_sampleAccessInfo;
                }

                LineSegmentEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LineSegmentEnumType_g_sampleAccessInfo.memberAccessInfos = 
                LineSegmentEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LineSegmentEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LineSegmentEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LineSegmentEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LineSegmentEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType >;

                LineSegmentEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LineSegmentEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LineSegmentEnumType_g_typePlugin = 
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

                return &LineSegmentEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType default_enumerator< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType>::value = ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV4;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NetworkProtocolEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"TCP_IPV4",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV4), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TCP_IPV6",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV6), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UDP_IPV4",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::UDP_IPV4), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UDP_IPV6",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::UDP_IPV6), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode NetworkProtocolEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        NetworkProtocolEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for NetworkProtocolEnumType*/

                if (is_initialized) {
                    return &NetworkProtocolEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                NetworkProtocolEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                NetworkProtocolEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                NetworkProtocolEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                NetworkProtocolEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                NetworkProtocolEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &NetworkProtocolEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NetworkProtocolEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NetworkProtocolEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NetworkProtocolEnumType_g_sampleAccessInfo;
                }

                NetworkProtocolEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NetworkProtocolEnumType_g_sampleAccessInfo.memberAccessInfos = 
                NetworkProtocolEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NetworkProtocolEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NetworkProtocolEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NetworkProtocolEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NetworkProtocolEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType >;

                NetworkProtocolEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NetworkProtocolEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NetworkProtocolEnumType_g_typePlugin = 
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

                return &NetworkProtocolEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>::value = ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OnOffStatusEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode OnOffStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        OnOffStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OnOffStatusEnumType*/

                if (is_initialized) {
                    return &OnOffStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                OnOffStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                OnOffStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                OnOffStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                OnOffStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                OnOffStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &OnOffStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo OnOffStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OnOffStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OnOffStatusEnumType_g_sampleAccessInfo;
                }

                OnOffStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                OnOffStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                OnOffStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OnOffStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OnOffStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OnOffStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OnOffStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >;

                OnOffStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OnOffStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OnOffStatusEnumType_g_typePlugin = 
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

                return &OnOffStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType default_enumerator< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType>::value = ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::ABORT_MISSION_LOAD_PLAN;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PlanActionEnumType_g_tc_members[7]=
                {

                    {
                        (char *)"ABORT_MISSION_LOAD_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::ABORT_MISSION_LOAD_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ADD_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::ADD_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DELETE_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::DELETE_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DOWNLOAD_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::DOWNLOAD_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RETRIEVE_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::RETRIEVE_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UPDATE_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::UPDATE_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UPLOAD_PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType::UPLOAD_PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PlanActionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        PlanActionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PlanActionEnumType*/

                if (is_initialized) {
                    return &PlanActionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PlanActionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PlanActionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PlanActionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PlanActionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PlanActionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PlanActionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PlanActionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PlanActionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PlanActionEnumType_g_sampleAccessInfo;
                }

                PlanActionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PlanActionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PlanActionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PlanActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PlanActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PlanActionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PlanActionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType >;

                PlanActionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PlanActionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PlanActionEnumType_g_typePlugin = 
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

                return &PlanActionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>::value = ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PowerStatusEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"POWER_OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EMERGENCY_POWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::EMERGENCY_POWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PowerStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PowerStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PowerStatusEnumType*/

                if (is_initialized) {
                    return &PowerStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PowerStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PowerStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PowerStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerStatusEnumType_g_sampleAccessInfo;
                }

                PowerStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PowerStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType >;

                PowerStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerStatusEnumType_g_typePlugin = 
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

                return &PowerStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType>::value = ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::THUNDERSTORMS;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrecipitationEnumType_g_tc_members[7]=
                {

                    {
                        (char *)"THUNDERSTORMS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::THUNDERSTORMS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FOG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::FOG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HAZE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::HAZE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SNOW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::SNOW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DRIZZLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::DRIZZLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RAIN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::RAIN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SHOWERS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType::SHOWERS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PrecipitationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        PrecipitationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PrecipitationEnumType*/

                if (is_initialized) {
                    return &PrecipitationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PrecipitationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PrecipitationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PrecipitationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PrecipitationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PrecipitationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PrecipitationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PrecipitationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PrecipitationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PrecipitationEnumType_g_sampleAccessInfo;
                }

                PrecipitationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PrecipitationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PrecipitationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PrecipitationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PrecipitationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PrecipitationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PrecipitationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType >;

                PrecipitationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PrecipitationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PrecipitationEnumType_g_typePlugin = 
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

                return &PrecipitationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType>::value = ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationStatusEnumType_g_tc_members[9]=
                {

                    {
                        (char *)"FORCED_ALLOCATION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FORCED_ALLOCATION_W_LAUNCH_RECOVERY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ALLOCATED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::ALLOCATED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ALLOCATED_W_LAUNCH_RECOVERY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AVAILABLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::AVAILABLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RELEASED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::RELEASED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TEMPORARILY_UNAVAILABLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::TEMPORARILY_UNAVAILABLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UNAVAILABLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::UNAVAILABLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAULT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FAULT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ResourceAllocationStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ResourceAllocationStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationStatusEnumType*/

                if (is_initialized) {
                    return &ResourceAllocationStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ResourceAllocationStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ResourceAllocationStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ResourceAllocationStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ResourceAllocationStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ResourceAllocationStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ResourceAllocationStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationStatusEnumType_g_sampleAccessInfo;
                }

                ResourceAllocationStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ResourceAllocationStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType >;

                ResourceAllocationStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationStatusEnumType_g_typePlugin = 
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

                return &ResourceAllocationStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType>::value = ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_1;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpecificLOIEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"LOI_1",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_1), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOI_2",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_2), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOI_3",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_3), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOI_4",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_4), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOI_5",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType::LOI_5), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpecificLOIEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpecificLOIEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpecificLOIEnumType*/

                if (is_initialized) {
                    return &SpecificLOIEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpecificLOIEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SpecificLOIEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SpecificLOIEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SpecificLOIEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpecificLOIEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &SpecificLOIEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpecificLOIEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpecificLOIEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpecificLOIEnumType_g_sampleAccessInfo;
                }

                SpecificLOIEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpecificLOIEnumType_g_sampleAccessInfo.memberAccessInfos = 
                SpecificLOIEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpecificLOIEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpecificLOIEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpecificLOIEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpecificLOIEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType >;

                SpecificLOIEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpecificLOIEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpecificLOIEnumType_g_typePlugin = 
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

                return &SpecificLOIEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
