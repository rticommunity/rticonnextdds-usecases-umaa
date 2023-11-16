

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistlePropertiesType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "WhistlePropertiesType.hpp"
#include "WhistlePropertiesTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            // ---- WhistlePropertiesType: 

            WhistlePropertiesType::WhistlePropertiesType() :
                m_restTime_ (0.0) ,
                m_whistleNumber_ (0.0) ,
                m_whistleType_(UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType::LONG_BLAST)  {
            }   

            WhistlePropertiesType::WhistlePropertiesType (double restTime,double whistleNumber,const UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType& whistleType):
                m_restTime_( restTime ),
                m_whistleNumber_( whistleNumber ),
                m_whistleType_( whistleType ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WhistlePropertiesType::WhistlePropertiesType(WhistlePropertiesType&& other_) OMG_NOEXCEPT  :m_restTime_ (std::move(other_.m_restTime_))
            ,
            m_whistleNumber_ (std::move(other_.m_whistleNumber_))
            ,
            m_whistleType_ (std::move(other_.m_whistleType_))
            {
            } 

            WhistlePropertiesType& WhistlePropertiesType::operator=(WhistlePropertiesType&&  other_) OMG_NOEXCEPT {
                WhistlePropertiesType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void WhistlePropertiesType::swap(WhistlePropertiesType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_restTime_, other_.m_restTime_);
                swap(m_whistleNumber_, other_.m_whistleNumber_);
                swap(m_whistleType_, other_.m_whistleType_);
            }  

            bool WhistlePropertiesType::operator == (const WhistlePropertiesType& other_) const {
                if (m_restTime_ != other_.m_restTime_) {
                    return false;
                }
                if (m_whistleNumber_ != other_.m_whistleNumber_) {
                    return false;
                }
                if (m_whistleType_ != other_.m_whistleType_) {
                    return false;
                }
                return true;
            }
            bool WhistlePropertiesType::operator != (const WhistlePropertiesType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WhistlePropertiesType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "restTime: " << std::setprecision(15) <<sample.restTime()<<", ";
                o << "whistleNumber: " << std::setprecision(15) <<sample.whistleNumber()<<", ";
                o << "whistleType: " << sample.whistleType() ;
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Propulsion::WhistlePropertiesType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WhistlePropertiesType_g_tc_members[3]=
                {

                    {
                        (char *)"restTime",/* Member name */
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
                        (char *)"whistleNumber",/* Member name */
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
                        (char *)"whistleType",/* Member name */
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

                static DDS_TypeCode WhistlePropertiesType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::WhistlePropertiesType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WhistlePropertiesType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WhistlePropertiesType*/

                if (is_initialized) {
                    return &WhistlePropertiesType_g_tc;
                }

                WhistlePropertiesType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WhistlePropertiesType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                WhistlePropertiesType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PositiveCount_AliasTag_t>::get().native();
                WhistlePropertiesType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType>::get().native();

                /* Initialize the values for member annotations. */
                WhistlePropertiesType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                WhistlePropertiesType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                WhistlePropertiesType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[0]._annotations._maxValue._u.double_value = 37817280ULL;

                WhistlePropertiesType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WhistlePropertiesType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                WhistlePropertiesType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WhistlePropertiesType_g_tc_members[1]._annotations._maxValue._u.double_value = 2147483647ULL;

                WhistlePropertiesType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WhistlePropertiesType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WhistlePropertiesType_g_tc._data._sampleAccessInfo = sample_access_info();
                WhistlePropertiesType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WhistlePropertiesType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Propulsion::WhistlePropertiesType *sample;

                static RTIXCdrMemberAccessInfo WhistlePropertiesType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WhistlePropertiesType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WhistlePropertiesType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Propulsion::WhistlePropertiesType);
                if (sample == NULL) {
                    return NULL;
                }

                WhistlePropertiesType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->restTime() - (char *)sample);

                WhistlePropertiesType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whistleNumber() - (char *)sample);

                WhistlePropertiesType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whistleType() - (char *)sample);

                WhistlePropertiesType_g_sampleAccessInfo.memberAccessInfos = 
                WhistlePropertiesType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Propulsion::WhistlePropertiesType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WhistlePropertiesType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WhistlePropertiesType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WhistlePropertiesType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WhistlePropertiesType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Propulsion::WhistlePropertiesType >;

                WhistlePropertiesType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WhistlePropertiesType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WhistlePropertiesType_g_typePlugin = 
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

                return &WhistlePropertiesType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Propulsion::WhistlePropertiesType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Propulsion::WhistlePropertiesType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Propulsion::WhistlePropertiesTypePlugin_new,
                UMAA::Common::Propulsion::WhistlePropertiesTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Propulsion::WhistlePropertiesType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WhistlePropertiesTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WhistlePropertiesTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType >::from_cdr_buffer(UMAA::Common::Propulsion::WhistlePropertiesType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WhistlePropertiesTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Propulsion::WhistlePropertiesType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType >::reset_sample(UMAA::Common::Propulsion::WhistlePropertiesType& sample) 
        {
            sample.restTime(0.0);
            sample.whistleNumber(0.0);
            sample.whistleType(UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType::LONG_BLAST);
        }

        void topic_type_support< UMAA::Common::Propulsion::WhistlePropertiesType >::allocate_sample(UMAA::Common::Propulsion::WhistlePropertiesType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.whistleType(),  -1, -1);
        }

    }
}  

