

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "DigitalAudioStreamCommandAckReportType.hpp"
#include "DigitalAudioStreamCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalAudioStreamControl {

            // ---- DigitalAudioStreamCommandAckReportType: 

            DigitalAudioStreamCommandAckReportType::DigitalAudioStreamCommandAckReportType() :
                m_repeat_ (0) ,
                m_url_ ("")  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            DigitalAudioStreamCommandAckReportType::DigitalAudioStreamCommandAckReportType (bool repeat,const std::string& url,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_repeat_( repeat ),
                m_url_( url ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DigitalAudioStreamCommandAckReportType::DigitalAudioStreamCommandAckReportType(DigitalAudioStreamCommandAckReportType&& other_) OMG_NOEXCEPT  :m_repeat_ (std::move(other_.m_repeat_))
            ,
            m_url_ (std::move(other_.m_url_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            DigitalAudioStreamCommandAckReportType& DigitalAudioStreamCommandAckReportType::operator=(DigitalAudioStreamCommandAckReportType&&  other_) OMG_NOEXCEPT {
                DigitalAudioStreamCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void DigitalAudioStreamCommandAckReportType::swap(DigitalAudioStreamCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_repeat_, other_.m_repeat_);
                swap(m_url_, other_.m_url_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool DigitalAudioStreamCommandAckReportType::operator == (const DigitalAudioStreamCommandAckReportType& other_) const {
                if (m_repeat_ != other_.m_repeat_) {
                    return false;
                }
                if (m_url_ != other_.m_url_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }
            bool DigitalAudioStreamCommandAckReportType::operator != (const DigitalAudioStreamCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalAudioStreamCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "repeat: " << sample.repeat()<<", ";
                o << "url: " << sample.url()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace DigitalAudioStreamControl  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DigitalAudioStreamCommandAckReportType_g_tc_members[4]=
                {

                    {
                        (char *)"repeat",/* Member name */
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
                        (char *)"url",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DigitalAudioStreamCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DigitalAudioStreamCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalAudioStreamCommandAckReportType*/

                if (is_initialized) {
                    return &DigitalAudioStreamCommandAckReportType_g_tc;
                }

                DigitalAudioStreamCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalAudioStreamCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioStreamCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                DigitalAudioStreamCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalAudioStreamCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DigitalAudioStreamCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioStreamCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                DigitalAudioStreamCommandAckReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DigitalAudioStreamCommandAckReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DigitalAudioStreamCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalAudioStreamCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DigitalAudioStreamCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo DigitalAudioStreamCommandAckReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalAudioStreamCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->repeat() - (char *)sample);

                DigitalAudioStreamCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->url() - (char *)sample);

                DigitalAudioStreamCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalAudioStreamCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalAudioStreamCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >;

                DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalAudioStreamCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalAudioStreamCommandAckReportType_g_typePlugin = 
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

                return &DigitalAudioStreamCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportTypePlugin_new,
                UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalAudioStreamCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalAudioStreamCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::from_cdr_buffer(UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalAudioStreamCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::reset_sample(UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType& sample) 
        {
            sample.repeat(0);
            sample.url("");
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType >::allocate_sample(UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.url(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

