

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryCellDataType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BatteryCellDataType.hpp"
#include "BatteryCellDataTypePlugin.hpp"

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

            BatteryCellDataType::BatteryCellDataType (double current,double temperature,double voltage):
                m_current_( current ),
                m_temperature_( temperature ),
                m_voltage_( voltage ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BatteryCellDataType::BatteryCellDataType(BatteryCellDataType&& other_) OMG_NOEXCEPT  :m_current_ (std::move(other_.m_current_))
            ,
            m_temperature_ (std::move(other_.m_temperature_))
            ,
            m_voltage_ (std::move(other_.m_voltage_))
            {
            } 

            BatteryCellDataType& BatteryCellDataType::operator=(BatteryCellDataType&&  other_) OMG_NOEXCEPT {
                BatteryCellDataType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BatteryCellDataType::swap(BatteryCellDataType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_current_, other_.m_current_);
                swap(m_temperature_, other_.m_temperature_);
                swap(m_voltage_, other_.m_voltage_);
            }  

            bool BatteryCellDataType::operator == (const BatteryCellDataType& other_) const {
                if (m_current_ != other_.m_current_) {
                    return false;
                }
                if (m_temperature_ != other_.m_temperature_) {
                    return false;
                }
                if (m_voltage_ != other_.m_voltage_) {
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
                o << "current: " << std::setprecision(15) <<sample.current()<<", ";
                o << "temperature: " << std::setprecision(15) <<sample.temperature()<<", ";
                o << "voltage: " << std::setprecision(15) <<sample.voltage() ;
                o <<"]";
                return o;
            }

        } // namespace BatteryStatus  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::BatteryStatus::BatteryCellDataType > {
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

                BatteryCellDataType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryCellDataType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatteryCellDataType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatteryCellDataType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
                BatteryCellDataType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;

                BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._minValue._u.double_value = -273LL;
                BatteryCellDataType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[1]._annotations._maxValue._u.double_value = 1000ULL;

                BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                BatteryCellDataType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._minValue._u.double_value = -100000LL;
                BatteryCellDataType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryCellDataType_g_tc_members[2]._annotations._maxValue._u.double_value = 100000ULL;

                BatteryCellDataType_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryCellDataType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BatteryCellDataType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::BatteryStatus::BatteryCellDataType *sample;

                static RTIXCdrMemberAccessInfo BatteryCellDataType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryCellDataType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryCellDataType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::BatteryStatus::BatteryCellDataType);
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
                    size_t candidateTypeSize = sizeof(UMAA::EO::BatteryStatus::BatteryCellDataType);

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
                interpreter::get_aggregation_value_pointer< UMAA::EO::BatteryStatus::BatteryCellDataType >;

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
                    NULL
                };

                return &BatteryCellDataType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::BatteryStatus::BatteryCellDataType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::BatteryStatus::BatteryCellDataType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::BatteryStatus::BatteryCellDataTypePlugin_new,
                UMAA::EO::BatteryStatus::BatteryCellDataTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::BatteryStatus::BatteryCellDataType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BatteryCellDataTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BatteryCellDataTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType >::from_cdr_buffer(UMAA::EO::BatteryStatus::BatteryCellDataType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BatteryCellDataTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::BatteryStatus::BatteryCellDataType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType >::reset_sample(UMAA::EO::BatteryStatus::BatteryCellDataType& sample) 
        {
            sample.current(0.0);
            sample.temperature(0.0);
            sample.voltage(0.0);
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType >::allocate_sample(UMAA::EO::BatteryStatus::BatteryCellDataType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

