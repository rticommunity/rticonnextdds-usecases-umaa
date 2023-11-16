

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraverseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "RetrotraverseTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RetrotraverseType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace Retrotraverse {

            // ---- RetrotraverseType: 

            RetrotraverseType::RetrotraverseType() :
                m_distance_ (0.0) ,
                m_maxSpeed_ (0.0) ,
                m_mode_(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC) ,
                m_speedReference_(UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType::SPEED_THROUGH_AIR) ,
                m_standoffDistance_ (0.0) ,
                m_travelDirection_ (0) ,
                m_travelMethod_ (0)  {

            }   

            RetrotraverseType::RetrotraverseType (double distance_,double maxSpeed_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference_,double standoffDistance_,bool travelDirection_,bool travelMethod_):
                m_distance_(distance_), 
                m_maxSpeed_(maxSpeed_), 
                m_mode_(mode_), 
                m_speedReference_(speedReference_), 
                m_standoffDistance_(standoffDistance_), 
                m_travelDirection_(travelDirection_), 
                m_travelMethod_(travelMethod_) {
            }

            void RetrotraverseType::swap(RetrotraverseType& other_)  noexcept 
            {
                using std::swap;
                swap(m_distance_, other_.m_distance_);
                swap(m_maxSpeed_, other_.m_maxSpeed_);
                swap(m_mode_, other_.m_mode_);
                swap(m_speedReference_, other_.m_speedReference_);
                swap(m_standoffDistance_, other_.m_standoffDistance_);
                swap(m_travelDirection_, other_.m_travelDirection_);
                swap(m_travelMethod_, other_.m_travelMethod_);
            }  

            bool RetrotraverseType::operator == (const RetrotraverseType& other_) const {
                if (std::fabs(m_distance_ - other_.m_distance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distance_ - other_.m_distance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxSpeed_ - other_.m_maxSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxSpeed_ - other_.m_maxSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                if (m_speedReference_ != other_.m_speedReference_) {
                    return false;
                }
                if (std::fabs(m_standoffDistance_ - other_.m_standoffDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_standoffDistance_ - other_.m_standoffDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_travelDirection_ != other_.m_travelDirection_) {
                    return false;
                }
                if (m_travelMethod_ != other_.m_travelMethod_) {
                    return false;
                }
                return true;
            }

            bool RetrotraverseType::operator != (const RetrotraverseType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RetrotraverseType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "distance: " << std::setprecision(15) << sample.distance ()<<", ";
                o << "maxSpeed: " << std::setprecision(15) << sample.maxSpeed ()<<", ";
                o << "mode: " << sample.mode ()<<", ";
                o << "speedReference: " << sample.speedReference ()<<", ";
                o << "standoffDistance: " << std::setprecision(15) << sample.standoffDistance ()<<", ";
                o << "travelDirection: " << sample.travelDirection ()<<", ";
                o << "travelMethod: " << sample.travelMethod ();
                o <<"]";
                return o;
            }

        } // namespace Retrotraverse  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::MM::Retrotraverse::RetrotraverseType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RetrotraverseType_g_tc_members[7]=
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
                        (char *)"maxSpeed",/* Member name */
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
                        (char *)"mode",/* Member name */
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
                        (char *)"speedReference",/* Member name */
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
                        (char *)"standoffDistance",/* Member name */
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
                        (char *)"travelDirection",/* Member name */
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
                        (char *)"travelMethod",/* Member name */
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

                static DDS_TypeCode RetrotraverseType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::Retrotraverse::RetrotraverseType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        RetrotraverseType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RetrotraverseType*/

                if (is_initialized) {
                    return &RetrotraverseType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RetrotraverseType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RetrotraverseType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RetrotraverseType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                RetrotraverseType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType>::get().native();
                RetrotraverseType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType>::get().native();
                RetrotraverseType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RetrotraverseType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RetrotraverseType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                RetrotraverseType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                RetrotraverseType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                RetrotraverseType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
                RetrotraverseType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                RetrotraverseType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                RetrotraverseType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[1]._annotations._maxValue._u.double_value = 299792458ULL;
                RetrotraverseType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RetrotraverseType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;
                RetrotraverseType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RetrotraverseType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                RetrotraverseType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                RetrotraverseType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                RetrotraverseType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RetrotraverseType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;
                RetrotraverseType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RetrotraverseType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                RetrotraverseType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RetrotraverseType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                RetrotraverseType_g_tc._data._sampleAccessInfo = sample_access_info();
                RetrotraverseType_g_tc._data._typePlugin = type_plugin_info();    

                return &RetrotraverseType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::Retrotraverse::RetrotraverseType *sample;

                static RTIXCdrMemberAccessInfo RetrotraverseType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RetrotraverseType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RetrotraverseType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::Retrotraverse::RetrotraverseType);
                if (sample == NULL) {
                    return NULL;
                }

                RetrotraverseType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distance() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxSpeed() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedReference() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->standoffDistance() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->travelDirection() - (char *)sample);

                RetrotraverseType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->travelMethod() - (char *)sample);

                RetrotraverseType_g_sampleAccessInfo.memberAccessInfos = 
                RetrotraverseType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::Retrotraverse::RetrotraverseType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RetrotraverseType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RetrotraverseType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RetrotraverseType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RetrotraverseType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::Retrotraverse::RetrotraverseType >;

                RetrotraverseType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RetrotraverseType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RetrotraverseType_g_typePlugin = 
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
                    NULL,
                    NULL
                };

                return &RetrotraverseType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::Retrotraverse::RetrotraverseType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::Retrotraverse::RetrotraverseType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::Retrotraverse::RetrotraverseTypePlugin_new,
                ::UMAA::MM::Retrotraverse::RetrotraverseTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::Retrotraverse::RetrotraverseType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RetrotraverseTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RetrotraverseTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType >::from_cdr_buffer(::UMAA::MM::Retrotraverse::RetrotraverseType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RetrotraverseTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::Retrotraverse::RetrotraverseType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType >::reset_sample(::UMAA::MM::Retrotraverse::RetrotraverseType& sample) 
        {
            sample.distance(0.0);
            sample.maxSpeed(0.0);
            sample.mode(UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType::LRC);
            sample.speedReference(UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType::SPEED_THROUGH_AIR);
            sample.standoffDistance(0.0);
            sample.travelDirection(0);
            sample.travelMethod(0);
        }

        void topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType >::allocate_sample(::UMAA::MM::Retrotraverse::RetrotraverseType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speedReference(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
