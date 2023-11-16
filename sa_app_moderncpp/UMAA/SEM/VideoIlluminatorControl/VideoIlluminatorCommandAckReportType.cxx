

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VideoIlluminatorCommandAckReportType.hpp"
#include "VideoIlluminatorCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace VideoIlluminatorControl {

            // ---- VideoIlluminatorCommandAckReportType: 

            VideoIlluminatorCommandAckReportType::VideoIlluminatorCommandAckReportType() :
                m_beamWidth_ (0.0) ,
                m_level_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            VideoIlluminatorCommandAckReportType::VideoIlluminatorCommandAckReportType (double beamWidth,int32_t level,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_beamWidth_( beamWidth ),
                m_level_( level ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VideoIlluminatorCommandAckReportType::VideoIlluminatorCommandAckReportType(VideoIlluminatorCommandAckReportType&& other_) OMG_NOEXCEPT  :m_beamWidth_ (std::move(other_.m_beamWidth_))
            ,
            m_level_ (std::move(other_.m_level_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            VideoIlluminatorCommandAckReportType& VideoIlluminatorCommandAckReportType::operator=(VideoIlluminatorCommandAckReportType&&  other_) OMG_NOEXCEPT {
                VideoIlluminatorCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VideoIlluminatorCommandAckReportType::swap(VideoIlluminatorCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_beamWidth_, other_.m_beamWidth_);
                swap(m_level_, other_.m_level_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool VideoIlluminatorCommandAckReportType::operator == (const VideoIlluminatorCommandAckReportType& other_) const {
                if (m_beamWidth_ != other_.m_beamWidth_) {
                    return false;
                }
                if (m_level_ != other_.m_level_) {
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
            bool VideoIlluminatorCommandAckReportType::operator != (const VideoIlluminatorCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VideoIlluminatorCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "beamWidth: " << std::setprecision(15) <<sample.beamWidth()<<", ";
                o << "level: " << sample.level()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace VideoIlluminatorControl  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VideoIlluminatorCommandAckReportType_g_tc_members[4]=
                {

                    {
                        (char *)"beamWidth",/* Member name */
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
                        (char *)"level",/* Member name */
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

                static DDS_TypeCode VideoIlluminatorCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        VideoIlluminatorCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VideoIlluminatorCommandAckReportType*/

                if (is_initialized) {
                    return &VideoIlluminatorCommandAckReportType_g_tc;
                }

                VideoIlluminatorCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VideoIlluminatorCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                VideoIlluminatorCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VideoIlluminatorCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorCommandAckReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorCommandAckReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;

                VideoIlluminatorCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                VideoIlluminatorCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VideoIlluminatorCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo VideoIlluminatorCommandAckReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VideoIlluminatorCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                VideoIlluminatorCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beamWidth() - (char *)sample);

                VideoIlluminatorCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->level() - (char *)sample);

                VideoIlluminatorCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                VideoIlluminatorCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                VideoIlluminatorCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >;

                VideoIlluminatorCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VideoIlluminatorCommandAckReportType_g_typePlugin = 
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

                return &VideoIlluminatorCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportTypePlugin_new,
                UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VideoIlluminatorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VideoIlluminatorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::from_cdr_buffer(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VideoIlluminatorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::reset_sample(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample) 
        {
            sample.beamWidth(0.0);
            sample.level(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType >::allocate_sample(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

