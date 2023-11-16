

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalVectorExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalVectorExecutionStatusReportType.hpp"
#include "LocalVectorExecutionStatusReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalVectorControl {

            // ---- LocalVectorExecutionStatusReportType: 

            LocalVectorExecutionStatusReportType::LocalVectorExecutionStatusReportType() :
                m_attitudeAchieved_ (0) ,
                m_elevationAchieved_ (0) ,
                m_speedAchieved_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LocalVectorExecutionStatusReportType::LocalVectorExecutionStatusReportType (bool attitudeAchieved,bool elevationAchieved,bool speedAchieved,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_attitudeAchieved_( attitudeAchieved ),
                m_elevationAchieved_( elevationAchieved ),
                m_speedAchieved_( speedAchieved ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalVectorExecutionStatusReportType::LocalVectorExecutionStatusReportType(LocalVectorExecutionStatusReportType&& other_) OMG_NOEXCEPT  :m_attitudeAchieved_ (std::move(other_.m_attitudeAchieved_))
            ,
            m_elevationAchieved_ (std::move(other_.m_elevationAchieved_))
            ,
            m_speedAchieved_ (std::move(other_.m_speedAchieved_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            LocalVectorExecutionStatusReportType& LocalVectorExecutionStatusReportType::operator=(LocalVectorExecutionStatusReportType&&  other_) OMG_NOEXCEPT {
                LocalVectorExecutionStatusReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalVectorExecutionStatusReportType::swap(LocalVectorExecutionStatusReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_attitudeAchieved_, other_.m_attitudeAchieved_);
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool LocalVectorExecutionStatusReportType::operator == (const LocalVectorExecutionStatusReportType& other_) const {
                if (m_attitudeAchieved_ != other_.m_attitudeAchieved_) {
                    return false;
                }
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_speedAchieved_ != other_.m_speedAchieved_) {
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
            bool LocalVectorExecutionStatusReportType::operator != (const LocalVectorExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalVectorExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "attitudeAchieved: " << sample.attitudeAchieved()<<", ";
                o << "elevationAchieved: " << sample.elevationAchieved()<<", ";
                o << "speedAchieved: " << sample.speedAchieved()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace LocalVectorControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalVectorExecutionStatusReportType_g_tc_members[5]=
                {

                    {
                        (char *)"attitudeAchieved",/* Member name */
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
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"speedAchieved",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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
                    }
                };

                static DDS_TypeCode LocalVectorExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        LocalVectorExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalVectorExecutionStatusReportType*/

                if (is_initialized) {
                    return &LocalVectorExecutionStatusReportType_g_tc;
                }

                LocalVectorExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalVectorExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalVectorExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalVectorExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalVectorExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalVectorExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                LocalVectorExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalVectorExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                LocalVectorExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalVectorExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                LocalVectorExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalVectorExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LocalVectorExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalVectorExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalVectorExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo LocalVectorExecutionStatusReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalVectorExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalVectorExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalVectorExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitudeAchieved() - (char *)sample);

                LocalVectorExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalVectorExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                LocalVectorExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalVectorExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalVectorExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                LocalVectorExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalVectorExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalVectorExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalVectorExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalVectorExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >;

                LocalVectorExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalVectorExecutionStatusReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalVectorExecutionStatusReportType_g_typePlugin = 
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

                return &LocalVectorExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportTypePlugin_new,
                UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalVectorExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalVectorExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::from_cdr_buffer(UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalVectorExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::reset_sample(UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType& sample) 
        {
            sample.attitudeAchieved(0);
            sample.elevationAchieved(0);
            sample.speedAchieved(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType >::allocate_sample(UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

