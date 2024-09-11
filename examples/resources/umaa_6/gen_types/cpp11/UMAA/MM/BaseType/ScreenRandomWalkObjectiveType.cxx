

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScreenRandomWalkObjectiveType.idl
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
#include "ScreenRandomWalkObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ScreenRandomWalkObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ScreenRandomWalkObjectiveType: 

            ScreenRandomWalkObjectiveType::ScreenRandomWalkObjectiveType() :
                m_maxTimeOnCourse_ (0.0) ,
                m_minTimeOnCourse_ (0.0)  {

            }   

            ScreenRandomWalkObjectiveType::ScreenRandomWalkObjectiveType (const ::UMAA::MM::BaseType::AnnulusSectorRequirementType& area_,const ::dds::core::optional< double >& duration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation_,const ::UMAA::Common::Measurement::NumericGUID& guideID_,const ::UMAA::Common::Speed::SpeedVariantType& maxSpeed_,double maxTimeOnCourse_,const ::UMAA::Common::Speed::SpeedVariantType& minSpeed_,double minTimeOnCourse_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& transitElevation_,const ::UMAA::Common::Speed::SpeedVariantType& transitSpeed_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_):
                m_area_(area_), 
                m_duration_(duration_), 
                m_elevation_(elevation_), 
                m_guideID_(guideID_), 
                m_maxSpeed_(maxSpeed_), 
                m_maxTimeOnCourse_(maxTimeOnCourse_), 
                m_minSpeed_(minSpeed_), 
                m_minTimeOnCourse_(minTimeOnCourse_), 
                m_transitElevation_(transitElevation_), 
                m_transitSpeed_(transitSpeed_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_) {
            }

            void ScreenRandomWalkObjectiveType::swap(ScreenRandomWalkObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_area_, other_.m_area_);
                swap(m_duration_, other_.m_duration_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_guideID_, other_.m_guideID_);
                swap(m_maxSpeed_, other_.m_maxSpeed_);
                swap(m_maxTimeOnCourse_, other_.m_maxTimeOnCourse_);
                swap(m_minSpeed_, other_.m_minSpeed_);
                swap(m_minTimeOnCourse_, other_.m_minTimeOnCourse_);
                swap(m_transitElevation_, other_.m_transitElevation_);
                swap(m_transitSpeed_, other_.m_transitSpeed_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
            }  

            bool ScreenRandomWalkObjectiveType::operator == (const ScreenRandomWalkObjectiveType& other_) const {
                if (m_area_ != other_.m_area_) {
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
                if (m_elevation_ != other_.m_elevation_) {
                    return false;
                }
                if (m_guideID_ != other_.m_guideID_) {
                    return false;
                }
                if (m_maxSpeed_ != other_.m_maxSpeed_) {
                    return false;
                }
                if (std::fabs(m_maxTimeOnCourse_ - other_.m_maxTimeOnCourse_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxTimeOnCourse_ - other_.m_maxTimeOnCourse_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_minSpeed_ != other_.m_minSpeed_) {
                    return false;
                }
                if (std::fabs(m_minTimeOnCourse_ - other_.m_minTimeOnCourse_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minTimeOnCourse_ - other_.m_minTimeOnCourse_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_transitElevation_ != other_.m_transitElevation_) {
                    return false;
                }
                if (m_transitSpeed_ != other_.m_transitSpeed_) {
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

            bool ScreenRandomWalkObjectiveType::operator != (const ScreenRandomWalkObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ScreenRandomWalkObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "area: " << sample.area ()<<", ";
                o << "duration: " << sample.duration ()<<", ";
                o << "elevation: " << sample.elevation ()<<", ";
                o << "guideID: " << sample.guideID ()<<", ";
                o << "maxSpeed: " << sample.maxSpeed ()<<", ";
                o << "maxTimeOnCourse: " << std::setprecision(15) << sample.maxTimeOnCourse ()<<", ";
                o << "minSpeed: " << sample.minSpeed ()<<", ";
                o << "minTimeOnCourse: " << std::setprecision(15) << sample.minTimeOnCourse ()<<", ";
                o << "transitElevation: " << sample.transitElevation ()<<", ";
                o << "transitSpeed: " << sample.transitSpeed ()<<", ";
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
        struct native_type_code< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ScreenRandomWalkObjectiveType_g_tc_members[12]=
                {

                    {
                        (char *)"area",/* Member name */
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
                        (char *)"duration",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"guideID",/* Member name */
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
                        (char *)"maxSpeed",/* Member name */
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
                        (char *)"maxTimeOnCourse",/* Member name */
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
                        (char *)"minSpeed",/* Member name */
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
                        (char *)"minTimeOnCourse",/* Member name */
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
                        (char *)"transitElevation",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"transitSpeed",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
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

                static DDS_TypeCode ScreenRandomWalkObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ScreenRandomWalkObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        ScreenRandomWalkObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ScreenRandomWalkObjectiveType*/

                if (is_initialized) {
                    return &ScreenRandomWalkObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ScreenRandomWalkObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ScreenRandomWalkObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::AnnulusSectorRequirementType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationVariantType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedVariantType>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ScreenRandomWalkObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ScreenRandomWalkObjectiveType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ScreenRandomWalkObjectiveType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ScreenRandomWalkObjectiveType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ScreenRandomWalkObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                ScreenRandomWalkObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &ScreenRandomWalkObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType *sample;

                static RTIXCdrMemberAccessInfo ScreenRandomWalkObjectiveType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ScreenRandomWalkObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ScreenRandomWalkObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->area() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->guideID() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxSpeed() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTimeOnCourse() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minSpeed() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTimeOnCourse() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevation() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeed() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                ScreenRandomWalkObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                ScreenRandomWalkObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ScreenRandomWalkObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ScreenRandomWalkObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ScreenRandomWalkObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ScreenRandomWalkObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >;

                ScreenRandomWalkObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ScreenRandomWalkObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ScreenRandomWalkObjectiveType_g_typePlugin = 
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

                return &ScreenRandomWalkObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveTypePlugin_new,
                ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ScreenRandomWalkObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ScreenRandomWalkObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::from_cdr_buffer(::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ScreenRandomWalkObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::reset_sample(::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType& sample) 
        {
            ::rti::topic::reset_sample(sample.area());
            ::rti::topic::reset_sample(sample.duration());
            ::rti::topic::reset_sample(sample.elevation());
            ::rti::topic::reset_sample(sample.guideID());
            ::rti::topic::reset_sample(sample.maxSpeed());
            sample.maxTimeOnCourse(0.0);
            ::rti::topic::reset_sample(sample.minSpeed());
            sample.minTimeOnCourse(0.0);
            ::rti::topic::reset_sample(sample.transitElevation());
            ::rti::topic::reset_sample(sample.transitSpeed());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType >::allocate_sample(::UMAA::MM::BaseType::ScreenRandomWalkObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.area(),  -1, -1);
            ::rti::topic::allocate_sample(sample.guideID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.maxSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.minSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
