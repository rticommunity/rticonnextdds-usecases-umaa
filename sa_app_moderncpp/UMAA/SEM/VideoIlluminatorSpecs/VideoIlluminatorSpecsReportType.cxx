

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VideoIlluminatorSpecsReportType.hpp"
#include "VideoIlluminatorSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace VideoIlluminatorSpecs {

            // ---- VideoIlluminatorSpecsReportType: 

            VideoIlluminatorSpecsReportType::VideoIlluminatorSpecsReportType() :
                m_maxBeamWidth_ (0) ,
                m_name_ ("") ,
                m_supportedColor_ (0) ,
                m_supportedGreyscale_ (0) ,
                m_supportedInfrared_ (0) ,
                m_supportedLowlight_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            VideoIlluminatorSpecsReportType::VideoIlluminatorSpecsReportType (bool maxBeamWidth,const std::string& name,bool supportedColor,bool supportedGreyscale,bool supportedInfrared,bool supportedLowlight,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_maxBeamWidth_( maxBeamWidth ),
                m_name_( name ),
                m_supportedColor_( supportedColor ),
                m_supportedGreyscale_( supportedGreyscale ),
                m_supportedInfrared_( supportedInfrared ),
                m_supportedLowlight_( supportedLowlight ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VideoIlluminatorSpecsReportType::VideoIlluminatorSpecsReportType(VideoIlluminatorSpecsReportType&& other_) OMG_NOEXCEPT  :m_maxBeamWidth_ (std::move(other_.m_maxBeamWidth_))
            ,
            m_name_ (std::move(other_.m_name_))
            ,
            m_supportedColor_ (std::move(other_.m_supportedColor_))
            ,
            m_supportedGreyscale_ (std::move(other_.m_supportedGreyscale_))
            ,
            m_supportedInfrared_ (std::move(other_.m_supportedInfrared_))
            ,
            m_supportedLowlight_ (std::move(other_.m_supportedLowlight_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            VideoIlluminatorSpecsReportType& VideoIlluminatorSpecsReportType::operator=(VideoIlluminatorSpecsReportType&&  other_) OMG_NOEXCEPT {
                VideoIlluminatorSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VideoIlluminatorSpecsReportType::swap(VideoIlluminatorSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_maxBeamWidth_, other_.m_maxBeamWidth_);
                swap(m_name_, other_.m_name_);
                swap(m_supportedColor_, other_.m_supportedColor_);
                swap(m_supportedGreyscale_, other_.m_supportedGreyscale_);
                swap(m_supportedInfrared_, other_.m_supportedInfrared_);
                swap(m_supportedLowlight_, other_.m_supportedLowlight_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool VideoIlluminatorSpecsReportType::operator == (const VideoIlluminatorSpecsReportType& other_) const {
                if (m_maxBeamWidth_ != other_.m_maxBeamWidth_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_supportedColor_ != other_.m_supportedColor_) {
                    return false;
                }
                if (m_supportedGreyscale_ != other_.m_supportedGreyscale_) {
                    return false;
                }
                if (m_supportedInfrared_ != other_.m_supportedInfrared_) {
                    return false;
                }
                if (m_supportedLowlight_ != other_.m_supportedLowlight_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool VideoIlluminatorSpecsReportType::operator != (const VideoIlluminatorSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VideoIlluminatorSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxBeamWidth: " << sample.maxBeamWidth()<<", ";
                o << "name: " << sample.name()<<", ";
                o << "supportedColor: " << sample.supportedColor()<<", ";
                o << "supportedGreyscale: " << sample.supportedGreyscale()<<", ";
                o << "supportedInfrared: " << sample.supportedInfrared()<<", ";
                o << "supportedLowlight: " << sample.supportedLowlight()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace VideoIlluminatorSpecs  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VideoIlluminatorSpecsReportType_g_tc_members[8]=
                {

                    {
                        (char *)"maxBeamWidth",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"supportedColor",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedGreyscale",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedInfrared",/* Member name */
                        {
                            4,/* Representation ID */
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
                        (char *)"supportedLowlight",/* Member name */
                        {
                            5,/* Representation ID */
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
                            6,/* Representation ID */
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
                            7,/* Representation ID */
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

                static DDS_TypeCode VideoIlluminatorSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        VideoIlluminatorSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VideoIlluminatorSpecsReportType*/

                if (is_initialized) {
                    return &VideoIlluminatorSpecsReportType_g_tc;
                }

                VideoIlluminatorSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VideoIlluminatorSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VideoIlluminatorSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VideoIlluminatorSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VideoIlluminatorSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VideoIlluminatorSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VideoIlluminatorSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VideoIlluminatorSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VideoIlluminatorSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                VideoIlluminatorSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VideoIlluminatorSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                VideoIlluminatorSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VideoIlluminatorSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VideoIlluminatorSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VideoIlluminatorSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                VideoIlluminatorSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VideoIlluminatorSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                VideoIlluminatorSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VideoIlluminatorSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                VideoIlluminatorSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VideoIlluminatorSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                VideoIlluminatorSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                VideoIlluminatorSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VideoIlluminatorSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo VideoIlluminatorSpecsReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VideoIlluminatorSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxBeamWidth() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedColor() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedGreyscale() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedInfrared() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLowlight() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                VideoIlluminatorSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                VideoIlluminatorSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VideoIlluminatorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VideoIlluminatorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VideoIlluminatorSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VideoIlluminatorSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >;

                VideoIlluminatorSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VideoIlluminatorSpecsReportType_g_typePlugin = 
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

                return &VideoIlluminatorSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportTypePlugin_new,
                UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VideoIlluminatorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VideoIlluminatorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::from_cdr_buffer(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VideoIlluminatorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::reset_sample(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample) 
        {
            sample.maxBeamWidth(0);
            sample.name("");
            sample.supportedColor(0);
            sample.supportedGreyscale(0);
            sample.supportedInfrared(0);
            sample.supportedLowlight(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType >::allocate_sample(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

