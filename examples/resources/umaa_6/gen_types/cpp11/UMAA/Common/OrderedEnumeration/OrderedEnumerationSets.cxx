

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrderedEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "OrderedEnumerationSetsPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OrderedEnumerationSets.hpp"

#include <rti/util/ostream_operators.hpp>

#undef ERROR

#undef VARIABLE_PITCH

#undef DELETE

#undef PLATFORM

namespace UMAA {

    namespace Common {

        namespace OrderedEnumeration {

            namespace CloudCoverEnumModule {

                std::ostream& operator << (std::ostream& o,const CloudCoverEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case CloudCoverEnumType::BROKEN:
                        o << "CloudCoverEnumType::BROKEN" << " ";
                        break;
                        case CloudCoverEnumType::CLEAR:
                        o << "CloudCoverEnumType::CLEAR" << " ";
                        break;
                        case CloudCoverEnumType::FEW:
                        o << "CloudCoverEnumType::FEW" << " ";
                        break;
                        case CloudCoverEnumType::OVERCAST:
                        o << "CloudCoverEnumType::OVERCAST" << " ";
                        break;
                        case CloudCoverEnumType::SCATTERED:
                        o << "CloudCoverEnumType::SCATTERED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace CloudCoverEnumModule  

            namespace SeaStateEnumModule {

                std::ostream& operator << (std::ostream& o,const SeaStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case SeaStateEnumType::CALM_GLOSSY:
                        o << "SeaStateEnumType::CALM_GLOSSY" << " ";
                        break;
                        case SeaStateEnumType::CALM_RIPPLED:
                        o << "SeaStateEnumType::CALM_RIPPLED" << " ";
                        break;
                        case SeaStateEnumType::HIGH:
                        o << "SeaStateEnumType::HIGH" << " ";
                        break;
                        case SeaStateEnumType::MODERATE:
                        o << "SeaStateEnumType::MODERATE" << " ";
                        break;
                        case SeaStateEnumType::PHENOMENAL:
                        o << "SeaStateEnumType::PHENOMENAL" << " ";
                        break;
                        case SeaStateEnumType::ROUGH:
                        o << "SeaStateEnumType::ROUGH" << " ";
                        break;
                        case SeaStateEnumType::SLIGHT:
                        o << "SeaStateEnumType::SLIGHT" << " ";
                        break;
                        case SeaStateEnumType::SMOOTH:
                        o << "SeaStateEnumType::SMOOTH" << " ";
                        break;
                        case SeaStateEnumType::VERY_HIGH:
                        o << "SeaStateEnumType::VERY_HIGH" << " ";
                        break;
                        case SeaStateEnumType::VERY_ROUGH:
                        o << "SeaStateEnumType::VERY_ROUGH" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace SeaStateEnumModule  

            namespace WeatherSeverityEnumModule {

                std::ostream& operator << (std::ostream& o,const WeatherSeverityEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case WeatherSeverityEnumType::EXTREME:
                        o << "WeatherSeverityEnumType::EXTREME" << " ";
                        break;
                        case WeatherSeverityEnumType::LIGHT:
                        o << "WeatherSeverityEnumType::LIGHT" << " ";
                        break;
                        case WeatherSeverityEnumType::MODERATE:
                        o << "WeatherSeverityEnumType::MODERATE" << " ";
                        break;
                        case WeatherSeverityEnumType::NONE:
                        o << "WeatherSeverityEnumType::NONE" << " ";
                        break;
                        case WeatherSeverityEnumType::SEVERE:
                        o << "WeatherSeverityEnumType::SEVERE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace WeatherSeverityEnumModule  

        } // namespace OrderedEnumeration  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType>::value = ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::BROKEN;
        const ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType>::value = ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::CALM_GLOSSY;
        const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType>::value = ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::EXTREME;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType>::value = ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::BROKEN;
        template<>
        struct native_type_code< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CloudCoverEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"BROKEN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::BROKEN), 
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
                        (char *)"CLEAR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::CLEAR), 
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
                        (char *)"FEW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::FEW), 
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
                        (char *)"OVERCAST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::OVERCAST), 
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
                        (char *)"SCATTERED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType::SCATTERED), 
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

                static DDS_TypeCode CloudCoverEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        CloudCoverEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CloudCoverEnumType*/

                if (is_initialized) {
                    return &CloudCoverEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CloudCoverEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CloudCoverEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CloudCoverEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CloudCoverEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                CloudCoverEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &CloudCoverEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CloudCoverEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CloudCoverEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CloudCoverEnumType_g_sampleAccessInfo;
                }

                CloudCoverEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CloudCoverEnumType_g_sampleAccessInfo.memberAccessInfos = 
                CloudCoverEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CloudCoverEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CloudCoverEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CloudCoverEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CloudCoverEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >;

                CloudCoverEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CloudCoverEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CloudCoverEnumType_g_typePlugin = 
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

                return &CloudCoverEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >::get())));
        }

        const ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType>::value = ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::CALM_GLOSSY;
        template<>
        struct native_type_code< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SeaStateEnumType_g_tc_members[10]=
                {

                    {
                        (char *)"CALM_GLOSSY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::CALM_GLOSSY), 
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
                        (char *)"CALM_RIPPLED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::CALM_RIPPLED), 
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
                        (char *)"HIGH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::HIGH), 
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
                        (char *)"MODERATE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::MODERATE), 
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
                        (char *)"PHENOMENAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::PHENOMENAL), 
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
                        (char *)"ROUGH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::ROUGH), 
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
                        (char *)"SLIGHT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::SLIGHT), 
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
                        (char *)"SMOOTH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::SMOOTH), 
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
                        (char *)"VERY_HIGH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::VERY_HIGH), 
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
                        (char *)"VERY_ROUGH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType::VERY_ROUGH), 
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

                static DDS_TypeCode SeaStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        SeaStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SeaStateEnumType*/

                if (is_initialized) {
                    return &SeaStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SeaStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SeaStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SeaStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SeaStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                SeaStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &SeaStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SeaStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SeaStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SeaStateEnumType_g_sampleAccessInfo;
                }

                SeaStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SeaStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                SeaStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SeaStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SeaStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SeaStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SeaStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType >;

                SeaStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SeaStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SeaStateEnumType_g_typePlugin = 
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

                return &SeaStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::OrderedEnumeration::SeaStateEnumModule::SeaStateEnumType >::get())));
        }

        const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType default_enumerator< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType>::value = ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::EXTREME;
        template<>
        struct native_type_code< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WeatherSeverityEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"EXTREME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::EXTREME), 
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
                        (char *)"LIGHT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::LIGHT), 
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
                        (char *)"MODERATE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::MODERATE), 
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
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::NONE), 
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
                        (char *)"SEVERE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType::SEVERE), 
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

                static DDS_TypeCode WeatherSeverityEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        WeatherSeverityEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WeatherSeverityEnumType*/

                if (is_initialized) {
                    return &WeatherSeverityEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WeatherSeverityEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WeatherSeverityEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WeatherSeverityEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WeatherSeverityEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                WeatherSeverityEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &WeatherSeverityEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WeatherSeverityEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WeatherSeverityEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WeatherSeverityEnumType_g_sampleAccessInfo;
                }

                WeatherSeverityEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WeatherSeverityEnumType_g_sampleAccessInfo.memberAccessInfos = 
                WeatherSeverityEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WeatherSeverityEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WeatherSeverityEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WeatherSeverityEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WeatherSeverityEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >;

                WeatherSeverityEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WeatherSeverityEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WeatherSeverityEnumType_g_typePlugin = 
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

                return &WeatherSeverityEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE