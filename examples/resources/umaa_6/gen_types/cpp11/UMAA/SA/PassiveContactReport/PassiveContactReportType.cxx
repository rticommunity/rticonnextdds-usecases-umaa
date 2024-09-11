

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PassiveContactReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PassiveContactReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PassiveContactReport {

            // ---- PassiveContactReportType: 

            PassiveContactReportType::PassiveContactReportType()  {

            }   

            PassiveContactReportType::PassiveContactReportType (const ::UMAA::Common::Environment::PoseType& platformPose_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeSetMetadata& contactsSetMetadata_):
                m_platformPose_(platformPose_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_contactsSetMetadata_(contactsSetMetadata_) {
            }

            void PassiveContactReportType::swap(PassiveContactReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_platformPose_, other_.m_platformPose_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_contactsSetMetadata_, other_.m_contactsSetMetadata_);
            }  

            bool PassiveContactReportType::operator == (const PassiveContactReportType& other_) const {
                if (m_platformPose_ != other_.m_platformPose_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_contactsSetMetadata_ != other_.m_contactsSetMetadata_) {
                    return false;
                }
                return true;
            }

            bool PassiveContactReportType::operator != (const PassiveContactReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PassiveContactReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "platformPose: " << sample.platformPose ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "contactsSetMetadata: " << sample.contactsSetMetadata ();
                o <<"]";
                return o;
            }

            // ---- PassiveContactReportTypeContactsSetElement: 

            PassiveContactReportTypeContactsSetElement::PassiveContactReportTypeContactsSetElement()  {

            }   

            PassiveContactReportTypeContactsSetElement::PassiveContactReportTypeContactsSetElement (const ::UMAA::SA::PassiveContactReport::PassiveContactType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_):
                m_element_(element_), 
                m_setID_(setID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_) {
            }

            void PassiveContactReportTypeContactsSetElement::swap(PassiveContactReportTypeContactsSetElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_setID_, other_.m_setID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
            }  

            bool PassiveContactReportTypeContactsSetElement::operator == (const PassiveContactReportTypeContactsSetElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_setID_ != other_.m_setID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                return true;
            }

            bool PassiveContactReportTypeContactsSetElement::operator != (const PassiveContactReportTypeContactsSetElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PassiveContactReportTypeContactsSetElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "setID: " << sample.setID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ();
                o <<"]";
                return o;
            }

        } // namespace PassiveContactReport  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PassiveContactReportType_g_tc_members[4]=
                {

                    {
                        (char *)"platformPose",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"contactsSetMetadata",/* Member name */
                        {
                            3,/* Representation ID */
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

                static DDS_TypeCode PassiveContactReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PassiveContactReport::PassiveContactReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PassiveContactReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PassiveContactReportType*/

                if (is_initialized) {
                    return &PassiveContactReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PassiveContactReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PassiveContactReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Environment::PoseType>::get().native();
                PassiveContactReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PassiveContactReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                PassiveContactReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeSetMetadata>::get().native();

                /* Initialize the values for member annotations. */

                PassiveContactReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PassiveContactReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &PassiveContactReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PassiveContactReport::PassiveContactReportType *sample;

                static RTIXCdrMemberAccessInfo PassiveContactReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PassiveContactReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PassiveContactReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PassiveContactReport::PassiveContactReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PassiveContactReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->platformPose() - (char *)sample);

                PassiveContactReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PassiveContactReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PassiveContactReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactsSetMetadata() - (char *)sample);

                PassiveContactReportType_g_sampleAccessInfo.memberAccessInfos = 
                PassiveContactReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PassiveContactReport::PassiveContactReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PassiveContactReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PassiveContactReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PassiveContactReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PassiveContactReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >;

                PassiveContactReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PassiveContactReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PassiveContactReportType_g_typePlugin = 
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

                return &PassiveContactReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PassiveContactReportTypeContactsSetElement_g_tc_members[4]=
                {

                    {
                        (char *)"element",/* Member name */
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
                        (char *)"setID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
                        {
                            3,/* Representation ID */
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

                static DDS_TypeCode PassiveContactReportTypeContactsSetElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PassiveContactReportTypeContactsSetElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PassiveContactReportTypeContactsSetElement*/

                if (is_initialized) {
                    return &PassiveContactReportTypeContactsSetElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PassiveContactReportTypeContactsSetElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PassiveContactReportTypeContactsSetElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactType>::get().native();
                PassiveContactReportTypeContactsSetElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PassiveContactReportTypeContactsSetElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PassiveContactReportTypeContactsSetElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                PassiveContactReportTypeContactsSetElement_g_tc._data._sampleAccessInfo = sample_access_info();
                PassiveContactReportTypeContactsSetElement_g_tc._data._typePlugin = type_plugin_info();    

                return &PassiveContactReportTypeContactsSetElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement *sample;

                static RTIXCdrMemberAccessInfo PassiveContactReportTypeContactsSetElement_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement);
                if (sample == NULL) {
                    return NULL;
                }

                PassiveContactReportTypeContactsSetElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                PassiveContactReportTypeContactsSetElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setID() - (char *)sample);

                PassiveContactReportTypeContactsSetElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                PassiveContactReportTypeContactsSetElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.memberAccessInfos = 
                PassiveContactReportTypeContactsSetElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >;

                PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PassiveContactReportTypeContactsSetElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PassiveContactReportTypeContactsSetElement_g_typePlugin = 
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

                return &PassiveContactReportTypeContactsSetElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PassiveContactReport::PassiveContactReportTypePlugin_new,
                ::UMAA::SA::PassiveContactReport::PassiveContactReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PassiveContactReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PassiveContactReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::from_cdr_buffer(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PassiveContactReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PassiveContactReport::PassiveContactReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.platformPose());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.contactsSetMetadata());
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType >::allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.platformPose(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactsSetMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElementPlugin_new,
                ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PassiveContactReportTypeContactsSetElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PassiveContactReportTypeContactsSetElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::from_cdr_buffer(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PassiveContactReportTypeContactsSetElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.setID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement >::allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.setID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
