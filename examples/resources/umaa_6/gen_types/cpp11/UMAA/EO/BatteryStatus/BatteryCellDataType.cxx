

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryCellDataType.idl
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
#include "BatteryCellDataTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BatteryCellDataType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BatteryStatus {

            // ---- BatteryCellDataType: 

            BatteryCellDataType::BatteryCellDataType() :
                m_current_ (0.0) ,
                m_temperature_ (0.0) ,
                m_voltage_ (0.0)  {

            }   

            BatteryCellDataType::BatteryCellDataType (double current_,double temperature_,double voltage_):
                m_current_(current_), 
                m_temperature_(temperature_), 
                m_voltage_(voltage_) {
            }

            void BatteryCellDataType::swap(BatteryCellDataType& other_)  noexcept 
            {
                using std::swap;
                swap(m_current_, other_.m_current_);
                swap(m_temperature_, other_.m_temperature_);
                swap(m_voltage_, other_.m_voltage_);
            }  

            bool BatteryCellDataType::operator == (const BatteryCellDataType& other_) const {
                if (std::fabs(m_current_ - other_.m_current_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_current_ - other_.m_current_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_temperature_ - other_.m_temperature_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_temperature_ - other_.m_temperature_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_voltage_ - other_.m_voltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_voltage_ - other_.m_voltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool BatteryCellDataType::operator != (const BatteryCellDataType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BatteryCellDataType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "current: " << std::setprecision(15) << sample.current ()<<", ";
                o << "temperature: " << std::setprecision(15) << sample.temperature ()<<", ";
                o << "voltage: " << std::setprecision(15) << sample.voltage ();
                o <<"]";
                return o;
            }

        } // namespace BatteryStatus  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::BatteryStatus::BatteryCellDataType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BatteryCellDataType_g_tc_members[3]=
                {

                    {
                        (char *)"current",/* Member name */
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
                        (char *)"temperature",/* Member name */
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
                    }, 
                    {
                        (char *)"voltage",/* Member name */
                        {
                            2,/* Representation ID */
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

                static DDS_TypeCode BatteryCellDataType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BatteryStatus::BatteryCellDataType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BatteryCellDataType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BatteryCellDataType*/

                if (is_initialized) {
                    return &BatteryCellDataType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryCellDataType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryCellDataType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatteryCellDataType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatteryCellDataType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCellDataType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCellDataType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryCellDataType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatteryCellDataType_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryCellDataType_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryCellDataType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BatteryStatus::BatteryCellDataType *sample;

                static RTIXCdrMemberAccessInfo BatteryCellDataType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryCellDataType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryCellDataType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BatteryStatus::BatteryCellDataType);
                if (sample == NULL) {
                    return NULL;
                }

                BatteryCellDataType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->current() - (char *)sample);

                BatteryCellDataType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temperature() - (char *)sample);

                BatteryCellDataType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->voltage() - (char *)sample);

                BatteryCellDataType_g_sampleAccessInfo.memberAccessInfos = 
                BatteryCellDataType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BatteryStatus::BatteryCellDataType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryCellDataType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryCellDataType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryCellDataType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryCellDataType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BatteryStatus::BatteryCellDataType >;

                BatteryCellDataType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryCellDataType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryCellDataType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BatteryCellDataType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BatteryStatus::BatteryCellDataType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BatteryStatus::BatteryCellDataType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryCellDataType >::reset_sample(::UMAA::EO::BatteryStatus::BatteryCellDataType& sample) 
        {
            sample.current(0.0);
            sample.temperature(0.0);
            sample.voltage(0.0);
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryCellDataType >::allocate_sample(::UMAA::EO::BatteryStatus::BatteryCellDataType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
