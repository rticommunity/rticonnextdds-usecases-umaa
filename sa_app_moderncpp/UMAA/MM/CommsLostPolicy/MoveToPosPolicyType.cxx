

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveToPosPolicyType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MoveToPosPolicyType.hpp"
#include "MoveToPosPolicyTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace CommsLostPolicy {

            // ---- MoveToPosPolicyType: 

            MoveToPosPolicyType::MoveToPosPolicyType() :
                m_distance_ (0.0) ,
                m_mode_(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC) ,
                m_speed_ (0.0) ,
                m_speedReference_(UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType::SPEED_THROUGH_AIR)  {
            }   

            MoveToPosPolicyType::MoveToPosPolicyType (double distance,const UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode,const UMAA::MM::BaseType::WaypointType& position,double speed,const UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference):
                m_distance_( distance ),
                m_mode_( mode ),
                m_position_( position ),
                m_speed_( speed ),
                m_speedReference_( speedReference ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            MoveToPosPolicyType::MoveToPosPolicyType(MoveToPosPolicyType&& other_) OMG_NOEXCEPT  :m_distance_ (std::move(other_.m_distance_))
            ,
            m_mode_ (std::move(other_.m_mode_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            ,
            m_speedReference_ (std::move(other_.m_speedReference_))
            {
            } 

            MoveToPosPolicyType& MoveToPosPolicyType::operator=(MoveToPosPolicyType&&  other_) OMG_NOEXCEPT {
                MoveToPosPolicyType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void MoveToPosPolicyType::swap(MoveToPosPolicyType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_distance_, other_.m_distance_);
                swap(m_mode_, other_.m_mode_);
                swap(m_position_, other_.m_position_);
                swap(m_speed_, other_.m_speed_);
                swap(m_speedReference_, other_.m_speedReference_);
            }  

            bool MoveToPosPolicyType::operator == (const MoveToPosPolicyType& other_) const {
                if (m_distance_ != other_.m_distance_) {
                    return false;
                }
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (m_speedReference_ != other_.m_speedReference_) {
                    return false;
                }
                return true;
            }
            bool MoveToPosPolicyType::operator != (const MoveToPosPolicyType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MoveToPosPolicyType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "distance: " << std::setprecision(15) <<sample.distance()<<", ";
                o << "mode: " << sample.mode()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "speed: " << std::setprecision(15) <<sample.speed()<<", ";
                o << "speedReference: " << sample.speedReference() ;
                o <<"]";
                return o;
            }

        } // namespace CommsLostPolicy  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveToPosPolicyType_g_tc_members[5]=
                {

                    {
                        (char *)"distance",/* Member name */
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
                        (char *)"mode",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"speedReference",/* Member name */
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

                static DDS_TypeCode MoveToPosPolicyType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::CommsLostPolicy::MoveToPosPolicyType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        MoveToPosPolicyType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MoveToPosPolicyType*/

                if (is_initialized) {
                    return &MoveToPosPolicyType_g_tc;
                }

                MoveToPosPolicyType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MoveToPosPolicyType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                MoveToPosPolicyType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType>::get().native();
                MoveToPosPolicyType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::WaypointType>::get().native();
                MoveToPosPolicyType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                MoveToPosPolicyType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType>::get().native();

                /* Initialize the values for member annotations. */
                MoveToPosPolicyType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                MoveToPosPolicyType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                MoveToPosPolicyType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;

                MoveToPosPolicyType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MoveToPosPolicyType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                MoveToPosPolicyType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                MoveToPosPolicyType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                MoveToPosPolicyType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MoveToPosPolicyType_g_tc_members[3]._annotations._maxValue._u.double_value = 299792458ULL;

                MoveToPosPolicyType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MoveToPosPolicyType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;

                MoveToPosPolicyType_g_tc._data._sampleAccessInfo = sample_access_info();
                MoveToPosPolicyType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MoveToPosPolicyType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::CommsLostPolicy::MoveToPosPolicyType *sample;

                static RTIXCdrMemberAccessInfo MoveToPosPolicyType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MoveToPosPolicyType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MoveToPosPolicyType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::CommsLostPolicy::MoveToPosPolicyType);
                if (sample == NULL) {
                    return NULL;
                }

                MoveToPosPolicyType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distance() - (char *)sample);

                MoveToPosPolicyType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                MoveToPosPolicyType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                MoveToPosPolicyType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                MoveToPosPolicyType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedReference() - (char *)sample);

                MoveToPosPolicyType_g_sampleAccessInfo.memberAccessInfos = 
                MoveToPosPolicyType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::CommsLostPolicy::MoveToPosPolicyType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MoveToPosPolicyType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MoveToPosPolicyType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MoveToPosPolicyType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MoveToPosPolicyType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >;

                MoveToPosPolicyType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MoveToPosPolicyType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MoveToPosPolicyType_g_typePlugin = 
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

                return &MoveToPosPolicyType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::CommsLostPolicy::MoveToPosPolicyTypePlugin_new,
                UMAA::MM::CommsLostPolicy::MoveToPosPolicyTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MoveToPosPolicyTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MoveToPosPolicyTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::from_cdr_buffer(UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MoveToPosPolicyTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::CommsLostPolicy::MoveToPosPolicyType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::reset_sample(UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample) 
        {
            sample.distance(0.0);
            sample.mode(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC);
            ::rti::topic::reset_sample(sample.position());
            sample.speed(0.0);
            sample.speedReference(UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType::SPEED_THROUGH_AIR);
        }

        void topic_type_support< UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >::allocate_sample(UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speedReference(),  -1, -1);
        }

    }
}  

