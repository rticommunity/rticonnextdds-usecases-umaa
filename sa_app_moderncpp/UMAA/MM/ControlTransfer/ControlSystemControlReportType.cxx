

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemControlReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ControlSystemControlReportType.hpp"
#include "ControlSystemControlReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace ControlTransfer {

            // ---- ControlSystemControlReportType: 

            ControlSystemControlReportType::ControlSystemControlReportType() :
                m_authorityLevel_ (0) ,
                m_status_(UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION)  {
                    ::rti::core::fill_array( 
                        m_controlSystemID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ControlSystemControlReportType::ControlSystemControlReportType (int32_t authorityLevel,const UMAA::Common::Measurement::NumericGUID& controlSystemID,const UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType& status,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_authorityLevel_( authorityLevel ),
                m_controlSystemID_( controlSystemID ),
                m_status_( status ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ControlSystemControlReportType::ControlSystemControlReportType(ControlSystemControlReportType&& other_) OMG_NOEXCEPT  :m_authorityLevel_ (std::move(other_.m_authorityLevel_))
            ,
            m_controlSystemID_ (std::move(other_.m_controlSystemID_))
            ,
            m_status_ (std::move(other_.m_status_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            ControlSystemControlReportType& ControlSystemControlReportType::operator=(ControlSystemControlReportType&&  other_) OMG_NOEXCEPT {
                ControlSystemControlReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ControlSystemControlReportType::swap(ControlSystemControlReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_authorityLevel_, other_.m_authorityLevel_);
                swap(m_controlSystemID_, other_.m_controlSystemID_);
                swap(m_status_, other_.m_status_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool ControlSystemControlReportType::operator == (const ControlSystemControlReportType& other_) const {
                if (m_authorityLevel_ != other_.m_authorityLevel_) {
                    return false;
                }
                if (m_controlSystemID_ != other_.m_controlSystemID_) {
                    return false;
                }
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
            bool ControlSystemControlReportType::operator != (const ControlSystemControlReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ControlSystemControlReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "authorityLevel: " << sample.authorityLevel()<<", ";
                o << "controlSystemID: " << sample.controlSystemID()<<", ";
                o << "status: " << sample.status()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace ControlTransfer  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::ControlTransfer::ControlSystemControlReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ControlSystemControlReportType_g_tc_members[5]=
                {

                    {
                        (char *)"authorityLevel",/* Member name */
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
                        (char *)"controlSystemID",/* Member name */
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
                        (char *)"status",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode ControlSystemControlReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::ControlTransfer::ControlSystemControlReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ControlSystemControlReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ControlSystemControlReportType*/

                if (is_initialized) {
                    return &ControlSystemControlReportType_g_tc;
                }

                ControlSystemControlReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ControlSystemControlReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                ControlSystemControlReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ControlSystemControlReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType>::get().native();
                ControlSystemControlReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ControlSystemControlReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                ControlSystemControlReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ControlSystemControlReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                ControlSystemControlReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ControlSystemControlReportType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                ControlSystemControlReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ControlSystemControlReportType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;

                ControlSystemControlReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ControlSystemControlReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                ControlSystemControlReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ControlSystemControlReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ControlSystemControlReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::ControlTransfer::ControlSystemControlReportType *sample;

                static RTIXCdrMemberAccessInfo ControlSystemControlReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ControlSystemControlReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ControlSystemControlReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::ControlTransfer::ControlSystemControlReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ControlSystemControlReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->authorityLevel() - (char *)sample);

                ControlSystemControlReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->controlSystemID() - (char *)sample);

                ControlSystemControlReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                ControlSystemControlReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ControlSystemControlReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ControlSystemControlReportType_g_sampleAccessInfo.memberAccessInfos = 
                ControlSystemControlReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::ControlTransfer::ControlSystemControlReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ControlSystemControlReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ControlSystemControlReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ControlSystemControlReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ControlSystemControlReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::ControlTransfer::ControlSystemControlReportType >;

                ControlSystemControlReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ControlSystemControlReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ControlSystemControlReportType_g_typePlugin = 
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

                return &ControlSystemControlReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::ControlTransfer::ControlSystemControlReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::ControlTransfer::ControlSystemControlReportTypePlugin_new,
                UMAA::MM::ControlTransfer::ControlSystemControlReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ControlSystemControlReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ControlSystemControlReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::from_cdr_buffer(UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ControlSystemControlReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::ControlTransfer::ControlSystemControlReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::reset_sample(UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample) 
        {
            sample.authorityLevel(0);
            ::rti::topic::reset_sample(sample.controlSystemID());
            sample.status(UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType::FORCED_ALLOCATION);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MM::ControlTransfer::ControlSystemControlReportType >::allocate_sample(UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.controlSystemID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

