

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepObjectiveType.idl
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
#include "StationkeepObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StationkeepObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- StationkeepObjectiveType: 

            StationkeepObjectiveType::StationkeepObjectiveType() :
                m_angleType_(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP) ,
                m_bearing_ (0.0) ,
                m_closingSpeed_ (0.0) ,
                m_distance_ (0.0)  {

            }   

            StationkeepObjectiveType::StationkeepObjectiveType (const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType_,double bearing_,double closingSpeed_,const ::UMAA::Common::Measurement::NumericGUID& contactTrackID_,double distance_,const ::dds::core::optional< double >& duration_):
                m_angleType_(angleType_), 
                m_bearing_(bearing_), 
                m_closingSpeed_(closingSpeed_), 
                m_contactTrackID_(contactTrackID_), 
                m_distance_(distance_), 
                m_duration_(duration_) {
            }

            void StationkeepObjectiveType::swap(StationkeepObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_angleType_, other_.m_angleType_);
                swap(m_bearing_, other_.m_bearing_);
                swap(m_closingSpeed_, other_.m_closingSpeed_);
                swap(m_contactTrackID_, other_.m_contactTrackID_);
                swap(m_distance_, other_.m_distance_);
                swap(m_duration_, other_.m_duration_);
            }  

            bool StationkeepObjectiveType::operator == (const StationkeepObjectiveType& other_) const {
                if (m_angleType_ != other_.m_angleType_) {
                    return false;
                }
                if (std::fabs(m_bearing_ - other_.m_bearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearing_ - other_.m_bearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_contactTrackID_ != other_.m_contactTrackID_) {
                    return false;
                }
                if (std::fabs(m_distance_ - other_.m_distance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distance_ - other_.m_distance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_duration_.has_value() != other_.m_duration_.has_value()) {
                    return false;
                } else if (m_duration_.has_value()) {
                    if (std::fabs(*m_duration_ - *other_.m_duration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_duration_ - *other_.m_duration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool StationkeepObjectiveType::operator != (const StationkeepObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "angleType: " << sample.angleType ()<<", ";
                o << "bearing: " << std::setprecision(15) << sample.bearing ()<<", ";
                o << "closingSpeed: " << std::setprecision(15) << sample.closingSpeed ()<<", ";
                o << "contactTrackID: " << sample.contactTrackID ()<<", ";
                o << "distance: " << std::setprecision(15) << sample.distance ()<<", ";
                o << "duration: " << sample.duration ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

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
        struct native_type_code< ::UMAA::MM::BaseType::StationkeepObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepObjectiveType_g_tc_members[6]=
                {

                    {
                        (char *)"angleType",/* Member name */
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
                        (char *)"bearing",/* Member name */
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
                        (char *)"closingSpeed",/* Member name */
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
                        (char *)"contactTrackID",/* Member name */
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
                        (char *)"distance",/* Member name */
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
                        (char *)"duration",/* Member name */
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
                    }
                };

                static DDS_TypeCode StationkeepObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::StationkeepObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        StationkeepObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepObjectiveType*/

                if (is_initialized) {
                    return &StationkeepObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType>::get().native();
                StationkeepObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                StationkeepObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                StationkeepObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                StationkeepObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StationkeepObjectiveType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                StationkeepObjectiveType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepObjectiveType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                StationkeepObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 200ULL;
                StationkeepObjectiveType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                StationkeepObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;
                StationkeepObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                StationkeepObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 37817280ULL;

                StationkeepObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::StationkeepObjectiveType *sample;

                static RTIXCdrMemberAccessInfo StationkeepObjectiveType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::StationkeepObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angleType() - (char *)sample);

                StationkeepObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                StationkeepObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->closingSpeed() - (char *)sample);

                StationkeepObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactTrackID() - (char *)sample);

                StationkeepObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distance() - (char *)sample);

                StationkeepObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                StationkeepObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::StationkeepObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::StationkeepObjectiveType >;

                StationkeepObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepObjectiveType_g_typePlugin = 
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

                return &StationkeepObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::StationkeepObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::StationkeepObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::StationkeepObjectiveTypePlugin_new,
                ::UMAA::MM::BaseType::StationkeepObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::StationkeepObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveType >::from_cdr_buffer(::UMAA::MM::BaseType::StationkeepObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::StationkeepObjectiveType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveType >::reset_sample(::UMAA::MM::BaseType::StationkeepObjectiveType& sample) 
        {
            sample.angleType(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP);
            sample.bearing(0.0);
            sample.closingSpeed(0.0);
            ::rti::topic::reset_sample(sample.contactTrackID());
            sample.distance(0.0);
            ::rti::topic::reset_sample(sample.duration());
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveType >::allocate_sample(::UMAA::MM::BaseType::StationkeepObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.angleType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactTrackID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
