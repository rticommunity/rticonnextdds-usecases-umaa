

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PathReporterSpecsReportType.hpp"
#include "PathReporterSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PathReporterSpecs {

            // ---- PathReporterSpecsReportType: 

            PathReporterSpecsReportType::PathReporterSpecsReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PathReporterSpecsReportType::PathReporterSpecsReportType (const ::rti::core::bounded_sequence< UMAA::SA::PathReporterSpecs::PathReporterType, 100L >& pathReporters,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_pathReporters_( pathReporters ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PathReporterSpecsReportType::PathReporterSpecsReportType(PathReporterSpecsReportType&& other_) OMG_NOEXCEPT  :m_pathReporters_ (std::move(other_.m_pathReporters_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            PathReporterSpecsReportType& PathReporterSpecsReportType::operator=(PathReporterSpecsReportType&&  other_) OMG_NOEXCEPT {
                PathReporterSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PathReporterSpecsReportType::swap(PathReporterSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_pathReporters_, other_.m_pathReporters_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PathReporterSpecsReportType::operator == (const PathReporterSpecsReportType& other_) const {
                if (m_pathReporters_ != other_.m_pathReporters_) {
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
            bool PathReporterSpecsReportType::operator != (const PathReporterSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pathReporters: " << sample.pathReporters()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace PathReporterSpecs  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PathReporterSpecsReportType_g_tc_pathReporters_sequence;

                static DDS_TypeCode_Member PathReporterSpecsReportType_g_tc_members[3]=
                {

                    {
                        (char *)"pathReporters",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode PathReporterSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PathReporterSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterSpecsReportType*/

                if (is_initialized) {
                    return &PathReporterSpecsReportType_g_tc;
                }

                PathReporterSpecsReportType_g_tc_pathReporters_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::SA::PathReporterSpecs::PathReporterType, 100L > >((100L));

                PathReporterSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterSpecsReportType_g_tc_pathReporters_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SA::PathReporterSpecs::PathReporterType>::get().native();
                PathReporterSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& PathReporterSpecsReportType_g_tc_pathReporters_sequence;
                PathReporterSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PathReporterSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo PathReporterSpecsReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathReporters() - (char *)sample);

                PathReporterSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PathReporterSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PathReporterSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >;

                PathReporterSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterSpecsReportType_g_typePlugin = 
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

                return &PathReporterSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::PathReporterSpecs::PathReporterSpecsReportTypePlugin_new,
                UMAA::SA::PathReporterSpecs::PathReporterSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::from_cdr_buffer(UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::reset_sample(UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.pathReporters());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType >::allocate_sample(UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.pathReporters(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

