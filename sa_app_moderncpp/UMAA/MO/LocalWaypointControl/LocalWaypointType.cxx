

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalWaypointType.hpp"
#include "LocalWaypointTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalWaypointControl {

            // ---- LocalWaypointType: 

            LocalWaypointType::LocalWaypointType() :
                m_maintainTrack_ (0) ,
                m_pathTolerance_ (0.0) ,
                m_waypointTolerance_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_waypointID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LocalWaypointType::LocalWaypointType (const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude,const UMAA::Common::Measurement::ElevationType& elevation,bool maintainTrack,double pathTolerance,const UMAA::Common::Measurement::Position2D_PlatformXYZ& position,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed,double waypointTolerance,const UMAA::Common::Measurement::NumericGUID& waypointID):
                m_attitude_( attitude ),
                m_elevation_( elevation ),
                m_maintainTrack_( maintainTrack ),
                m_pathTolerance_( pathTolerance ),
                m_position_( position ),
                m_speed_( speed ),
                m_waypointTolerance_( waypointTolerance ),
                m_waypointID_( waypointID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalWaypointType::LocalWaypointType(LocalWaypointType&& other_) OMG_NOEXCEPT  :m_attitude_ (std::move(other_.m_attitude_))
            ,
            m_elevation_ (std::move(other_.m_elevation_))
            ,
            m_maintainTrack_ (std::move(other_.m_maintainTrack_))
            ,
            m_pathTolerance_ (std::move(other_.m_pathTolerance_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            ,
            m_waypointTolerance_ (std::move(other_.m_waypointTolerance_))
            ,
            m_waypointID_ (std::move(other_.m_waypointID_))
            {
            } 

            LocalWaypointType& LocalWaypointType::operator=(LocalWaypointType&&  other_) OMG_NOEXCEPT {
                LocalWaypointType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalWaypointType::swap(LocalWaypointType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_attitude_, other_.m_attitude_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_maintainTrack_, other_.m_maintainTrack_);
                swap(m_pathTolerance_, other_.m_pathTolerance_);
                swap(m_position_, other_.m_position_);
                swap(m_speed_, other_.m_speed_);
                swap(m_waypointTolerance_, other_.m_waypointTolerance_);
                swap(m_waypointID_, other_.m_waypointID_);
            }  

            bool LocalWaypointType::operator == (const LocalWaypointType& other_) const {
                if (m_attitude_ != other_.m_attitude_) {
                    return false;
                }
                if (m_elevation_ != other_.m_elevation_) {
                    return false;
                }
                if (m_maintainTrack_ != other_.m_maintainTrack_) {
                    return false;
                }
                if (m_pathTolerance_ != other_.m_pathTolerance_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (m_waypointTolerance_ != other_.m_waypointTolerance_) {
                    return false;
                }
                if (m_waypointID_ != other_.m_waypointID_) {
                    return false;
                }
                return true;
            }
            bool LocalWaypointType::operator != (const LocalWaypointType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalWaypointType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "attitude: " << sample.attitude()<<", ";
                o << "elevation: " << sample.elevation()<<", ";
                o << "maintainTrack: " << sample.maintainTrack()<<", ";
                o << "pathTolerance: " << std::setprecision(15) <<sample.pathTolerance()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "speed: " << sample.speed()<<", ";
                o << "waypointTolerance: " << std::setprecision(15) <<sample.waypointTolerance()<<", ";
                o << "waypointID: " << sample.waypointID() ;
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
        struct native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalWaypointType_g_tc_members[8]=
                {

                    {
                        (char *)"attitude",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"maintainTrack",/* Member name */
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
                        (char *)"pathTolerance",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"waypointTolerance",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"waypointID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalWaypointType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalWaypointControl::LocalWaypointType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        LocalWaypointType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalWaypointType*/

                if (is_initialized) {
                    return &LocalWaypointType_g_tc;
                }

                LocalWaypointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalWaypointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Orientation3D_PlatformXYZ>::get().native();
                LocalWaypointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElevationType>::get().native();
                LocalWaypointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalWaypointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2D_PlatformXYZ>::get().native();
                LocalWaypointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                LocalWaypointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                LocalWaypointType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalWaypointType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LocalWaypointType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[3]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalWaypointType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalWaypointType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalWaypointControl::LocalWaypointType *sample;

                static RTIXCdrMemberAccessInfo LocalWaypointType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalWaypointType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalWaypointType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalWaypointControl::LocalWaypointType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalWaypointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitude() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maintainTrack() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathTolerance() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointTolerance() - (char *)sample);

                LocalWaypointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointID() - (char *)sample);

                LocalWaypointType_g_sampleAccessInfo.memberAccessInfos = 
                LocalWaypointType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalWaypointControl::LocalWaypointType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalWaypointType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalWaypointType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalWaypointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalWaypointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalWaypointControl::LocalWaypointType >;

                LocalWaypointType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalWaypointType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalWaypointType_g_typePlugin = 
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

                return &LocalWaypointType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalWaypointControl::LocalWaypointType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalWaypointControl::LocalWaypointTypePlugin_new,
                UMAA::MO::LocalWaypointControl::LocalWaypointTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalWaypointControl::LocalWaypointType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalWaypointTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalWaypointTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType >::from_cdr_buffer(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalWaypointTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalWaypointControl::LocalWaypointType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType >::reset_sample(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample) 
        {
            ::rti::topic::reset_sample(sample.attitude());
            ::rti::topic::reset_sample(sample.elevation());
            sample.maintainTrack(0);
            sample.pathTolerance(0.0);
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.speed());
            sample.waypointTolerance(0.0);
            ::rti::topic::reset_sample(sample.waypointID());
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType >::allocate_sample(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.attitude(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waypointID(),  -1, -1);
        }

    }
}  

