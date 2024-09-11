

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepObjectiveDetailedStatusType.idl
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
#include "StationkeepObjectiveDetailedStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StationkeepObjectiveDetailedStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- StationkeepObjectiveDetailedStatusType: 

            StationkeepObjectiveDetailedStatusType::StationkeepObjectiveDetailedStatusType() :
                m_closingSpeed_ (0.0) ,
                m_distanceFromTrack_ (0.0) ,
                m_guideLost_ (0) ,
                m_isAreaAchieved_ (0) ,
                m_isInPattern_ (0)  {

            }   

            StationkeepObjectiveDetailedStatusType::StationkeepObjectiveDetailedStatusType (const ::dds::core::optional< double >& bearingGuide_,const ::dds::core::optional< double >& bearingMagneticNorth_,const ::dds::core::optional< double >& bearingTrueNorth_,double closingSpeed_,double distanceFromTrack_,bool guideLost_,bool isAreaAchieved_,bool isInPattern_,const ::UMAA::Common::Measurement::DateTime& timePatternAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_):
                m_bearingGuide_(bearingGuide_), 
                m_bearingMagneticNorth_(bearingMagneticNorth_), 
                m_bearingTrueNorth_(bearingTrueNorth_), 
                m_closingSpeed_(closingSpeed_), 
                m_distanceFromTrack_(distanceFromTrack_), 
                m_guideLost_(guideLost_), 
                m_isAreaAchieved_(isAreaAchieved_), 
                m_isInPattern_(isInPattern_), 
                m_timePatternAchieved_(timePatternAchieved_), 
                m_timePatternCompleted_(timePatternCompleted_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_) {
            }

            void StationkeepObjectiveDetailedStatusType::swap(StationkeepObjectiveDetailedStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearingGuide_, other_.m_bearingGuide_);
                swap(m_bearingMagneticNorth_, other_.m_bearingMagneticNorth_);
                swap(m_bearingTrueNorth_, other_.m_bearingTrueNorth_);
                swap(m_closingSpeed_, other_.m_closingSpeed_);
                swap(m_distanceFromTrack_, other_.m_distanceFromTrack_);
                swap(m_guideLost_, other_.m_guideLost_);
                swap(m_isAreaAchieved_, other_.m_isAreaAchieved_);
                swap(m_isInPattern_, other_.m_isInPattern_);
                swap(m_timePatternAchieved_, other_.m_timePatternAchieved_);
                swap(m_timePatternCompleted_, other_.m_timePatternCompleted_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
            }  

            bool StationkeepObjectiveDetailedStatusType::operator == (const StationkeepObjectiveDetailedStatusType& other_) const {
                if (m_bearingGuide_.has_value() != other_.m_bearingGuide_.has_value()) {
                    return false;
                } else if (m_bearingGuide_.has_value()) {
                    if (std::fabs(*m_bearingGuide_ - *other_.m_bearingGuide_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_bearingGuide_ - *other_.m_bearingGuide_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_bearingMagneticNorth_.has_value() != other_.m_bearingMagneticNorth_.has_value()) {
                    return false;
                } else if (m_bearingMagneticNorth_.has_value()) {
                    if (std::fabs(*m_bearingMagneticNorth_ - *other_.m_bearingMagneticNorth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_bearingMagneticNorth_ - *other_.m_bearingMagneticNorth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_bearingTrueNorth_.has_value() != other_.m_bearingTrueNorth_.has_value()) {
                    return false;
                } else if (m_bearingTrueNorth_.has_value()) {
                    if (std::fabs(*m_bearingTrueNorth_ - *other_.m_bearingTrueNorth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_bearingTrueNorth_ - *other_.m_bearingTrueNorth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_distanceFromTrack_ - other_.m_distanceFromTrack_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceFromTrack_ - other_.m_distanceFromTrack_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_guideLost_ != other_.m_guideLost_) {
                    return false;
                }
                if (m_isAreaAchieved_ != other_.m_isAreaAchieved_) {
                    return false;
                }
                if (m_isInPattern_ != other_.m_isInPattern_) {
                    return false;
                }
                if (m_timePatternAchieved_ != other_.m_timePatternAchieved_) {
                    return false;
                }
                if (m_timePatternCompleted_ != other_.m_timePatternCompleted_) {
                    return false;
                }
                if (m_specializationReferenceTimestamp_ != other_.m_specializationReferenceTimestamp_) {
                    return false;
                }
                if (m_specializationReferenceID_ != other_.m_specializationReferenceID_) {
                    return false;
                }
                return true;
            }

            bool StationkeepObjectiveDetailedStatusType::operator != (const StationkeepObjectiveDetailedStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepObjectiveDetailedStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearingGuide: " << sample.bearingGuide ()<<", ";
                o << "bearingMagneticNorth: " << sample.bearingMagneticNorth ()<<", ";
                o << "bearingTrueNorth: " << sample.bearingTrueNorth ()<<", ";
                o << "closingSpeed: " << std::setprecision(15) << sample.closingSpeed ()<<", ";
                o << "distanceFromTrack: " << std::setprecision(15) << sample.distanceFromTrack ()<<", ";
                o << "guideLost: " << sample.guideLost ()<<", ";
                o << "isAreaAchieved: " << sample.isAreaAchieved ()<<", ";
                o << "isInPattern: " << sample.isInPattern ()<<", ";
                o << "timePatternAchieved: " << sample.timePatternAchieved ()<<", ";
                o << "timePatternCompleted: " << sample.timePatternCompleted ()<<", ";
                o << "specializationReferenceTimestamp: " << sample.specializationReferenceTimestamp ()<<", ";
                o << "specializationReferenceID: " << sample.specializationReferenceID ();
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
        struct native_type_code< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepObjectiveDetailedStatusType_g_tc_members[12]=
                {

                    {
                        (char *)"bearingGuide",/* Member name */
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
                        (char *)"bearingMagneticNorth",/* Member name */
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
                        (char *)"bearingTrueNorth",/* Member name */
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
                        (char *)"closingSpeed",/* Member name */
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
                        (char *)"distanceFromTrack",/* Member name */
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
                        (char *)"guideLost",/* Member name */
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
                        (char *)"isAreaAchieved",/* Member name */
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
                        (char *)"isInPattern",/* Member name */
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
                        (char *)"timePatternAchieved",/* Member name */
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
                    }, 
                    {
                        (char *)"timePatternCompleted",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"specializationReferenceTimestamp",/* Member name */
                        {
                            10,/* Representation ID */
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
                            11,/* Representation ID */
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

                static DDS_TypeCode StationkeepObjectiveDetailedStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        StationkeepObjectiveDetailedStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepObjectiveDetailedStatusType*/

                if (is_initialized) {
                    return &StationkeepObjectiveDetailedStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepObjectiveDetailedStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepObjectiveDetailedStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingTarget_AliasTag_t>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepObjectiveDetailedStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepObjectiveDetailedStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepObjectiveDetailedStatusType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepObjectiveDetailedStatusType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                StationkeepObjectiveDetailedStatusType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveDetailedStatusType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveDetailedStatusType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepObjectiveDetailedStatusType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepObjectiveDetailedStatusType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                StationkeepObjectiveDetailedStatusType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                StationkeepObjectiveDetailedStatusType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepObjectiveDetailedStatusType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                StationkeepObjectiveDetailedStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepObjectiveDetailedStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepObjectiveDetailedStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType *sample;

                static RTIXCdrMemberAccessInfo StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingGuide() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingMagneticNorth() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingTrueNorth() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->closingSpeed() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceFromTrack() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->guideLost() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isAreaAchieved() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isInPattern() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternAchieved() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternCompleted() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepObjectiveDetailedStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >;

                StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepObjectiveDetailedStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepObjectiveDetailedStatusType_g_typePlugin = 
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

                return &StationkeepObjectiveDetailedStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusTypePlugin_new,
                ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::from_cdr_buffer(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::reset_sample(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.bearingGuide());
            ::rti::topic::reset_sample(sample.bearingMagneticNorth());
            ::rti::topic::reset_sample(sample.bearingTrueNorth());
            sample.closingSpeed(0.0);
            sample.distanceFromTrack(0.0);
            sample.guideLost(0);
            sample.isAreaAchieved(0);
            sample.isInPattern(0);
            ::rti::topic::reset_sample(sample.timePatternAchieved());
            ::rti::topic::reset_sample(sample.timePatternCompleted());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType >::allocate_sample(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timePatternAchieved(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
