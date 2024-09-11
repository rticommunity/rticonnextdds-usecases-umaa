

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
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
#include "MeasurementsPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Measurements.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- DateTime: 

            DateTime::DateTime() :
                m_seconds_ (0ll) ,
                m_nanoseconds_ (0)  {

            }   

            DateTime::DateTime (int64_t seconds_,int32_t nanoseconds_):
                m_seconds_(seconds_), 
                m_nanoseconds_(nanoseconds_) {
            }

            void DateTime::swap(DateTime& other_)  noexcept 
            {
                using std::swap;
                swap(m_seconds_, other_.m_seconds_);
                swap(m_nanoseconds_, other_.m_nanoseconds_);
            }  

            bool DateTime::operator == (const DateTime& other_) const {
                if (m_seconds_ != other_.m_seconds_) {
                    return false;
                }
                if (m_nanoseconds_ != other_.m_nanoseconds_) {
                    return false;
                }
                return true;
            }

            bool DateTime::operator != (const DateTime& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DateTime& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "seconds: " << sample.seconds ()<<", ";
                o << "nanoseconds: " << sample.nanoseconds ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

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
        struct native_type_code< ::UMAA::Common::Measurement::AmpHours_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AmpHours_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AmpHours", /* Name */
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
                    }}; /* Type code for  AmpHours */

                if (is_initialized) {
                    return &AmpHours_g_tc;
                }

                is_initialized = RTI_TRUE;

                AmpHours_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AmpHours_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AmpHours_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AmpHours_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AmpHours_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AmpHours_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AmpHours_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AmpHours_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AmpHours_g_tc._data._sampleAccessInfo = sample_access_info();
                AmpHours_g_tc._data._typePlugin = type_plugin_info();    

                return &AmpHours_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AmpHours_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AmpHours_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AmpHours_g_sampleAccessInfo;
                }

                AmpHours_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AmpHours_g_sampleAccessInfo.memberAccessInfos = 
                AmpHours_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AmpHours);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AmpHours_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AmpHours_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AmpHours_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AmpHours_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AmpHours >;

                AmpHours_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AmpHours_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AmpHours_g_typePlugin = 
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

                return &AmpHours_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AmpHours_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AmpHours_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AngleAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AngleAcceleration", /* Name */
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
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AngleAcceleration);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AngleAcceleration >;

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

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::AzimuthTrueNorthAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AzimuthTrueNorthAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AzimuthTrueNorthAngle", /* Name */
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
                    }}; /* Type code for  AzimuthTrueNorthAngle */

                if (is_initialized) {
                    return &AzimuthTrueNorthAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                AzimuthTrueNorthAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AzimuthTrueNorthAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AzimuthTrueNorthAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AzimuthTrueNorthAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AzimuthTrueNorthAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AzimuthTrueNorthAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AzimuthTrueNorthAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AzimuthTrueNorthAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AzimuthTrueNorthAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                AzimuthTrueNorthAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &AzimuthTrueNorthAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AzimuthTrueNorthAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AzimuthTrueNorthAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AzimuthTrueNorthAngle_g_sampleAccessInfo;
                }

                AzimuthTrueNorthAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AzimuthTrueNorthAngle_g_sampleAccessInfo.memberAccessInfos = 
                AzimuthTrueNorthAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AzimuthTrueNorthAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AzimuthTrueNorthAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AzimuthTrueNorthAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AzimuthTrueNorthAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AzimuthTrueNorthAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AzimuthTrueNorthAngle >;

                AzimuthTrueNorthAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AzimuthTrueNorthAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AzimuthTrueNorthAngle_g_typePlugin = 
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

                return &AzimuthTrueNorthAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AzimuthTrueNorthAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AzimuthTrueNorthAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::BatteryCurrent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BatteryCurrent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::BatteryCurrent", /* Name */
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
                    }}; /* Type code for  BatteryCurrent */

                if (is_initialized) {
                    return &BatteryCurrent_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryCurrent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryCurrent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                BatteryCurrent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                BatteryCurrent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCurrent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatteryCurrent_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryCurrent_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryCurrent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BatteryCurrent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryCurrent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryCurrent_g_sampleAccessInfo;
                }

                BatteryCurrent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BatteryCurrent_g_sampleAccessInfo.memberAccessInfos = 
                BatteryCurrent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::BatteryCurrent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryCurrent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryCurrent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryCurrent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryCurrent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::BatteryCurrent >;

                BatteryCurrent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryCurrent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryCurrent_g_typePlugin = 
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

                return &BatteryCurrent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::BatteryCurrent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::BatteryCurrent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::BatteryCurrentDuration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BatteryCurrentDuration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::BatteryCurrentDuration", /* Name */
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
                    }}; /* Type code for  BatteryCurrentDuration */

                if (is_initialized) {
                    return &BatteryCurrentDuration_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryCurrentDuration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryCurrentDuration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                BatteryCurrentDuration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrentDuration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                BatteryCurrentDuration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrentDuration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCurrentDuration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCurrentDuration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatteryCurrentDuration_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryCurrentDuration_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryCurrentDuration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BatteryCurrentDuration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryCurrentDuration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryCurrentDuration_g_sampleAccessInfo;
                }

                BatteryCurrentDuration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BatteryCurrentDuration_g_sampleAccessInfo.memberAccessInfos = 
                BatteryCurrentDuration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::BatteryCurrentDuration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryCurrentDuration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryCurrentDuration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryCurrentDuration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryCurrentDuration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::BatteryCurrentDuration >;

                BatteryCurrentDuration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryCurrentDuration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryCurrentDuration_g_typePlugin = 
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

                return &BatteryCurrentDuration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::BatteryCurrentDuration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::BatteryCurrentDuration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::BatteryCycles_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BatteryCycles_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::BatteryCycles", /* Name */
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
                    }}; /* Type code for  BatteryCycles */

                if (is_initialized) {
                    return &BatteryCycles_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryCycles_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryCycles_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                BatteryCycles_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCycles_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                BatteryCycles_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCycles_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCycles_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCycles_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatteryCycles_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryCycles_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryCycles_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BatteryCycles_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryCycles_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryCycles_g_sampleAccessInfo;
                }

                BatteryCycles_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BatteryCycles_g_sampleAccessInfo.memberAccessInfos = 
                BatteryCycles_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::BatteryCycles);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryCycles_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryCycles_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryCycles_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryCycles_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::BatteryCycles >;

                BatteryCycles_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryCycles_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryCycles_g_typePlugin = 
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

                return &BatteryCycles_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::BatteryCycles_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::BatteryCycles_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::BinaryValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BinaryValue_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,256L, NULL,NULL);

                static DDS_TypeCode BinaryValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::BinaryValue", /* Name */
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
                    }}; /* Type code for  BinaryValue */

                if (is_initialized) {
                    return &BinaryValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                BinaryValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BinaryValue_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;
                BinaryValue_g_tc._data._typeCode =  (RTICdrTypeCode *)& BinaryValue_g_tc_array;

                /* Initialize the values for member annotations. */

                BinaryValue_g_tc._data._sampleAccessInfo = sample_access_info();
                BinaryValue_g_tc._data._typePlugin = type_plugin_info();    

                return &BinaryValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BinaryValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BinaryValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BinaryValue_g_sampleAccessInfo;
                }

                BinaryValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BinaryValue_g_sampleAccessInfo.memberAccessInfos = 
                BinaryValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::BinaryValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BinaryValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BinaryValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BinaryValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BinaryValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::BinaryValue >;

                BinaryValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BinaryValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BinaryValue_g_typePlugin = 
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

                return &BinaryValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::BinaryValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::BinaryValue_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ByteValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ByteValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::ByteValue", /* Name */
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
                    }}; /* Type code for  ByteValue */

                if (is_initialized) {
                    return &ByteValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                ByteValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ByteValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                ByteValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                ByteValue_g_tc._data._annotations._defaultValue._u.octet_value = 0;
                ByteValue_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                ByteValue_g_tc._data._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                ByteValue_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                ByteValue_g_tc._data._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                ByteValue_g_tc._data._sampleAccessInfo = sample_access_info();
                ByteValue_g_tc._data._typePlugin = type_plugin_info();    

                return &ByteValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ByteValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ByteValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ByteValue_g_sampleAccessInfo;
                }

                ByteValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ByteValue_g_sampleAccessInfo.memberAccessInfos = 
                ByteValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ByteValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ByteValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ByteValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ByteValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ByteValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ByteValue >;

                ByteValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ByteValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ByteValue_g_typePlugin = 
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

                return &ByteValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::ByteValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ByteValue_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Charge_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Charge_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Charge", /* Name */
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
                    }}; /* Type code for  Charge */

                if (is_initialized) {
                    return &Charge_g_tc;
                }

                is_initialized = RTI_TRUE;

                Charge_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Charge_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Charge_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Charge_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Charge_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Charge_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Charge_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Charge_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Charge_g_tc._data._sampleAccessInfo = sample_access_info();
                Charge_g_tc._data._typePlugin = type_plugin_info();    

                return &Charge_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Charge_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Charge_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Charge_g_sampleAccessInfo;
                }

                Charge_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Charge_g_sampleAccessInfo.memberAccessInfos = 
                Charge_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Charge);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Charge_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Charge_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Charge_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Charge_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Charge >;

                Charge_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Charge_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Charge_g_typePlugin = 
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

                return &Charge_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Charge_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Charge_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CharValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CharValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CharValue", /* Name */
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
                    }}; /* Type code for  CharValue */

                if (is_initialized) {
                    return &CharValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                CharValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CharValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_char;

                /* Initialize the values for member annotations. */
                CharValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_CHAR;
                CharValue_g_tc._data._annotations._defaultValue._u.char_value = 0;

                CharValue_g_tc._data._sampleAccessInfo = sample_access_info();
                CharValue_g_tc._data._typePlugin = type_plugin_info();    

                return &CharValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CharValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CharValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CharValue_g_sampleAccessInfo;
                }

                CharValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CharValue_g_sampleAccessInfo.memberAccessInfos = 
                CharValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CharValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CharValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CharValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CharValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CharValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CharValue >;

                CharValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CharValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CharValue_g_typePlugin = 
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

                return &CharValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CharValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CharValue_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Conductivity_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Conductivity_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Conductivity", /* Name */
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
                    }}; /* Type code for  Conductivity */

                if (is_initialized) {
                    return &Conductivity_g_tc;
                }

                is_initialized = RTI_TRUE;

                Conductivity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Conductivity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Conductivity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Conductivity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Conductivity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Conductivity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Conductivity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Conductivity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Conductivity_g_tc._data._sampleAccessInfo = sample_access_info();
                Conductivity_g_tc._data._typePlugin = type_plugin_info();    

                return &Conductivity_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Conductivity_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Conductivity_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Conductivity_g_sampleAccessInfo;
                }

                Conductivity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Conductivity_g_sampleAccessInfo.memberAccessInfos = 
                Conductivity_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Conductivity);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Conductivity_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Conductivity_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Conductivity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Conductivity_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Conductivity >;

                Conductivity_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Conductivity_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Conductivity_g_typePlugin = 
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

                return &Conductivity_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Conductivity_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Conductivity_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DataTransferRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DataTransferRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DataTransferRate", /* Name */
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
                    }}; /* Type code for  DataTransferRate */

                if (is_initialized) {
                    return &DataTransferRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                DataTransferRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DataTransferRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DataTransferRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DataTransferRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DataTransferRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DataTransferRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DataTransferRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DataTransferRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DataTransferRate_g_tc._data._sampleAccessInfo = sample_access_info();
                DataTransferRate_g_tc._data._typePlugin = type_plugin_info();    

                return &DataTransferRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DataTransferRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DataTransferRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DataTransferRate_g_sampleAccessInfo;
                }

                DataTransferRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DataTransferRate_g_sampleAccessInfo.memberAccessInfos = 
                DataTransferRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DataTransferRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DataTransferRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DataTransferRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DataTransferRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DataTransferRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DataTransferRate >;

                DataTransferRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DataTransferRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DataTransferRate_g_typePlugin = 
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

                return &DataTransferRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DataTransferRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DataTransferRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DistanceASF_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DistanceASF", /* Name */
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
                    }}; /* Type code for  DistanceASF */

                if (is_initialized) {
                    return &DistanceASF_g_tc;
                }

                is_initialized = RTI_TRUE;

                DistanceASF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DistanceASF_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DistanceASF_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceASF_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DistanceASF_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceASF_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DistanceASF_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceASF_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DistanceASF_g_tc._data._sampleAccessInfo = sample_access_info();
                DistanceASF_g_tc._data._typePlugin = type_plugin_info();    

                return &DistanceASF_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DistanceASF_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DistanceASF_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DistanceASF_g_sampleAccessInfo;
                }

                DistanceASF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DistanceASF_g_sampleAccessInfo.memberAccessInfos = 
                DistanceASF_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DistanceASF);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DistanceASF_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DistanceASF_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DistanceASF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DistanceASF_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DistanceASF >;

                DistanceASF_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DistanceASF_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DistanceASF_g_typePlugin = 
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

                return &DistanceASF_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DistanceBSL_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DistanceBSL", /* Name */
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
                    }}; /* Type code for  DistanceBSL */

                if (is_initialized) {
                    return &DistanceBSL_g_tc;
                }

                is_initialized = RTI_TRUE;

                DistanceBSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DistanceBSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DistanceBSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceBSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DistanceBSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceBSL_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DistanceBSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceBSL_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DistanceBSL_g_tc._data._sampleAccessInfo = sample_access_info();
                DistanceBSL_g_tc._data._typePlugin = type_plugin_info();    

                return &DistanceBSL_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DistanceBSL_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DistanceBSL_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DistanceBSL_g_sampleAccessInfo;
                }

                DistanceBSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DistanceBSL_g_sampleAccessInfo.memberAccessInfos = 
                DistanceBSL_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DistanceBSL);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DistanceBSL_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DistanceBSL_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DistanceBSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DistanceBSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DistanceBSL >;

                DistanceBSL_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DistanceBSL_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DistanceBSL_g_typePlugin = 
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

                return &DistanceBSL_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DistanceAGL_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DistanceAGL", /* Name */
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
                    }}; /* Type code for  DistanceAGL */

                if (is_initialized) {
                    return &DistanceAGL_g_tc;
                }

                is_initialized = RTI_TRUE;

                DistanceAGL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DistanceAGL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DistanceAGL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceAGL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DistanceAGL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceAGL_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DistanceAGL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DistanceAGL_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DistanceAGL_g_tc._data._sampleAccessInfo = sample_access_info();
                DistanceAGL_g_tc._data._typePlugin = type_plugin_info();    

                return &DistanceAGL_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DistanceAGL_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DistanceAGL_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DistanceAGL_g_sampleAccessInfo;
                }

                DistanceAGL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DistanceAGL_g_sampleAccessInfo.memberAccessInfos = 
                DistanceAGL_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DistanceAGL);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DistanceAGL_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DistanceAGL_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DistanceAGL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DistanceAGL_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DistanceAGL >;

                DistanceAGL_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DistanceAGL_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DistanceAGL_g_typePlugin = 
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

                return &DistanceAGL_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DoubleValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DoubleValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DoubleValue", /* Name */
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
                    }}; /* Type code for  DoubleValue */

                if (is_initialized) {
                    return &DoubleValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                DoubleValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoubleValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DoubleValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DoubleValue_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DoubleValue_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DoubleValue_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DoubleValue_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DoubleValue_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DoubleValue_g_tc._data._sampleAccessInfo = sample_access_info();
                DoubleValue_g_tc._data._typePlugin = type_plugin_info();    

                return &DoubleValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DoubleValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoubleValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoubleValue_g_sampleAccessInfo;
                }

                DoubleValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DoubleValue_g_sampleAccessInfo.memberAccessInfos = 
                DoubleValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DoubleValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DoubleValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DoubleValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoubleValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoubleValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DoubleValue >;

                DoubleValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoubleValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoubleValue_g_typePlugin = 
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

                return &DoubleValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DoubleValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DoubleValue_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DurationMilliseconds_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DurationMilliseconds", /* Name */
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
                    }}; /* Type code for  DurationMilliseconds */

                if (is_initialized) {
                    return &DurationMilliseconds_g_tc;
                }

                is_initialized = RTI_TRUE;

                DurationMilliseconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DurationMilliseconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DurationMilliseconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DurationMilliseconds_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DurationMilliseconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DurationMilliseconds_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DurationMilliseconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DurationMilliseconds_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DurationMilliseconds_g_tc._data._sampleAccessInfo = sample_access_info();
                DurationMilliseconds_g_tc._data._typePlugin = type_plugin_info();    

                return &DurationMilliseconds_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DurationMilliseconds_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DurationMilliseconds_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DurationMilliseconds_g_sampleAccessInfo;
                }

                DurationMilliseconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DurationMilliseconds_g_sampleAccessInfo.memberAccessInfos = 
                DurationMilliseconds_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DurationMilliseconds);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DurationMilliseconds_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DurationMilliseconds_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DurationMilliseconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DurationMilliseconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DurationMilliseconds >;

                DurationMilliseconds_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DurationMilliseconds_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DurationMilliseconds_g_typePlugin = 
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

                return &DurationMilliseconds_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Effort_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Effort_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Effort", /* Name */
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
                    }}; /* Type code for  Effort */

                if (is_initialized) {
                    return &Effort_g_tc;
                }

                is_initialized = RTI_TRUE;

                Effort_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Effort_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Effort_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Effort_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Effort_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Effort_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Effort_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Effort_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Effort_g_tc._data._sampleAccessInfo = sample_access_info();
                Effort_g_tc._data._typePlugin = type_plugin_info();    

                return &Effort_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Effort_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Effort_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Effort_g_sampleAccessInfo;
                }

                Effort_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Effort_g_sampleAccessInfo.memberAccessInfos = 
                Effort_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Effort);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Effort_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Effort_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Effort_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Effort_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Effort >;

                Effort_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Effort_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Effort_g_typePlugin = 
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

                return &Effort_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Effort_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Effort_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ElectroMagneticFrequencyHertz_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::ElectroMagneticFrequencyHertz", /* Name */
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
                    }}; /* Type code for  ElectroMagneticFrequencyHertz */

                if (is_initialized) {
                    return &ElectroMagneticFrequencyHertz_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElectroMagneticFrequencyHertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElectroMagneticFrequencyHertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ElectroMagneticFrequencyHertz_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ElectroMagneticFrequencyHertz_g_tc._data._sampleAccessInfo = sample_access_info();
                ElectroMagneticFrequencyHertz_g_tc._data._typePlugin = type_plugin_info();    

                return &ElectroMagneticFrequencyHertz_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ElectroMagneticFrequencyHertz_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElectroMagneticFrequencyHertz_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElectroMagneticFrequencyHertz_g_sampleAccessInfo;
                }

                ElectroMagneticFrequencyHertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ElectroMagneticFrequencyHertz_g_sampleAccessInfo.memberAccessInfos = 
                ElectroMagneticFrequencyHertz_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElectroMagneticFrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElectroMagneticFrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElectroMagneticFrequencyHertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElectroMagneticFrequencyHertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz >;

                ElectroMagneticFrequencyHertz_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElectroMagneticFrequencyHertz_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElectroMagneticFrequencyHertz_g_typePlugin = 
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

                return &ElectroMagneticFrequencyHertz_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::EnergyPercent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EnergyPercent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::EnergyPercent", /* Name */
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
                    }}; /* Type code for  EnergyPercent */

                if (is_initialized) {
                    return &EnergyPercent_g_tc;
                }

                is_initialized = RTI_TRUE;

                EnergyPercent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EnergyPercent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                EnergyPercent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EnergyPercent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                EnergyPercent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EnergyPercent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EnergyPercent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EnergyPercent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                EnergyPercent_g_tc._data._sampleAccessInfo = sample_access_info();
                EnergyPercent_g_tc._data._typePlugin = type_plugin_info();    

                return &EnergyPercent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo EnergyPercent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EnergyPercent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EnergyPercent_g_sampleAccessInfo;
                }

                EnergyPercent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                EnergyPercent_g_sampleAccessInfo.memberAccessInfos = 
                EnergyPercent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::EnergyPercent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EnergyPercent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EnergyPercent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EnergyPercent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EnergyPercent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::EnergyPercent >;

                EnergyPercent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EnergyPercent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EnergyPercent_g_typePlugin = 
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

                return &EnergyPercent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::EnergyPercent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::EnergyPercent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FrequencyRPM_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::FrequencyRPM", /* Name */
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
                    }}; /* Type code for  FrequencyRPM */

                if (is_initialized) {
                    return &FrequencyRPM_g_tc;
                }

                is_initialized = RTI_TRUE;

                FrequencyRPM_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FrequencyRPM_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                FrequencyRPM_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                FrequencyRPM_g_tc._data._annotations._defaultValue._u.long_value = 0;
                FrequencyRPM_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                FrequencyRPM_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                FrequencyRPM_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                FrequencyRPM_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                FrequencyRPM_g_tc._data._sampleAccessInfo = sample_access_info();
                FrequencyRPM_g_tc._data._typePlugin = type_plugin_info();    

                return &FrequencyRPM_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FrequencyRPM_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FrequencyRPM_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FrequencyRPM_g_sampleAccessInfo;
                }

                FrequencyRPM_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FrequencyRPM_g_sampleAccessInfo.memberAccessInfos = 
                FrequencyRPM_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::FrequencyRPM);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FrequencyRPM_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FrequencyRPM_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FrequencyRPM_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FrequencyRPM_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::FrequencyRPM >;

                FrequencyRPM_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FrequencyRPM_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FrequencyRPM_g_typePlugin = 
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

                return &FrequencyRPM_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::GammaAnglePropulsor_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GammaAnglePropulsor_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::GammaAnglePropulsor", /* Name */
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
                    }}; /* Type code for  GammaAnglePropulsor */

                if (is_initialized) {
                    return &GammaAnglePropulsor_g_tc;
                }

                is_initialized = RTI_TRUE;

                GammaAnglePropulsor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GammaAnglePropulsor_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GammaAnglePropulsor_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GammaAnglePropulsor_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                GammaAnglePropulsor_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GammaAnglePropulsor_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GammaAnglePropulsor_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GammaAnglePropulsor_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GammaAnglePropulsor_g_tc._data._sampleAccessInfo = sample_access_info();
                GammaAnglePropulsor_g_tc._data._typePlugin = type_plugin_info();    

                return &GammaAnglePropulsor_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GammaAnglePropulsor_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GammaAnglePropulsor_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GammaAnglePropulsor_g_sampleAccessInfo;
                }

                GammaAnglePropulsor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GammaAnglePropulsor_g_sampleAccessInfo.memberAccessInfos = 
                GammaAnglePropulsor_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::GammaAnglePropulsor);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GammaAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GammaAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GammaAnglePropulsor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GammaAnglePropulsor_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::GammaAnglePropulsor >;

                GammaAnglePropulsor_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GammaAnglePropulsor_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GammaAnglePropulsor_g_typePlugin = 
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

                return &GammaAnglePropulsor_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::GammaAnglePropulsor_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::GammaAnglePropulsor_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::HeadingCurrentDirection_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HeadingCurrentDirection_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::HeadingCurrentDirection", /* Name */
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
                    }}; /* Type code for  HeadingCurrentDirection */

                if (is_initialized) {
                    return &HeadingCurrentDirection_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingCurrentDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingCurrentDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                HeadingCurrentDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                HeadingCurrentDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirection_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingCurrentDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirection_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingCurrentDirection_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingCurrentDirection_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingCurrentDirection_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingCurrentDirection_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingCurrentDirection_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingCurrentDirection_g_sampleAccessInfo;
                }

                HeadingCurrentDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingCurrentDirection_g_sampleAccessInfo.memberAccessInfos = 
                HeadingCurrentDirection_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::HeadingCurrentDirection);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingCurrentDirection_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingCurrentDirection_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingCurrentDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingCurrentDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::HeadingCurrentDirection >;

                HeadingCurrentDirection_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingCurrentDirection_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingCurrentDirection_g_typePlugin = 
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

                return &HeadingCurrentDirection_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::HeadingCurrentDirection_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::HeadingCurrentDirection_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HeadingMagneticNorth_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::HeadingMagneticNorth", /* Name */
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
                    }}; /* Type code for  HeadingMagneticNorth */

                if (is_initialized) {
                    return &HeadingMagneticNorth_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingMagneticNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingMagneticNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                HeadingMagneticNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingMagneticNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                HeadingMagneticNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingMagneticNorth_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingMagneticNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingMagneticNorth_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingMagneticNorth_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingMagneticNorth_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingMagneticNorth_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingMagneticNorth_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingMagneticNorth_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingMagneticNorth_g_sampleAccessInfo;
                }

                HeadingMagneticNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingMagneticNorth_g_sampleAccessInfo.memberAccessInfos = 
                HeadingMagneticNorth_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::HeadingMagneticNorth);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingMagneticNorth_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingMagneticNorth_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingMagneticNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingMagneticNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::HeadingMagneticNorth >;

                HeadingMagneticNorth_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingMagneticNorth_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingMagneticNorth_g_typePlugin = 
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

                return &HeadingMagneticNorth_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::HeadingTarget_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HeadingTarget_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::HeadingTarget", /* Name */
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
                    }}; /* Type code for  HeadingTarget */

                if (is_initialized) {
                    return &HeadingTarget_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingTarget_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingTarget_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                HeadingTarget_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTarget_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                HeadingTarget_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTarget_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingTarget_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTarget_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingTarget_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingTarget_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingTarget_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingTarget_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingTarget_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingTarget_g_sampleAccessInfo;
                }

                HeadingTarget_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingTarget_g_sampleAccessInfo.memberAccessInfos = 
                HeadingTarget_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::HeadingTarget);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingTarget_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingTarget_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingTarget_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingTarget_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::HeadingTarget >;

                HeadingTarget_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingTarget_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingTarget_g_typePlugin = 
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

                return &HeadingTarget_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::HeadingTarget_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::HeadingTarget_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::HeadingWindDirection_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HeadingWindDirection_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::HeadingWindDirection", /* Name */
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
                    }}; /* Type code for  HeadingWindDirection */

                if (is_initialized) {
                    return &HeadingWindDirection_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingWindDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingWindDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                HeadingWindDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingWindDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                HeadingWindDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingWindDirection_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingWindDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingWindDirection_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingWindDirection_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingWindDirection_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingWindDirection_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingWindDirection_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingWindDirection_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingWindDirection_g_sampleAccessInfo;
                }

                HeadingWindDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingWindDirection_g_sampleAccessInfo.memberAccessInfos = 
                HeadingWindDirection_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::HeadingWindDirection);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingWindDirection_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingWindDirection_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingWindDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingWindDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::HeadingWindDirection >;

                HeadingWindDirection_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingWindDirection_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingWindDirection_g_typePlugin = 
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

                return &HeadingWindDirection_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::HeadingWindDirection_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::HeadingWindDirection_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::IntegerValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IntegerValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::IntegerValue", /* Name */
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
                    }}; /* Type code for  IntegerValue */

                if (is_initialized) {
                    return &IntegerValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                IntegerValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IntegerValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                IntegerValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                IntegerValue_g_tc._data._annotations._defaultValue._u.long_value = 0;
                IntegerValue_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                IntegerValue_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                IntegerValue_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                IntegerValue_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                IntegerValue_g_tc._data._sampleAccessInfo = sample_access_info();
                IntegerValue_g_tc._data._typePlugin = type_plugin_info();    

                return &IntegerValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IntegerValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IntegerValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IntegerValue_g_sampleAccessInfo;
                }

                IntegerValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IntegerValue_g_sampleAccessInfo.memberAccessInfos = 
                IntegerValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::IntegerValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IntegerValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IntegerValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IntegerValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IntegerValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::IntegerValue >;

                IntegerValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IntegerValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IntegerValue_g_typePlugin = 
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

                return &IntegerValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::IntegerValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::IntegerValue_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::LargeCount_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LargeCount_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::LargeCount", /* Name */
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
                    }}; /* Type code for  LargeCount */

                if (is_initialized) {
                    return &LargeCount_g_tc;
                }

                is_initialized = RTI_TRUE;

                LargeCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LargeCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                LargeCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                LargeCount_g_tc._data._annotations._defaultValue._u.ulong_long_value = 0ull;
                LargeCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                LargeCount_g_tc._data._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                LargeCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                LargeCount_g_tc._data._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                LargeCount_g_tc._data._sampleAccessInfo = sample_access_info();
                LargeCount_g_tc._data._typePlugin = type_plugin_info();    

                return &LargeCount_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LargeCount_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LargeCount_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LargeCount_g_sampleAccessInfo;
                }

                LargeCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LargeCount_g_sampleAccessInfo.memberAccessInfos = 
                LargeCount_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::LargeCount);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LargeCount_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LargeCount_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LargeCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LargeCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::LargeCount >;

                LargeCount_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LargeCount_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LargeCount_g_typePlugin = 
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

                return &LargeCount_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::LargeCount_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MassMetricTon_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::MassMetricTon", /* Name */
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
                    }}; /* Type code for  MassMetricTon */

                if (is_initialized) {
                    return &MassMetricTon_g_tc;
                }

                is_initialized = RTI_TRUE;

                MassMetricTon_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MassMetricTon_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MassMetricTon_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MassMetricTon_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                MassMetricTon_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MassMetricTon_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MassMetricTon_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MassMetricTon_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MassMetricTon_g_tc._data._sampleAccessInfo = sample_access_info();
                MassMetricTon_g_tc._data._typePlugin = type_plugin_info();    

                return &MassMetricTon_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MassMetricTon_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MassMetricTon_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MassMetricTon_g_sampleAccessInfo;
                }

                MassMetricTon_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MassMetricTon_g_sampleAccessInfo.memberAccessInfos = 
                MassMetricTon_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::MassMetricTon);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MassMetricTon_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MassMetricTon_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MassMetricTon_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MassMetricTon_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::MassMetricTon >;

                MassMetricTon_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MassMetricTon_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MassMetricTon_g_typePlugin = 
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

                return &MassMetricTon_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::MassFlowRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MassFlowRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::MassFlowRate", /* Name */
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
                    }}; /* Type code for  MassFlowRate */

                if (is_initialized) {
                    return &MassFlowRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                MassFlowRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MassFlowRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MassFlowRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MassFlowRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                MassFlowRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MassFlowRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MassFlowRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MassFlowRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MassFlowRate_g_tc._data._sampleAccessInfo = sample_access_info();
                MassFlowRate_g_tc._data._typePlugin = type_plugin_info();    

                return &MassFlowRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MassFlowRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MassFlowRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MassFlowRate_g_sampleAccessInfo;
                }

                MassFlowRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MassFlowRate_g_sampleAccessInfo.memberAccessInfos = 
                MassFlowRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::MassFlowRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MassFlowRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MassFlowRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MassFlowRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MassFlowRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::MassFlowRate >;

                MassFlowRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MassFlowRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MassFlowRate_g_typePlugin = 
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

                return &MassFlowRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::MassFlowRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::MassFlowRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MSLAltitude_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::MSLAltitude", /* Name */
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
                    }}; /* Type code for  MSLAltitude */

                if (is_initialized) {
                    return &MSLAltitude_g_tc;
                }

                is_initialized = RTI_TRUE;

                MSLAltitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MSLAltitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MSLAltitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MSLAltitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                MSLAltitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MSLAltitude_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MSLAltitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MSLAltitude_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MSLAltitude_g_tc._data._sampleAccessInfo = sample_access_info();
                MSLAltitude_g_tc._data._typePlugin = type_plugin_info();    

                return &MSLAltitude_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MSLAltitude_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MSLAltitude_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MSLAltitude_g_sampleAccessInfo;
                }

                MSLAltitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MSLAltitude_g_sampleAccessInfo.memberAccessInfos = 
                MSLAltitude_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::MSLAltitude);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MSLAltitude_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MSLAltitude_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MSLAltitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MSLAltitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::MSLAltitude >;

                MSLAltitude_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MSLAltitude_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MSLAltitude_g_typePlugin = 
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

                return &MSLAltitude_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PressurePercent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PressurePercent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PressurePercent", /* Name */
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
                    }}; /* Type code for  PressurePercent */

                if (is_initialized) {
                    return &PressurePercent_g_tc;
                }

                is_initialized = RTI_TRUE;

                PressurePercent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PressurePercent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PressurePercent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePercent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PressurePercent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePercent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PressurePercent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePercent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PressurePercent_g_tc._data._sampleAccessInfo = sample_access_info();
                PressurePercent_g_tc._data._typePlugin = type_plugin_info();    

                return &PressurePercent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PressurePercent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PressurePercent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PressurePercent_g_sampleAccessInfo;
                }

                PressurePercent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PressurePercent_g_sampleAccessInfo.memberAccessInfos = 
                PressurePercent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PressurePercent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PressurePercent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PressurePercent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PressurePercent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PressurePercent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PressurePercent >;

                PressurePercent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PressurePercent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PressurePercent_g_typePlugin = 
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

                return &PressurePercent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PressurePercent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PressurePercent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Priority_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Priority_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Priority", /* Name */
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
                    }}; /* Type code for  Priority */

                if (is_initialized) {
                    return &Priority_g_tc;
                }

                is_initialized = RTI_TRUE;

                Priority_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Priority_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                Priority_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Priority_g_tc._data._annotations._defaultValue._u.long_value = 0;
                Priority_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Priority_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Priority_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Priority_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Priority_g_tc._data._sampleAccessInfo = sample_access_info();
                Priority_g_tc._data._typePlugin = type_plugin_info();    

                return &Priority_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Priority_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Priority_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Priority_g_sampleAccessInfo;
                }

                Priority_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Priority_g_sampleAccessInfo.memberAccessInfos = 
                Priority_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Priority);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Priority_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Priority_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Priority_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Priority_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Priority >;

                Priority_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Priority_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Priority_g_typePlugin = 
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

                return &Priority_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Priority_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PropellerPitchAnglePropulsor_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PropellerPitchAnglePropulsor", /* Name */
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
                    }}; /* Type code for  PropellerPitchAnglePropulsor */

                if (is_initialized) {
                    return &PropellerPitchAnglePropulsor_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropellerPitchAnglePropulsor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropellerPitchAnglePropulsor_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PropellerPitchAnglePropulsor_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsor_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PropellerPitchAnglePropulsor_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsor_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropellerPitchAnglePropulsor_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropellerPitchAnglePropulsor_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PropellerPitchAnglePropulsor_g_tc._data._sampleAccessInfo = sample_access_info();
                PropellerPitchAnglePropulsor_g_tc._data._typePlugin = type_plugin_info();    

                return &PropellerPitchAnglePropulsor_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PropellerPitchAnglePropulsor_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropellerPitchAnglePropulsor_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropellerPitchAnglePropulsor_g_sampleAccessInfo;
                }

                PropellerPitchAnglePropulsor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PropellerPitchAnglePropulsor_g_sampleAccessInfo.memberAccessInfos = 
                PropellerPitchAnglePropulsor_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PropellerPitchAnglePropulsor);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropellerPitchAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropellerPitchAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropellerPitchAnglePropulsor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropellerPitchAnglePropulsor_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor >;

                PropellerPitchAnglePropulsor_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropellerPitchAnglePropulsor_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropellerPitchAnglePropulsor_g_typePlugin = 
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

                return &PropellerPitchAnglePropulsor_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RhoAnglePropulsor_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RhoAnglePropulsor", /* Name */
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
                    }}; /* Type code for  RhoAnglePropulsor */

                if (is_initialized) {
                    return &RhoAnglePropulsor_g_tc;
                }

                is_initialized = RTI_TRUE;

                RhoAnglePropulsor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RhoAnglePropulsor_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RhoAnglePropulsor_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsor_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RhoAnglePropulsor_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsor_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RhoAnglePropulsor_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RhoAnglePropulsor_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RhoAnglePropulsor_g_tc._data._sampleAccessInfo = sample_access_info();
                RhoAnglePropulsor_g_tc._data._typePlugin = type_plugin_info();    

                return &RhoAnglePropulsor_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RhoAnglePropulsor_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RhoAnglePropulsor_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RhoAnglePropulsor_g_sampleAccessInfo;
                }

                RhoAnglePropulsor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RhoAnglePropulsor_g_sampleAccessInfo.memberAccessInfos = 
                RhoAnglePropulsor_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RhoAnglePropulsor);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RhoAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RhoAnglePropulsor_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RhoAnglePropulsor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RhoAnglePropulsor_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RhoAnglePropulsor >;

                RhoAnglePropulsor_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RhoAnglePropulsor_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RhoAnglePropulsor_g_typePlugin = 
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

                return &RhoAnglePropulsor_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Salinity_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Salinity_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Salinity", /* Name */
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
                    }}; /* Type code for  Salinity */

                if (is_initialized) {
                    return &Salinity_g_tc;
                }

                is_initialized = RTI_TRUE;

                Salinity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Salinity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Salinity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Salinity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Salinity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Salinity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Salinity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Salinity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Salinity_g_tc._data._sampleAccessInfo = sample_access_info();
                Salinity_g_tc._data._typePlugin = type_plugin_info();    

                return &Salinity_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Salinity_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Salinity_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Salinity_g_sampleAccessInfo;
                }

                Salinity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Salinity_g_sampleAccessInfo.memberAccessInfos = 
                Salinity_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Salinity);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Salinity_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Salinity_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Salinity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Salinity_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Salinity >;

                Salinity_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Salinity_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Salinity_g_typePlugin = 
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

                return &Salinity_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Salinity_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Salinity_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SegmentID_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SegmentID_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SegmentID", /* Name */
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
                    }}; /* Type code for  SegmentID */

                if (is_initialized) {
                    return &SegmentID_g_tc;
                }

                is_initialized = RTI_TRUE;

                SegmentID_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SegmentID_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                SegmentID_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SegmentID_g_tc._data._annotations._defaultValue._u.long_value = 0;
                SegmentID_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SegmentID_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                SegmentID_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SegmentID_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                SegmentID_g_tc._data._sampleAccessInfo = sample_access_info();
                SegmentID_g_tc._data._typePlugin = type_plugin_info();    

                return &SegmentID_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SegmentID_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SegmentID_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SegmentID_g_sampleAccessInfo;
                }

                SegmentID_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SegmentID_g_sampleAccessInfo.memberAccessInfos = 
                SegmentID_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SegmentID);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SegmentID_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SegmentID_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SegmentID_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SegmentID_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SegmentID >;

                SegmentID_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SegmentID_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SegmentID_g_typePlugin = 
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

                return &SegmentID_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SegmentID_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SegmentID_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SidesCount_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SidesCount_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SidesCount", /* Name */
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
                    }}; /* Type code for  SidesCount */

                if (is_initialized) {
                    return &SidesCount_g_tc;
                }

                is_initialized = RTI_TRUE;

                SidesCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SidesCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                SidesCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SidesCount_g_tc._data._annotations._defaultValue._u.long_value = 0;
                SidesCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SidesCount_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                SidesCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SidesCount_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                SidesCount_g_tc._data._sampleAccessInfo = sample_access_info();
                SidesCount_g_tc._data._typePlugin = type_plugin_info();    

                return &SidesCount_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SidesCount_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SidesCount_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SidesCount_g_sampleAccessInfo;
                }

                SidesCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SidesCount_g_sampleAccessInfo.memberAccessInfos = 
                SidesCount_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SidesCount);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SidesCount_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SidesCount_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SidesCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SidesCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SidesCount >;

                SidesCount_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SidesCount_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SidesCount_g_typePlugin = 
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

                return &SidesCount_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SidesCount_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SidesCount_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SizeLargeBytes_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SizeLargeBytes", /* Name */
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
                    }}; /* Type code for  SizeLargeBytes */

                if (is_initialized) {
                    return &SizeLargeBytes_g_tc;
                }

                is_initialized = RTI_TRUE;

                SizeLargeBytes_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SizeLargeBytes_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                SizeLargeBytes_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                SizeLargeBytes_g_tc._data._annotations._defaultValue._u.ulong_long_value = 0ull;
                SizeLargeBytes_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                SizeLargeBytes_g_tc._data._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                SizeLargeBytes_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                SizeLargeBytes_g_tc._data._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                SizeLargeBytes_g_tc._data._sampleAccessInfo = sample_access_info();
                SizeLargeBytes_g_tc._data._typePlugin = type_plugin_info();    

                return &SizeLargeBytes_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SizeLargeBytes_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SizeLargeBytes_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SizeLargeBytes_g_sampleAccessInfo;
                }

                SizeLargeBytes_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SizeLargeBytes_g_sampleAccessInfo.memberAccessInfos = 
                SizeLargeBytes_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SizeLargeBytes);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SizeLargeBytes_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SizeLargeBytes_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SizeLargeBytes_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SizeLargeBytes_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SizeLargeBytes >;

                SizeLargeBytes_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SizeLargeBytes_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SizeLargeBytes_g_typePlugin = 
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

                return &SizeLargeBytes_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SpeedASF_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpeedASF_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SpeedASF", /* Name */
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
                    }}; /* Type code for  SpeedASF */

                if (is_initialized) {
                    return &SpeedASF_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedASF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedASF_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SpeedASF_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedASF_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SpeedASF_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedASF_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SpeedASF_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedASF_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SpeedASF_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedASF_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedASF_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedASF_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedASF_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedASF_g_sampleAccessInfo;
                }

                SpeedASF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedASF_g_sampleAccessInfo.memberAccessInfos = 
                SpeedASF_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SpeedASF);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedASF_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedASF_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedASF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedASF_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SpeedASF >;

                SpeedASF_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedASF_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedASF_g_typePlugin = 
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

                return &SpeedASF_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SpeedASF_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SpeedASF_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SpeedBSL_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpeedBSL_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SpeedBSL", /* Name */
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
                    }}; /* Type code for  SpeedBSL */

                if (is_initialized) {
                    return &SpeedBSL_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedBSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedBSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SpeedBSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SpeedBSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSL_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SpeedBSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedBSL_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SpeedBSL_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedBSL_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedBSL_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedBSL_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedBSL_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedBSL_g_sampleAccessInfo;
                }

                SpeedBSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedBSL_g_sampleAccessInfo.memberAccessInfos = 
                SpeedBSL_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SpeedBSL);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedBSL_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedBSL_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedBSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedBSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SpeedBSL >;

                SpeedBSL_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedBSL_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedBSL_g_typePlugin = 
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

                return &SpeedBSL_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SpeedBSL_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SpeedBSL_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpeedLocalWaterMass_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SpeedLocalWaterMass", /* Name */
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
                    }}; /* Type code for  SpeedLocalWaterMass */

                if (is_initialized) {
                    return &SpeedLocalWaterMass_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedLocalWaterMass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedLocalWaterMass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SpeedLocalWaterMass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedLocalWaterMass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SpeedLocalWaterMass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedLocalWaterMass_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SpeedLocalWaterMass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedLocalWaterMass_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SpeedLocalWaterMass_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedLocalWaterMass_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedLocalWaterMass_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedLocalWaterMass_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedLocalWaterMass_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedLocalWaterMass_g_sampleAccessInfo;
                }

                SpeedLocalWaterMass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedLocalWaterMass_g_sampleAccessInfo.memberAccessInfos = 
                SpeedLocalWaterMass_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SpeedLocalWaterMass);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedLocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedLocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedLocalWaterMass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedLocalWaterMass_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SpeedLocalWaterMass >;

                SpeedLocalWaterMass_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedLocalWaterMass_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedLocalWaterMass_g_typePlugin = 
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

                return &SpeedLocalWaterMass_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::TransmitAttenuation_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TransmitAttenuation_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::TransmitAttenuation", /* Name */
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
                    }}; /* Type code for  TransmitAttenuation */

                if (is_initialized) {
                    return &TransmitAttenuation_g_tc;
                }

                is_initialized = RTI_TRUE;

                TransmitAttenuation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TransmitAttenuation_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                TransmitAttenuation_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                TransmitAttenuation_g_tc._data._annotations._defaultValue._u.long_value = 0;
                TransmitAttenuation_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                TransmitAttenuation_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                TransmitAttenuation_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                TransmitAttenuation_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                TransmitAttenuation_g_tc._data._sampleAccessInfo = sample_access_info();
                TransmitAttenuation_g_tc._data._typePlugin = type_plugin_info();    

                return &TransmitAttenuation_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TransmitAttenuation_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TransmitAttenuation_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TransmitAttenuation_g_sampleAccessInfo;
                }

                TransmitAttenuation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TransmitAttenuation_g_sampleAccessInfo.memberAccessInfos = 
                TransmitAttenuation_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::TransmitAttenuation);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TransmitAttenuation_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TransmitAttenuation_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TransmitAttenuation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TransmitAttenuation_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::TransmitAttenuation >;

                TransmitAttenuation_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TransmitAttenuation_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TransmitAttenuation_g_typePlugin = 
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

                return &TransmitAttenuation_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::TransmitAttenuation_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::TransmitAttenuation_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Turbidity_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Turbidity_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Turbidity", /* Name */
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
                    }}; /* Type code for  Turbidity */

                if (is_initialized) {
                    return &Turbidity_g_tc;
                }

                is_initialized = RTI_TRUE;

                Turbidity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Turbidity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Turbidity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Turbidity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Turbidity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Turbidity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Turbidity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Turbidity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Turbidity_g_tc._data._sampleAccessInfo = sample_access_info();
                Turbidity_g_tc._data._typePlugin = type_plugin_info();    

                return &Turbidity_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Turbidity_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Turbidity_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Turbidity_g_sampleAccessInfo;
                }

                Turbidity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Turbidity_g_sampleAccessInfo.memberAccessInfos = 
                Turbidity_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Turbidity);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Turbidity_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Turbidity_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Turbidity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Turbidity_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Turbidity >;

                Turbidity_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Turbidity_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Turbidity_g_typePlugin = 
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

                return &Turbidity_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Turbidity_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Turbidity_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::VolumeCubicMeter_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VolumeCubicMeter_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::VolumeCubicMeter", /* Name */
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
                    }}; /* Type code for  VolumeCubicMeter */

                if (is_initialized) {
                    return &VolumeCubicMeter_g_tc;
                }

                is_initialized = RTI_TRUE;

                VolumeCubicMeter_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VolumeCubicMeter_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                VolumeCubicMeter_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                VolumeCubicMeter_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                VolumeCubicMeter_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                VolumeCubicMeter_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                VolumeCubicMeter_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                VolumeCubicMeter_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                VolumeCubicMeter_g_tc._data._sampleAccessInfo = sample_access_info();
                VolumeCubicMeter_g_tc._data._typePlugin = type_plugin_info();    

                return &VolumeCubicMeter_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VolumeCubicMeter_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VolumeCubicMeter_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VolumeCubicMeter_g_sampleAccessInfo;
                }

                VolumeCubicMeter_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VolumeCubicMeter_g_sampleAccessInfo.memberAccessInfos = 
                VolumeCubicMeter_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::VolumeCubicMeter);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VolumeCubicMeter_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VolumeCubicMeter_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VolumeCubicMeter_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VolumeCubicMeter_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::VolumeCubicMeter >;

                VolumeCubicMeter_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VolumeCubicMeter_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VolumeCubicMeter_g_typePlugin = 
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

                return &VolumeCubicMeter_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::VolumeCubicMeter_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::VolumeCubicMeter_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VolumePercent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::VolumePercent", /* Name */
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
                    }}; /* Type code for  VolumePercent */

                if (is_initialized) {
                    return &VolumePercent_g_tc;
                }

                is_initialized = RTI_TRUE;

                VolumePercent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VolumePercent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                VolumePercent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                VolumePercent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                VolumePercent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                VolumePercent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                VolumePercent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                VolumePercent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                VolumePercent_g_tc._data._sampleAccessInfo = sample_access_info();
                VolumePercent_g_tc._data._typePlugin = type_plugin_info();    

                return &VolumePercent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VolumePercent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VolumePercent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VolumePercent_g_sampleAccessInfo;
                }

                VolumePercent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VolumePercent_g_sampleAccessInfo.memberAccessInfos = 
                VolumePercent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::VolumePercent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VolumePercent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VolumePercent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VolumePercent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VolumePercent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::VolumePercent >;

                VolumePercent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VolumePercent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VolumePercent_g_typePlugin = 
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

                return &VolumePercent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VolumetricFlowRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::VolumetricFlowRate", /* Name */
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
                    }}; /* Type code for  VolumetricFlowRate */

                if (is_initialized) {
                    return &VolumetricFlowRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                VolumetricFlowRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VolumetricFlowRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                VolumetricFlowRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                VolumetricFlowRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                VolumetricFlowRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                VolumetricFlowRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                VolumetricFlowRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                VolumetricFlowRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                VolumetricFlowRate_g_tc._data._sampleAccessInfo = sample_access_info();
                VolumetricFlowRate_g_tc._data._typePlugin = type_plugin_info();    

                return &VolumetricFlowRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VolumetricFlowRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VolumetricFlowRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VolumetricFlowRate_g_sampleAccessInfo;
                }

                VolumetricFlowRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VolumetricFlowRate_g_sampleAccessInfo.memberAccessInfos = 
                VolumetricFlowRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::VolumetricFlowRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VolumetricFlowRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VolumetricFlowRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VolumetricFlowRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VolumetricFlowRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::VolumetricFlowRate >;

                VolumetricFlowRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VolumetricFlowRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VolumetricFlowRate_g_typePlugin = 
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

                return &VolumetricFlowRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::WattHours_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WattHours_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::WattHours", /* Name */
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
                    }}; /* Type code for  WattHours */

                if (is_initialized) {
                    return &WattHours_g_tc;
                }

                is_initialized = RTI_TRUE;

                WattHours_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WattHours_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                WattHours_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WattHours_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                WattHours_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WattHours_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WattHours_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WattHours_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WattHours_g_tc._data._sampleAccessInfo = sample_access_info();
                WattHours_g_tc._data._typePlugin = type_plugin_info();    

                return &WattHours_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WattHours_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WattHours_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WattHours_g_sampleAccessInfo;
                }

                WattHours_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WattHours_g_sampleAccessInfo.memberAccessInfos = 
                WattHours_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::WattHours);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WattHours_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WattHours_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WattHours_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WattHours_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::WattHours >;

                WattHours_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WattHours_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WattHours_g_typePlugin = 
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

                return &WattHours_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::WattHours_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::WattHours_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::YawAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode YawAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::YawAngle", /* Name */
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
                    }}; /* Type code for  YawAngle */

                if (is_initialized) {
                    return &YawAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                YawAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                YawAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                YawAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                YawAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                YawAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                YawAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                YawAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                YawAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                YawAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                YawAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &YawAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo YawAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo YawAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &YawAngle_g_sampleAccessInfo;
                }

                YawAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                YawAngle_g_sampleAccessInfo.memberAccessInfos = 
                YawAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::YawAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        YawAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        YawAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                YawAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                YawAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::YawAngle >;

                YawAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &YawAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin YawAngle_g_typePlugin = 
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

                return &YawAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::YawAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::YawAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::AccelerationScalar_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AccelerationScalar_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AccelerationScalar", /* Name */
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
                    }}; /* Type code for  AccelerationScalar */

                if (is_initialized) {
                    return &AccelerationScalar_g_tc;
                }

                is_initialized = RTI_TRUE;

                AccelerationScalar_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AccelerationScalar_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AccelerationScalar_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationScalar_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AccelerationScalar_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationScalar_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AccelerationScalar_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationScalar_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AccelerationScalar_g_tc._data._sampleAccessInfo = sample_access_info();
                AccelerationScalar_g_tc._data._typePlugin = type_plugin_info();    

                return &AccelerationScalar_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AccelerationScalar_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AccelerationScalar_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AccelerationScalar_g_sampleAccessInfo;
                }

                AccelerationScalar_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AccelerationScalar_g_sampleAccessInfo.memberAccessInfos = 
                AccelerationScalar_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AccelerationScalar);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AccelerationScalar_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AccelerationScalar_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AccelerationScalar_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AccelerationScalar_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AccelerationScalar >;

                AccelerationScalar_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AccelerationScalar_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AccelerationScalar_g_typePlugin = 
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

                return &AccelerationScalar_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AccelerationScalar_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AccelerationScalar_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Angle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Angle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Angle", /* Name */
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
                    }}; /* Type code for  Angle */

                if (is_initialized) {
                    return &Angle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Angle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Angle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Angle_g_tc._data._sampleAccessInfo = sample_access_info();
                Angle_g_tc._data._typePlugin = type_plugin_info();    

                return &Angle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Angle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Angle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Angle_g_sampleAccessInfo;
                }

                Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Angle_g_sampleAccessInfo.memberAccessInfos = 
                Angle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Angle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Angle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Angle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Angle >;

                Angle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Angle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Angle_g_typePlugin = 
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

                return &Angle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Angle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::AngleRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AngleRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AngleRate", /* Name */
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
                    }}; /* Type code for  AngleRate */

                if (is_initialized) {
                    return &AngleRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                AngleRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AngleRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AngleRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AngleRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AngleRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AngleRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AngleRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AngleRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AngleRate_g_tc._data._sampleAccessInfo = sample_access_info();
                AngleRate_g_tc._data._typePlugin = type_plugin_info();    

                return &AngleRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AngleRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AngleRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AngleRate_g_sampleAccessInfo;
                }

                AngleRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AngleRate_g_sampleAccessInfo.memberAccessInfos = 
                AngleRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AngleRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AngleRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AngleRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AngleRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AngleRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AngleRate >;

                AngleRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AngleRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AngleRate_g_typePlugin = 
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

                return &AngleRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AngleRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Count_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Count_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Count", /* Name */
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
                    }}; /* Type code for  Count */

                if (is_initialized) {
                    return &Count_g_tc;
                }

                is_initialized = RTI_TRUE;

                Count_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Count_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                Count_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Count_g_tc._data._annotations._defaultValue._u.long_value = 0;
                Count_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Count_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Count_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Count_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Count_g_tc._data._sampleAccessInfo = sample_access_info();
                Count_g_tc._data._typePlugin = type_plugin_info();    

                return &Count_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Count_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Count_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Count_g_sampleAccessInfo;
                }

                Count_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Count_g_sampleAccessInfo.memberAccessInfos = 
                Count_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Count);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Count_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Count_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Count_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Count_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Count >;

                Count_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Count_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Count_g_typePlugin = 
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

                return &Count_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Count_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CourseTrueNorth_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CourseTrueNorth", /* Name */
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
                    }}; /* Type code for  CourseTrueNorth */

                if (is_initialized) {
                    return &CourseTrueNorth_g_tc;
                }

                is_initialized = RTI_TRUE;

                CourseTrueNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CourseTrueNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CourseTrueNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CourseTrueNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CourseTrueNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CourseTrueNorth_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CourseTrueNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CourseTrueNorth_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CourseTrueNorth_g_tc._data._sampleAccessInfo = sample_access_info();
                CourseTrueNorth_g_tc._data._typePlugin = type_plugin_info();    

                return &CourseTrueNorth_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CourseTrueNorth_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CourseTrueNorth_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CourseTrueNorth_g_sampleAccessInfo;
                }

                CourseTrueNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CourseTrueNorth_g_sampleAccessInfo.memberAccessInfos = 
                CourseTrueNorth_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CourseTrueNorth);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CourseTrueNorth_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CourseTrueNorth_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CourseTrueNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CourseTrueNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CourseTrueNorth >;

                CourseTrueNorth_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CourseTrueNorth_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CourseTrueNorth_g_typePlugin = 
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

                return &CourseTrueNorth_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DateTimeSeconds_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DateTimeSeconds_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DateTimeSeconds", /* Name */
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
                    }}; /* Type code for  DateTimeSeconds */

                if (is_initialized) {
                    return &DateTimeSeconds_g_tc;
                }

                is_initialized = RTI_TRUE;

                DateTimeSeconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DateTimeSeconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;

                /* Initialize the values for member annotations. */
                DateTimeSeconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                DateTimeSeconds_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
                DateTimeSeconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                DateTimeSeconds_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                DateTimeSeconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                DateTimeSeconds_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                DateTimeSeconds_g_tc._data._sampleAccessInfo = sample_access_info();
                DateTimeSeconds_g_tc._data._typePlugin = type_plugin_info();    

                return &DateTimeSeconds_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DateTimeSeconds_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DateTimeSeconds_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DateTimeSeconds_g_sampleAccessInfo;
                }

                DateTimeSeconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DateTimeSeconds_g_sampleAccessInfo.memberAccessInfos = 
                DateTimeSeconds_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DateTimeSeconds);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DateTimeSeconds_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DateTimeSeconds_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DateTimeSeconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DateTimeSeconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DateTimeSeconds >;

                DateTimeSeconds_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DateTimeSeconds_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DateTimeSeconds_g_typePlugin = 
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

                return &DateTimeSeconds_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DateTimeSeconds_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DateTimeSeconds_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DateTimeNanoseconds_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DateTimeNanoseconds_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DateTimeNanoseconds", /* Name */
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
                    }}; /* Type code for  DateTimeNanoseconds */

                if (is_initialized) {
                    return &DateTimeNanoseconds_g_tc;
                }

                is_initialized = RTI_TRUE;

                DateTimeNanoseconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DateTimeNanoseconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                DateTimeNanoseconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DateTimeNanoseconds_g_tc._data._annotations._defaultValue._u.long_value = 0;
                DateTimeNanoseconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DateTimeNanoseconds_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DateTimeNanoseconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DateTimeNanoseconds_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DateTimeNanoseconds_g_tc._data._sampleAccessInfo = sample_access_info();
                DateTimeNanoseconds_g_tc._data._typePlugin = type_plugin_info();    

                return &DateTimeNanoseconds_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DateTimeNanoseconds_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DateTimeNanoseconds_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DateTimeNanoseconds_g_sampleAccessInfo;
                }

                DateTimeNanoseconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DateTimeNanoseconds_g_sampleAccessInfo.memberAccessInfos = 
                DateTimeNanoseconds_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DateTimeNanoseconds);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DateTimeNanoseconds_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DateTimeNanoseconds_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DateTimeNanoseconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DateTimeNanoseconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DateTimeNanoseconds >;

                DateTimeNanoseconds_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DateTimeNanoseconds_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DateTimeNanoseconds_g_typePlugin = 
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

                return &DateTimeNanoseconds_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DateTimeNanoseconds_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DateTimeNanoseconds_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DateTime > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DateTime_g_tc_members[2]=
                {

                    {
                        (char *)"seconds",/* Member name */
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
                    }, 
                    {
                        (char *)"nanoseconds",/* Member name */
                        {
                            1,/* Representation ID */
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

                static DDS_TypeCode DateTime_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::DateTime", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DateTime_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DateTime*/

                if (is_initialized) {
                    return &DateTime_g_tc;
                }

                is_initialized = RTI_TRUE;

                DateTime_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DateTime_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTimeSeconds_AliasTag_t>::get().native();
                DateTime_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTimeNanoseconds_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DateTime_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                DateTime_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
                DateTime_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                DateTime_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                DateTime_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                DateTime_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                DateTime_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DateTime_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                DateTime_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DateTime_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DateTime_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DateTime_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DateTime_g_tc._data._sampleAccessInfo = sample_access_info();
                DateTime_g_tc._data._typePlugin = type_plugin_info();    

                return &DateTime_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::DateTime *sample;

                static RTIXCdrMemberAccessInfo DateTime_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DateTime_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DateTime_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::DateTime);
                if (sample == NULL) {
                    return NULL;
                }

                DateTime_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->seconds() - (char *)sample);

                DateTime_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nanoseconds() - (char *)sample);

                DateTime_g_sampleAccessInfo.memberAccessInfos = 
                DateTime_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DateTime);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DateTime >;

                DateTime_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
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

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::DateTime >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DateTime >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Density_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Density_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Density", /* Name */
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
                    }}; /* Type code for  Density */

                if (is_initialized) {
                    return &Density_g_tc;
                }

                is_initialized = RTI_TRUE;

                Density_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Density_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Density_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Density_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Density_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Density_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Density_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Density_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Density_g_tc._data._sampleAccessInfo = sample_access_info();
                Density_g_tc._data._typePlugin = type_plugin_info();    

                return &Density_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Density_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Density_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Density_g_sampleAccessInfo;
                }

                Density_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Density_g_sampleAccessInfo.memberAccessInfos = 
                Density_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Density);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Density_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Density_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Density_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Density_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Density >;

                Density_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Density_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Density_g_typePlugin = 
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

                return &Density_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Density_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Density_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Distance_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Distance_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Distance", /* Name */
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
                    }}; /* Type code for  Distance */

                if (is_initialized) {
                    return &Distance_g_tc;
                }

                is_initialized = RTI_TRUE;

                Distance_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Distance_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Distance_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Distance_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Distance_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Distance_g_tc._data._sampleAccessInfo = sample_access_info();
                Distance_g_tc._data._typePlugin = type_plugin_info();    

                return &Distance_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Distance_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Distance_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Distance_g_sampleAccessInfo;
                }

                Distance_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Distance_g_sampleAccessInfo.memberAccessInfos = 
                Distance_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Distance);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Distance_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Distance_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Distance_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Distance_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Distance >;

                Distance_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Distance_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Distance_g_typePlugin = 
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

                return &Distance_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Distance_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DurationHours_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DurationHours_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DurationHours", /* Name */
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
                    }}; /* Type code for  DurationHours */

                if (is_initialized) {
                    return &DurationHours_g_tc;
                }

                is_initialized = RTI_TRUE;

                DurationHours_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DurationHours_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DurationHours_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DurationHours_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DurationHours_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DurationHours_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DurationHours_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DurationHours_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DurationHours_g_tc._data._sampleAccessInfo = sample_access_info();
                DurationHours_g_tc._data._typePlugin = type_plugin_info();    

                return &DurationHours_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DurationHours_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DurationHours_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DurationHours_g_sampleAccessInfo;
                }

                DurationHours_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DurationHours_g_sampleAccessInfo.memberAccessInfos = 
                DurationHours_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DurationHours);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DurationHours_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DurationHours_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DurationHours_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DurationHours_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DurationHours >;

                DurationHours_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DurationHours_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DurationHours_g_typePlugin = 
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

                return &DurationHours_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DurationHours_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DurationHours_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DurationSeconds_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::DurationSeconds", /* Name */
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
                    }}; /* Type code for  DurationSeconds */

                if (is_initialized) {
                    return &DurationSeconds_g_tc;
                }

                is_initialized = RTI_TRUE;

                DurationSeconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DurationSeconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DurationSeconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DurationSeconds_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                DurationSeconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DurationSeconds_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DurationSeconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DurationSeconds_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DurationSeconds_g_tc._data._sampleAccessInfo = sample_access_info();
                DurationSeconds_g_tc._data._typePlugin = type_plugin_info();    

                return &DurationSeconds_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DurationSeconds_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DurationSeconds_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DurationSeconds_g_sampleAccessInfo;
                }

                DurationSeconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DurationSeconds_g_sampleAccessInfo.memberAccessInfos = 
                DurationSeconds_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::DurationSeconds);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DurationSeconds_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DurationSeconds_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DurationSeconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DurationSeconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::DurationSeconds >;

                DurationSeconds_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DurationSeconds_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DurationSeconds_g_typePlugin = 
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

                return &DurationSeconds_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ElectricalPower_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::ElectricalPower", /* Name */
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
                    }}; /* Type code for  ElectricalPower */

                if (is_initialized) {
                    return &ElectricalPower_g_tc;
                }

                is_initialized = RTI_TRUE;

                ElectricalPower_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElectricalPower_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ElectricalPower_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ElectricalPower_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ElectricalPower_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ElectricalPower_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ElectricalPower_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ElectricalPower_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ElectricalPower_g_tc._data._sampleAccessInfo = sample_access_info();
                ElectricalPower_g_tc._data._typePlugin = type_plugin_info();    

                return &ElectricalPower_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ElectricalPower_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElectricalPower_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElectricalPower_g_sampleAccessInfo;
                }

                ElectricalPower_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ElectricalPower_g_sampleAccessInfo.memberAccessInfos = 
                ElectricalPower_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ElectricalPower);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElectricalPower_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElectricalPower_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElectricalPower_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElectricalPower_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ElectricalPower >;

                ElectricalPower_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElectricalPower_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElectricalPower_g_typePlugin = 
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

                return &ElectricalPower_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EngineSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::EngineSpeed", /* Name */
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
                    }}; /* Type code for  EngineSpeed */

                if (is_initialized) {
                    return &EngineSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                EngineSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                EngineSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                EngineSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                EngineSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &EngineSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo EngineSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineSpeed_g_sampleAccessInfo;
                }

                EngineSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                EngineSpeed_g_sampleAccessInfo.memberAccessInfos = 
                EngineSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::EngineSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::EngineSpeed >;

                EngineSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineSpeed_g_typePlugin = 
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

                return &EngineSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Force_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Force_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Force", /* Name */
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
                    }}; /* Type code for  Force */

                if (is_initialized) {
                    return &Force_g_tc;
                }

                is_initialized = RTI_TRUE;

                Force_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Force_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Force_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Force_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Force_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Force_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Force_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Force_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Force_g_tc._data._sampleAccessInfo = sample_access_info();
                Force_g_tc._data._typePlugin = type_plugin_info();    

                return &Force_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Force_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Force_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Force_g_sampleAccessInfo;
                }

                Force_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Force_g_sampleAccessInfo.memberAccessInfos = 
                Force_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Force);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Force_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Force_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Force_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Force_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Force >;

                Force_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Force_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Force_g_typePlugin = 
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

                return &Force_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Force_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Force_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FrequencyHertz_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::FrequencyHertz", /* Name */
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
                    }}; /* Type code for  FrequencyHertz */

                if (is_initialized) {
                    return &FrequencyHertz_g_tc;
                }

                is_initialized = RTI_TRUE;

                FrequencyHertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FrequencyHertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                FrequencyHertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyHertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                FrequencyHertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyHertz_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FrequencyHertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyHertz_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FrequencyHertz_g_tc._data._sampleAccessInfo = sample_access_info();
                FrequencyHertz_g_tc._data._typePlugin = type_plugin_info();    

                return &FrequencyHertz_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FrequencyHertz_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FrequencyHertz_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FrequencyHertz_g_sampleAccessInfo;
                }

                FrequencyHertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FrequencyHertz_g_sampleAccessInfo.memberAccessInfos = 
                FrequencyHertz_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::FrequencyHertz);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FrequencyHertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FrequencyHertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::FrequencyHertz >;

                FrequencyHertz_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FrequencyHertz_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FrequencyHertz_g_typePlugin = 
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

                return &FrequencyHertz_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GroundSpeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::GroundSpeed", /* Name */
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
                    }}; /* Type code for  GroundSpeed */

                if (is_initialized) {
                    return &GroundSpeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                GroundSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GroundSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GroundSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GroundSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                GroundSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GroundSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GroundSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GroundSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GroundSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                GroundSpeed_g_tc._data._typePlugin = type_plugin_info();    

                return &GroundSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GroundSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GroundSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GroundSpeed_g_sampleAccessInfo;
                }

                GroundSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GroundSpeed_g_sampleAccessInfo.memberAccessInfos = 
                GroundSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::GroundSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GroundSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GroundSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GroundSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GroundSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::GroundSpeed >;

                GroundSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GroundSpeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GroundSpeed_g_typePlugin = 
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

                return &GroundSpeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HeadingTrueNorthAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::HeadingTrueNorthAngle", /* Name */
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
                    }}; /* Type code for  HeadingTrueNorthAngle */

                if (is_initialized) {
                    return &HeadingTrueNorthAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingTrueNorthAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingTrueNorthAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                HeadingTrueNorthAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTrueNorthAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                HeadingTrueNorthAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTrueNorthAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingTrueNorthAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingTrueNorthAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingTrueNorthAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingTrueNorthAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingTrueNorthAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingTrueNorthAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingTrueNorthAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingTrueNorthAngle_g_sampleAccessInfo;
                }

                HeadingTrueNorthAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingTrueNorthAngle_g_sampleAccessInfo.memberAccessInfos = 
                HeadingTrueNorthAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::HeadingTrueNorthAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingTrueNorthAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingTrueNorthAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingTrueNorthAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingTrueNorthAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::HeadingTrueNorthAngle >;

                HeadingTrueNorthAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingTrueNorthAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingTrueNorthAngle_g_typePlugin = 
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

                return &HeadingTrueNorthAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IndicatedAirspeed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::IndicatedAirspeed", /* Name */
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
                    }}; /* Type code for  IndicatedAirspeed */

                if (is_initialized) {
                    return &IndicatedAirspeed_g_tc;
                }

                is_initialized = RTI_TRUE;

                IndicatedAirspeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IndicatedAirspeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                IndicatedAirspeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                IndicatedAirspeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                IndicatedAirspeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                IndicatedAirspeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                IndicatedAirspeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                IndicatedAirspeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                IndicatedAirspeed_g_tc._data._sampleAccessInfo = sample_access_info();
                IndicatedAirspeed_g_tc._data._typePlugin = type_plugin_info();    

                return &IndicatedAirspeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IndicatedAirspeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IndicatedAirspeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IndicatedAirspeed_g_sampleAccessInfo;
                }

                IndicatedAirspeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IndicatedAirspeed_g_sampleAccessInfo.memberAccessInfos = 
                IndicatedAirspeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::IndicatedAirspeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IndicatedAirspeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IndicatedAirspeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IndicatedAirspeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IndicatedAirspeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::IndicatedAirspeed >;

                IndicatedAirspeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IndicatedAirspeed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IndicatedAirspeed_g_typePlugin = 
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

                return &IndicatedAirspeed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MagneticVariation_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::MagneticVariation", /* Name */
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
                    }}; /* Type code for  MagneticVariation */

                if (is_initialized) {
                    return &MagneticVariation_g_tc;
                }

                is_initialized = RTI_TRUE;

                MagneticVariation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MagneticVariation_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MagneticVariation_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticVariation_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                MagneticVariation_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticVariation_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MagneticVariation_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticVariation_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MagneticVariation_g_tc._data._sampleAccessInfo = sample_access_info();
                MagneticVariation_g_tc._data._typePlugin = type_plugin_info();    

                return &MagneticVariation_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MagneticVariation_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MagneticVariation_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MagneticVariation_g_sampleAccessInfo;
                }

                MagneticVariation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MagneticVariation_g_sampleAccessInfo.memberAccessInfos = 
                MagneticVariation_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::MagneticVariation);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MagneticVariation_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MagneticVariation_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MagneticVariation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MagneticVariation_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::MagneticVariation >;

                MagneticVariation_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MagneticVariation_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MagneticVariation_g_typePlugin = 
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

                return &MagneticVariation_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Mass_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Mass_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Mass", /* Name */
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
                    }}; /* Type code for  Mass */

                if (is_initialized) {
                    return &Mass_g_tc;
                }

                is_initialized = RTI_TRUE;

                Mass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Mass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Mass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Mass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Mass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Mass_g_tc._data._sampleAccessInfo = sample_access_info();
                Mass_g_tc._data._typePlugin = type_plugin_info();    

                return &Mass_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Mass_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Mass_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Mass_g_sampleAccessInfo;
                }

                Mass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Mass_g_sampleAccessInfo.memberAccessInfos = 
                Mass_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Mass);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Mass_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Mass_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Mass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Mass_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Mass >;

                Mass_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Mass_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Mass_g_typePlugin = 
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

                return &Mass_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Mass_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NumericGUID_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,16L, NULL,NULL);

                static DDS_TypeCode NumericGUID_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::NumericGUID", /* Name */
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
                    }}; /* Type code for  NumericGUID */

                if (is_initialized) {
                    return &NumericGUID_g_tc;
                }

                is_initialized = RTI_TRUE;

                NumericGUID_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NumericGUID_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;
                NumericGUID_g_tc._data._typeCode =  (RTICdrTypeCode *)& NumericGUID_g_tc_array;

                /* Initialize the values for member annotations. */

                NumericGUID_g_tc._data._sampleAccessInfo = sample_access_info();
                NumericGUID_g_tc._data._typePlugin = type_plugin_info();    

                return &NumericGUID_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NumericGUID_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NumericGUID_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NumericGUID_g_sampleAccessInfo;
                }

                NumericGUID_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NumericGUID_g_sampleAccessInfo.memberAccessInfos = 
                NumericGUID_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::NumericGUID);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NumericGUID_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NumericGUID_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NumericGUID_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NumericGUID_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::NumericGUID >;

                NumericGUID_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NumericGUID_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NumericGUID_g_typePlugin = 
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

                return &NumericGUID_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Percent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Percent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Percent", /* Name */
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
                    }}; /* Type code for  Percent */

                if (is_initialized) {
                    return &Percent_g_tc;
                }

                is_initialized = RTI_TRUE;

                Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Percent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Percent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Percent_g_tc._data._sampleAccessInfo = sample_access_info();
                Percent_g_tc._data._typePlugin = type_plugin_info();    

                return &Percent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Percent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Percent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Percent_g_sampleAccessInfo;
                }

                Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Percent_g_sampleAccessInfo.memberAccessInfos = 
                Percent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Percent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Percent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Percent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Percent >;

                Percent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Percent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Percent_g_typePlugin = 
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

                return &Percent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Percent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PitchHalfAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PitchHalfAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PitchHalfAngle", /* Name */
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
                    }}; /* Type code for  PitchHalfAngle */

                if (is_initialized) {
                    return &PitchHalfAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                PitchHalfAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PitchHalfAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PitchHalfAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PitchHalfAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PitchHalfAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PitchHalfAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PitchHalfAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PitchHalfAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PitchHalfAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                PitchHalfAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &PitchHalfAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PitchHalfAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PitchHalfAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PitchHalfAngle_g_sampleAccessInfo;
                }

                PitchHalfAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PitchHalfAngle_g_sampleAccessInfo.memberAccessInfos = 
                PitchHalfAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PitchHalfAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PitchHalfAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PitchHalfAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PitchHalfAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PitchHalfAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PitchHalfAngle >;

                PitchHalfAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PitchHalfAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PitchHalfAngle_g_typePlugin = 
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

                return &PitchHalfAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PitchHalfAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PitchHalfAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PitchAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PitchAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PitchAcceleration", /* Name */
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
                    }}; /* Type code for  PitchAcceleration */

                if (is_initialized) {
                    return &PitchAcceleration_g_tc;
                }

                is_initialized = RTI_TRUE;

                PitchAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PitchAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PitchAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PitchAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PitchAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PitchAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PitchAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PitchAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PitchAcceleration_g_tc._data._sampleAccessInfo = sample_access_info();
                PitchAcceleration_g_tc._data._typePlugin = type_plugin_info();    

                return &PitchAcceleration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PitchAcceleration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PitchAcceleration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PitchAcceleration_g_sampleAccessInfo;
                }

                PitchAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PitchAcceleration_g_sampleAccessInfo.memberAccessInfos = 
                PitchAcceleration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PitchAcceleration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PitchAcceleration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PitchAcceleration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PitchAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PitchAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PitchAcceleration >;

                PitchAcceleration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PitchAcceleration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PitchAcceleration_g_typePlugin = 
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

                return &PitchAcceleration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PitchAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PitchAcceleration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PitchRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PitchRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PitchRate", /* Name */
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
                    }}; /* Type code for  PitchRate */

                if (is_initialized) {
                    return &PitchRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                PitchRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PitchRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PitchRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PitchRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PitchRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PitchRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PitchRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PitchRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PitchRate_g_tc._data._sampleAccessInfo = sample_access_info();
                PitchRate_g_tc._data._typePlugin = type_plugin_info();    

                return &PitchRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PitchRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PitchRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PitchRate_g_sampleAccessInfo;
                }

                PitchRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PitchRate_g_sampleAccessInfo.memberAccessInfos = 
                PitchRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PitchRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PitchRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PitchRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PitchRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PitchRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PitchRate >;

                PitchRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PitchRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PitchRate_g_typePlugin = 
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

                return &PitchRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PitchRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PitchRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PowerBusCurrent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PowerBusCurrent", /* Name */
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
                    }}; /* Type code for  PowerBusCurrent */

                if (is_initialized) {
                    return &PowerBusCurrent_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerBusCurrent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PowerBusCurrent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PowerBusCurrent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusCurrent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PowerBusCurrent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusCurrent_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PowerBusCurrent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusCurrent_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PowerBusCurrent_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerBusCurrent_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerBusCurrent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerBusCurrent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerBusCurrent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerBusCurrent_g_sampleAccessInfo;
                }

                PowerBusCurrent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerBusCurrent_g_sampleAccessInfo.memberAccessInfos = 
                PowerBusCurrent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PowerBusCurrent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerBusCurrent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerBusCurrent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerBusCurrent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerBusCurrent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PowerBusCurrent >;

                PowerBusCurrent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerBusCurrent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerBusCurrent_g_typePlugin = 
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

                return &PowerBusCurrent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PowerBusVoltage_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PowerBusVoltage", /* Name */
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
                    }}; /* Type code for  PowerBusVoltage */

                if (is_initialized) {
                    return &PowerBusVoltage_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerBusVoltage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PowerBusVoltage_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PowerBusVoltage_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusVoltage_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PowerBusVoltage_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusVoltage_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PowerBusVoltage_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusVoltage_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PowerBusVoltage_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerBusVoltage_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerBusVoltage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerBusVoltage_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerBusVoltage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerBusVoltage_g_sampleAccessInfo;
                }

                PowerBusVoltage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerBusVoltage_g_sampleAccessInfo.memberAccessInfos = 
                PowerBusVoltage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PowerBusVoltage);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerBusVoltage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerBusVoltage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerBusVoltage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerBusVoltage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PowerBusVoltage >;

                PowerBusVoltage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerBusVoltage_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerBusVoltage_g_typePlugin = 
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

                return &PowerBusVoltage_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PressureKiloPascals_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PressureKiloPascals", /* Name */
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
                    }}; /* Type code for  PressureKiloPascals */

                if (is_initialized) {
                    return &PressureKiloPascals_g_tc;
                }

                is_initialized = RTI_TRUE;

                PressureKiloPascals_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PressureKiloPascals_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PressureKiloPascals_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PressureKiloPascals_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PressureKiloPascals_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PressureKiloPascals_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PressureKiloPascals_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PressureKiloPascals_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PressureKiloPascals_g_tc._data._sampleAccessInfo = sample_access_info();
                PressureKiloPascals_g_tc._data._typePlugin = type_plugin_info();    

                return &PressureKiloPascals_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PressureKiloPascals_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PressureKiloPascals_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PressureKiloPascals_g_sampleAccessInfo;
                }

                PressureKiloPascals_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PressureKiloPascals_g_sampleAccessInfo.memberAccessInfos = 
                PressureKiloPascals_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PressureKiloPascals);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PressureKiloPascals_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PressureKiloPascals_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PressureKiloPascals_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PressureKiloPascals_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PressureKiloPascals >;

                PressureKiloPascals_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PressureKiloPascals_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PressureKiloPascals_g_typePlugin = 
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

                return &PressureKiloPascals_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PressurePascals_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PressurePascals_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PressurePascals", /* Name */
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
                    }}; /* Type code for  PressurePascals */

                if (is_initialized) {
                    return &PressurePascals_g_tc;
                }

                is_initialized = RTI_TRUE;

                PressurePascals_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PressurePascals_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PressurePascals_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePascals_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PressurePascals_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePascals_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PressurePascals_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PressurePascals_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PressurePascals_g_tc._data._sampleAccessInfo = sample_access_info();
                PressurePascals_g_tc._data._typePlugin = type_plugin_info();    

                return &PressurePascals_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PressurePascals_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PressurePascals_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PressurePascals_g_sampleAccessInfo;
                }

                PressurePascals_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PressurePascals_g_sampleAccessInfo.memberAccessInfos = 
                PressurePascals_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PressurePascals);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PressurePascals_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PressurePascals_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PressurePascals_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PressurePascals_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PressurePascals >;

                PressurePascals_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PressurePascals_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PressurePascals_g_typePlugin = 
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

                return &PressurePascals_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PressurePascals_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PressurePascals_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RadioFrequencyHertz_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RadioFrequencyHertz_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RadioFrequencyHertz", /* Name */
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
                    }}; /* Type code for  RadioFrequencyHertz */

                if (is_initialized) {
                    return &RadioFrequencyHertz_g_tc;
                }

                is_initialized = RTI_TRUE;

                RadioFrequencyHertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RadioFrequencyHertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RadioFrequencyHertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequencyHertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RadioFrequencyHertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequencyHertz_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RadioFrequencyHertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequencyHertz_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RadioFrequencyHertz_g_tc._data._sampleAccessInfo = sample_access_info();
                RadioFrequencyHertz_g_tc._data._typePlugin = type_plugin_info();    

                return &RadioFrequencyHertz_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RadioFrequencyHertz_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RadioFrequencyHertz_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RadioFrequencyHertz_g_sampleAccessInfo;
                }

                RadioFrequencyHertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RadioFrequencyHertz_g_sampleAccessInfo.memberAccessInfos = 
                RadioFrequencyHertz_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RadioFrequencyHertz);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RadioFrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RadioFrequencyHertz_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RadioFrequencyHertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RadioFrequencyHertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RadioFrequencyHertz >;

                RadioFrequencyHertz_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RadioFrequencyHertz_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RadioFrequencyHertz_g_typePlugin = 
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

                return &RadioFrequencyHertz_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RadioFrequencyHertz_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RadioFrequencyHertz_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RelativeAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RelativeAngle", /* Name */
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
                    }}; /* Type code for  RelativeAngle */

                if (is_initialized) {
                    return &RelativeAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                RelativeAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RelativeAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RelativeAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RelativeAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RelativeAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RelativeAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                RelativeAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &RelativeAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RelativeAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RelativeAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RelativeAngle_g_sampleAccessInfo;
                }

                RelativeAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RelativeAngle_g_sampleAccessInfo.memberAccessInfos = 
                RelativeAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RelativeAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RelativeAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RelativeAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RelativeAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RelativeAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RelativeAngle >;

                RelativeAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RelativeAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RelativeAngle_g_typePlugin = 
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

                return &RelativeAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RelativeHumidity_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RelativeHumidity_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RelativeHumidity", /* Name */
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
                    }}; /* Type code for  RelativeHumidity */

                if (is_initialized) {
                    return &RelativeHumidity_g_tc;
                }

                is_initialized = RTI_TRUE;

                RelativeHumidity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RelativeHumidity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RelativeHumidity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeHumidity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RelativeHumidity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeHumidity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RelativeHumidity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeHumidity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RelativeHumidity_g_tc._data._sampleAccessInfo = sample_access_info();
                RelativeHumidity_g_tc._data._typePlugin = type_plugin_info();    

                return &RelativeHumidity_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RelativeHumidity_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RelativeHumidity_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RelativeHumidity_g_sampleAccessInfo;
                }

                RelativeHumidity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RelativeHumidity_g_sampleAccessInfo.memberAccessInfos = 
                RelativeHumidity_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RelativeHumidity);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RelativeHumidity_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RelativeHumidity_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RelativeHumidity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RelativeHumidity_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RelativeHumidity >;

                RelativeHumidity_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RelativeHumidity_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RelativeHumidity_g_typePlugin = 
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

                return &RelativeHumidity_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RelativeHumidity_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RelativeHumidity_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RollAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RollAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RollAngle", /* Name */
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
                    }}; /* Type code for  RollAngle */

                if (is_initialized) {
                    return &RollAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                RollAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RollAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RollAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RollAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RollAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RollAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RollAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RollAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RollAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                RollAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &RollAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RollAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RollAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RollAngle_g_sampleAccessInfo;
                }

                RollAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RollAngle_g_sampleAccessInfo.memberAccessInfos = 
                RollAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RollAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RollAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RollAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RollAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RollAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RollAngle >;

                RollAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RollAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RollAngle_g_typePlugin = 
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

                return &RollAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RollAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RollAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RollAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RollAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RollAcceleration", /* Name */
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
                    }}; /* Type code for  RollAcceleration */

                if (is_initialized) {
                    return &RollAcceleration_g_tc;
                }

                is_initialized = RTI_TRUE;

                RollAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RollAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RollAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RollAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RollAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RollAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RollAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RollAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RollAcceleration_g_tc._data._sampleAccessInfo = sample_access_info();
                RollAcceleration_g_tc._data._typePlugin = type_plugin_info();    

                return &RollAcceleration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RollAcceleration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RollAcceleration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RollAcceleration_g_sampleAccessInfo;
                }

                RollAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RollAcceleration_g_sampleAccessInfo.memberAccessInfos = 
                RollAcceleration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RollAcceleration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RollAcceleration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RollAcceleration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RollAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RollAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RollAcceleration >;

                RollAcceleration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RollAcceleration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RollAcceleration_g_typePlugin = 
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

                return &RollAcceleration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RollAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RollAcceleration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RollRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RollRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RollRate", /* Name */
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
                    }}; /* Type code for  RollRate */

                if (is_initialized) {
                    return &RollRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                RollRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RollRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RollRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RollRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RollRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RollRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RollRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RollRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RollRate_g_tc._data._sampleAccessInfo = sample_access_info();
                RollRate_g_tc._data._typePlugin = type_plugin_info();    

                return &RollRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RollRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RollRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RollRate_g_sampleAccessInfo;
                }

                RollRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RollRate_g_sampleAccessInfo.memberAccessInfos = 
                RollRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RollRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RollRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RollRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RollRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RollRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RollRate >;

                RollRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RollRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RollRate_g_typePlugin = 
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

                return &RollRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RollRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RollRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SizeBytes_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SizeBytes", /* Name */
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
                    }}; /* Type code for  SizeBytes */

                if (is_initialized) {
                    return &SizeBytes_g_tc;
                }

                is_initialized = RTI_TRUE;

                SizeBytes_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SizeBytes_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                SizeBytes_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SizeBytes_g_tc._data._annotations._defaultValue._u.long_value = 0;
                SizeBytes_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SizeBytes_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                SizeBytes_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SizeBytes_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                SizeBytes_g_tc._data._sampleAccessInfo = sample_access_info();
                SizeBytes_g_tc._data._typePlugin = type_plugin_info();    

                return &SizeBytes_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SizeBytes_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SizeBytes_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SizeBytes_g_sampleAccessInfo;
                }

                SizeBytes_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SizeBytes_g_sampleAccessInfo.memberAccessInfos = 
                SizeBytes_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SizeBytes);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SizeBytes_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SizeBytes_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SizeBytes_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SizeBytes_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SizeBytes >;

                SizeBytes_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SizeBytes_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SizeBytes_g_typePlugin = 
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

                return &SizeBytes_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::SizeReal_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SizeReal_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::SizeReal", /* Name */
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
                    }}; /* Type code for  SizeReal */

                if (is_initialized) {
                    return &SizeReal_g_tc;
                }

                is_initialized = RTI_TRUE;

                SizeReal_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SizeReal_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SizeReal_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SizeReal_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                SizeReal_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SizeReal_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SizeReal_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SizeReal_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SizeReal_g_tc._data._sampleAccessInfo = sample_access_info();
                SizeReal_g_tc._data._typePlugin = type_plugin_info();    

                return &SizeReal_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SizeReal_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SizeReal_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SizeReal_g_sampleAccessInfo;
                }

                SizeReal_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SizeReal_g_sampleAccessInfo.memberAccessInfos = 
                SizeReal_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::SizeReal);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SizeReal_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SizeReal_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SizeReal_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SizeReal_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::SizeReal >;

                SizeReal_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SizeReal_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SizeReal_g_typePlugin = 
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

                return &SizeReal_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::SizeReal_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::SizeReal_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Speed_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Speed_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Speed", /* Name */
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
                    }}; /* Type code for  Speed */

                if (is_initialized) {
                    return &Speed_g_tc;
                }

                is_initialized = RTI_TRUE;

                Speed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Speed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Speed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Speed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Speed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Speed_g_tc._data._sampleAccessInfo = sample_access_info();
                Speed_g_tc._data._typePlugin = type_plugin_info();    

                return &Speed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Speed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Speed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Speed_g_sampleAccessInfo;
                }

                Speed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Speed_g_sampleAccessInfo.memberAccessInfos = 
                Speed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Speed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Speed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Speed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Speed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Speed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Speed >;

                Speed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Speed_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Speed_g_typePlugin = 
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

                return &Speed_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Speed_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Temperature_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Temperature_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Temperature", /* Name */
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
                    }}; /* Type code for  Temperature */

                if (is_initialized) {
                    return &Temperature_g_tc;
                }

                is_initialized = RTI_TRUE;

                Temperature_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Temperature_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Temperature_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Temperature_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Temperature_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Temperature_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Temperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Temperature_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Temperature_g_tc._data._sampleAccessInfo = sample_access_info();
                Temperature_g_tc._data._typePlugin = type_plugin_info();    

                return &Temperature_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Temperature_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Temperature_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Temperature_g_sampleAccessInfo;
                }

                Temperature_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Temperature_g_sampleAccessInfo.memberAccessInfos = 
                Temperature_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Temperature);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Temperature_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Temperature_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Temperature_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Temperature_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Temperature >;

                Temperature_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Temperature_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Temperature_g_typePlugin = 
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

                return &Temperature_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Temperature_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::TurnRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TurnRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::TurnRate", /* Name */
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
                    }}; /* Type code for  TurnRate */

                if (is_initialized) {
                    return &TurnRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                TurnRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TurnRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                TurnRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TurnRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                TurnRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TurnRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TurnRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TurnRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TurnRate_g_tc._data._sampleAccessInfo = sample_access_info();
                TurnRate_g_tc._data._typePlugin = type_plugin_info();    

                return &TurnRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TurnRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TurnRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TurnRate_g_sampleAccessInfo;
                }

                TurnRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TurnRate_g_sampleAccessInfo.memberAccessInfos = 
                TurnRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::TurnRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TurnRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TurnRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TurnRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TurnRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::TurnRate >;

                TurnRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TurnRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TurnRate_g_typePlugin = 
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

                return &TurnRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::TurnRate_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::YawAcceleration_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode YawAcceleration_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::YawAcceleration", /* Name */
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
                    }}; /* Type code for  YawAcceleration */

                if (is_initialized) {
                    return &YawAcceleration_g_tc;
                }

                is_initialized = RTI_TRUE;

                YawAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                YawAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                YawAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                YawAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                YawAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                YawAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                YawAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                YawAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                YawAcceleration_g_tc._data._sampleAccessInfo = sample_access_info();
                YawAcceleration_g_tc._data._typePlugin = type_plugin_info();    

                return &YawAcceleration_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo YawAcceleration_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo YawAcceleration_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &YawAcceleration_g_sampleAccessInfo;
                }

                YawAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                YawAcceleration_g_sampleAccessInfo.memberAccessInfos = 
                YawAcceleration_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::YawAcceleration);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        YawAcceleration_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        YawAcceleration_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                YawAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                YawAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::YawAcceleration >;

                YawAcceleration_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &YawAcceleration_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin YawAcceleration_g_typePlugin = 
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

                return &YawAcceleration_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::YawAcceleration_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::YawAcceleration_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::YawRate_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode YawRate_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::YawRate", /* Name */
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
                    }}; /* Type code for  YawRate */

                if (is_initialized) {
                    return &YawRate_g_tc;
                }

                is_initialized = RTI_TRUE;

                YawRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                YawRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                YawRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                YawRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                YawRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                YawRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                YawRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                YawRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                YawRate_g_tc._data._sampleAccessInfo = sample_access_info();
                YawRate_g_tc._data._typePlugin = type_plugin_info();    

                return &YawRate_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo YawRate_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo YawRate_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &YawRate_g_sampleAccessInfo;
                }

                YawRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                YawRate_g_sampleAccessInfo.memberAccessInfos = 
                YawRate_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::YawRate);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        YawRate_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        YawRate_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                YawRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                YawRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::YawRate >;

                YawRate_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &YawRate_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin YawRate_g_typePlugin = 
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

                return &YawRate_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::YawRate_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::YawRate_AliasTag_t >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::DateTime >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::DateTimePlugin_new,
                ::UMAA::Common::Measurement::DateTimePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::DateTime >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::DateTime& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DateTimePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DateTimePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::DateTime >::from_cdr_buffer(::UMAA::Common::Measurement::DateTime& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DateTimePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::DateTime from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::DateTime >::reset_sample(::UMAA::Common::Measurement::DateTime& sample) 
        {
            sample.seconds(0ll);
            sample.nanoseconds(0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::DateTime >::allocate_sample(::UMAA::Common::Measurement::DateTime& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
