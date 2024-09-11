

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AccelerationLocalWaterMass_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass", /* Name */
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
                    }}; /* Type code for  AccelerationLocalWaterMass */

                if (is_initialized) {
                    return &AccelerationLocalWaterMass_g_tc;
                }

                is_initialized = RTI_TRUE;

                AccelerationLocalWaterMass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AccelerationLocalWaterMass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AccelerationLocalWaterMass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationLocalWaterMass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AccelerationLocalWaterMass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationLocalWaterMass_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AccelerationLocalWaterMass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationLocalWaterMass_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AccelerationLocalWaterMass_g_tc._data._sampleAccessInfo = sample_access_info();
                AccelerationLocalWaterMass_g_tc._data._typePlugin = type_plugin_info();    

                return &AccelerationLocalWaterMass_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AccelerationLocalWaterMass_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AccelerationLocalWaterMass_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AccelerationLocalWaterMass_g_sampleAccessInfo;
                }

                AccelerationLocalWaterMass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AccelerationLocalWaterMass_g_sampleAccessInfo.memberAccessInfos = 
                AccelerationLocalWaterMass_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AccelerationLocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AccelerationLocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AccelerationLocalWaterMass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AccelerationLocalWaterMass_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass >;

                AccelerationLocalWaterMass_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AccelerationLocalWaterMass_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AccelerationLocalWaterMass_g_typePlugin = 
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

                return &AccelerationLocalWaterMass_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::AirTemperature_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AirTemperature_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::AirTemperature", /* Name */
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
                    }}; /* Type code for  AirTemperature */

                if (is_initialized) {
                    return &AirTemperature_g_tc;
                }

                is_initialized = RTI_TRUE;

                AirTemperature_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AirTemperature_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AirTemperature_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AirTemperature_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AirTemperature_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AirTemperature_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AirTemperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AirTemperature_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AirTemperature_g_tc._data._sampleAccessInfo = sample_access_info();
                AirTemperature_g_tc._data._typePlugin = type_plugin_info();    

                return &AirTemperature_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AirTemperature_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AirTemperature_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AirTemperature_g_sampleAccessInfo;
                }

                AirTemperature_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AirTemperature_g_sampleAccessInfo.memberAccessInfos = 
                AirTemperature_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::AirTemperature);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AirTemperature_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AirTemperature_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AirTemperature_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AirTemperature_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::AirTemperature >;

                AirTemperature_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AirTemperature_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AirTemperature_g_typePlugin = 
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

                return &AirTemperature_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::AirTemperature_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::AirTemperature_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AngleAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::AngleAcceleration", /* Name */
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
                    }}; /* Type code for  AngleAcceleration */

                if (is_initialized) {
                    return &AngleAcceleration_g_tc;
                }

                is_initialized = RTI_TRUE;

                AngleAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AngleAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AngleAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AngleAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AngleAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AngleAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AngleAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AngleAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AngleAcceleration_g_tc._data._sampleAccessInfo = sample_access_info();
                AngleAcceleration_g_tc._data._typePlugin = type_plugin_info();    

                return &AngleAcceleration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AngleAcceleration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AngleAcceleration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AngleAcceleration_g_sampleAccessInfo;
                }

                AngleAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AngleAcceleration_g_sampleAccessInfo.memberAccessInfos = 
                AngleAcceleration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::AngleAcceleration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AngleAcceleration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AngleAcceleration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AngleAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AngleAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration >;

                AngleAcceleration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AngleAcceleration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AngleAcceleration_g_typePlugin = 
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

                return &AngleAcceleration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::BearingAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BearingAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::BearingAngle", /* Name */
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
                    }}; /* Type code for  BearingAngle */

                if (is_initialized) {
                    return &BearingAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                BearingAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BearingAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                BearingAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BearingAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                BearingAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BearingAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BearingAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BearingAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BearingAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                BearingAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &BearingAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BearingAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BearingAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BearingAngle_g_sampleAccessInfo;
                }

                BearingAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BearingAngle_g_sampleAccessInfo.memberAccessInfos = 
                BearingAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::BearingAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BearingAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BearingAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BearingAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BearingAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::BearingAngle >;

                BearingAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BearingAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BearingAngle_g_typePlugin = 
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

                return &BearingAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::BearingAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::BearingAngle_AliasTag_t >::get())));
        }

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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ColorComponent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::ColorComponent", /* Name */
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
                    }}; /* Type code for  ColorComponent */

                if (is_initialized) {
                    return &ColorComponent_g_tc;
                }

                is_initialized = RTI_TRUE;

                ColorComponent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ColorComponent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                ColorComponent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ColorComponent_g_tc._data._annotations._defaultValue._u.long_value = 0;
                ColorComponent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ColorComponent_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ColorComponent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ColorComponent_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                ColorComponent_g_tc._data._sampleAccessInfo = sample_access_info();
                ColorComponent_g_tc._data._typePlugin = type_plugin_info();    

                return &ColorComponent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ColorComponent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ColorComponent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ColorComponent_g_sampleAccessInfo;
                }

                ColorComponent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ColorComponent_g_sampleAccessInfo.memberAccessInfos = 
                ColorComponent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::ColorComponent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ColorComponent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ColorComponent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ColorComponent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ColorComponent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::ColorComponent >;

                ColorComponent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ColorComponent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ColorComponent_g_typePlugin = 
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

                return &ColorComponent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ContactUncertainty_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::ContactUncertainty", /* Name */
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
                    }}; /* Type code for  ContactUncertainty */

                if (is_initialized) {
                    return &ContactUncertainty_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactUncertainty_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactUncertainty_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ContactUncertainty_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactUncertainty_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ContactUncertainty_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactUncertainty_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactUncertainty_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactUncertainty_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ContactUncertainty_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactUncertainty_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactUncertainty_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ContactUncertainty_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactUncertainty_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactUncertainty_g_sampleAccessInfo;
                }

                ContactUncertainty_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ContactUncertainty_g_sampleAccessInfo.memberAccessInfos = 
                ContactUncertainty_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::ContactUncertainty);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactUncertainty_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactUncertainty_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactUncertainty_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactUncertainty_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty >;

                ContactUncertainty_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactUncertainty_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactUncertainty_g_typePlugin = 
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

                return &ContactUncertainty_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarAccelPlatformXYZ_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ", /* Name */
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
                    }}; /* Type code for  CovarAccelPlatformXYZ */

                if (is_initialized) {
                    return &CovarAccelPlatformXYZ_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarAccelPlatformXYZ_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarAccelPlatformXYZ_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarAccelPlatformXYZ_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAccelPlatformXYZ_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarAccelPlatformXYZ_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAccelPlatformXYZ_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarAccelPlatformXYZ_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarAccelPlatformXYZ_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarAccelPlatformXYZ_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarAccelPlatformXYZ_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarAccelPlatformXYZ_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarAccelPlatformXYZ_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarAccelPlatformXYZ_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarAccelPlatformXYZ_g_sampleAccessInfo;
                }

                CovarAccelPlatformXYZ_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarAccelPlatformXYZ_g_sampleAccessInfo.memberAccessInfos = 
                CovarAccelPlatformXYZ_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarAccelPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarAccelPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarAccelPlatformXYZ_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarAccelPlatformXYZ_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ >;

                CovarAccelPlatformXYZ_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarAccelPlatformXYZ_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarAccelPlatformXYZ_g_typePlugin = 
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

                return &CovarAccelPlatformXYZ_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarOrientationAccelPlatformXYZ_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ", /* Name */
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
                    }}; /* Type code for  CovarOrientationAccelPlatformXYZ */

                if (is_initialized) {
                    return &CovarOrientationAccelPlatformXYZ_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarOrientationAccelPlatformXYZ_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationAccelPlatformXYZ_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarOrientationAccelPlatformXYZ_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarOrientationAccelPlatformXYZ_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarOrientationAccelPlatformXYZ_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarOrientationAccelPlatformXYZ_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo;
                }

                CovarOrientationAccelPlatformXYZ_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.memberAccessInfos = 
                CovarOrientationAccelPlatformXYZ_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ >;

                CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarOrientationAccelPlatformXYZ_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarOrientationAccelPlatformXYZ_g_typePlugin = 
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

                return &CovarOrientationAccelPlatformXYZ_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationNED_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarOrientationNED_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarOrientationNED", /* Name */
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
                    }}; /* Type code for  CovarOrientationNED */

                if (is_initialized) {
                    return &CovarOrientationNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarOrientationNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarOrientationNED_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarOrientationNED_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationNED_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarOrientationNED_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationNED_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarOrientationNED_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationNED_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarOrientationNED_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarOrientationNED_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarOrientationNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarOrientationNED_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarOrientationNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarOrientationNED_g_sampleAccessInfo;
                }

                CovarOrientationNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarOrientationNED_g_sampleAccessInfo.memberAccessInfos = 
                CovarOrientationNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarOrientationNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarOrientationNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarOrientationNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarOrientationNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarOrientationNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarOrientationNED >;

                CovarOrientationNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarOrientationNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarOrientationNED_g_typePlugin = 
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

                return &CovarOrientationNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationNED_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationNED_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarOrientationVelNED_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED", /* Name */
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
                    }}; /* Type code for  CovarOrientationVelNED */

                if (is_initialized) {
                    return &CovarOrientationVelNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarOrientationVelNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarOrientationVelNED_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarOrientationVelNED_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationVelNED_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarOrientationVelNED_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationVelNED_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarOrientationVelNED_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientationVelNED_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarOrientationVelNED_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarOrientationVelNED_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarOrientationVelNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarOrientationVelNED_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarOrientationVelNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarOrientationVelNED_g_sampleAccessInfo;
                }

                CovarOrientationVelNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarOrientationVelNED_g_sampleAccessInfo.memberAccessInfos = 
                CovarOrientationVelNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarOrientationVelNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarOrientationVelNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarOrientationVelNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarOrientationVelNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED >;

                CovarOrientationVelNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarOrientationVelNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarOrientationVelNED_g_typePlugin = 
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

                return &CovarOrientationVelNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarPosECEF_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarPosECEF", /* Name */
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
                    }}; /* Type code for  CovarPosECEF */

                if (is_initialized) {
                    return &CovarPosECEF_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarPosECEF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarPosECEF_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarPosECEF_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosECEF_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarPosECEF_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosECEF_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarPosECEF_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosECEF_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarPosECEF_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarPosECEF_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarPosECEF_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarPosECEF_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarPosECEF_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarPosECEF_g_sampleAccessInfo;
                }

                CovarPosECEF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarPosECEF_g_sampleAccessInfo.memberAccessInfos = 
                CovarPosECEF_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarPosECEF);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarPosECEF_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarPosECEF_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarPosECEF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarPosECEF_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF >;

                CovarPosECEF_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarPosECEF_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarPosECEF_g_typePlugin = 
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

                return &CovarPosECEF_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarPosNED_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarPosNED", /* Name */
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
                    }}; /* Type code for  CovarPosNED */

                if (is_initialized) {
                    return &CovarPosNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarPosNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarPosNED_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarPosNED_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosNED_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarPosNED_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosNED_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarPosNED_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosNED_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarPosNED_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarPosNED_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarPosNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarPosNED_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarPosNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarPosNED_g_sampleAccessInfo;
                }

                CovarPosNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarPosNED_g_sampleAccessInfo.memberAccessInfos = 
                CovarPosNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarPosNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarPosNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarPosNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarPosNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarPosNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarPosNED >;

                CovarPosNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarPosNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarPosNED_g_typePlugin = 
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

                return &CovarPosNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosVelNED_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarPosVelNED_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarPosVelNED", /* Name */
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
                    }}; /* Type code for  CovarPosVelNED */

                if (is_initialized) {
                    return &CovarPosVelNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarPosVelNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarPosVelNED_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarPosVelNED_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVelNED_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarPosVelNED_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVelNED_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarPosVelNED_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVelNED_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarPosVelNED_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarPosVelNED_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarPosVelNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarPosVelNED_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarPosVelNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarPosVelNED_g_sampleAccessInfo;
                }

                CovarPosVelNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarPosVelNED_g_sampleAccessInfo.memberAccessInfos = 
                CovarPosVelNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarPosVelNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarPosVelNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarPosVelNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarPosVelNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarPosVelNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarPosVelNED >;

                CovarPosVelNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarPosVelNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarPosVelNED_g_typePlugin = 
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

                return &CovarPosVelNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosVelNED_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarPosVelNED_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarVelNED_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::CovarVelNED", /* Name */
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
                    }}; /* Type code for  CovarVelNED */

                if (is_initialized) {
                    return &CovarVelNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarVelNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarVelNED_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarVelNED_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelNED_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarVelNED_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelNED_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarVelNED_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelNED_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarVelNED_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarVelNED_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarVelNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarVelNED_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarVelNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarVelNED_g_sampleAccessInfo;
                }

                CovarVelNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarVelNED_g_sampleAccessInfo.memberAccessInfos = 
                CovarVelNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::CovarVelNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarVelNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarVelNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarVelNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarVelNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::CovarVelNED >;

                CovarVelNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarVelNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarVelNED_g_typePlugin = 
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

                return &CovarVelNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DewPointTemperature_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::DewPointTemperature", /* Name */
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
                    }}; /* Type code for  DewPointTemperature */

                if (is_initialized) {
                    return &DewPointTemperature_g_tc;
                }

                is_initialized = RTI_TRUE;

                DewPointTemperature_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DewPointTemperature_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DewPointTemperature_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DewPointTemperature_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DewPointTemperature_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DewPointTemperature_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DewPointTemperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DewPointTemperature_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DewPointTemperature_g_tc._data._sampleAccessInfo = sample_access_info();
                DewPointTemperature_g_tc._data._typePlugin = type_plugin_info();    

                return &DewPointTemperature_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DewPointTemperature_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DewPointTemperature_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DewPointTemperature_g_sampleAccessInfo;
                }

                DewPointTemperature_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DewPointTemperature_g_sampleAccessInfo.memberAccessInfos = 
                DewPointTemperature_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::DewPointTemperature);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DewPointTemperature_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DewPointTemperature_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DewPointTemperature_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DewPointTemperature_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature >;

                DewPointTemperature_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DewPointTemperature_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DewPointTemperature_g_typePlugin = 
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

                return &DewPointTemperature_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GeodeticAltitude_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::GeodeticAltitude", /* Name */
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
                    }}; /* Type code for  GeodeticAltitude */

                if (is_initialized) {
                    return &GeodeticAltitude_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeodeticAltitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeodeticAltitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GeodeticAltitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticAltitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                GeodeticAltitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticAltitude_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeodeticAltitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticAltitude_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeodeticAltitude_g_tc._data._sampleAccessInfo = sample_access_info();
                GeodeticAltitude_g_tc._data._typePlugin = type_plugin_info();    

                return &GeodeticAltitude_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GeodeticAltitude_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeodeticAltitude_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeodeticAltitude_g_sampleAccessInfo;
                }

                GeodeticAltitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GeodeticAltitude_g_sampleAccessInfo.memberAccessInfos = 
                GeodeticAltitude_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::GeodeticAltitude);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeodeticAltitude_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeodeticAltitude_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeodeticAltitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeodeticAltitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude >;

                GeodeticAltitude_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeodeticAltitude_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeodeticAltitude_g_typePlugin = 
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

                return &GeodeticAltitude_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IlluminatorBeamWidth_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth", /* Name */
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
                    }}; /* Type code for  IlluminatorBeamWidth */

                if (is_initialized) {
                    return &IlluminatorBeamWidth_g_tc;
                }

                is_initialized = RTI_TRUE;

                IlluminatorBeamWidth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IlluminatorBeamWidth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                IlluminatorBeamWidth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorBeamWidth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                IlluminatorBeamWidth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorBeamWidth_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                IlluminatorBeamWidth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorBeamWidth_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                IlluminatorBeamWidth_g_tc._data._sampleAccessInfo = sample_access_info();
                IlluminatorBeamWidth_g_tc._data._typePlugin = type_plugin_info();    

                return &IlluminatorBeamWidth_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IlluminatorBeamWidth_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IlluminatorBeamWidth_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IlluminatorBeamWidth_g_sampleAccessInfo;
                }

                IlluminatorBeamWidth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IlluminatorBeamWidth_g_sampleAccessInfo.memberAccessInfos = 
                IlluminatorBeamWidth_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IlluminatorBeamWidth_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IlluminatorBeamWidth_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IlluminatorBeamWidth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IlluminatorBeamWidth_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth >;

                IlluminatorBeamWidth_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IlluminatorBeamWidth_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IlluminatorBeamWidth_g_typePlugin = 
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

                return &IlluminatorBeamWidth_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IlluminatorIntensityLevel_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel", /* Name */
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
                    }}; /* Type code for  IlluminatorIntensityLevel */

                if (is_initialized) {
                    return &IlluminatorIntensityLevel_g_tc;
                }

                is_initialized = RTI_TRUE;

                IlluminatorIntensityLevel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IlluminatorIntensityLevel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                IlluminatorIntensityLevel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorIntensityLevel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                IlluminatorIntensityLevel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorIntensityLevel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                IlluminatorIntensityLevel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                IlluminatorIntensityLevel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                IlluminatorIntensityLevel_g_tc._data._sampleAccessInfo = sample_access_info();
                IlluminatorIntensityLevel_g_tc._data._typePlugin = type_plugin_info();    

                return &IlluminatorIntensityLevel_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IlluminatorIntensityLevel_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IlluminatorIntensityLevel_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IlluminatorIntensityLevel_g_sampleAccessInfo;
                }

                IlluminatorIntensityLevel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IlluminatorIntensityLevel_g_sampleAccessInfo.memberAccessInfos = 
                IlluminatorIntensityLevel_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IlluminatorIntensityLevel_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IlluminatorIntensityLevel_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IlluminatorIntensityLevel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IlluminatorIntensityLevel_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel >;

                IlluminatorIntensityLevel_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IlluminatorIntensityLevel_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IlluminatorIntensityLevel_g_typePlugin = 
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

                return &IlluminatorIntensityLevel_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel_AliasTag_t >::get())));
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
                Left_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Left_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Left_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MaxEngineOilPressure_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure", /* Name */
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
                    }}; /* Type code for  MaxEngineOilPressure */

                if (is_initialized) {
                    return &MaxEngineOilPressure_g_tc;
                }

                is_initialized = RTI_TRUE;

                MaxEngineOilPressure_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MaxEngineOilPressure_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MaxEngineOilPressure_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MaxEngineOilPressure_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                MaxEngineOilPressure_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MaxEngineOilPressure_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MaxEngineOilPressure_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MaxEngineOilPressure_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MaxEngineOilPressure_g_tc._data._sampleAccessInfo = sample_access_info();
                MaxEngineOilPressure_g_tc._data._typePlugin = type_plugin_info();    

                return &MaxEngineOilPressure_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MaxEngineOilPressure_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MaxEngineOilPressure_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MaxEngineOilPressure_g_sampleAccessInfo;
                }

                MaxEngineOilPressure_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MaxEngineOilPressure_g_sampleAccessInfo.memberAccessInfos = 
                MaxEngineOilPressure_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MaxEngineOilPressure_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MaxEngineOilPressure_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MaxEngineOilPressure_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MaxEngineOilPressure_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure >;

                MaxEngineOilPressure_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MaxEngineOilPressure_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MaxEngineOilPressure_g_typePlugin = 
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

                return &MaxEngineOilPressure_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure_AliasTag_t >::get())));
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

                NanosecondsCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;

                /* Initialize the values for member annotations. */
                NanosecondsCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                NanosecondsCount_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
                NanosecondsCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                NanosecondsCount_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                NanosecondsCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                NanosecondsCount_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::NaturalNumberCount_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NaturalNumberCount_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::NaturalNumberCount", /* Name */
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
                    }}; /* Type code for  NaturalNumberCount */

                if (is_initialized) {
                    return &NaturalNumberCount_g_tc;
                }

                is_initialized = RTI_TRUE;

                NaturalNumberCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NaturalNumberCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                NaturalNumberCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                NaturalNumberCount_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                NaturalNumberCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                NaturalNumberCount_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                NaturalNumberCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                NaturalNumberCount_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                NaturalNumberCount_g_tc._data._sampleAccessInfo = sample_access_info();
                NaturalNumberCount_g_tc._data._typePlugin = type_plugin_info();    

                return &NaturalNumberCount_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NaturalNumberCount_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NaturalNumberCount_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NaturalNumberCount_g_sampleAccessInfo;
                }

                NaturalNumberCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NaturalNumberCount_g_sampleAccessInfo.memberAccessInfos = 
                NaturalNumberCount_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::NaturalNumberCount);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NaturalNumberCount_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NaturalNumberCount_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NaturalNumberCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NaturalNumberCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::NaturalNumberCount >;

                NaturalNumberCount_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NaturalNumberCount_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NaturalNumberCount_g_typePlugin = 
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

                return &NaturalNumberCount_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::NaturalNumberCount_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::NaturalNumberCount_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PeakSoundPressureLevel_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel", /* Name */
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
                    }}; /* Type code for  PeakSoundPressureLevel */

                if (is_initialized) {
                    return &PeakSoundPressureLevel_g_tc;
                }

                is_initialized = RTI_TRUE;

                PeakSoundPressureLevel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PeakSoundPressureLevel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PeakSoundPressureLevel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PeakSoundPressureLevel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PeakSoundPressureLevel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PeakSoundPressureLevel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PeakSoundPressureLevel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PeakSoundPressureLevel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PeakSoundPressureLevel_g_tc._data._sampleAccessInfo = sample_access_info();
                PeakSoundPressureLevel_g_tc._data._typePlugin = type_plugin_info();    

                return &PeakSoundPressureLevel_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PeakSoundPressureLevel_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PeakSoundPressureLevel_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PeakSoundPressureLevel_g_sampleAccessInfo;
                }

                PeakSoundPressureLevel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PeakSoundPressureLevel_g_sampleAccessInfo.memberAccessInfos = 
                PeakSoundPressureLevel_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PeakSoundPressureLevel_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PeakSoundPressureLevel_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PeakSoundPressureLevel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PeakSoundPressureLevel_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel >;

                PeakSoundPressureLevel_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PeakSoundPressureLevel_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PeakSoundPressureLevel_g_typePlugin = 
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

                return &PeakSoundPressureLevel_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::Ratio_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Ratio_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::Ratio", /* Name */
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
                    }}; /* Type code for  Ratio */

                if (is_initialized) {
                    return &Ratio_g_tc;
                }

                is_initialized = RTI_TRUE;

                Ratio_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Ratio_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Ratio_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Ratio_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Ratio_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Ratio_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Ratio_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Ratio_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Ratio_g_tc._data._sampleAccessInfo = sample_access_info();
                Ratio_g_tc._data._typePlugin = type_plugin_info();    

                return &Ratio_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Ratio_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Ratio_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Ratio_g_sampleAccessInfo;
                }

                Ratio_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Ratio_g_sampleAccessInfo.memberAccessInfos = 
                Ratio_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::Ratio);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Ratio_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Ratio_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Ratio_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Ratio_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::Ratio >;

                Ratio_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Ratio_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Ratio_g_typePlugin = 
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

                return &Ratio_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::Ratio_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::Ratio_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SignalToNoiseRatio_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio", /* Name */
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
                    }}; /* Type code for  SignalToNoiseRatio */

                if (is_initialized) {
                    return &SignalToNoiseRatio_g_tc;
                }

                is_initialized = RTI_TRUE;

                SignalToNoiseRatio_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SignalToNoiseRatio_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SignalToNoiseRatio_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SignalToNoiseRatio_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SignalToNoiseRatio_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SignalToNoiseRatio_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SignalToNoiseRatio_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SignalToNoiseRatio_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SignalToNoiseRatio_g_tc._data._sampleAccessInfo = sample_access_info();
                SignalToNoiseRatio_g_tc._data._typePlugin = type_plugin_info();    

                return &SignalToNoiseRatio_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SignalToNoiseRatio_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SignalToNoiseRatio_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SignalToNoiseRatio_g_sampleAccessInfo;
                }

                SignalToNoiseRatio_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SignalToNoiseRatio_g_sampleAccessInfo.memberAccessInfos = 
                SignalToNoiseRatio_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SignalToNoiseRatio_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SignalToNoiseRatio_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SignalToNoiseRatio_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SignalToNoiseRatio_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio >;

                SignalToNoiseRatio_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SignalToNoiseRatio_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SignalToNoiseRatio_g_typePlugin = 
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

                return &SignalToNoiseRatio_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpeedBSLAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration", /* Name */
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
                    }}; /* Type code for  SpeedBSLAcceleration */

                if (is_initialized) {
                    return &SpeedBSLAcceleration_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedBSLAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedBSLAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SpeedBSLAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSLAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SpeedBSLAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSLAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SpeedBSLAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSLAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SpeedBSLAcceleration_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedBSLAcceleration_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedBSLAcceleration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedBSLAcceleration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedBSLAcceleration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedBSLAcceleration_g_sampleAccessInfo;
                }

                SpeedBSLAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedBSLAcceleration_g_sampleAccessInfo.memberAccessInfos = 
                SpeedBSLAcceleration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedBSLAcceleration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedBSLAcceleration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedBSLAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedBSLAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration >;

                SpeedBSLAcceleration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedBSLAcceleration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedBSLAcceleration_g_typePlugin = 
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

                return &SpeedBSLAcceleration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::StringName_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode StringName_g_tc_string;

                static DDS_TypeCode StringName_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::StringName", /* Name */
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
                    }}; /* Type code for  StringName */

                if (is_initialized) {
                    return &StringName_g_tc;
                }

                is_initialized = RTI_TRUE;

                StringName_g_tc_string = initialize_string_typecode((64L));

                StringName_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StringName_g_tc._data._typeCode =  (RTICdrTypeCode *)&StringName_g_tc_string;

                /* Initialize the values for member annotations. */
                StringName_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                StringName_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                StringName_g_tc._data._sampleAccessInfo = sample_access_info();
                StringName_g_tc._data._typePlugin = type_plugin_info();    

                return &StringName_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo StringName_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StringName_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StringName_g_sampleAccessInfo;
                }

                StringName_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                StringName_g_sampleAccessInfo.memberAccessInfos = 
                StringName_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::StringName);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StringName_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StringName_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StringName_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StringName_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::StringName >;

                StringName_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StringName_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StringName_g_typePlugin = 
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

                return &StringName_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringName_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::StringName_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::StringValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode StringValue_g_tc_string;

                static DDS_TypeCode StringValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::StringValue", /* Name */
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
                    }}; /* Type code for  StringValue */

                if (is_initialized) {
                    return &StringValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                StringValue_g_tc_string = initialize_string_typecode((256L));

                StringValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StringValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&StringValue_g_tc_string;

                /* Initialize the values for member annotations. */
                StringValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                StringValue_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                StringValue_g_tc._data._sampleAccessInfo = sample_access_info();
                StringValue_g_tc._data._typePlugin = type_plugin_info();    

                return &StringValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo StringValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StringValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StringValue_g_sampleAccessInfo;
                }

                StringValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                StringValue_g_sampleAccessInfo.memberAccessInfos = 
                StringValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::StringValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StringValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StringValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StringValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StringValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::StringValue >;

                StringValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StringValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StringValue_g_typePlugin = 
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

                return &StringValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::StringValue_AliasTag_t >::get())));
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

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::WaterTemperature_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WaterTemperature_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::WaterTemperature", /* Name */
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
                    }}; /* Type code for  WaterTemperature */

                if (is_initialized) {
                    return &WaterTemperature_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaterTemperature_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WaterTemperature_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                WaterTemperature_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WaterTemperature_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                WaterTemperature_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaterTemperature_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaterTemperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaterTemperature_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WaterTemperature_g_tc._data._sampleAccessInfo = sample_access_info();
                WaterTemperature_g_tc._data._typePlugin = type_plugin_info();    

                return &WaterTemperature_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WaterTemperature_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaterTemperature_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaterTemperature_g_sampleAccessInfo;
                }

                WaterTemperature_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WaterTemperature_g_sampleAccessInfo.memberAccessInfos = 
                WaterTemperature_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::WaterTemperature);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaterTemperature_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaterTemperature_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaterTemperature_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaterTemperature_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::WaterTemperature >;

                WaterTemperature_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaterTemperature_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaterTemperature_g_typePlugin = 
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

                return &WaterTemperature_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::WaterTemperature_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::WaterTemperature_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WeatherBarometricPressure_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure", /* Name */
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
                    }}; /* Type code for  WeatherBarometricPressure */

                if (is_initialized) {
                    return &WeatherBarometricPressure_g_tc;
                }

                is_initialized = RTI_TRUE;

                WeatherBarometricPressure_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WeatherBarometricPressure_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                WeatherBarometricPressure_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherBarometricPressure_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                WeatherBarometricPressure_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherBarometricPressure_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherBarometricPressure_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherBarometricPressure_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WeatherBarometricPressure_g_tc._data._sampleAccessInfo = sample_access_info();
                WeatherBarometricPressure_g_tc._data._typePlugin = type_plugin_info();    

                return &WeatherBarometricPressure_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WeatherBarometricPressure_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WeatherBarometricPressure_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WeatherBarometricPressure_g_sampleAccessInfo;
                }

                WeatherBarometricPressure_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WeatherBarometricPressure_g_sampleAccessInfo.memberAccessInfos = 
                WeatherBarometricPressure_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WeatherBarometricPressure_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WeatherBarometricPressure_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WeatherBarometricPressure_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WeatherBarometricPressure_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure >;

                WeatherBarometricPressure_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WeatherBarometricPressure_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WeatherBarometricPressure_g_typePlugin = 
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

                return &WeatherBarometricPressure_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::XPosition_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode XPosition_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::XPosition", /* Name */
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
                    }}; /* Type code for  XPosition */

                if (is_initialized) {
                    return &XPosition_g_tc;
                }

                is_initialized = RTI_TRUE;

                XPosition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                XPosition_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                XPosition_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                XPosition_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                XPosition_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                XPosition_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                XPosition_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                XPosition_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                XPosition_g_tc._data._sampleAccessInfo = sample_access_info();
                XPosition_g_tc._data._typePlugin = type_plugin_info();    

                return &XPosition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo XPosition_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo XPosition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &XPosition_g_sampleAccessInfo;
                }

                XPosition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                XPosition_g_sampleAccessInfo.memberAccessInfos = 
                XPosition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::XPosition);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        XPosition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        XPosition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                XPosition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                XPosition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::XPosition >;

                XPosition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &XPosition_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin XPosition_g_typePlugin = 
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

                return &XPosition_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::XPosition_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::XPosition_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::YPosition_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode YPosition_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::YPosition", /* Name */
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
                    }}; /* Type code for  YPosition */

                if (is_initialized) {
                    return &YPosition_g_tc;
                }

                is_initialized = RTI_TRUE;

                YPosition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                YPosition_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                YPosition_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                YPosition_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                YPosition_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                YPosition_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                YPosition_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                YPosition_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                YPosition_g_tc._data._sampleAccessInfo = sample_access_info();
                YPosition_g_tc._data._typePlugin = type_plugin_info();    

                return &YPosition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo YPosition_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo YPosition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &YPosition_g_sampleAccessInfo;
                }

                YPosition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                YPosition_g_sampleAccessInfo.memberAccessInfos = 
                YPosition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::YPosition);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        YPosition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        YPosition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                YPosition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                YPosition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::YPosition >;

                YPosition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &YPosition_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin YPosition_g_typePlugin = 
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

                return &YPosition_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::YPosition_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::YPosition_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::PrimitiveConstrained::ZPosition_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ZPosition_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::PrimitiveConstrained::ZPosition", /* Name */
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
                    }}; /* Type code for  ZPosition */

                if (is_initialized) {
                    return &ZPosition_g_tc;
                }

                is_initialized = RTI_TRUE;

                ZPosition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ZPosition_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ZPosition_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ZPosition_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ZPosition_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ZPosition_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ZPosition_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ZPosition_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ZPosition_g_tc._data._sampleAccessInfo = sample_access_info();
                ZPosition_g_tc._data._typePlugin = type_plugin_info();    

                return &ZPosition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ZPosition_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ZPosition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ZPosition_g_sampleAccessInfo;
                }

                ZPosition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ZPosition_g_sampleAccessInfo.memberAccessInfos = 
                ZPosition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::PrimitiveConstrained::ZPosition);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ZPosition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ZPosition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ZPosition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ZPosition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::PrimitiveConstrained::ZPosition >;

                ZPosition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ZPosition_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ZPosition_g_typePlugin = 
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

                return &ZPosition_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::PrimitiveConstrained::ZPosition_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::PrimitiveConstrained::ZPosition_AliasTag_t >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
