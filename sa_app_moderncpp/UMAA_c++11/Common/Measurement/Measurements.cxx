

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
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
        struct native_type_code< ::UMAA::Common::Measurement::AnglePosition_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AnglePosition_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::AnglePosition", /* Name */
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
                    }}; /* Type code for  AnglePosition */

                if (is_initialized) {
                    return &AnglePosition_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnglePosition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AnglePosition_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                AnglePosition_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnglePosition_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                AnglePosition_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnglePosition_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AnglePosition_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnglePosition_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AnglePosition_g_tc._data._sampleAccessInfo = sample_access_info();
                AnglePosition_g_tc._data._typePlugin = type_plugin_info();    

                return &AnglePosition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnglePosition_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnglePosition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnglePosition_g_sampleAccessInfo;
                }

                AnglePosition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnglePosition_g_sampleAccessInfo.memberAccessInfos = 
                AnglePosition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AnglePosition);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnglePosition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnglePosition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnglePosition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnglePosition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AnglePosition >;

                AnglePosition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnglePosition_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnglePosition_g_typePlugin = 
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

                return &AnglePosition_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::AnglePosition_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AnglePosition_AliasTag_t >::get())));
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
                Charge_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Charge_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Charge_g_tc._data._annotations._maxValue._u.double_value = 3600000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Distance_ASF_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Distance_ASF_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Distance_ASF", /* Name */
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
                    }}; /* Type code for  Distance_ASF */

                if (is_initialized) {
                    return &Distance_ASF_g_tc;
                }

                is_initialized = RTI_TRUE;

                Distance_ASF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Distance_ASF_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Distance_ASF_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_ASF_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Distance_ASF_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_ASF_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Distance_ASF_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_ASF_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

                Distance_ASF_g_tc._data._sampleAccessInfo = sample_access_info();
                Distance_ASF_g_tc._data._typePlugin = type_plugin_info();    

                return &Distance_ASF_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Distance_ASF_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Distance_ASF_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Distance_ASF_g_sampleAccessInfo;
                }

                Distance_ASF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Distance_ASF_g_sampleAccessInfo.memberAccessInfos = 
                Distance_ASF_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Distance_ASF);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Distance_ASF_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Distance_ASF_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Distance_ASF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Distance_ASF_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Distance_ASF >;

                Distance_ASF_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Distance_ASF_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Distance_ASF_g_typePlugin = 
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

                return &Distance_ASF_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Distance_ASF_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Distance_ASF_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Distance_BSL_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Distance_BSL_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Distance_BSL", /* Name */
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
                    }}; /* Type code for  Distance_BSL */

                if (is_initialized) {
                    return &Distance_BSL_g_tc;
                }

                is_initialized = RTI_TRUE;

                Distance_BSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Distance_BSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Distance_BSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_BSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Distance_BSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_BSL_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Distance_BSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_BSL_g_tc._data._annotations._maxValue._u.double_value = 10000ULL;

                Distance_BSL_g_tc._data._sampleAccessInfo = sample_access_info();
                Distance_BSL_g_tc._data._typePlugin = type_plugin_info();    

                return &Distance_BSL_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Distance_BSL_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Distance_BSL_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Distance_BSL_g_sampleAccessInfo;
                }

                Distance_BSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Distance_BSL_g_sampleAccessInfo.memberAccessInfos = 
                Distance_BSL_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Distance_BSL);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Distance_BSL_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Distance_BSL_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Distance_BSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Distance_BSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Distance_BSL >;

                Distance_BSL_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Distance_BSL_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Distance_BSL_g_typePlugin = 
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

                return &Distance_BSL_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Distance_BSL_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Distance_BSL_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::Measurement::Energy_Percent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Energy_Percent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Energy_Percent", /* Name */
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
                    }}; /* Type code for  Energy_Percent */

                if (is_initialized) {
                    return &Energy_Percent_g_tc;
                }

                is_initialized = RTI_TRUE;

                Energy_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Energy_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Energy_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Energy_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Energy_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Energy_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Energy_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Energy_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

                Energy_Percent_g_tc._data._sampleAccessInfo = sample_access_info();
                Energy_Percent_g_tc._data._typePlugin = type_plugin_info();    

                return &Energy_Percent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Energy_Percent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Energy_Percent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Energy_Percent_g_sampleAccessInfo;
                }

                Energy_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Energy_Percent_g_sampleAccessInfo.memberAccessInfos = 
                Energy_Percent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Energy_Percent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Energy_Percent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Energy_Percent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Energy_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Energy_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Energy_Percent >;

                Energy_Percent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Energy_Percent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Energy_Percent_g_typePlugin = 
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

                return &Energy_Percent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Energy_Percent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Energy_Percent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::FrameRateFPS_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FrameRateFPS_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::FrameRateFPS", /* Name */
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
                    }}; /* Type code for  FrameRateFPS */

                if (is_initialized) {
                    return &FrameRateFPS_g_tc;
                }

                is_initialized = RTI_TRUE;

                FrameRateFPS_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FrameRateFPS_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                FrameRateFPS_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FrameRateFPS_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                FrameRateFPS_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FrameRateFPS_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                FrameRateFPS_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FrameRateFPS_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

                FrameRateFPS_g_tc._data._sampleAccessInfo = sample_access_info();
                FrameRateFPS_g_tc._data._typePlugin = type_plugin_info();    

                return &FrameRateFPS_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FrameRateFPS_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FrameRateFPS_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FrameRateFPS_g_sampleAccessInfo;
                }

                FrameRateFPS_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FrameRateFPS_g_sampleAccessInfo.memberAccessInfos = 
                FrameRateFPS_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::FrameRateFPS);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FrameRateFPS_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FrameRateFPS_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FrameRateFPS_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FrameRateFPS_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::FrameRateFPS >;

                FrameRateFPS_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FrameRateFPS_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FrameRateFPS_g_typePlugin = 
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

                return &FrameRateFPS_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::FrameRateFPS_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::FrameRateFPS_AliasTag_t >::get())));
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

                FrequencyRPM_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                FrequencyRPM_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRPM_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                FrequencyRPM_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRPM_g_tc._data._annotations._minValue._u.double_value = -100000LL;
                FrequencyRPM_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRPM_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Heading_CurrentDirection_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Heading_CurrentDirection_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Heading_CurrentDirection", /* Name */
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
                    }}; /* Type code for  Heading_CurrentDirection */

                if (is_initialized) {
                    return &Heading_CurrentDirection_g_tc;
                }

                is_initialized = RTI_TRUE;

                Heading_CurrentDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Heading_CurrentDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Heading_CurrentDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_CurrentDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Heading_CurrentDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_CurrentDirection_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                Heading_CurrentDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_CurrentDirection_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                Heading_CurrentDirection_g_tc._data._sampleAccessInfo = sample_access_info();
                Heading_CurrentDirection_g_tc._data._typePlugin = type_plugin_info();    

                return &Heading_CurrentDirection_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Heading_CurrentDirection_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Heading_CurrentDirection_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Heading_CurrentDirection_g_sampleAccessInfo;
                }

                Heading_CurrentDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Heading_CurrentDirection_g_sampleAccessInfo.memberAccessInfos = 
                Heading_CurrentDirection_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Heading_CurrentDirection);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Heading_CurrentDirection_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Heading_CurrentDirection_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Heading_CurrentDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Heading_CurrentDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Heading_CurrentDirection >;

                Heading_CurrentDirection_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Heading_CurrentDirection_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Heading_CurrentDirection_g_typePlugin = 
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

                return &Heading_CurrentDirection_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Heading_CurrentDirection_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Heading_CurrentDirection_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Heading_MagneticNorth_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Heading_MagneticNorth_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Heading_MagneticNorth", /* Name */
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
                    }}; /* Type code for  Heading_MagneticNorth */

                if (is_initialized) {
                    return &Heading_MagneticNorth_g_tc;
                }

                is_initialized = RTI_TRUE;

                Heading_MagneticNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Heading_MagneticNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Heading_MagneticNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_MagneticNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Heading_MagneticNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_MagneticNorth_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                Heading_MagneticNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_MagneticNorth_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                Heading_MagneticNorth_g_tc._data._sampleAccessInfo = sample_access_info();
                Heading_MagneticNorth_g_tc._data._typePlugin = type_plugin_info();    

                return &Heading_MagneticNorth_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Heading_MagneticNorth_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Heading_MagneticNorth_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Heading_MagneticNorth_g_sampleAccessInfo;
                }

                Heading_MagneticNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Heading_MagneticNorth_g_sampleAccessInfo.memberAccessInfos = 
                Heading_MagneticNorth_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Heading_MagneticNorth);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Heading_MagneticNorth_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Heading_MagneticNorth_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Heading_MagneticNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Heading_MagneticNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Heading_MagneticNorth >;

                Heading_MagneticNorth_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Heading_MagneticNorth_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Heading_MagneticNorth_g_typePlugin = 
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

                return &Heading_MagneticNorth_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Heading_MagneticNorth_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Heading_MagneticNorth_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Heading_WindDirection_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Heading_WindDirection_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Heading_WindDirection", /* Name */
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
                    }}; /* Type code for  Heading_WindDirection */

                if (is_initialized) {
                    return &Heading_WindDirection_g_tc;
                }

                is_initialized = RTI_TRUE;

                Heading_WindDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Heading_WindDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Heading_WindDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_WindDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Heading_WindDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_WindDirection_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                Heading_WindDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_WindDirection_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                Heading_WindDirection_g_tc._data._sampleAccessInfo = sample_access_info();
                Heading_WindDirection_g_tc._data._typePlugin = type_plugin_info();    

                return &Heading_WindDirection_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Heading_WindDirection_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Heading_WindDirection_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Heading_WindDirection_g_sampleAccessInfo;
                }

                Heading_WindDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Heading_WindDirection_g_sampleAccessInfo.memberAccessInfos = 
                Heading_WindDirection_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Heading_WindDirection);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Heading_WindDirection_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Heading_WindDirection_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Heading_WindDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Heading_WindDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Heading_WindDirection >;

                Heading_WindDirection_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Heading_WindDirection_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Heading_WindDirection_g_typePlugin = 
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

                return &Heading_WindDirection_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Heading_WindDirection_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Heading_WindDirection_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Mass_MetricTon_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Mass_MetricTon_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Mass_MetricTon", /* Name */
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
                    }}; /* Type code for  Mass_MetricTon */

                if (is_initialized) {
                    return &Mass_MetricTon_g_tc;
                }

                is_initialized = RTI_TRUE;

                Mass_MetricTon_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Mass_MetricTon_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Mass_MetricTon_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_MetricTon_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Mass_MetricTon_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_MetricTon_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Mass_MetricTon_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_MetricTon_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Mass_MetricTon_g_tc._data._sampleAccessInfo = sample_access_info();
                Mass_MetricTon_g_tc._data._typePlugin = type_plugin_info();    

                return &Mass_MetricTon_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Mass_MetricTon_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Mass_MetricTon_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Mass_MetricTon_g_sampleAccessInfo;
                }

                Mass_MetricTon_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Mass_MetricTon_g_sampleAccessInfo.memberAccessInfos = 
                Mass_MetricTon_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Mass_MetricTon);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Mass_MetricTon_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Mass_MetricTon_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Mass_MetricTon_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Mass_MetricTon_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Mass_MetricTon >;

                Mass_MetricTon_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Mass_MetricTon_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Mass_MetricTon_g_typePlugin = 
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

                return &Mass_MetricTon_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Mass_MetricTon_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Mass_MetricTon_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::Measurement::OrientationQuaternion_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode OrientationQuaternion_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::OrientationQuaternion", /* Name */
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
                    }}; /* Type code for  OrientationQuaternion */

                if (is_initialized) {
                    return &OrientationQuaternion_g_tc;
                }

                is_initialized = RTI_TRUE;

                OrientationQuaternion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationQuaternion_g_tc._data._typeCode =  (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::BasicTypes::Quaternion>::get().native();

                /* Initialize the values for member annotations. */

                OrientationQuaternion_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationQuaternion_g_tc._data._typePlugin = type_plugin_info();    

                return &OrientationQuaternion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo OrientationQuaternion_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationQuaternion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationQuaternion_g_sampleAccessInfo;
                }

                OrientationQuaternion_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                OrientationQuaternion_g_sampleAccessInfo.memberAccessInfos = 
                OrientationQuaternion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::OrientationQuaternion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationQuaternion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationQuaternion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationQuaternion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationQuaternion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::OrientationQuaternion >;

                OrientationQuaternion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationQuaternion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationQuaternion_g_typePlugin = 
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

                return &OrientationQuaternion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::OrientationQuaternion_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::OrientationQuaternion_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::PositiveCount_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PositiveCount_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::PositiveCount", /* Name */
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
                    }}; /* Type code for  PositiveCount */

                if (is_initialized) {
                    return &PositiveCount_g_tc;
                }

                is_initialized = RTI_TRUE;

                PositiveCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PositiveCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                PositiveCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PositiveCount_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                PositiveCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PositiveCount_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                PositiveCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PositiveCount_g_tc._data._annotations._maxValue._u.double_value = 2147483647ULL;

                PositiveCount_g_tc._data._sampleAccessInfo = sample_access_info();
                PositiveCount_g_tc._data._typePlugin = type_plugin_info();    

                return &PositiveCount_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PositiveCount_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PositiveCount_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PositiveCount_g_sampleAccessInfo;
                }

                PositiveCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PositiveCount_g_sampleAccessInfo.memberAccessInfos = 
                PositiveCount_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::PositiveCount);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PositiveCount_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PositiveCount_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PositiveCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PositiveCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::PositiveCount >;

                PositiveCount_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PositiveCount_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PositiveCount_g_typePlugin = 
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

                return &PositiveCount_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::PositiveCount_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::PositiveCount_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Power_Percent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Power_Percent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Power_Percent", /* Name */
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
                    }}; /* Type code for  Power_Percent */

                if (is_initialized) {
                    return &Power_Percent_g_tc;
                }

                is_initialized = RTI_TRUE;

                Power_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Power_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Power_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Power_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Power_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Power_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Power_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Power_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

                Power_Percent_g_tc._data._sampleAccessInfo = sample_access_info();
                Power_Percent_g_tc._data._typePlugin = type_plugin_info();    

                return &Power_Percent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Power_Percent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Power_Percent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Power_Percent_g_sampleAccessInfo;
                }

                Power_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Power_Percent_g_sampleAccessInfo.memberAccessInfos = 
                Power_Percent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Power_Percent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Power_Percent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Power_Percent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Power_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Power_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Power_Percent >;

                Power_Percent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Power_Percent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Power_Percent_g_typePlugin = 
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

                return &Power_Percent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Power_Percent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Power_Percent_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Pressure_Percent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Pressure_Percent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Pressure_Percent", /* Name */
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
                    }}; /* Type code for  Pressure_Percent */

                if (is_initialized) {
                    return &Pressure_Percent_g_tc;
                }

                is_initialized = RTI_TRUE;

                Pressure_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Pressure_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Pressure_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Pressure_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Pressure_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_Percent_g_tc._data._annotations._maxValue._u.double_value = 200ULL;

                Pressure_Percent_g_tc._data._sampleAccessInfo = sample_access_info();
                Pressure_Percent_g_tc._data._typePlugin = type_plugin_info();    

                return &Pressure_Percent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Pressure_Percent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Pressure_Percent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Pressure_Percent_g_sampleAccessInfo;
                }

                Pressure_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Pressure_Percent_g_sampleAccessInfo.memberAccessInfos = 
                Pressure_Percent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Pressure_Percent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Pressure_Percent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Pressure_Percent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Pressure_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Pressure_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Pressure_Percent >;

                Pressure_Percent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Pressure_Percent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Pressure_Percent_g_typePlugin = 
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

                return &Pressure_Percent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Pressure_Percent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Pressure_Percent_AliasTag_t >::get())));
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
                SidesCount_g_tc._data._annotations._minValue._u.long_value = 0L;
                SidesCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SidesCount_g_tc._data._annotations._maxValue._u.long_value = 255L;

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
        struct native_type_code< ::UMAA::Common::Measurement::Speed_BSL_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Speed_BSL_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Speed_BSL", /* Name */
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
                    }}; /* Type code for  Speed_BSL */

                if (is_initialized) {
                    return &Speed_BSL_g_tc;
                }

                is_initialized = RTI_TRUE;

                Speed_BSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Speed_BSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Speed_BSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Speed_BSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Speed_BSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_BSL_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Speed_BSL_g_tc._data._sampleAccessInfo = sample_access_info();
                Speed_BSL_g_tc._data._typePlugin = type_plugin_info();    

                return &Speed_BSL_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Speed_BSL_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Speed_BSL_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Speed_BSL_g_sampleAccessInfo;
                }

                Speed_BSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Speed_BSL_g_sampleAccessInfo.memberAccessInfos = 
                Speed_BSL_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Speed_BSL);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Speed_BSL_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Speed_BSL_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Speed_BSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Speed_BSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Speed_BSL >;

                Speed_BSL_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Speed_BSL_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Speed_BSL_g_typePlugin = 
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

                return &Speed_BSL_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Speed_BSL_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Speed_BSL_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Speed_LocalWaterMass_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Speed_LocalWaterMass", /* Name */
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
                    }}; /* Type code for  Speed_LocalWaterMass */

                if (is_initialized) {
                    return &Speed_LocalWaterMass_g_tc;
                }

                is_initialized = RTI_TRUE;

                Speed_LocalWaterMass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Speed_LocalWaterMass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Speed_LocalWaterMass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_LocalWaterMass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Speed_LocalWaterMass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_LocalWaterMass_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Speed_LocalWaterMass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_LocalWaterMass_g_tc._data._annotations._maxValue._u.double_value = 299792458ULL;

                Speed_LocalWaterMass_g_tc._data._sampleAccessInfo = sample_access_info();
                Speed_LocalWaterMass_g_tc._data._typePlugin = type_plugin_info();    

                return &Speed_LocalWaterMass_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Speed_LocalWaterMass_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Speed_LocalWaterMass_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Speed_LocalWaterMass_g_sampleAccessInfo;
                }

                Speed_LocalWaterMass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Speed_LocalWaterMass_g_sampleAccessInfo.memberAccessInfos = 
                Speed_LocalWaterMass_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Speed_LocalWaterMass);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Speed_LocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Speed_LocalWaterMass_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Speed_LocalWaterMass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Speed_LocalWaterMass_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Speed_LocalWaterMass >;

                Speed_LocalWaterMass_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Speed_LocalWaterMass_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Speed_LocalWaterMass_g_typePlugin = 
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

                return &Speed_LocalWaterMass_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Volume_CubicMeter_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Volume_CubicMeter", /* Name */
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
                    }}; /* Type code for  Volume_CubicMeter */

                if (is_initialized) {
                    return &Volume_CubicMeter_g_tc;
                }

                is_initialized = RTI_TRUE;

                Volume_CubicMeter_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Volume_CubicMeter_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Volume_CubicMeter_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_CubicMeter_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Volume_CubicMeter_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_CubicMeter_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Volume_CubicMeter_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_CubicMeter_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

                Volume_CubicMeter_g_tc._data._sampleAccessInfo = sample_access_info();
                Volume_CubicMeter_g_tc._data._typePlugin = type_plugin_info();    

                return &Volume_CubicMeter_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Volume_CubicMeter_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Volume_CubicMeter_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Volume_CubicMeter_g_sampleAccessInfo;
                }

                Volume_CubicMeter_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Volume_CubicMeter_g_sampleAccessInfo.memberAccessInfos = 
                Volume_CubicMeter_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Volume_CubicMeter);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Volume_CubicMeter_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Volume_CubicMeter_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Volume_CubicMeter_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Volume_CubicMeter_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Volume_CubicMeter >;

                Volume_CubicMeter_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Volume_CubicMeter_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Volume_CubicMeter_g_typePlugin = 
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

                return &Volume_CubicMeter_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Volume_Percent_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Volume_Percent_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Volume_Percent", /* Name */
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
                    }}; /* Type code for  Volume_Percent */

                if (is_initialized) {
                    return &Volume_Percent_g_tc;
                }

                is_initialized = RTI_TRUE;

                Volume_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Volume_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Volume_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Volume_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Volume_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Volume_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

                Volume_Percent_g_tc._data._sampleAccessInfo = sample_access_info();
                Volume_Percent_g_tc._data._typePlugin = type_plugin_info();    

                return &Volume_Percent_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Volume_Percent_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Volume_Percent_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Volume_Percent_g_sampleAccessInfo;
                }

                Volume_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Volume_Percent_g_sampleAccessInfo.memberAccessInfos = 
                Volume_Percent_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Volume_Percent);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Volume_Percent_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Volume_Percent_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Volume_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Volume_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Volume_Percent >;

                Volume_Percent_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Volume_Percent_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Volume_Percent_g_typePlugin = 
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

                return &Volume_Percent_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Volume_Percent_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Volume_Percent_AliasTag_t >::get())));
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
                AccelerationScalar_g_tc._data._annotations._minValue._u.double_value = -1310.68;
                AccelerationScalar_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AccelerationScalar_g_tc._data._annotations._maxValue._u.double_value = 1310.68;

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
                AngleRate_g_tc._data._annotations._minValue._u.double_value = -62.831;
                AngleRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AngleRate_g_tc._data._annotations._maxValue._u.double_value = 62.831;

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
        struct native_type_code< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Azimuth_TrueNorth_PosAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle", /* Name */
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
                    }}; /* Type code for  Azimuth_TrueNorth_PosAngle */

                if (is_initialized) {
                    return &Azimuth_TrueNorth_PosAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Azimuth_TrueNorth_PosAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Azimuth_TrueNorth_PosAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                Azimuth_TrueNorth_PosAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &Azimuth_TrueNorth_PosAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Azimuth_TrueNorth_PosAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo;
                }

                Azimuth_TrueNorth_PosAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.memberAccessInfos = 
                Azimuth_TrueNorth_PosAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle >;

                Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Azimuth_TrueNorth_PosAngle_g_typePlugin = 
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

                return &Azimuth_TrueNorth_PosAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::BarometricPressure_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BarometricPressure_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::BarometricPressure", /* Name */
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
                    }}; /* Type code for  BarometricPressure */

                if (is_initialized) {
                    return &BarometricPressure_g_tc;
                }

                is_initialized = RTI_TRUE;

                BarometricPressure_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BarometricPressure_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                BarometricPressure_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BarometricPressure_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                BarometricPressure_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BarometricPressure_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BarometricPressure_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BarometricPressure_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BarometricPressure_g_tc._data._sampleAccessInfo = sample_access_info();
                BarometricPressure_g_tc._data._typePlugin = type_plugin_info();    

                return &BarometricPressure_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BarometricPressure_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BarometricPressure_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BarometricPressure_g_sampleAccessInfo;
                }

                BarometricPressure_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BarometricPressure_g_sampleAccessInfo.memberAccessInfos = 
                BarometricPressure_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::BarometricPressure);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BarometricPressure_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BarometricPressure_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BarometricPressure_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BarometricPressure_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::BarometricPressure >;

                BarometricPressure_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BarometricPressure_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BarometricPressure_g_typePlugin = 
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

                return &BarometricPressure_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::BarometricPressure_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::BarometricPressure_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CommsRate_BitsPerSecond_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CommsRate_BitsPerSecond", /* Name */
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
                    }}; /* Type code for  CommsRate_BitsPerSecond */

                if (is_initialized) {
                    return &CommsRate_BitsPerSecond_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsRate_BitsPerSecond_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsRate_BitsPerSecond_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                CommsRate_BitsPerSecond_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsRate_BitsPerSecond_g_tc._data._annotations._defaultValue._u.long_value = 0;
                CommsRate_BitsPerSecond_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsRate_BitsPerSecond_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsRate_BitsPerSecond_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsRate_BitsPerSecond_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                CommsRate_BitsPerSecond_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsRate_BitsPerSecond_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsRate_BitsPerSecond_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CommsRate_BitsPerSecond_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsRate_BitsPerSecond_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsRate_BitsPerSecond_g_sampleAccessInfo;
                }

                CommsRate_BitsPerSecond_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CommsRate_BitsPerSecond_g_sampleAccessInfo.memberAccessInfos = 
                CommsRate_BitsPerSecond_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CommsRate_BitsPerSecond);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsRate_BitsPerSecond_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsRate_BitsPerSecond_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsRate_BitsPerSecond_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsRate_BitsPerSecond_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond >;

                CommsRate_BitsPerSecond_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsRate_BitsPerSecond_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsRate_BitsPerSecond_g_typePlugin = 
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

                return &CommsRate_BitsPerSecond_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CommsRate_MegabitsPerSecond_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CommsRate_MegabitsPerSecond", /* Name */
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
                    }}; /* Type code for  CommsRate_MegabitsPerSecond */

                if (is_initialized) {
                    return &CommsRate_MegabitsPerSecond_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsRate_MegabitsPerSecond_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsRate_MegabitsPerSecond_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsRate_MegabitsPerSecond_g_tc._data._annotations._maxValue._u.double_value = 1125000ULL;

                CommsRate_MegabitsPerSecond_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsRate_MegabitsPerSecond_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsRate_MegabitsPerSecond_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CommsRate_MegabitsPerSecond_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsRate_MegabitsPerSecond_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsRate_MegabitsPerSecond_g_sampleAccessInfo;
                }

                CommsRate_MegabitsPerSecond_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CommsRate_MegabitsPerSecond_g_sampleAccessInfo.memberAccessInfos = 
                CommsRate_MegabitsPerSecond_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsRate_MegabitsPerSecond_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsRate_MegabitsPerSecond_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsRate_MegabitsPerSecond_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsRate_MegabitsPerSecond_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond >;

                CommsRate_MegabitsPerSecond_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsRate_MegabitsPerSecond_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsRate_MegabitsPerSecond_g_typePlugin = 
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

                return &CommsRate_MegabitsPerSecond_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ContinuousSize_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::ContinuousSize", /* Name */
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
                    }}; /* Type code for  ContinuousSize */

                if (is_initialized) {
                    return &ContinuousSize_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContinuousSize_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContinuousSize_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                ContinuousSize_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContinuousSize_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                ContinuousSize_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContinuousSize_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                ContinuousSize_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContinuousSize_g_tc._data._annotations._maxValue._u.double_value = 32767ULL;

                ContinuousSize_g_tc._data._sampleAccessInfo = sample_access_info();
                ContinuousSize_g_tc._data._typePlugin = type_plugin_info();    

                return &ContinuousSize_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ContinuousSize_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContinuousSize_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContinuousSize_g_sampleAccessInfo;
                }

                ContinuousSize_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ContinuousSize_g_sampleAccessInfo.memberAccessInfos = 
                ContinuousSize_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::ContinuousSize);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContinuousSize_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContinuousSize_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContinuousSize_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContinuousSize_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::ContinuousSize >;

                ContinuousSize_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContinuousSize_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContinuousSize_g_typePlugin = 
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

                return &ContinuousSize_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t >::get())));
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
                Count_g_tc._data._annotations._minValue._u.long_value = -2147483648L;
                Count_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Count_g_tc._data._annotations._maxValue._u.long_value = 2147483647L;

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
        struct native_type_code< ::UMAA::Common::Measurement::Course_TrueNorth_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Course_TrueNorth_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Course_TrueNorth", /* Name */
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
                    }}; /* Type code for  Course_TrueNorth */

                if (is_initialized) {
                    return &Course_TrueNorth_g_tc;
                }

                is_initialized = RTI_TRUE;

                Course_TrueNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Course_TrueNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Course_TrueNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Course_TrueNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Course_TrueNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Course_TrueNorth_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Course_TrueNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Course_TrueNorth_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Course_TrueNorth_g_tc._data._sampleAccessInfo = sample_access_info();
                Course_TrueNorth_g_tc._data._typePlugin = type_plugin_info();    

                return &Course_TrueNorth_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Course_TrueNorth_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Course_TrueNorth_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Course_TrueNorth_g_sampleAccessInfo;
                }

                Course_TrueNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Course_TrueNorth_g_sampleAccessInfo.memberAccessInfos = 
                Course_TrueNorth_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Course_TrueNorth);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Course_TrueNorth_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Course_TrueNorth_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Course_TrueNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Course_TrueNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Course_TrueNorth >;

                Course_TrueNorth_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Course_TrueNorth_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Course_TrueNorth_g_typePlugin = 
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

                return &Course_TrueNorth_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Course_TrueNorth_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Course_TrueNorth_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarOrientation_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CovarOrientation", /* Name */
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
                    }}; /* Type code for  CovarOrientation */

                if (is_initialized) {
                    return &CovarOrientation_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarOrientation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarOrientation_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarOrientation_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientation_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarOrientation_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientation_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarOrientation_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarOrientation_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarOrientation_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarOrientation_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarOrientation_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarOrientation_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarOrientation_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarOrientation_g_sampleAccessInfo;
                }

                CovarOrientation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarOrientation_g_sampleAccessInfo.memberAccessInfos = 
                CovarOrientation_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarOrientation);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarOrientation_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarOrientation_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarOrientation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarOrientation_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarOrientation >;

                CovarOrientation_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarOrientation_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarOrientation_g_typePlugin = 
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

                return &CovarOrientation_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CovarPosPos_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarPosPos_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CovarPosPos", /* Name */
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
                    }}; /* Type code for  CovarPosPos */

                if (is_initialized) {
                    return &CovarPosPos_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarPosPos_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarPosPos_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarPosPos_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosPos_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarPosPos_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosPos_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarPosPos_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosPos_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarPosPos_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarPosPos_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarPosPos_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarPosPos_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarPosPos_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarPosPos_g_sampleAccessInfo;
                }

                CovarPosPos_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarPosPos_g_sampleAccessInfo.memberAccessInfos = 
                CovarPosPos_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarPosPos);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarPosPos_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarPosPos_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarPosPos_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarPosPos_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarPosPos >;

                CovarPosPos_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarPosPos_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarPosPos_g_typePlugin = 
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

                return &CovarPosPos_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CovarPosPos_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarPosPos_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarPosVel_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CovarPosVel", /* Name */
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
                    }}; /* Type code for  CovarPosVel */

                if (is_initialized) {
                    return &CovarPosVel_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarPosVel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarPosVel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarPosVel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarPosVel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarPosVel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarPosVel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarPosVel_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarPosVel_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarPosVel_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarPosVel_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarPosVel_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarPosVel_g_sampleAccessInfo;
                }

                CovarPosVel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarPosVel_g_sampleAccessInfo.memberAccessInfos = 
                CovarPosVel_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarPosVel);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarPosVel_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarPosVel_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarPosVel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarPosVel_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarPosVel >;

                CovarPosVel_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarPosVel_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarPosVel_g_typePlugin = 
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

                return &CovarPosVel_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarPosVel_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::CovarVelVel_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CovarVelVel_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::CovarVelVel", /* Name */
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
                    }}; /* Type code for  CovarVelVel */

                if (is_initialized) {
                    return &CovarVelVel_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarVelVel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarVelVel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                CovarVelVel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelVel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                CovarVelVel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelVel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarVelVel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarVelVel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarVelVel_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarVelVel_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarVelVel_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CovarVelVel_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarVelVel_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarVelVel_g_sampleAccessInfo;
                }

                CovarVelVel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CovarVelVel_g_sampleAccessInfo.memberAccessInfos = 
                CovarVelVel_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarVelVel);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarVelVel_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarVelVel_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarVelVel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarVelVel_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarVelVel >;

                CovarVelVel_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarVelVel_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarVelVel_g_typePlugin = 
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

                return &CovarVelVel_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::CovarVelVel_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarVelVel_AliasTag_t >::get())));
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
                DateTimeNanoseconds_g_tc._data._annotations._minValue._u.long_value = 0L;
                DateTimeNanoseconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DateTimeNanoseconds_g_tc._data._annotations._maxValue._u.long_value = 999999999L;

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
                DateTime_g_tc_members[1]._annotations._minValue._u.long_value = 0L;
                DateTime_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DateTime_g_tc_members[1]._annotations._maxValue._u.long_value = 999999999L;

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
                Distance_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Distance_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Distance_Precise_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Distance_Precise", /* Name */
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
                    }}; /* Type code for  Distance_Precise */

                if (is_initialized) {
                    return &Distance_Precise_g_tc;
                }

                is_initialized = RTI_TRUE;

                Distance_Precise_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Distance_Precise_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Distance_Precise_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_Precise_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Distance_Precise_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_Precise_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Distance_Precise_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Distance_Precise_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

                Distance_Precise_g_tc._data._sampleAccessInfo = sample_access_info();
                Distance_Precise_g_tc._data._typePlugin = type_plugin_info();    

                return &Distance_Precise_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Distance_Precise_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Distance_Precise_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Distance_Precise_g_sampleAccessInfo;
                }

                Distance_Precise_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Distance_Precise_g_sampleAccessInfo.memberAccessInfos = 
                Distance_Precise_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Distance_Precise);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Distance_Precise_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Distance_Precise_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Distance_Precise_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Distance_Precise_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Distance_Precise >;

                Distance_Precise_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Distance_Precise_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Distance_Precise_g_typePlugin = 
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

                return &Distance_Precise_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Duration_Hours_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Duration_Hours_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Duration_Hours", /* Name */
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
                    }}; /* Type code for  Duration_Hours */

                if (is_initialized) {
                    return &Duration_Hours_g_tc;
                }

                is_initialized = RTI_TRUE;

                Duration_Hours_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Duration_Hours_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Duration_Hours_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Hours_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Duration_Hours_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Hours_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Duration_Hours_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Hours_g_tc._data._annotations._maxValue._u.double_value = 10505ULL;

                Duration_Hours_g_tc._data._sampleAccessInfo = sample_access_info();
                Duration_Hours_g_tc._data._typePlugin = type_plugin_info();    

                return &Duration_Hours_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Duration_Hours_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Duration_Hours_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Duration_Hours_g_sampleAccessInfo;
                }

                Duration_Hours_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Duration_Hours_g_sampleAccessInfo.memberAccessInfos = 
                Duration_Hours_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Duration_Hours);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Duration_Hours_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Duration_Hours_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Duration_Hours_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Duration_Hours_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Duration_Hours >;

                Duration_Hours_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Duration_Hours_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Duration_Hours_g_typePlugin = 
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

                return &Duration_Hours_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Duration_Hours_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Duration_Hours_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Duration_Seconds_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Duration_Seconds", /* Name */
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
                    }}; /* Type code for  Duration_Seconds */

                if (is_initialized) {
                    return &Duration_Seconds_g_tc;
                }

                is_initialized = RTI_TRUE;

                Duration_Seconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Duration_Seconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Duration_Seconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Seconds_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Duration_Seconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Seconds_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Duration_Seconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Duration_Seconds_g_tc._data._annotations._maxValue._u.double_value = 37817280ULL;

                Duration_Seconds_g_tc._data._sampleAccessInfo = sample_access_info();
                Duration_Seconds_g_tc._data._typePlugin = type_plugin_info();    

                return &Duration_Seconds_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Duration_Seconds_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Duration_Seconds_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Duration_Seconds_g_sampleAccessInfo;
                }

                Duration_Seconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Duration_Seconds_g_sampleAccessInfo.memberAccessInfos = 
                Duration_Seconds_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Duration_Seconds);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Duration_Seconds_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Duration_Seconds_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Duration_Seconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Duration_Seconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Duration_Seconds >;

                Duration_Seconds_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Duration_Seconds_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Duration_Seconds_g_typePlugin = 
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

                return &Duration_Seconds_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t >::get())));
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
                ElectricalPower_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                ElectricalPower_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ElectricalPower_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

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
                EngineSpeed_g_tc._data._annotations._minValue._u.double_value = -100000LL;
                EngineSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpeed_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FieldOfView_LineOfSightFocalPlane_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane", /* Name */
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
                    }}; /* Type code for  FieldOfView_LineOfSightFocalPlane */

                if (is_initialized) {
                    return &FieldOfView_LineOfSightFocalPlane_g_tc;
                }

                is_initialized = RTI_TRUE;

                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FieldOfView_LineOfSightFocalPlane_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FieldOfView_LineOfSightFocalPlane_g_tc._data._sampleAccessInfo = sample_access_info();
                FieldOfView_LineOfSightFocalPlane_g_tc._data._typePlugin = type_plugin_info();    

                return &FieldOfView_LineOfSightFocalPlane_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo;
                }

                FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.memberAccessInfos = 
                FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane >;

                FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FieldOfView_LineOfSightFocalPlane_g_typePlugin = 
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

                return &FieldOfView_LineOfSightFocalPlane_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::FocusValue_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FocusValue_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::FocusValue", /* Name */
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
                    }}; /* Type code for  FocusValue */

                if (is_initialized) {
                    return &FocusValue_g_tc;
                }

                is_initialized = RTI_TRUE;

                FocusValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FocusValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                FocusValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FocusValue_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                FocusValue_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FocusValue_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FocusValue_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FocusValue_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FocusValue_g_tc._data._sampleAccessInfo = sample_access_info();
                FocusValue_g_tc._data._typePlugin = type_plugin_info();    

                return &FocusValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FocusValue_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FocusValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FocusValue_g_sampleAccessInfo;
                }

                FocusValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FocusValue_g_sampleAccessInfo.memberAccessInfos = 
                FocusValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::FocusValue);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FocusValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FocusValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FocusValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FocusValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::FocusValue >;

                FocusValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FocusValue_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FocusValue_g_typePlugin = 
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

                return &FocusValue_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::FocusValue_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::FocusValue_AliasTag_t >::get())));
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
                Force_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Force_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Force_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Frequency_Hertz_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Frequency_Hertz", /* Name */
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
                    }}; /* Type code for  Frequency_Hertz */

                if (is_initialized) {
                    return &Frequency_Hertz_g_tc;
                }

                is_initialized = RTI_TRUE;

                Frequency_Hertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Frequency_Hertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Frequency_Hertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Frequency_Hertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Frequency_Hertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Frequency_Hertz_g_tc._data._annotations._minValue._u.double_value = 0.0;
                Frequency_Hertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Frequency_Hertz_g_tc._data._annotations._maxValue._u.double_value = 10000000000ULL;

                Frequency_Hertz_g_tc._data._sampleAccessInfo = sample_access_info();
                Frequency_Hertz_g_tc._data._typePlugin = type_plugin_info();    

                return &Frequency_Hertz_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Frequency_Hertz_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Frequency_Hertz_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Frequency_Hertz_g_sampleAccessInfo;
                }

                Frequency_Hertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Frequency_Hertz_g_sampleAccessInfo.memberAccessInfos = 
                Frequency_Hertz_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Frequency_Hertz);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Frequency_Hertz_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Frequency_Hertz_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Frequency_Hertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Frequency_Hertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Frequency_Hertz >;

                Frequency_Hertz_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Frequency_Hertz_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Frequency_Hertz_g_typePlugin = 
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

                return &Frequency_Hertz_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t >::get())));
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
                GroundSpeed_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                GroundSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GroundSpeed_g_tc._data._annotations._maxValue._u.double_value = 200ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Heading_TrueNorth_Angle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Heading_TrueNorth_Angle", /* Name */
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
                    }}; /* Type code for  Heading_TrueNorth_Angle */

                if (is_initialized) {
                    return &Heading_TrueNorth_Angle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Heading_TrueNorth_Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Heading_TrueNorth_Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Heading_TrueNorth_Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_TrueNorth_Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Heading_TrueNorth_Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_TrueNorth_Angle_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                Heading_TrueNorth_Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Heading_TrueNorth_Angle_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                Heading_TrueNorth_Angle_g_tc._data._sampleAccessInfo = sample_access_info();
                Heading_TrueNorth_Angle_g_tc._data._typePlugin = type_plugin_info();    

                return &Heading_TrueNorth_Angle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Heading_TrueNorth_Angle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Heading_TrueNorth_Angle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Heading_TrueNorth_Angle_g_sampleAccessInfo;
                }

                Heading_TrueNorth_Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Heading_TrueNorth_Angle_g_sampleAccessInfo.memberAccessInfos = 
                Heading_TrueNorth_Angle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Heading_TrueNorth_Angle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Heading_TrueNorth_Angle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Heading_TrueNorth_Angle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Heading_TrueNorth_Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Heading_TrueNorth_Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Heading_TrueNorth_Angle >;

                Heading_TrueNorth_Angle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Heading_TrueNorth_Angle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Heading_TrueNorth_Angle_g_typePlugin = 
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

                return &Heading_TrueNorth_Angle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::Measurement::IPPort_Counting_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IPPort_Counting_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::IPPort_Counting", /* Name */
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
                    }}; /* Type code for  IPPort_Counting */

                if (is_initialized) {
                    return &IPPort_Counting_g_tc;
                }

                is_initialized = RTI_TRUE;

                IPPort_Counting_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IPPort_Counting_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                IPPort_Counting_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                IPPort_Counting_g_tc._data._annotations._defaultValue._u.long_value = 0;
                IPPort_Counting_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                IPPort_Counting_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                IPPort_Counting_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                IPPort_Counting_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                IPPort_Counting_g_tc._data._sampleAccessInfo = sample_access_info();
                IPPort_Counting_g_tc._data._typePlugin = type_plugin_info();    

                return &IPPort_Counting_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IPPort_Counting_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IPPort_Counting_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IPPort_Counting_g_sampleAccessInfo;
                }

                IPPort_Counting_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IPPort_Counting_g_sampleAccessInfo.memberAccessInfos = 
                IPPort_Counting_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::IPPort_Counting);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IPPort_Counting_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IPPort_Counting_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IPPort_Counting_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IPPort_Counting_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::IPPort_Counting >;

                IPPort_Counting_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IPPort_Counting_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IPPort_Counting_g_typePlugin = 
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

                return &IPPort_Counting_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::IPPort_Counting_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::IPPort_Counting_AliasTag_t >::get())));
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
                Mass_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Mass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Mass_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Order_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Order_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Order", /* Name */
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
                    }}; /* Type code for  Order */

                if (is_initialized) {
                    return &Order_g_tc;
                }

                is_initialized = RTI_TRUE;

                Order_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Order_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                Order_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Order_g_tc._data._annotations._defaultValue._u.long_value = 0;
                Order_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Order_g_tc._data._annotations._minValue._u.long_value = 0L;
                Order_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Order_g_tc._data._annotations._maxValue._u.long_value = 2147483647L;

                Order_g_tc._data._sampleAccessInfo = sample_access_info();
                Order_g_tc._data._typePlugin = type_plugin_info();    

                return &Order_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Order_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Order_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Order_g_sampleAccessInfo;
                }

                Order_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Order_g_sampleAccessInfo.memberAccessInfos = 
                Order_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Order);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Order_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Order_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Order_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Order_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Order >;

                Order_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Order_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Order_g_typePlugin = 
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

                return &Order_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Order_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Order_AliasTag_t >::get())));
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
                Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Pitch_HalfAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Pitch_HalfAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Pitch_HalfAngle", /* Name */
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
                    }}; /* Type code for  Pitch_HalfAngle */

                if (is_initialized) {
                    return &Pitch_HalfAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Pitch_HalfAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Pitch_HalfAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Pitch_HalfAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Pitch_HalfAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Pitch_HalfAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Pitch_HalfAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Pitch_HalfAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Pitch_HalfAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Pitch_HalfAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                Pitch_HalfAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &Pitch_HalfAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Pitch_HalfAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Pitch_HalfAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Pitch_HalfAngle_g_sampleAccessInfo;
                }

                Pitch_HalfAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Pitch_HalfAngle_g_sampleAccessInfo.memberAccessInfos = 
                Pitch_HalfAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Pitch_HalfAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Pitch_HalfAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Pitch_HalfAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Pitch_HalfAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Pitch_HalfAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Pitch_HalfAngle >;

                Pitch_HalfAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Pitch_HalfAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Pitch_HalfAngle_g_typePlugin = 
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

                return &Pitch_HalfAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Pitch_HalfAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Pitch_HalfAngle_AliasTag_t >::get())));
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
                PitchRate_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                PitchRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PitchRate_g_tc._data._annotations._maxValue._u.double_value = 32.767;

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
                PowerBusCurrent_g_tc._data._annotations._minValue._u.double_value = -100000LL;
                PowerBusCurrent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusCurrent_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

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
                PowerBusVoltage_g_tc._data._annotations._minValue._u.double_value = -100000LL;
                PowerBusVoltage_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PowerBusVoltage_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Pressure_KiloPascals_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Pressure_KiloPascals", /* Name */
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
                    }}; /* Type code for  Pressure_KiloPascals */

                if (is_initialized) {
                    return &Pressure_KiloPascals_g_tc;
                }

                is_initialized = RTI_TRUE;

                Pressure_KiloPascals_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Pressure_KiloPascals_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Pressure_KiloPascals_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_KiloPascals_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Pressure_KiloPascals_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_KiloPascals_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Pressure_KiloPascals_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Pressure_KiloPascals_g_tc._data._annotations._maxValue._u.double_value = 51200ULL;

                Pressure_KiloPascals_g_tc._data._sampleAccessInfo = sample_access_info();
                Pressure_KiloPascals_g_tc._data._typePlugin = type_plugin_info();    

                return &Pressure_KiloPascals_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Pressure_KiloPascals_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Pressure_KiloPascals_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Pressure_KiloPascals_g_sampleAccessInfo;
                }

                Pressure_KiloPascals_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Pressure_KiloPascals_g_sampleAccessInfo.memberAccessInfos = 
                Pressure_KiloPascals_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Pressure_KiloPascals);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Pressure_KiloPascals_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Pressure_KiloPascals_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Pressure_KiloPascals_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Pressure_KiloPascals_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Pressure_KiloPascals >;

                Pressure_KiloPascals_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Pressure_KiloPascals_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Pressure_KiloPascals_g_typePlugin = 
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

                return &Pressure_KiloPascals_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Measurement::RadioFrequency_Hertz_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RadioFrequency_Hertz_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::RadioFrequency_Hertz", /* Name */
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
                    }}; /* Type code for  RadioFrequency_Hertz */

                if (is_initialized) {
                    return &RadioFrequency_Hertz_g_tc;
                }

                is_initialized = RTI_TRUE;

                RadioFrequency_Hertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RadioFrequency_Hertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                RadioFrequency_Hertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequency_Hertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                RadioFrequency_Hertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequency_Hertz_g_tc._data._annotations._minValue._u.double_value = 0.0;
                RadioFrequency_Hertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RadioFrequency_Hertz_g_tc._data._annotations._maxValue._u.double_value = 10000000000ULL;

                RadioFrequency_Hertz_g_tc._data._sampleAccessInfo = sample_access_info();
                RadioFrequency_Hertz_g_tc._data._typePlugin = type_plugin_info();    

                return &RadioFrequency_Hertz_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RadioFrequency_Hertz_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RadioFrequency_Hertz_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RadioFrequency_Hertz_g_sampleAccessInfo;
                }

                RadioFrequency_Hertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RadioFrequency_Hertz_g_sampleAccessInfo.memberAccessInfos = 
                RadioFrequency_Hertz_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::RadioFrequency_Hertz);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RadioFrequency_Hertz_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RadioFrequency_Hertz_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RadioFrequency_Hertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RadioFrequency_Hertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::RadioFrequency_Hertz >;

                RadioFrequency_Hertz_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RadioFrequency_Hertz_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RadioFrequency_Hertz_g_typePlugin = 
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

                return &RadioFrequency_Hertz_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::RadioFrequency_Hertz_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::RadioFrequency_Hertz_AliasTag_t >::get())));
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
                RelativeHumidity_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                RelativeHumidity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RelativeHumidity_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

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
        struct native_type_code< ::UMAA::Common::Measurement::Roll_Angle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Roll_Angle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Roll_Angle", /* Name */
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
                    }}; /* Type code for  Roll_Angle */

                if (is_initialized) {
                    return &Roll_Angle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Roll_Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Roll_Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Roll_Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Roll_Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Roll_Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Roll_Angle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Roll_Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Roll_Angle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Roll_Angle_g_tc._data._sampleAccessInfo = sample_access_info();
                Roll_Angle_g_tc._data._typePlugin = type_plugin_info();    

                return &Roll_Angle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Roll_Angle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Roll_Angle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Roll_Angle_g_sampleAccessInfo;
                }

                Roll_Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Roll_Angle_g_sampleAccessInfo.memberAccessInfos = 
                Roll_Angle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Roll_Angle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Roll_Angle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Roll_Angle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Roll_Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Roll_Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Roll_Angle >;

                Roll_Angle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Roll_Angle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Roll_Angle_g_typePlugin = 
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

                return &Roll_Angle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Roll_Angle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Roll_Angle_AliasTag_t >::get())));
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
        struct native_type_code< ::UMAA::Common::Measurement::Size_Numeral_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Size_Numeral_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Size_Numeral", /* Name */
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
                    }}; /* Type code for  Size_Numeral */

                if (is_initialized) {
                    return &Size_Numeral_g_tc;
                }

                is_initialized = RTI_TRUE;

                Size_Numeral_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Size_Numeral_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Size_Numeral_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Size_Numeral_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Size_Numeral_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Size_Numeral_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Size_Numeral_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Size_Numeral_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Size_Numeral_g_tc._data._sampleAccessInfo = sample_access_info();
                Size_Numeral_g_tc._data._typePlugin = type_plugin_info();    

                return &Size_Numeral_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Size_Numeral_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Size_Numeral_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Size_Numeral_g_sampleAccessInfo;
                }

                Size_Numeral_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Size_Numeral_g_sampleAccessInfo.memberAccessInfos = 
                Size_Numeral_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Size_Numeral);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Size_Numeral_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Size_Numeral_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Size_Numeral_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Size_Numeral_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Size_Numeral >;

                Size_Numeral_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Size_Numeral_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Size_Numeral_g_typePlugin = 
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

                return &Size_Numeral_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Size_Numeral_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Size_Numeral_AliasTag_t >::get())));
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
                Speed_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                Speed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Speed_g_tc._data._annotations._maxValue._u.double_value = 299792458ULL;

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
                Temperature_g_tc._data._annotations._minValue._u.double_value = -273LL;
                Temperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Temperature_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

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
                TurnRate_g_tc._data._annotations._minValue._u.double_value = 0ULL;
                TurnRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TurnRate_g_tc._data._annotations._maxValue._u.double_value = 32.767;

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
        struct native_type_code< ::UMAA::Common::Measurement::Yaw_PosAngle_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Yaw_PosAngle_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"UMAA::Common::Measurement::Yaw_PosAngle", /* Name */
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
                    }}; /* Type code for  Yaw_PosAngle */

                if (is_initialized) {
                    return &Yaw_PosAngle_g_tc;
                }

                is_initialized = RTI_TRUE;

                Yaw_PosAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Yaw_PosAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Yaw_PosAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Yaw_PosAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
                Yaw_PosAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Yaw_PosAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Yaw_PosAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Yaw_PosAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Yaw_PosAngle_g_tc._data._sampleAccessInfo = sample_access_info();
                Yaw_PosAngle_g_tc._data._typePlugin = type_plugin_info();    

                return &Yaw_PosAngle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Yaw_PosAngle_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Yaw_PosAngle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Yaw_PosAngle_g_sampleAccessInfo;
                }

                Yaw_PosAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Yaw_PosAngle_g_sampleAccessInfo.memberAccessInfos = 
                Yaw_PosAngle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Yaw_PosAngle);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Yaw_PosAngle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Yaw_PosAngle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Yaw_PosAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Yaw_PosAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Yaw_PosAngle >;

                Yaw_PosAngle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Yaw_PosAngle_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Yaw_PosAngle_g_typePlugin = 
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

                return &Yaw_PosAngle_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::AliasType& dynamic_type< ::UMAA::Common::Measurement::Yaw_PosAngle_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Yaw_PosAngle_AliasTag_t >::get())));
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
