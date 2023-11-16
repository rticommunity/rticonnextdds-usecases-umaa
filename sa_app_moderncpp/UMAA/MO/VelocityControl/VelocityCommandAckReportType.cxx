

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VelocityCommandAckReportType.hpp"
#include "VelocityCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace VelocityControl {

            // ---- VelocityCommandAckReportType: 

            VelocityCommandAckReportType::VelocityCommandAckReportType() :
                m_commandType_(UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType::CURRENT_COMMAND_SOG)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            VelocityCommandAckReportType::VelocityCommandAckReportType (const UMAA::Common::Measurement::OrientationVelocity3D& attitudeRate,const UMAA::Common::Measurement::Velocity3D_PlatformXYZ& velocity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType& commandType):
                m_attitudeRate_( attitudeRate ),
                m_velocity_( velocity ),
                m_source_( source ),
                m_sessionID_( sessionID ),
                m_commandType_( commandType ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VelocityCommandAckReportType::VelocityCommandAckReportType(VelocityCommandAckReportType&& other_) OMG_NOEXCEPT  :m_attitudeRate_ (std::move(other_.m_attitudeRate_))
            ,
            m_velocity_ (std::move(other_.m_velocity_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_commandType_ (std::move(other_.m_commandType_))
            {
            } 

            VelocityCommandAckReportType& VelocityCommandAckReportType::operator=(VelocityCommandAckReportType&&  other_) OMG_NOEXCEPT {
                VelocityCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VelocityCommandAckReportType::swap(VelocityCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_attitudeRate_, other_.m_attitudeRate_);
                swap(m_velocity_, other_.m_velocity_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_commandType_, other_.m_commandType_);
            }  

            bool VelocityCommandAckReportType::operator == (const VelocityCommandAckReportType& other_) const {
                if (m_attitudeRate_ != other_.m_attitudeRate_) {
                    return false;
                }
                if (m_velocity_ != other_.m_velocity_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_commandType_ != other_.m_commandType_) {
                    return false;
                }
                return true;
            }
            bool VelocityCommandAckReportType::operator != (const VelocityCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VelocityCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "attitudeRate: " << sample.attitudeRate()<<", ";
                o << "velocity: " << sample.velocity()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "commandType: " << sample.commandType() ;
                o <<"]";
                return o;
            }

        } // namespace VelocityControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::VelocityControl::VelocityCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VelocityCommandAckReportType_g_tc_members[5]=
                {

                    {
                        (char *)"attitudeRate",/* Member name */
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
                        (char *)"velocity",/* Member name */
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
                    }, 
                    {
                        (char *)"commandType",/* Member name */
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

                static DDS_TypeCode VelocityCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::VelocityControl::VelocityCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        VelocityCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VelocityCommandAckReportType*/

                if (is_initialized) {
                    return &VelocityCommandAckReportType_g_tc;
                }

                VelocityCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VelocityCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::OrientationVelocity3D>::get().native();
                VelocityCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Velocity3D_PlatformXYZ>::get().native();
                VelocityCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VelocityCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VelocityCommandAckReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType>::get().native();

                /* Initialize the values for member annotations. */

                VelocityCommandAckReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VelocityCommandAckReportType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;

                VelocityCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                VelocityCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VelocityCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::VelocityControl::VelocityCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo VelocityCommandAckReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VelocityCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VelocityCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::VelocityControl::VelocityCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                VelocityCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitudeRate() - (char *)sample);

                VelocityCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocity() - (char *)sample);

                VelocityCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                VelocityCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                VelocityCommandAckReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandType() - (char *)sample);

                VelocityCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                VelocityCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::VelocityControl::VelocityCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VelocityCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VelocityCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VelocityCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VelocityCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::VelocityControl::VelocityCommandAckReportType >;

                VelocityCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VelocityCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VelocityCommandAckReportType_g_typePlugin = 
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

                return &VelocityCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::VelocityControl::VelocityCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::VelocityControl::VelocityCommandAckReportTypePlugin_new,
                UMAA::MO::VelocityControl::VelocityCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::VelocityControl::VelocityCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VelocityCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VelocityCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::from_cdr_buffer(UMAA::MO::VelocityControl::VelocityCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VelocityCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::VelocityControl::VelocityCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::reset_sample(UMAA::MO::VelocityControl::VelocityCommandAckReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.attitudeRate());
            ::rti::topic::reset_sample(sample.velocity());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            sample.commandType(UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType::CURRENT_COMMAND_SOG);
        }

        void topic_type_support< UMAA::MO::VelocityControl::VelocityCommandAckReportType >::allocate_sample(UMAA::MO::VelocityControl::VelocityCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.attitudeRate(),  -1, -1);
            ::rti::topic::allocate_sample(sample.velocity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.commandType(),  -1, -1);
        }

    }
}  

