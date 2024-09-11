

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeographicCoordinateAxes.idl
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
#include "GeographicCoordinateAxesPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GeographicCoordinateAxes.hpp"

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
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::GeodeticLatitude_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GeodeticLatitude_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::GeodeticLatitude", /* Name */
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
                    }}; /* Type code for  GeodeticLatitude */

                if (is_initialized) {
                    return &GeodeticLatitude_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeodeticLatitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeodeticLatitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GeodeticLatitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLatitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                GeodeticLatitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLatitude_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeodeticLatitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLatitude_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeodeticLatitude_g_tc._data._sampleAccessInfo = sample_access_info();
                GeodeticLatitude_g_tc._data._typePlugin = type_plugin_info();    

                return &GeodeticLatitude_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GeodeticLatitude_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeodeticLatitude_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeodeticLatitude_g_sampleAccessInfo;
                }

                GeodeticLatitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GeodeticLatitude_g_sampleAccessInfo.memberAccessInfos = 
                GeodeticLatitude_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::GeodeticLatitude);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeodeticLatitude_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeodeticLatitude_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeodeticLatitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeodeticLatitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::GeodeticLatitude >;

                GeodeticLatitude_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeodeticLatitude_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeodeticLatitude_g_typePlugin = 
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

                return &GeodeticLatitude_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::GeodeticLatitude_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::GeodeticLatitude_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::MeasurementCoordinate::GeodeticLongitude_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GeodeticLongitude_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::MeasurementCoordinate::GeodeticLongitude", /* Name */
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
                    }}; /* Type code for  GeodeticLongitude */

                if (is_initialized) {
                    return &GeodeticLongitude_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeodeticLongitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeodeticLongitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GeodeticLongitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLongitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                GeodeticLongitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLongitude_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeodeticLongitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeodeticLongitude_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeodeticLongitude_g_tc._data._sampleAccessInfo = sample_access_info();
                GeodeticLongitude_g_tc._data._typePlugin = type_plugin_info();    

                return &GeodeticLongitude_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GeodeticLongitude_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeodeticLongitude_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeodeticLongitude_g_sampleAccessInfo;
                }

                GeodeticLongitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GeodeticLongitude_g_sampleAccessInfo.memberAccessInfos = 
                GeodeticLongitude_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MeasurementCoordinate::GeodeticLongitude);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeodeticLongitude_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeodeticLongitude_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeodeticLongitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeodeticLongitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MeasurementCoordinate::GeodeticLongitude >;

                GeodeticLongitude_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeodeticLongitude_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeodeticLongitude_g_typePlugin = 
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

                return &GeodeticLongitude_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::MeasurementCoordinate::GeodeticLongitude_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MeasurementCoordinate::GeodeticLongitude_AliasTag_t >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
