

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalWaypointCommandAckReportType.hpp"
#include "LocalWaypointCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalWaypointControl {

            // ---- LocalWaypointCommandAckReportType: 

            LocalWaypointCommandAckReportType::LocalWaypointCommandAckReportType() :
                m_waypointCount_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LocalWaypointCommandAckReportType::LocalWaypointCommandAckReportType (int32_t waypointCount,const ::rti::core::bounded_sequence< UMAA::MO::LocalWaypointControl::LocalWaypointType, 100L >& waypoints,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_waypointCount_( waypointCount ),
                m_waypoints_( waypoints ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalWaypointCommandAckReportType::LocalWaypointCommandAckReportType(LocalWaypointCommandAckReportType&& other_) OMG_NOEXCEPT  :m_waypointCount_ (std::move(other_.m_waypointCount_))
            ,
            m_waypoints_ (std::move(other_.m_waypoints_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            LocalWaypointCommandAckReportType& LocalWaypointCommandAckReportType::operator=(LocalWaypointCommandAckReportType&&  other_) OMG_NOEXCEPT {
                LocalWaypointCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalWaypointCommandAckReportType::swap(LocalWaypointCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_waypointCount_, other_.m_waypointCount_);
                swap(m_waypoints_, other_.m_waypoints_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool LocalWaypointCommandAckReportType::operator == (const LocalWaypointCommandAckReportType& other_) const {
                if (m_waypointCount_ != other_.m_waypointCount_) {
                    return false;
                }
                if (m_waypoints_ != other_.m_waypoints_) {
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
            bool LocalWaypointCommandAckReportType::operator != (const LocalWaypointCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalWaypointCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "waypointCount: " << sample.waypointCount()<<", ";
                o << "waypoints: " << sample.waypoints()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace LocalWaypointControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LocalWaypointCommandAckReportType_g_tc_waypoints_sequence;

                static DDS_TypeCode_Member LocalWaypointCommandAckReportType_g_tc_members[4]=
                {

                    {
                        (char *)"waypointCount",/* Member name */
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
                        (char *)"waypoints",/* Member name */
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

                static DDS_TypeCode LocalWaypointCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        LocalWaypointCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalWaypointCommandAckReportType*/

                if (is_initialized) {
                    return &LocalWaypointCommandAckReportType_g_tc;
                }

                LocalWaypointCommandAckReportType_g_tc_waypoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MO::LocalWaypointControl::LocalWaypointType, 100L > >((100L));

                LocalWaypointCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalWaypointCommandAckReportType_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalWaypointControl::LocalWaypointType>::get().native();
                LocalWaypointCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                LocalWaypointCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& LocalWaypointCommandAckReportType_g_tc_waypoints_sequence;
                LocalWaypointCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalWaypointCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointCommandAckReportType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;

                LocalWaypointCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalWaypointCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalWaypointCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo LocalWaypointCommandAckReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalWaypointCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalWaypointCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalWaypointCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointCount() - (char *)sample);

                LocalWaypointCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypoints() - (char *)sample);

                LocalWaypointCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalWaypointCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalWaypointCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                LocalWaypointCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalWaypointCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalWaypointCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalWaypointCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalWaypointCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >;

                LocalWaypointCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalWaypointCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalWaypointCommandAckReportType_g_typePlugin = 
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

                return &LocalWaypointCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportTypePlugin_new,
                UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalWaypointCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalWaypointCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::from_cdr_buffer(UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalWaypointCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::reset_sample(UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType& sample) 
        {
            sample.waypointCount(0);
            ::rti::topic::reset_sample(sample.waypoints());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType >::allocate_sample(UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.waypoints(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

