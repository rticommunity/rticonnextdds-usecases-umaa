

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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
#include "WaypointDetailedStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WaypointDetailedStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- WaypointDetailedStatusType: 

            WaypointDetailedStatusType::WaypointDetailedStatusType() :
                m_errors_ ("") ,
                m_feedback_ ("") ,
                m_state_(UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::ACHIEVED) ,
                m_warnings_ ("")  {

            }   

            WaypointDetailedStatusType::WaypointDetailedStatusType (const ::dds::core::optional< double >& avgCrossTrackError_,const ::dds::core::optional< double >& avgSpeed_,const std::string& errors_,const std::string& feedback_,const ::dds::core::optional< double >& maxCrossTrackError_,const ::dds::core::optional< double >& maxSpeed_,const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType& state_,const std::string& warnings_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_):
                m_avgCrossTrackError_(avgCrossTrackError_), 
                m_avgSpeed_(avgSpeed_), 
                m_errors_(errors_), 
                m_feedback_(feedback_), 
                m_maxCrossTrackError_(maxCrossTrackError_), 
                m_maxSpeed_(maxSpeed_), 
                m_state_(state_), 
                m_warnings_(warnings_), 
                m_waypointID_(waypointID_) {
            }

            void WaypointDetailedStatusType::swap(WaypointDetailedStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_avgCrossTrackError_, other_.m_avgCrossTrackError_);
                swap(m_avgSpeed_, other_.m_avgSpeed_);
                swap(m_errors_, other_.m_errors_);
                swap(m_feedback_, other_.m_feedback_);
                swap(m_maxCrossTrackError_, other_.m_maxCrossTrackError_);
                swap(m_maxSpeed_, other_.m_maxSpeed_);
                swap(m_state_, other_.m_state_);
                swap(m_warnings_, other_.m_warnings_);
                swap(m_waypointID_, other_.m_waypointID_);
            }  

            bool WaypointDetailedStatusType::operator == (const WaypointDetailedStatusType& other_) const {
                if (m_avgCrossTrackError_.has_value() != other_.m_avgCrossTrackError_.has_value()) {
                    return false;
                } else if (m_avgCrossTrackError_.has_value()) {
                    if (std::fabs(*m_avgCrossTrackError_ - *other_.m_avgCrossTrackError_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_avgCrossTrackError_ - *other_.m_avgCrossTrackError_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_avgSpeed_.has_value() != other_.m_avgSpeed_.has_value()) {
                    return false;
                } else if (m_avgSpeed_.has_value()) {
                    if (std::fabs(*m_avgSpeed_ - *other_.m_avgSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_avgSpeed_ - *other_.m_avgSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_errors_ != other_.m_errors_) {
                    return false;
                }
                if (m_feedback_ != other_.m_feedback_) {
                    return false;
                }
                if (m_maxCrossTrackError_.has_value() != other_.m_maxCrossTrackError_.has_value()) {
                    return false;
                } else if (m_maxCrossTrackError_.has_value()) {
                    if (std::fabs(*m_maxCrossTrackError_ - *other_.m_maxCrossTrackError_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxCrossTrackError_ - *other_.m_maxCrossTrackError_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxSpeed_.has_value() != other_.m_maxSpeed_.has_value()) {
                    return false;
                } else if (m_maxSpeed_.has_value()) {
                    if (std::fabs(*m_maxSpeed_ - *other_.m_maxSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxSpeed_ - *other_.m_maxSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_warnings_ != other_.m_warnings_) {
                    return false;
                }
                if (m_waypointID_ != other_.m_waypointID_) {
                    return false;
                }
                return true;
            }

            bool WaypointDetailedStatusType::operator != (const WaypointDetailedStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WaypointDetailedStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "avgCrossTrackError: " << sample.avgCrossTrackError ()<<", ";
                o << "avgSpeed: " << sample.avgSpeed ()<<", ";
                o << "errors: " << sample.errors ()<<", ";
                o << "feedback: " << sample.feedback ()<<", ";
                o << "maxCrossTrackError: " << sample.maxCrossTrackError ()<<", ";
                o << "maxSpeed: " << sample.maxSpeed ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "warnings: " << sample.warnings ()<<", ";
                o << "waypointID: " << sample.waypointID ();
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
        struct native_type_code< ::UMAA::MM::BaseType::WaypointDetailedStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointDetailedStatusType_g_tc_members[9]=
                {

                    {
                        (char *)"avgCrossTrackError",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"avgSpeed",/* Member name */
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
                        (char *)"errors",/* Member name */
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
                        (char *)"feedback",/* Member name */
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
                        (char *)"maxCrossTrackError",/* Member name */
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
                        (char *)"maxSpeed",/* Member name */
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
                        (char *)"state",/* Member name */
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
                        (char *)"warnings",/* Member name */
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
                    }, 
                    {
                        (char *)"waypointID",/* Member name */
                        {
                            8,/* Representation ID */
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

                static DDS_TypeCode WaypointDetailedStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::WaypointDetailedStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        WaypointDetailedStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaypointDetailedStatusType*/

                if (is_initialized) {
                    return &WaypointDetailedStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaypointDetailedStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WaypointDetailedStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType>::get().native();
                WaypointDetailedStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                WaypointDetailedStatusType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WaypointDetailedStatusType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaypointDetailedStatusType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaypointDetailedStatusType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaypointDetailedStatusType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaypointDetailedStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WaypointDetailedStatusType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                WaypointDetailedStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WaypointDetailedStatusType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                WaypointDetailedStatusType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaypointDetailedStatusType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaypointDetailedStatusType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WaypointDetailedStatusType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointDetailedStatusType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WaypointDetailedStatusType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WaypointDetailedStatusType_g_tc_members[6]._annotations._defaultValue._u.enumerated_value = 0;
                WaypointDetailedStatusType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WaypointDetailedStatusType_g_tc_members[7]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WaypointDetailedStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaypointDetailedStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaypointDetailedStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::WaypointDetailedStatusType *sample;

                static RTIXCdrMemberAccessInfo WaypointDetailedStatusType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaypointDetailedStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaypointDetailedStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::WaypointDetailedStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                WaypointDetailedStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->avgCrossTrackError() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->avgSpeed() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errors() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->feedback() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCrossTrackError() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxSpeed() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->warnings() - (char *)sample);

                WaypointDetailedStatusType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointID() - (char *)sample);

                WaypointDetailedStatusType_g_sampleAccessInfo.memberAccessInfos = 
                WaypointDetailedStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::WaypointDetailedStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaypointDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaypointDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaypointDetailedStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaypointDetailedStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::WaypointDetailedStatusType >;

                WaypointDetailedStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaypointDetailedStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaypointDetailedStatusType_g_typePlugin = 
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

                return &WaypointDetailedStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::WaypointDetailedStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::WaypointDetailedStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::WaypointDetailedStatusType >::reset_sample(::UMAA::MM::BaseType::WaypointDetailedStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.avgCrossTrackError());
            ::rti::topic::reset_sample(sample.avgSpeed());
            sample.errors("");
            sample.feedback("");
            ::rti::topic::reset_sample(sample.maxCrossTrackError());
            ::rti::topic::reset_sample(sample.maxSpeed());
            sample.state(UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::ACHIEVED);
            sample.warnings("");
            ::rti::topic::reset_sample(sample.waypointID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::WaypointDetailedStatusType >::allocate_sample(::UMAA::MM::BaseType::WaypointDetailedStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.errors(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.feedback(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.warnings(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.waypointID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
