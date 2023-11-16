

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherSeverityType_All.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "WeatherSeverityType_AllPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WeatherSeverityType_All.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- WeatherSeverityType_All: 

            WeatherSeverityType_All::WeatherSeverityType_All() :
                m_setPoint_(UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType::EXTREME) ,
                m_value_(UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType::EXTREME)  {

            }   

            WeatherSeverityType_All::WeatherSeverityType_All (const ::rti::core::bounded_sequence< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType, 100L >& domain_,const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType& setPoint_,const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType& value_):
                m_domain_(domain_), 
                m_setPoint_(setPoint_), 
                m_value_(value_) {
            }

            void WeatherSeverityType_All::swap(WeatherSeverityType_All& other_)  noexcept 
            {
                using std::swap;
                swap(m_domain_, other_.m_domain_);
                swap(m_setPoint_, other_.m_setPoint_);
                swap(m_value_, other_.m_value_);
            }  

            bool WeatherSeverityType_All::operator == (const WeatherSeverityType_All& other_) const {
                if (m_domain_ != other_.m_domain_) {
                    return false;
                }
                if (m_setPoint_ != other_.m_setPoint_) {
                    return false;
                }
                if (m_value_ != other_.m_value_) {
                    return false;
                }
                return true;
            }

            bool WeatherSeverityType_All::operator != (const WeatherSeverityType_All& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WeatherSeverityType_All& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "domain: " << sample.domain ()<<", ";
                o << "setPoint: " << sample.setPoint ()<<", ";
                o << "value: " << sample.value ();
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
        struct native_type_code< ::UMAA::Common::Measurement::WeatherSeverityType_All > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WeatherSeverityType_All_g_tc_domain_sequence;

                static DDS_TypeCode_Member WeatherSeverityType_All_g_tc_members[3]=
                {

                    {
                        (char *)"domain",/* Member name */
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
                        (char *)"setPoint",/* Member name */
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
                        (char *)"value",/* Member name */
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

                static DDS_TypeCode WeatherSeverityType_All_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::WeatherSeverityType_All", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WeatherSeverityType_All_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WeatherSeverityType_All*/

                if (is_initialized) {
                    return &WeatherSeverityType_All_g_tc;
                }

                is_initialized = RTI_TRUE;

                WeatherSeverityType_All_g_tc_domain_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType, 100L > >((100L));

                WeatherSeverityType_All_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WeatherSeverityType_All_g_tc_domain_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType>::get().native();
                WeatherSeverityType_All_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& WeatherSeverityType_All_g_tc_domain_sequence;
                WeatherSeverityType_All_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType>::get().native();
                WeatherSeverityType_All_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType>::get().native();

                /* Initialize the values for member annotations. */
                WeatherSeverityType_All_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WeatherSeverityType_All_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                WeatherSeverityType_All_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WeatherSeverityType_All_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WeatherSeverityType_All_g_tc._data._sampleAccessInfo = sample_access_info();
                WeatherSeverityType_All_g_tc._data._typePlugin = type_plugin_info();    

                return &WeatherSeverityType_All_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::WeatherSeverityType_All *sample;

                static RTIXCdrMemberAccessInfo WeatherSeverityType_All_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WeatherSeverityType_All_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WeatherSeverityType_All_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::WeatherSeverityType_All);
                if (sample == NULL) {
                    return NULL;
                }

                WeatherSeverityType_All_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->domain() - (char *)sample);

                WeatherSeverityType_All_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setPoint() - (char *)sample);

                WeatherSeverityType_All_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value() - (char *)sample);

                WeatherSeverityType_All_g_sampleAccessInfo.memberAccessInfos = 
                WeatherSeverityType_All_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::WeatherSeverityType_All);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WeatherSeverityType_All_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WeatherSeverityType_All_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WeatherSeverityType_All_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WeatherSeverityType_All_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::WeatherSeverityType_All >;

                WeatherSeverityType_All_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WeatherSeverityType_All_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WeatherSeverityType_All_g_typePlugin = 
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

                return &WeatherSeverityType_All_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::WeatherSeverityType_All >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::WeatherSeverityType_All >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::WeatherSeverityType_All >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::WeatherSeverityType_AllPlugin_new,
                ::UMAA::Common::Measurement::WeatherSeverityType_AllPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::WeatherSeverityType_All >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::WeatherSeverityType_All& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WeatherSeverityType_AllPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WeatherSeverityType_AllPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::WeatherSeverityType_All >::from_cdr_buffer(::UMAA::Common::Measurement::WeatherSeverityType_All& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WeatherSeverityType_AllPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::WeatherSeverityType_All from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::WeatherSeverityType_All >::reset_sample(::UMAA::Common::Measurement::WeatherSeverityType_All& sample) 
        {
            ::rti::topic::reset_sample(sample.domain());
            sample.setPoint(UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType::EXTREME);
            sample.value(UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType::EXTREME);
        }

        void topic_type_support< ::UMAA::Common::Measurement::WeatherSeverityType_All >::allocate_sample(::UMAA::Common::Measurement::WeatherSeverityType_All& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.domain(),  100L, -1);
            ::rti::topic::allocate_sample(sample.setPoint(),  -1, -1);
            ::rti::topic::allocate_sample(sample.value(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
