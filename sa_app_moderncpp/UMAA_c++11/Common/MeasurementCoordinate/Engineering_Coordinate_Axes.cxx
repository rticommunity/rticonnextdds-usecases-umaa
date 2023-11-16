

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Engineering_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Engineering_Coordinate_AxesPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Engineering_Coordinate_Axes.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace MeasurementCoordinate {

        } // namespace MeasurementCoordinate  

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
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::DateTime_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DateTime_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::DateTime", /* Name */
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
                    }}; /* Type code for  DateTime */

                if (is_initialized) {
                    return &DateTime_g_tc;
                }

                is_initialized = RTI_TRUE;

                DateTime_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DateTime_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DateTime_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DateTime_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DateTime_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DateTime_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DateTime_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DateTime_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DateTime_g_tc._data._sampleAccessInfo = sample_access_info();
                DateTime_g_tc._data._typePlugin = type_plugin_info();    

                return &DateTime_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DateTime_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DateTime_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DateTime_g_sampleAccessInfo;
                }

                DateTime_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DateTime_g_sampleAccessInfo.memberAccessInfos = 
                DateTime_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::DateTime);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DateTime_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DateTime_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DateTime_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DateTime_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::DateTime >;

                DateTime_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DateTime_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DateTime_g_typePlugin = 
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

                return &DateTime_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::DateTime_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::DateTime_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::Down_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Down_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::Down", /* Name */
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
                    }}; /* Type code for  Down */

                if (is_initialized) {
                    return &Down_g_tc;
                }

                is_initialized = RTI_TRUE;

                Down_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Down_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Down_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Down_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Down_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Down_g_tc._data._annotations._minValue._u.double_value = -50000LL;
                Down_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Down_g_tc._data._annotations._maxValue._u.double_value = 50000ULL;

                Down_g_tc._data._sampleAccessInfo = sample_access_info();
                Down_g_tc._data._typePlugin = type_plugin_info();    

                return &Down_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Down_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Down_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Down_g_sampleAccessInfo;
                }

                Down_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Down_g_sampleAccessInfo.memberAccessInfos = 
                Down_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::Down);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Down_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Down_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Down_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Down_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::Down >;

                Down_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Down_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Down_g_typePlugin = 
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

                return &Down_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::Down_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::Down_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::DownSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DownSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::DownSpeed", /* Name */
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
                    }}; /* Type code for  DownSpeed */

                if (is_initialized) {
                    return &DownSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                DownSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DownSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DownSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DownSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DownSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DownSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DownSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DownSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DownSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                DownSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &DownSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DownSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DownSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DownSpeed_g_sampleAccessInfo;
                }

                DownSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DownSpeed_g_sampleAccessInfo.memberAccessInfos = 
                DownSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::DownSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DownSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DownSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DownSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DownSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::DownSpeed >;

                DownSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DownSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DownSpeed_g_typePlugin = 
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

                return &DownSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::DownSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::DownSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::EastSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EastSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::EastSpeed", /* Name */
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
                    }}; /* Type code for  EastSpeed */

                if (is_initialized) {
                    return &EastSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                EastSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EastSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                EastSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EastSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                EastSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EastSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EastSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EastSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                EastSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                EastSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &EastSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo EastSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EastSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EastSpeed_g_sampleAccessInfo;
                }

                EastSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                EastSpeed_g_sampleAccessInfo.memberAccessInfos = 
                EastSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::EastSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EastSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EastSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EastSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EastSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::EastSpeed >;

                EastSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EastSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EastSpeed_g_typePlugin = 
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

                return &EastSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::EastSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::EastSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::Forward_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Forward_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::Forward", /* Name */
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
                    }}; /* Type code for  Forward */

                if (is_initialized) {
                    return &Forward_g_tc;
                }

                is_initialized = RTI_TRUE;

                Forward_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Forward_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Forward_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Forward_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Forward_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Forward_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
                Forward_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Forward_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

                Forward_g_tc._data._sampleAccessInfo = sample_access_info();
                Forward_g_tc._data._typePlugin = type_plugin_info();    

                return &Forward_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Forward_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Forward_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Forward_g_sampleAccessInfo;
                }

                Forward_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Forward_g_sampleAccessInfo.memberAccessInfos = 
                Forward_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::Forward);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Forward_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Forward_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Forward_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Forward_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::Forward >;

                Forward_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Forward_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Forward_g_typePlugin = 
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

                return &Forward_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::Forward_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::Forward_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::ForwardSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ForwardSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::ForwardSpeed", /* Name */
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
                    }}; /* Type code for  ForwardSpeed */

                if (is_initialized) {
                    return &ForwardSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                ForwardSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ForwardSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ForwardSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ForwardSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ForwardSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ForwardSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ForwardSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ForwardSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ForwardSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                ForwardSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &ForwardSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ForwardSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ForwardSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ForwardSpeed_g_sampleAccessInfo;
                }

                ForwardSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ForwardSpeed_g_sampleAccessInfo.memberAccessInfos = 
                ForwardSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::ForwardSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ForwardSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ForwardSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ForwardSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ForwardSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::ForwardSpeed >;

                ForwardSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ForwardSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ForwardSpeed_g_typePlugin = 
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

                return &ForwardSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::ForwardSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::ForwardSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::NorthSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NorthSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::NorthSpeed", /* Name */
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
                    }}; /* Type code for  NorthSpeed */

                if (is_initialized) {
                    return &NorthSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                NorthSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NorthSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                NorthSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                NorthSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                NorthSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                NorthSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                NorthSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                NorthSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                NorthSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                NorthSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &NorthSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NorthSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NorthSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NorthSpeed_g_sampleAccessInfo;
                }

                NorthSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NorthSpeed_g_sampleAccessInfo.memberAccessInfos = 
                NorthSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::NorthSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NorthSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NorthSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NorthSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NorthSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::NorthSpeed >;

                NorthSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NorthSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NorthSpeed_g_typePlugin = 
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

                return &NorthSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::NorthSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::NorthSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::RadarHeight_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RadarHeight_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::RadarHeight", /* Name */
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
                    }}; /* Type code for  RadarHeight */

                if (is_initialized) {
                    return &RadarHeight_g_tc;
                }

                is_initialized = RTI_TRUE;

                RadarHeight_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RadarHeight_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RadarHeight_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RadarHeight_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RadarHeight_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RadarHeight_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RadarHeight_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RadarHeight_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RadarHeight_g_tc._data._sampleAccessInfo = sample_access_info();
                RadarHeight_g_tc._data._typePlugin = type_plugin_info();    

                return &RadarHeight_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RadarHeight_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RadarHeight_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RadarHeight_g_sampleAccessInfo;
                }

                RadarHeight_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RadarHeight_g_sampleAccessInfo.memberAccessInfos = 
                RadarHeight_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::RadarHeight);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RadarHeight_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RadarHeight_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RadarHeight_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RadarHeight_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::RadarHeight >;

                RadarHeight_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RadarHeight_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RadarHeight_g_typePlugin = 
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

                return &RadarHeight_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::RadarHeight_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::RadarHeight_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::Right_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Right_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::Right", /* Name */
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
                    }}; /* Type code for  Right */

                if (is_initialized) {
                    return &Right_g_tc;
                }

                is_initialized = RTI_TRUE;

                Right_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Right_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Right_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Right_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Right_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Right_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
                Right_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Right_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

                Right_g_tc._data._sampleAccessInfo = sample_access_info();
                Right_g_tc._data._typePlugin = type_plugin_info();    

                return &Right_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Right_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Right_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Right_g_sampleAccessInfo;
                }

                Right_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Right_g_sampleAccessInfo.memberAccessInfos = 
                Right_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::Right);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Right_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Right_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Right_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Right_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::Right >;

                Right_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Right_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Right_g_typePlugin = 
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

                return &Right_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::Right_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::Right_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::RightSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RightSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::RightSpeed", /* Name */
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
                    }}; /* Type code for  RightSpeed */

                if (is_initialized) {
                    return &RightSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                RightSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RightSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RightSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RightSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RightSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RightSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RightSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RightSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RightSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                RightSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &RightSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RightSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RightSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RightSpeed_g_sampleAccessInfo;
                }

                RightSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RightSpeed_g_sampleAccessInfo.memberAccessInfos = 
                RightSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::RightSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RightSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RightSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RightSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RightSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::RightSpeed >;

                RightSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RightSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RightSpeed_g_typePlugin = 
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

                return &RightSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::RightSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::RightSpeed_AliasTag_t >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
