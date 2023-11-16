

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveLoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PassiveLoiterObjectiveType.hpp"
#include "PassiveLoiterObjectiveTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- PassiveLoiterObjectiveType: 

            PassiveLoiterObjectiveType::PassiveLoiterObjectiveType() :
                m_captureRadius_ (0.0) ,
                m_speed_ (0.0)  {
            }   

            PassiveLoiterObjectiveType::PassiveLoiterObjectiveType (double captureRadius,const ::dds::core::optional< double >& depth,const ::dds::core::optional< double >& driftRadius,const ::dds::core::optional< double >& duration,const ::dds::core::optional< double >& heading,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >& headingReference,const UMAA::Common::Measurement::Position2DTime& position,double speed):
                m_captureRadius_( captureRadius ),
                m_depth_( depth ),
                m_driftRadius_( driftRadius ),
                m_duration_( duration ),
                m_heading_( heading ),
                m_headingReference_( headingReference ),
                m_position_( position ),
                m_speed_( speed ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PassiveLoiterObjectiveType::PassiveLoiterObjectiveType(PassiveLoiterObjectiveType&& other_) OMG_NOEXCEPT  :m_captureRadius_ (std::move(other_.m_captureRadius_))
            ,
            m_depth_ (std::move(other_.m_depth_))
            ,
            m_driftRadius_ (std::move(other_.m_driftRadius_))
            ,
            m_duration_ (std::move(other_.m_duration_))
            ,
            m_heading_ (std::move(other_.m_heading_))
            ,
            m_headingReference_ (std::move(other_.m_headingReference_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            {
            } 

            PassiveLoiterObjectiveType& PassiveLoiterObjectiveType::operator=(PassiveLoiterObjectiveType&&  other_) OMG_NOEXCEPT {
                PassiveLoiterObjectiveType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PassiveLoiterObjectiveType::swap(PassiveLoiterObjectiveType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_captureRadius_, other_.m_captureRadius_);
                swap(m_depth_, other_.m_depth_);
                swap(m_driftRadius_, other_.m_driftRadius_);
                swap(m_duration_, other_.m_duration_);
                swap(m_heading_, other_.m_heading_);
                swap(m_headingReference_, other_.m_headingReference_);
                swap(m_position_, other_.m_position_);
                swap(m_speed_, other_.m_speed_);
            }  

            bool PassiveLoiterObjectiveType::operator == (const PassiveLoiterObjectiveType& other_) const {
                if (m_captureRadius_ != other_.m_captureRadius_) {
                    return false;
                }
                if (m_depth_ != other_.m_depth_) {
                    return false;
                }
                if (m_driftRadius_ != other_.m_driftRadius_) {
                    return false;
                }
                if (m_duration_ != other_.m_duration_) {
                    return false;
                }
                if (m_heading_ != other_.m_heading_) {
                    return false;
                }
                if (m_headingReference_ != other_.m_headingReference_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                return true;
            }
            bool PassiveLoiterObjectiveType::operator != (const PassiveLoiterObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PassiveLoiterObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "captureRadius: " << std::setprecision(15) <<sample.captureRadius()<<", ";
                o << "depth: " << sample.depth()<<", ";
                o << "driftRadius: " << sample.driftRadius()<<", ";
                o << "duration: " << sample.duration()<<", ";
                o << "heading: " << sample.heading()<<", ";
                o << "headingReference: " << sample.headingReference()<<", ";
                o << "position: " << sample.position()<<", ";
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
        struct native_type_code< UMAA::MM::BaseType::PassiveLoiterObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PassiveLoiterObjectiveType_g_tc_members[8]=
                {

                    {
                        (char *)"captureRadius",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"driftRadius",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"duration",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"heading",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"headingReference",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"position",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PassiveLoiterObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::PassiveLoiterObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        PassiveLoiterObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PassiveLoiterObjectiveType*/

                if (is_initialized) {
                    return &PassiveLoiterObjectiveType_g_tc;
                }

                PassiveLoiterObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PassiveLoiterObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2DTime>::get().native();
                PassiveLoiterObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;

                PassiveLoiterObjectiveType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                PassiveLoiterObjectiveType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[1]._annotations._maxValue._u.double_value = 10000ULL;

                PassiveLoiterObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                PassiveLoiterObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                PassiveLoiterObjectiveType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                PassiveLoiterObjectiveType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[3]._annotations._maxValue._u.double_value = 37817280ULL;

                PassiveLoiterObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveLoiterObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveLoiterObjectiveType_g_tc_members[7]._annotations._maxValue._u.double_value = 200ULL;

                PassiveLoiterObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                PassiveLoiterObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PassiveLoiterObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::PassiveLoiterObjectiveType *sample;

                static RTIXCdrMemberAccessInfo PassiveLoiterObjectiveType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PassiveLoiterObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PassiveLoiterObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::PassiveLoiterObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                PassiveLoiterObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->captureRadius() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->driftRadius() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingReference() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                PassiveLoiterObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                PassiveLoiterObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                PassiveLoiterObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::PassiveLoiterObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PassiveLoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PassiveLoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PassiveLoiterObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PassiveLoiterObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::PassiveLoiterObjectiveType >;

                PassiveLoiterObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PassiveLoiterObjectiveType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PassiveLoiterObjectiveType_g_typePlugin = 
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

                return &PassiveLoiterObjectiveType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::PassiveLoiterObjectiveTypePlugin_new,
                UMAA::MM::BaseType::PassiveLoiterObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PassiveLoiterObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PassiveLoiterObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::from_cdr_buffer(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PassiveLoiterObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::PassiveLoiterObjectiveType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::reset_sample(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample) 
        {
            sample.captureRadius(0.0);
            ::rti::topic::reset_sample(sample.depth());
            ::rti::topic::reset_sample(sample.driftRadius());
            ::rti::topic::reset_sample(sample.duration());
            ::rti::topic::reset_sample(sample.heading());
            ::rti::topic::reset_sample(sample.headingReference());
            ::rti::topic::reset_sample(sample.position());
            sample.speed(0.0);
        }

        void topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType >::allocate_sample(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }

    }
}  

