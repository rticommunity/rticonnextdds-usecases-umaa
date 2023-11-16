

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
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
#include "ConstrainedTypesPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ConstrainedTypes.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace PrimitiveConstrained {

        } // namespace PrimitiveConstrained  

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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CarrierToNoiseDensityRatio_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio", /* Name */
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
                    }}; /* Type code for  CarrierToNoiseDensityRatio */

                if (is_initialized) {
                    return &CarrierToNoiseDensityRatio_g_tc;
                }

                is_initialized = RTI_TRUE;

                CarrierToNoiseDensityRatio_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CarrierToNoiseDensityRatio_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CarrierToNoiseDensityRatio_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CarrierToNoiseDensityRatio_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CarrierToNoiseDensityRatio_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CarrierToNoiseDensityRatio_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CarrierToNoiseDensityRatio_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CarrierToNoiseDensityRatio_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CarrierToNoiseDensityRatio_g_tc._data._sampleAccessInfo = sample_access_info();
                CarrierToNoiseDensityRatio_g_tc._data._typePlugin = type_plugin_info();    

                return &CarrierToNoiseDensityRatio_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CarrierToNoiseDensityRatio_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CarrierToNoiseDensityRatio_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CarrierToNoiseDensityRatio_g_sampleAccessInfo;
                }

                CarrierToNoiseDensityRatio_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CarrierToNoiseDensityRatio_g_sampleAccessInfo.memberAccessInfos = 
                CarrierToNoiseDensityRatio_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CarrierToNoiseDensityRatio_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CarrierToNoiseDensityRatio_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CarrierToNoiseDensityRatio_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CarrierToNoiseDensityRatio_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio >;

                CarrierToNoiseDensityRatio_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CarrierToNoiseDensityRatio_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CarrierToNoiseDensityRatio_g_typePlugin = 
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

                return &CarrierToNoiseDensityRatio_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarAngleAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarAngleAngle", /* Name */
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
                    }}; /* Type code for  CovarAngleAngle */

                if (is_initialized) {
                    return &CovarAngleAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarAngleAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarAngleAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarAngleAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAngleAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarAngleAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAngleAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarAngleAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAngleAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarAngleAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarAngleAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarAngleAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarAngleAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarAngleAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarAngleAngle_g_sampleAccessInfo;
                }

                CovarAngleAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarAngleAngle_g_sampleAccessInfo.memberAccessInfos = 
                CovarAngleAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarAngleAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarAngleAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarAngleAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarAngleAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarAngleAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle >;

                CovarAngleAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarAngleAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarAngleAngle_g_typePlugin = 
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

                return &CovarAngleAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarAngleAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarDisAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarDisAngle", /* Name */
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
                    }}; /* Type code for  CovarDisAngle */

                if (is_initialized) {
                    return &CovarDisAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarDisAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarDisAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarDisAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarDisAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarDisAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarDisAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarDisAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarDisAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarDisAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarDisAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarDisAngle_g_sampleAccessInfo;
                }

                CovarDisAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarDisAngle_g_sampleAccessInfo.memberAccessInfos = 
                CovarDisAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarDisAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarDisAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarDisAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarDisAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarDisAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle >;

                CovarDisAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarDisAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarDisAngle_g_typePlugin = 
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

                return &CovarDisAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarDisAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarDisDis_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarDisDis_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarDisDis", /* Name */
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
                    }}; /* Type code for  CovarDisDis */

                if (is_initialized) {
                    return &CovarDisDis_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarDisDis_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarDisDis_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarDisDis_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisDis_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarDisDis_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisDis_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarDisDis_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarDisDis_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarDisDis_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarDisDis_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarDisDis_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarDisDis_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarDisDis_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarDisDis_g_sampleAccessInfo;
                }

                CovarDisDis_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarDisDis_g_sampleAccessInfo.memberAccessInfos = 
                CovarDisDis_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarDisDis);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarDisDis_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarDisDis_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarDisDis_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarDisDis_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarDisDis >;

                CovarDisDis_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarDisDis_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarDisDis_g_typePlugin = 
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

                return &CovarDisDis_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarDisDis_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarDisDis_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::Left_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Left_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::Left", /* Name */
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
                    }}; /* Type code for  Left */

                if (is_initialized) {
                    return &Left_g_tc;
                }

                is_initialized = RTI_TRUE;

                Left_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Left_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Left_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Left_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Left_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Left_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
                Left_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Left_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

                Left_g_tc._data._sampleAccessInfo = sample_access_info();
                Left_g_tc._data._typePlugin = type_plugin_info();    

                return &Left_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Left_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Left_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Left_g_sampleAccessInfo;
                }

                Left_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Left_g_sampleAccessInfo.memberAccessInfos = 
                Left_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::Left);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Left_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Left_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Left_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Left_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::Left >;

                Left_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Left_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Left_g_typePlugin = 
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

                return &Left_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::Left_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::Left_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MMSI_g_tc_string;

                static DDS_TypeCode MMSI_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::MMSI", /* Name */
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
                    }}; /* Type code for  MMSI */

                if (is_initialized) {
                    return &MMSI_g_tc;
                }

                is_initialized = RTI_TRUE;

                MMSI_g_tc_string = initialize_string_typecode((9L));

                MMSI_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MMSI_g_tc._data._typeCode =  (RTICdrTypeCode *)&MMSI_g_tc_string;

                /* Initialize the values for member annotations. */
                MMSI_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MMSI_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MMSI_g_tc._data._sampleAccessInfo = sample_access_info();
                MMSI_g_tc._data._typePlugin = type_plugin_info();    

                return &MMSI_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MMSI_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MMSI_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MMSI_g_sampleAccessInfo;
                }

                MMSI_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MMSI_g_sampleAccessInfo.memberAccessInfos = 
                MMSI_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::MMSI);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MMSI_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MMSI_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MMSI_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MMSI_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::MMSI >;

                MMSI_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MMSI_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MMSI_g_typePlugin = 
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

                return &MMSI_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NanosecondsCount_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::NanosecondsCount", /* Name */
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
                    }}; /* Type code for  NanosecondsCount */

                if (is_initialized) {
                    return &NanosecondsCount_g_tc;
                }

                is_initialized = RTI_TRUE;

                NanosecondsCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NanosecondsCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                NanosecondsCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                NanosecondsCount_g_tc._data._annotations._defaultValue._u.long_value = 0;
                NanosecondsCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                NanosecondsCount_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                NanosecondsCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                NanosecondsCount_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                NanosecondsCount_g_tc._data._sampleAccessInfo = sample_access_info();
                NanosecondsCount_g_tc._data._typePlugin = type_plugin_info();    

                return &NanosecondsCount_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NanosecondsCount_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NanosecondsCount_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NanosecondsCount_g_sampleAccessInfo;
                }

                NanosecondsCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NanosecondsCount_g_sampleAccessInfo.memberAccessInfos = 
                NanosecondsCount_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::NanosecondsCount);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NanosecondsCount_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NanosecondsCount_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NanosecondsCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NanosecondsCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount >;

                NanosecondsCount_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NanosecondsCount_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NanosecondsCount_g_typePlugin = 
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

                return &NanosecondsCount_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NanosecondsDrift_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::NanosecondsDrift", /* Name */
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
                    }}; /* Type code for  NanosecondsDrift */

                if (is_initialized) {
                    return &NanosecondsDrift_g_tc;
                }

                is_initialized = RTI_TRUE;

                NanosecondsDrift_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NanosecondsDrift_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                NanosecondsDrift_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                NanosecondsDrift_g_tc._data._annotations._defaultValue._u.long_value = 0;
                NanosecondsDrift_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                NanosecondsDrift_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                NanosecondsDrift_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                NanosecondsDrift_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                NanosecondsDrift_g_tc._data._sampleAccessInfo = sample_access_info();
                NanosecondsDrift_g_tc._data._typePlugin = type_plugin_info();    

                return &NanosecondsDrift_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NanosecondsDrift_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NanosecondsDrift_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NanosecondsDrift_g_sampleAccessInfo;
                }

                NanosecondsDrift_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NanosecondsDrift_g_sampleAccessInfo.memberAccessInfos = 
                NanosecondsDrift_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::NanosecondsDrift);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NanosecondsDrift_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NanosecondsDrift_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NanosecondsDrift_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NanosecondsDrift_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift >;

                NanosecondsDrift_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NanosecondsDrift_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NanosecondsDrift_g_typePlugin = 
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

                return &NanosecondsDrift_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::StringLongDescription_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode StringLongDescription_g_tc_string;

                static DDS_TypeCode StringLongDescription_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::StringLongDescription", /* Name */
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
                    }}; /* Type code for  StringLongDescription */

                if (is_initialized) {
                    return &StringLongDescription_g_tc;
                }

                is_initialized = RTI_TRUE;

                StringLongDescription_g_tc_string = initialize_string_typecode((4095L));

                StringLongDescription_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StringLongDescription_g_tc._data._typeCode =  (RTICdrTypeCode *)&StringLongDescription_g_tc_string;

                /* Initialize the values for member annotations. */
                StringLongDescription_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                StringLongDescription_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                StringLongDescription_g_tc._data._sampleAccessInfo = sample_access_info();
                StringLongDescription_g_tc._data._typePlugin = type_plugin_info();    

                return &StringLongDescription_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo StringLongDescription_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StringLongDescription_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StringLongDescription_g_sampleAccessInfo;
                }

                StringLongDescription_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                StringLongDescription_g_sampleAccessInfo.memberAccessInfos = 
                StringLongDescription_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::StringLongDescription);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StringLongDescription_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StringLongDescription_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StringLongDescription_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StringLongDescription_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::StringLongDescription >;

                StringLongDescription_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StringLongDescription_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StringLongDescription_g_typePlugin = 
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

                return &StringLongDescription_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringLongDescription_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::StringLongDescription_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode StringShortDescription_g_tc_string;

                static DDS_TypeCode StringShortDescription_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::StringShortDescription", /* Name */
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
                    }}; /* Type code for  StringShortDescription */

                if (is_initialized) {
                    return &StringShortDescription_g_tc;
                }

                is_initialized = RTI_TRUE;

                StringShortDescription_g_tc_string = initialize_string_typecode((1023L));

                StringShortDescription_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StringShortDescription_g_tc._data._typeCode =  (RTICdrTypeCode *)&StringShortDescription_g_tc_string;

                /* Initialize the values for member annotations. */
                StringShortDescription_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                StringShortDescription_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                StringShortDescription_g_tc._data._sampleAccessInfo = sample_access_info();
                StringShortDescription_g_tc._data._typePlugin = type_plugin_info();    

                return &StringShortDescription_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo StringShortDescription_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StringShortDescription_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StringShortDescription_g_sampleAccessInfo;
                }

                StringShortDescription_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                StringShortDescription_g_sampleAccessInfo.memberAccessInfos = 
                StringShortDescription_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::StringShortDescription);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StringShortDescription_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StringShortDescription_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StringShortDescription_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StringShortDescription_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::StringShortDescription >;

                StringShortDescription_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StringShortDescription_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StringShortDescription_g_typePlugin = 
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

                return &StringShortDescription_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode UniformResourceIdentifier_g_tc_string;

                static DDS_TypeCode UniformResourceIdentifier_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier", /* Name */
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
                    }}; /* Type code for  UniformResourceIdentifier */

                if (is_initialized) {
                    return &UniformResourceIdentifier_g_tc;
                }

                is_initialized = RTI_TRUE;

                UniformResourceIdentifier_g_tc_string = initialize_string_typecode((2047L));

                UniformResourceIdentifier_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UniformResourceIdentifier_g_tc._data._typeCode =  (RTICdrTypeCode *)&UniformResourceIdentifier_g_tc_string;

                /* Initialize the values for member annotations. */
                UniformResourceIdentifier_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                UniformResourceIdentifier_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                UniformResourceIdentifier_g_tc._data._sampleAccessInfo = sample_access_info();
                UniformResourceIdentifier_g_tc._data._typePlugin = type_plugin_info();    

                return &UniformResourceIdentifier_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo UniformResourceIdentifier_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UniformResourceIdentifier_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UniformResourceIdentifier_g_sampleAccessInfo;
                }

                UniformResourceIdentifier_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                UniformResourceIdentifier_g_sampleAccessInfo.memberAccessInfos = 
                UniformResourceIdentifier_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UniformResourceIdentifier_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UniformResourceIdentifier_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UniformResourceIdentifier_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UniformResourceIdentifier_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier >;

                UniformResourceIdentifier_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UniformResourceIdentifier_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UniformResourceIdentifier_g_typePlugin = 
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

                return &UniformResourceIdentifier_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
