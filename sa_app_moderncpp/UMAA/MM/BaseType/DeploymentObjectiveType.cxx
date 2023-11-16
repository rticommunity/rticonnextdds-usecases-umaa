

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeploymentObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "DeploymentObjectiveType.hpp"
#include "DeploymentObjectiveTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- DeploymentObjectiveType: 

            DeploymentObjectiveType::DeploymentObjectiveType() :
                m_altitudeASF_ (0.0) ,
                m_heading_ (0.0) ,
                m_releaseDepth_ (0.0) ,
                m_speed_ (0.0)  {
            }   

            DeploymentObjectiveType::DeploymentObjectiveType (const UMAA::Common::Measurement::Altitude_MSL& altitude,const UMAA::Common::Measurement::Altitude_AGL& altitudeAGL,double altitudeASF,double heading,const UMAA::Common::Measurement::Position2D& position,double releaseDepth,double speed):
                m_altitude_( altitude ),
                m_altitudeAGL_( altitudeAGL ),
                m_altitudeASF_( altitudeASF ),
                m_heading_( heading ),
                m_position_( position ),
                m_releaseDepth_( releaseDepth ),
                m_speed_( speed ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DeploymentObjectiveType::DeploymentObjectiveType(DeploymentObjectiveType&& other_) OMG_NOEXCEPT  :m_altitude_ (std::move(other_.m_altitude_))
            ,
            m_altitudeAGL_ (std::move(other_.m_altitudeAGL_))
            ,
            m_altitudeASF_ (std::move(other_.m_altitudeASF_))
            ,
            m_heading_ (std::move(other_.m_heading_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_releaseDepth_ (std::move(other_.m_releaseDepth_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            {
            } 

            DeploymentObjectiveType& DeploymentObjectiveType::operator=(DeploymentObjectiveType&&  other_) OMG_NOEXCEPT {
                DeploymentObjectiveType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void DeploymentObjectiveType::swap(DeploymentObjectiveType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_heading_, other_.m_heading_);
                swap(m_position_, other_.m_position_);
                swap(m_releaseDepth_, other_.m_releaseDepth_);
                swap(m_speed_, other_.m_speed_);
            }  

            bool DeploymentObjectiveType::operator == (const DeploymentObjectiveType& other_) const {
                if (m_altitude_ != other_.m_altitude_) {
                    return false;
                }
                if (m_altitudeAGL_ != other_.m_altitudeAGL_) {
                    return false;
                }
                if (m_altitudeASF_ != other_.m_altitudeASF_) {
                    return false;
                }
                if (m_heading_ != other_.m_heading_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_releaseDepth_ != other_.m_releaseDepth_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                return true;
            }
            bool DeploymentObjectiveType::operator != (const DeploymentObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DeploymentObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude()<<", ";
                o << "altitudeAGL: " << sample.altitudeAGL()<<", ";
                o << "altitudeASF: " << std::setprecision(15) <<sample.altitudeASF()<<", ";
                o << "heading: " << std::setprecision(15) <<sample.heading()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "releaseDepth: " << std::setprecision(15) <<sample.releaseDepth()<<", ";
                o << "speed: " << std::setprecision(15) <<sample.speed() ;
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::BaseType::DeploymentObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DeploymentObjectiveType_g_tc_members[7]=
                {

                    {
                        (char *)"altitude",/* Member name */
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
                        (char *)"altitudeAGL",/* Member name */
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
                        (char *)"altitudeASF",/* Member name */
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
                        (char *)"heading",/* Member name */
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
                        (char *)"releaseDepth",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                    }
                };

                static DDS_TypeCode DeploymentObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::DeploymentObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        DeploymentObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DeploymentObjectiveType*/

                if (is_initialized) {
                    return &DeploymentObjectiveType_g_tc;
                }

                DeploymentObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DeploymentObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Altitude_MSL>::get().native();
                DeploymentObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Altitude_AGL>::get().native();
                DeploymentObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_ASF_AliasTag_t>::get().native();
                DeploymentObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t>::get().native();
                DeploymentObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2D>::get().native();
                DeploymentObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                DeploymentObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                DeploymentObjectiveType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DeploymentObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                DeploymentObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                DeploymentObjectiveType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                DeploymentObjectiveType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[3]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                DeploymentObjectiveType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[3]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                DeploymentObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                DeploymentObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                DeploymentObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 10000ULL;

                DeploymentObjectiveType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                DeploymentObjectiveType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                DeploymentObjectiveType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DeploymentObjectiveType_g_tc_members[6]._annotations._maxValue._u.double_value = 200ULL;

                DeploymentObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                DeploymentObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DeploymentObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::DeploymentObjectiveType *sample;

                static RTIXCdrMemberAccessInfo DeploymentObjectiveType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DeploymentObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DeploymentObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::DeploymentObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                DeploymentObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->releaseDepth() - (char *)sample);

                DeploymentObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                DeploymentObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                DeploymentObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::DeploymentObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DeploymentObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DeploymentObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DeploymentObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DeploymentObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::DeploymentObjectiveType >;

                DeploymentObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DeploymentObjectiveType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DeploymentObjectiveType_g_typePlugin = 
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

                return &DeploymentObjectiveType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::BaseType::DeploymentObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::DeploymentObjectiveType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::BaseType::DeploymentObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::DeploymentObjectiveTypePlugin_new,
                UMAA::MM::BaseType::DeploymentObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::DeploymentObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::DeploymentObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DeploymentObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DeploymentObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::DeploymentObjectiveType >::from_cdr_buffer(UMAA::MM::BaseType::DeploymentObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DeploymentObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::DeploymentObjectiveType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::DeploymentObjectiveType >::reset_sample(UMAA::MM::BaseType::DeploymentObjectiveType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
            ::rti::topic::reset_sample(sample.altitudeAGL());
            sample.altitudeASF(0.0);
            sample.heading(0.0);
            ::rti::topic::reset_sample(sample.position());
            sample.releaseDepth(0.0);
            sample.speed(0.0);
        }

        void topic_type_support< UMAA::MM::BaseType::DeploymentObjectiveType >::allocate_sample(UMAA::MM::BaseType::DeploymentObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.altitude(),  -1, -1);
            ::rti::topic::allocate_sample(sample.altitudeAGL(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }

    }
}  

