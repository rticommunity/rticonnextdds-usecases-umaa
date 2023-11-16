

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "SelfCollisionAvoidanceReportType.hpp"
#include "SelfCollisionAvoidanceReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace SelfCollisionAvoidanceStatus {

            // ---- SelfCollisionAvoidanceReportType: 

            SelfCollisionAvoidanceReportType::SelfCollisionAvoidanceReportType() :
                m_status_(UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType::ACTIVE_AVOID_OBSTACLE)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            SelfCollisionAvoidanceReportType::SelfCollisionAvoidanceReportType (const UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType& status,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_status_( status ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            SelfCollisionAvoidanceReportType::SelfCollisionAvoidanceReportType(SelfCollisionAvoidanceReportType&& other_) OMG_NOEXCEPT  :m_status_ (std::move(other_.m_status_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            SelfCollisionAvoidanceReportType& SelfCollisionAvoidanceReportType::operator=(SelfCollisionAvoidanceReportType&&  other_) OMG_NOEXCEPT {
                SelfCollisionAvoidanceReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void SelfCollisionAvoidanceReportType::swap(SelfCollisionAvoidanceReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_status_, other_.m_status_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool SelfCollisionAvoidanceReportType::operator == (const SelfCollisionAvoidanceReportType& other_) const {
                if (m_status_ != other_.m_status_) {
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
            bool SelfCollisionAvoidanceReportType::operator != (const SelfCollisionAvoidanceReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SelfCollisionAvoidanceReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "status: " << sample.status()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace SelfCollisionAvoidanceStatus  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SelfCollisionAvoidanceReportType_g_tc_members[3]=
                {

                    {
                        (char *)"status",/* Member name */
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

                static DDS_TypeCode SelfCollisionAvoidanceReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        SelfCollisionAvoidanceReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SelfCollisionAvoidanceReportType*/

                if (is_initialized) {
                    return &SelfCollisionAvoidanceReportType_g_tc;
                }

                SelfCollisionAvoidanceReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SelfCollisionAvoidanceReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType>::get().native();
                SelfCollisionAvoidanceReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SelfCollisionAvoidanceReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                SelfCollisionAvoidanceReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SelfCollisionAvoidanceReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                SelfCollisionAvoidanceReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SelfCollisionAvoidanceReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SelfCollisionAvoidanceReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType *sample;

                static RTIXCdrMemberAccessInfo SelfCollisionAvoidanceReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SelfCollisionAvoidanceReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SelfCollisionAvoidanceReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                SelfCollisionAvoidanceReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SelfCollisionAvoidanceReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SelfCollisionAvoidanceReportType_g_sampleAccessInfo.memberAccessInfos = 
                SelfCollisionAvoidanceReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SelfCollisionAvoidanceReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SelfCollisionAvoidanceReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SelfCollisionAvoidanceReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SelfCollisionAvoidanceReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >;

                SelfCollisionAvoidanceReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SelfCollisionAvoidanceReportType_g_typePlugin = 
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

                return &SelfCollisionAvoidanceReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportTypePlugin_new,
                UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SelfCollisionAvoidanceReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SelfCollisionAvoidanceReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::from_cdr_buffer(UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SelfCollisionAvoidanceReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::reset_sample(UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType& sample) 
        {
            sample.status(UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType::ACTIVE_AVOID_OBSTACLE);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType >::allocate_sample(UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

