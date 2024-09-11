

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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

            namespace LineSegmentEnumModule {

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

            } // namespace LineSegmentEnumModule  

            namespace OnOffStatusEnumModule {

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

            } // namespace OnOffStatusEnumModule  

            namespace PrecipitationEnumModule {

                std::ostream& operator << (std::ostream& o,const PrecipitationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PrecipitationEnumType::DRIZZLE:
                        o << "PrecipitationEnumType::DRIZZLE" << " ";
                        break;
                        case PrecipitationEnumType::FOG:
                        o << "PrecipitationEnumType::FOG" << " ";
                        break;
                        case PrecipitationEnumType::HAZE:
                        o << "PrecipitationEnumType::HAZE" << " ";
                        break;
                        case PrecipitationEnumType::RAIN:
                        o << "PrecipitationEnumType::RAIN" << " ";
                        break;
                        case PrecipitationEnumType::SHOWERS:
                        o << "PrecipitationEnumType::SHOWERS" << " ";
                        break;
                        case PrecipitationEnumType::SNOW:
                        o << "PrecipitationEnumType::SNOW" << " ";
                        break;
                        case PrecipitationEnumType::THUNDERSTORMS:
                        o << "PrecipitationEnumType::THUNDERSTORMS" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PrecipitationEnumModule  

            namespace ResourceAllocationStatusEnumModule {

                std::ostream& operator << (std::ostream& o,const ResourceAllocationStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ResourceAllocationStatusEnumType::ALLOCATED:
                        o << "ResourceAllocationStatusEnumType::ALLOCATED" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY:
                        o << "ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::AVAILABLE:
                        o << "ResourceAllocationStatusEnumType::AVAILABLE" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::FAULT:
                        o << "ResourceAllocationStatusEnumType::FAULT" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::FORCED_ALLOCATION:
                        o << "ResourceAllocationStatusEnumType::FORCED_ALLOCATION" << " ";
                        break;
                        case ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY:
                        o << "ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY" << " ";
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
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ResourceAllocationStatusEnumModule  

            namespace SpecificLOIEnumModule {

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

            } // namespace SpecificLOIEnumModule  

        } // namespace Enumeration  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType>::value = ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::GREAT_CIRCLE;
        const ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType>::value = ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType::OFF;
        const ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType>::value = ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::DRIZZLE;
        const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType>::value = ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::ALLOCATED;
        const ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType>::value = ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_1;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

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

        const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType>::value = ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::GREAT_CIRCLE;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType > {
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
                        static_cast<int>(::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::GREAT_CIRCLE), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::RHUMB), 
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
                        (char *)"UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType>::value = ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType::OFF;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType > {
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
                        static_cast<int>(::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType::OFF), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType::ON), 
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
                        (char *)"UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType>::value = ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::DRIZZLE;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrecipitationEnumType_g_tc_members[7]=
                {

                    {
                        (char *)"DRIZZLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::DRIZZLE), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::FOG), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::HAZE), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::RAIN), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::SHOWERS), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::SNOW), 
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
                        (char *)"THUNDERSTORMS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType::THUNDERSTORMS), 
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
                        (char *)"UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType>::value = ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::ALLOCATED;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationStatusEnumType_g_tc_members[9]=
                {

                    {
                        (char *)"ALLOCATED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::ALLOCATED), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::ALLOCATED_W_LAUNCH_RECOVERY), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::AVAILABLE), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::FAULT), 
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
                        (char *)"FORCED_ALLOCATION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::FORCED_ALLOCATION), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::FORCED_ALLOCATION_W_LAUNCH_RECOVERY), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::RELEASED), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::TEMPORARILY_UNAVAILABLE), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType::UNAVAILABLE), 
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
                        (char *)"UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType >::get())));
        }

        const ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType>::value = ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_1;
        template<>
        struct native_type_code< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType > {
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
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_1), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_2), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_3), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_4), 
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
                        static_cast<int>(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType::LOI_5), 
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
                        (char *)"UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
