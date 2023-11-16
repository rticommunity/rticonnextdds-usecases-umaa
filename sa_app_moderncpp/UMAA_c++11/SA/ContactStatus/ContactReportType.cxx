

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ContactReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactStatus {

            // ---- ContactReportType: 

            ContactReportType::ContactReportType()  {

            }   

            ContactReportType::ContactReportType (const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& contactsSetID_):
                m_source_(source_), 
                m_timeStamp_(timeStamp_), 
                m_contactsSetID_(contactsSetID_) {
            }

            void ContactReportType::swap(ContactReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_contactsSetID_, other_.m_contactsSetID_);
            }  

            bool ContactReportType::operator == (const ContactReportType& other_) const {
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_contactsSetID_ != other_.m_contactsSetID_) {
                    return false;
                }
                return true;
            }

            bool ContactReportType::operator != (const ContactReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "contactsSetID: " << sample.contactsSetID ();
                o <<"]";
                return o;
            }

            // ---- ContactReportType_ContactsSet: 

            ContactReportType_ContactsSet::ContactReportType_ContactsSet()  {

            }   

            ContactReportType_ContactsSet::ContactReportType_ContactsSet (const ::UMAA::Common::Measurement::Polygon& area_,const ::dds::core::optional< ::UMAA::Common::PrimitiveConstrained::StringShortDescription >& callSign_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& contactName_,const ::UMAA::Common::Measurement::Course_TrueNorth& course_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& CPA_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& CPATime_,const ::UMAA::Common::Measurement::Distance& diameter_,const ::UMAA::Common::Measurement::Altitude_MSL& elevation_,const ::UMAA::Common::Measurement::RMSDistanceErrorType& elevationError_,const ::UMAA::Common::Measurement::Heading_TrueNorth_Angle& heading_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& height_,const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& length_,const ::dds::core::optional< ::UMAA::Common::PrimitiveConstrained::MMSI >& MMSINumber_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& originator_,const ::UMAA::Common::Measurement::Position2D& position_,const ::UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& SIDC_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& source_,const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator_,const ::UMAA::Common::Measurement::GroundSpeed& speedOverGround_,const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& width_,const ::UMAA::Common::Measurement::NumericGUID& featureID_,const ::UMAA::Common::Measurement::NumericGUID& contactsSetID_,const ::UMAA::Common::Measurement::DateTime& contactsTimestamp_) :
                ::UMAA::SA::ContactStatus::ContactType(area_, callSign_, contactName_, course_, CPA_, CPATime_, diameter_, elevation_, elevationError_, heading_, height_, kind_, length_, MMSINumber_, originator_, position_, positionCovariance_, SIDC_, source_, sourceIndicator_, speedOverGround_, timeFirstAcquired_, timeLost_, width_, featureID_), 
                m_contactsSetID_(contactsSetID_), 
                m_contactsTimestamp_(contactsTimestamp_) {
            }

            void ContactReportType_ContactsSet::swap(ContactReportType_ContactsSet& other_)  noexcept 
            {
                using std::swap;
                ::UMAA::SA::ContactStatus::ContactType::swap(other_);
                swap(m_contactsSetID_, other_.m_contactsSetID_);
                swap(m_contactsTimestamp_, other_.m_contactsTimestamp_);
            }  

            bool ContactReportType_ContactsSet::operator == (const ContactReportType_ContactsSet& other_) const {
                if (!::UMAA::SA::ContactStatus::ContactType::operator == (other_)){
                    return false;
                }
                if (m_contactsSetID_ != other_.m_contactsSetID_) {
                    return false;
                }
                if (m_contactsTimestamp_ != other_.m_contactsTimestamp_) {
                    return false;
                }
                return true;
            }

            bool ContactReportType_ContactsSet::operator != (const ContactReportType_ContactsSet& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactReportType_ContactsSet& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << static_cast<const ::UMAA::SA::ContactStatus::ContactType &>(sample);
                o << "contactsSetID: " << sample.contactsSetID ()<<", ";
                o << "contactsTimestamp: " << sample.contactsTimestamp ();
                o <<"]";
                return o;
            }

        } // namespace ContactStatus  

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
        struct native_type_code< ::UMAA::SA::ContactStatus::ContactReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactReportType_g_tc_members[3]=
                {

                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
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
                        (char *)"contactsSetID",/* Member name */
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

                static DDS_TypeCode ContactReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactStatus::ContactReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ContactReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactReportType*/

                if (is_initialized) {
                    return &ContactReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ContactReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactStatus::ContactReportType *sample;

                static RTIXCdrMemberAccessInfo ContactReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactStatus::ContactReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ContactReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactsSetID() - (char *)sample);

                ContactReportType_g_sampleAccessInfo.memberAccessInfos = 
                ContactReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactStatus::ContactReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactStatus::ContactReportType >;

                ContactReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactReportType_g_typePlugin = 
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

                return &ContactReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactStatus::ContactReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactStatus::ContactReportType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactReportType_ContactsSet_g_tc_members[2]=
                {

                    {
                        (char *)"contactsSetID",/* Member name */
                        {
                            25,/* Representation ID */
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
                        (char *)"contactsTimestamp",/* Member name */
                        {
                            26,/* Representation ID */
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

                static DDS_TypeCode ContactReportType_ContactsSet_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactStatus::ContactReportType_ContactsSet", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ContactReportType_ContactsSet_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactReportType_ContactsSet*/

                if (is_initialized) {
                    return &ContactReportType_ContactsSet_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactReportType_ContactsSet_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactReportType_ContactsSet_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactReportType_ContactsSet_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                ContactReportType_ContactsSet_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SA::ContactStatus::ContactType >::get().native(); /* Base class */

                ContactReportType_ContactsSet_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactReportType_ContactsSet_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactReportType_ContactsSet_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet *sample;

                static RTIXCdrMemberAccessInfo ContactReportType_ContactsSet_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactReportType_ContactsSet_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactReportType_ContactsSet_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet);
                if (sample == NULL) {
                    return NULL;
                }

                ContactReportType_ContactsSet_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactsSetID() - (char *)sample);

                ContactReportType_ContactsSet_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactsTimestamp() - (char *)sample);

                ContactReportType_ContactsSet_g_sampleAccessInfo.memberAccessInfos = 
                ContactReportType_ContactsSet_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactReportType_ContactsSet_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactReportType_ContactsSet_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactReportType_ContactsSet_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactReportType_ContactsSet_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >;

                ContactReportType_ContactsSet_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactReportType_ContactsSet_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactReportType_ContactsSet_g_typePlugin = 
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

                return &ContactReportType_ContactsSet_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::ContactStatus::ContactReportTypePlugin_new,
                ::UMAA::SA::ContactStatus::ContactReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::ContactStatus::ContactReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType >::from_cdr_buffer(::UMAA::SA::ContactStatus::ContactReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::ContactStatus::ContactReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType >::reset_sample(::UMAA::SA::ContactStatus::ContactReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.contactsSetID());
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType >::allocate_sample(::UMAA::SA::ContactStatus::ContactReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactsSetID(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::ContactStatus::ContactReportType_ContactsSetPlugin_new,
                ::UMAA::SA::ContactStatus::ContactReportType_ContactsSetPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactReportType_ContactsSetPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactReportType_ContactsSetPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::from_cdr_buffer(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactReportType_ContactsSetPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::reset_sample(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample) 
        {
            // Initialize base
            topic_type_support< ::UMAA::SA::ContactStatus::ContactType >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.contactsSetID());
            ::rti::topic::reset_sample(sample.contactsTimestamp());
        }

        void topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet >::allocate_sample(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, int, int) 
        {
            // Initialize base
            topic_type_support< ::UMAA::SA::ContactStatus::ContactType >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.contactsSetID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactsTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
