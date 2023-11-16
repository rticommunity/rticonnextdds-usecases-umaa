

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PathReporterReportType.hpp"
#include "PathReporterReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PathReporterStatus {

            // ---- PathReporterReportType: 

            PathReporterReportType::PathReporterReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PathReporterReportType::PathReporterReportType (const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalGlobalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalLocalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedGlobalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedLocalPaths,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_historicalGlobalPaths_( historicalGlobalPaths ),
                m_historicalLocalPaths_( historicalLocalPaths ),
                m_plannedGlobalPaths_( plannedGlobalPaths ),
                m_plannedLocalPaths_( plannedLocalPaths ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PathReporterReportType::PathReporterReportType(PathReporterReportType&& other_) OMG_NOEXCEPT  :m_historicalGlobalPaths_ (std::move(other_.m_historicalGlobalPaths_))
            ,
            m_historicalLocalPaths_ (std::move(other_.m_historicalLocalPaths_))
            ,
            m_plannedGlobalPaths_ (std::move(other_.m_plannedGlobalPaths_))
            ,
            m_plannedLocalPaths_ (std::move(other_.m_plannedLocalPaths_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            PathReporterReportType& PathReporterReportType::operator=(PathReporterReportType&&  other_) OMG_NOEXCEPT {
                PathReporterReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PathReporterReportType::swap(PathReporterReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_historicalGlobalPaths_, other_.m_historicalGlobalPaths_);
                swap(m_historicalLocalPaths_, other_.m_historicalLocalPaths_);
                swap(m_plannedGlobalPaths_, other_.m_plannedGlobalPaths_);
                swap(m_plannedLocalPaths_, other_.m_plannedLocalPaths_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PathReporterReportType::operator == (const PathReporterReportType& other_) const {
                if (m_historicalGlobalPaths_ != other_.m_historicalGlobalPaths_) {
                    return false;
                }
                if (m_historicalLocalPaths_ != other_.m_historicalLocalPaths_) {
                    return false;
                }
                if (m_plannedGlobalPaths_ != other_.m_plannedGlobalPaths_) {
                    return false;
                }
                if (m_plannedLocalPaths_ != other_.m_plannedLocalPaths_) {
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
            bool PathReporterReportType::operator != (const PathReporterReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "historicalGlobalPaths: " << sample.historicalGlobalPaths()<<", ";
                o << "historicalLocalPaths: " << sample.historicalLocalPaths()<<", ";
                o << "plannedGlobalPaths: " << sample.plannedGlobalPaths()<<", ";
                o << "plannedLocalPaths: " << sample.plannedLocalPaths()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace PathReporterStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::PathReporterStatus::PathReporterReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PathReporterReportType_g_tc_historicalGlobalPaths_sequence;
                static DDS_TypeCode PathReporterReportType_g_tc_historicalLocalPaths_sequence;
                static DDS_TypeCode PathReporterReportType_g_tc_plannedGlobalPaths_sequence;
                static DDS_TypeCode PathReporterReportType_g_tc_plannedLocalPaths_sequence;

                static DDS_TypeCode_Member PathReporterReportType_g_tc_members[6]=
                {

                    {
                        (char *)"historicalGlobalPaths",/* Member name */
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
                        (char *)"historicalLocalPaths",/* Member name */
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
                        (char *)"plannedGlobalPaths",/* Member name */
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
                        (char *)"plannedLocalPaths",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode PathReporterReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PathReporterReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportType*/

                if (is_initialized) {
                    return &PathReporterReportType_g_tc;
                }

                PathReporterReportType_g_tc_historicalGlobalPaths_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > >((100L));
                PathReporterReportType_g_tc_historicalLocalPaths_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > >((100L));
                PathReporterReportType_g_tc_plannedGlobalPaths_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > >((100L));
                PathReporterReportType_g_tc_plannedLocalPaths_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > >((100L));

                PathReporterReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportType_g_tc_historicalGlobalPaths_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportType_g_tc_historicalLocalPaths_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportType_g_tc_plannedGlobalPaths_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportType_g_tc_plannedLocalPaths_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& PathReporterReportType_g_tc_historicalGlobalPaths_sequence;
                PathReporterReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& PathReporterReportType_g_tc_historicalLocalPaths_sequence;
                PathReporterReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& PathReporterReportType_g_tc_plannedGlobalPaths_sequence;
                PathReporterReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& PathReporterReportType_g_tc_plannedLocalPaths_sequence;
                PathReporterReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PathReporterReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::PathReporterStatus::PathReporterReportType *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::PathReporterStatus::PathReporterReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->historicalGlobalPaths() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->historicalLocalPaths() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->plannedGlobalPaths() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->plannedLocalPaths() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PathReporterReportType_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::PathReporterStatus::PathReporterReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::PathReporterStatus::PathReporterReportType >;

                PathReporterReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportType_g_typePlugin = 
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

                return &PathReporterReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::PathReporterStatus::PathReporterReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::PathReporterStatus::PathReporterReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_new,
                UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::PathReporterStatus::PathReporterReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType >::from_cdr_buffer(UMAA::SA::PathReporterStatus::PathReporterReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::PathReporterStatus::PathReporterReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType >::reset_sample(UMAA::SA::PathReporterStatus::PathReporterReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.historicalGlobalPaths());
            ::rti::topic::reset_sample(sample.historicalLocalPaths());
            ::rti::topic::reset_sample(sample.plannedGlobalPaths());
            ::rti::topic::reset_sample(sample.plannedLocalPaths());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType >::allocate_sample(UMAA::SA::PathReporterStatus::PathReporterReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.historicalGlobalPaths(),  100L, -1);
            ::rti::topic::allocate_sample(sample.historicalLocalPaths(),  100L, -1);
            ::rti::topic::allocate_sample(sample.plannedGlobalPaths(),  100L, -1);
            ::rti::topic::allocate_sample(sample.plannedLocalPaths(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

