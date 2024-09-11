

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveDetailedStatusType.idl
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
#include "RouteObjectiveDetailedStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RouteObjectiveDetailedStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- RouteObjectiveDetailedStatusType: 

            RouteObjectiveDetailedStatusType::RouteObjectiveDetailedStatusType() :
                m_distanceRemaining_ (0.0) ,
                m_distanceToWaypoint_ (0.0)  {

            }   

            RouteObjectiveDetailedStatusType::RouteObjectiveDetailedStatusType (const ::dds::core::optional< double >& crossTrackError_,const ::UMAA::Common::Measurement::NumericGUID& currentWaypointID_,double distanceRemaining_,double distanceToWaypoint_,const ::dds::core::optional< bool >& isCrossTrackLimitAchieved_,const ::UMAA::Common::Speed::SpeedVariantType& speedToWaypoint_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_,const ::UMAA::Common::LargeSetMetadata& waypointDetailedStatusSetMetadata_):
                m_crossTrackError_(crossTrackError_), 
                m_currentWaypointID_(currentWaypointID_), 
                m_distanceRemaining_(distanceRemaining_), 
                m_distanceToWaypoint_(distanceToWaypoint_), 
                m_isCrossTrackLimitAchieved_(isCrossTrackLimitAchieved_), 
                m_speedToWaypoint_(speedToWaypoint_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_), 
                m_waypointDetailedStatusSetMetadata_(waypointDetailedStatusSetMetadata_) {
            }

            void RouteObjectiveDetailedStatusType::swap(RouteObjectiveDetailedStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_crossTrackError_, other_.m_crossTrackError_);
                swap(m_currentWaypointID_, other_.m_currentWaypointID_);
                swap(m_distanceRemaining_, other_.m_distanceRemaining_);
                swap(m_distanceToWaypoint_, other_.m_distanceToWaypoint_);
                swap(m_isCrossTrackLimitAchieved_, other_.m_isCrossTrackLimitAchieved_);
                swap(m_speedToWaypoint_, other_.m_speedToWaypoint_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
                swap(m_waypointDetailedStatusSetMetadata_, other_.m_waypointDetailedStatusSetMetadata_);
            }  

            bool RouteObjectiveDetailedStatusType::operator == (const RouteObjectiveDetailedStatusType& other_) const {
                if (m_crossTrackError_.has_value() != other_.m_crossTrackError_.has_value()) {
                    return false;
                } else if (m_crossTrackError_.has_value()) {
                    if (std::fabs(*m_crossTrackError_ - *other_.m_crossTrackError_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_crossTrackError_ - *other_.m_crossTrackError_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_currentWaypointID_ != other_.m_currentWaypointID_) {
                    return false;
                }
                if (std::fabs(m_distanceRemaining_ - other_.m_distanceRemaining_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceRemaining_ - other_.m_distanceRemaining_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_distanceToWaypoint_ - other_.m_distanceToWaypoint_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceToWaypoint_ - other_.m_distanceToWaypoint_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_isCrossTrackLimitAchieved_ != other_.m_isCrossTrackLimitAchieved_) {
                    return false;
                }
                if (m_speedToWaypoint_ != other_.m_speedToWaypoint_) {
                    return false;
                }
                if (m_specializationReferenceTimestamp_ != other_.m_specializationReferenceTimestamp_) {
                    return false;
                }
                if (m_specializationReferenceID_ != other_.m_specializationReferenceID_) {
                    return false;
                }
                if (m_waypointDetailedStatusSetMetadata_ != other_.m_waypointDetailedStatusSetMetadata_) {
                    return false;
                }
                return true;
            }

            bool RouteObjectiveDetailedStatusType::operator != (const RouteObjectiveDetailedStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RouteObjectiveDetailedStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "crossTrackError: " << sample.crossTrackError ()<<", ";
                o << "currentWaypointID: " << sample.currentWaypointID ()<<", ";
                o << "distanceRemaining: " << std::setprecision(15) << sample.distanceRemaining ()<<", ";
                o << "distanceToWaypoint: " << std::setprecision(15) << sample.distanceToWaypoint ()<<", ";
                o << "isCrossTrackLimitAchieved: " << sample.isCrossTrackLimitAchieved ()<<", ";
                o << "speedToWaypoint: " << sample.speedToWaypoint ()<<", ";
                o << "specializationReferenceTimestamp: " << sample.specializationReferenceTimestamp ()<<", ";
                o << "specializationReferenceID: " << sample.specializationReferenceID ()<<", ";
                o << "waypointDetailedStatusSetMetadata: " << sample.waypointDetailedStatusSetMetadata ();
                o <<"]";
                return o;
            }

            // ---- RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement: 

            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement()  {

            }   

            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement (const ::UMAA::MM::BaseType::WaypointDetailedStatusType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_):
                m_element_(element_), 
                m_setID_(setID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_) {
            }

            void RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement::swap(RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_setID_, other_.m_setID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
            }  

            bool RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement::operator == (const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_setID_ != other_.m_setID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                return true;
            }

            bool RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement::operator != (const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "setID: " << sample.setID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ();
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
        struct native_type_code< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RouteObjectiveDetailedStatusType_g_tc_members[9]=
                {

                    {
                        (char *)"crossTrackError",/* Member name */
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
                        (char *)"currentWaypointID",/* Member name */
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
                        (char *)"distanceRemaining",/* Member name */
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
                        (char *)"distanceToWaypoint",/* Member name */
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
                        (char *)"isCrossTrackLimitAchieved",/* Member name */
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
                        (char *)"speedToWaypoint",/* Member name */
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
                        (char *)"specializationReferenceTimestamp",/* Member name */
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
                        (char *)"specializationReferenceID",/* Member name */
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
                    }, 
                    {
                        (char *)"waypointDetailedStatusSetMetadata",/* Member name */
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

                static DDS_TypeCode RouteObjectiveDetailedStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::RouteObjectiveDetailedStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        RouteObjectiveDetailedStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RouteObjectiveDetailedStatusType*/

                if (is_initialized) {
                    return &RouteObjectiveDetailedStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RouteObjectiveDetailedStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RouteObjectiveDetailedStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RouteObjectiveDetailedStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantType>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeSetMetadata>::get().native();

                /* Initialize the values for member annotations. */
                RouteObjectiveDetailedStatusType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RouteObjectiveDetailedStatusType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RouteObjectiveDetailedStatusType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RouteObjectiveDetailedStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                RouteObjectiveDetailedStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &RouteObjectiveDetailedStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType *sample;

                static RTIXCdrMemberAccessInfo RouteObjectiveDetailedStatusType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RouteObjectiveDetailedStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RouteObjectiveDetailedStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->crossTrackError() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->currentWaypointID() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceRemaining() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceToWaypoint() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isCrossTrackLimitAchieved() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedToWaypoint() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointDetailedStatusSetMetadata() - (char *)sample);

                RouteObjectiveDetailedStatusType_g_sampleAccessInfo.memberAccessInfos = 
                RouteObjectiveDetailedStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RouteObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RouteObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RouteObjectiveDetailedStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RouteObjectiveDetailedStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >;

                RouteObjectiveDetailedStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RouteObjectiveDetailedStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RouteObjectiveDetailedStatusType_g_typePlugin = 
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

                return &RouteObjectiveDetailedStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members[4]=
                {

                    {
                        (char *)"element",/* Member name */
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
                        (char *)"setID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
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
                        (char *)"elementTimestamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*/

                if (is_initialized) {
                    return &RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointDetailedStatusType>::get().native();
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc._data._sampleAccessInfo = sample_access_info();
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc._data._typePlugin = type_plugin_info();    

                return &RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample;

                static RTIXCdrMemberAccessInfo RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement);
                if (sample == NULL) {
                    return NULL;
                }

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setID() - (char *)sample);

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.memberAccessInfos = 
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >;

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_typePlugin = 
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

                return &RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypePlugin_new,
                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RouteObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RouteObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RouteObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::reset_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.crossTrackError());
            ::rti::topic::reset_sample(sample.currentWaypointID());
            sample.distanceRemaining(0.0);
            sample.distanceToWaypoint(0.0);
            ::rti::topic::reset_sample(sample.isCrossTrackLimitAchieved());
            ::rti::topic::reset_sample(sample.speedToWaypoint());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
            ::rti::topic::reset_sample(sample.waypointDetailedStatusSetMetadata());
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType >::allocate_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.currentWaypointID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speedToWaypoint(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waypointDetailedStatusSetMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_new,
                ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::reset_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.setID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement >::allocate_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.setID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
