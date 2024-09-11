

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseType.idl
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
#include "PoseTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PoseType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Environment {

            // ---- PoseType: 

            PoseType::PoseType() :
                m_course_ (0.0) ,
                m_navigationSolution_(UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::ESTIMATED)  {

            }   

            PoseType::PoseType (const ::dds::core::optional< double >& altitude_,const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::UMAA::Common::Orientation::Orientation3DNEDType& attitude_,double course_,const ::dds::core::optional< double >& depth_,const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType& navigationSolution_,const ::UMAA::Common::Measurement::GeoPosition2D& position_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance_):
                m_altitude_(altitude_), 
                m_altitudeAGL_(altitudeAGL_), 
                m_altitudeASF_(altitudeASF_), 
                m_altitudeGeodetic_(altitudeGeodetic_), 
                m_attitude_(attitude_), 
                m_course_(course_), 
                m_depth_(depth_), 
                m_navigationSolution_(navigationSolution_), 
                m_position_(position_), 
                m_positionCovariance_(positionCovariance_) {
            }

            void PoseType::swap(PoseType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_altitudeGeodetic_, other_.m_altitudeGeodetic_);
                swap(m_attitude_, other_.m_attitude_);
                swap(m_course_, other_.m_course_);
                swap(m_depth_, other_.m_depth_);
                swap(m_navigationSolution_, other_.m_navigationSolution_);
                swap(m_position_, other_.m_position_);
                swap(m_positionCovariance_, other_.m_positionCovariance_);
            }  

            bool PoseType::operator == (const PoseType& other_) const {
                if (m_altitude_.has_value() != other_.m_altitude_.has_value()) {
                    return false;
                } else if (m_altitude_.has_value()) {
                    if (std::fabs(*m_altitude_ - *other_.m_altitude_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitude_ - *other_.m_altitude_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeAGL_.has_value() != other_.m_altitudeAGL_.has_value()) {
                    return false;
                } else if (m_altitudeAGL_.has_value()) {
                    if (std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeASF_.has_value() != other_.m_altitudeASF_.has_value()) {
                    return false;
                } else if (m_altitudeASF_.has_value()) {
                    if (std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeGeodetic_.has_value() != other_.m_altitudeGeodetic_.has_value()) {
                    return false;
                } else if (m_altitudeGeodetic_.has_value()) {
                    if (std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_attitude_ != other_.m_attitude_) {
                    return false;
                }
                if (std::fabs(m_course_ - other_.m_course_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_course_ - other_.m_course_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_depth_.has_value() != other_.m_depth_.has_value()) {
                    return false;
                } else if (m_depth_.has_value()) {
                    if (std::fabs(*m_depth_ - *other_.m_depth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_depth_ - *other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_navigationSolution_ != other_.m_navigationSolution_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_positionCovariance_ != other_.m_positionCovariance_) {
                    return false;
                }
                return true;
            }

            bool PoseType::operator != (const PoseType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PoseType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude ()<<", ";
                o << "altitudeAGL: " << sample.altitudeAGL ()<<", ";
                o << "altitudeASF: " << sample.altitudeASF ()<<", ";
                o << "altitudeGeodetic: " << sample.altitudeGeodetic ()<<", ";
                o << "attitude: " << sample.attitude ()<<", ";
                o << "course: " << std::setprecision(15) << sample.course ()<<", ";
                o << "depth: " << sample.depth ()<<", ";
                o << "navigationSolution: " << sample.navigationSolution ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "positionCovariance: " << sample.positionCovariance ();
                o <<"]";
                return o;
            }

        } // namespace Environment  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Environment::PoseType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PoseType_g_tc_members[10]=
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"altitudeGeodetic",/* Member name */
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
                        (char *)"attitude",/* Member name */
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
                        (char *)"course",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"navigationSolution",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"positionCovariance",/* Member name */
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
                    }
                };

                static DDS_TypeCode PoseType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Environment::PoseType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        PoseType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PoseType*/

                if (is_initialized) {
                    return &PoseType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PoseType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PoseType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t>::get().native();
                PoseType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t>::get().native();
                PoseType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t>::get().native();
                PoseType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t>::get().native();
                PoseType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::Orientation3DNEDType>::get().native();
                PoseType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t>::get().native();
                PoseType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                PoseType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType>::get().native();
                PoseType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();
                PoseType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovariancePositionNEDType>::get().native();

                /* Initialize the values for member annotations. */
                PoseType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                PoseType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PoseType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PoseType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PoseType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PoseType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;

                PoseType_g_tc._data._sampleAccessInfo = sample_access_info();
                PoseType_g_tc._data._typePlugin = type_plugin_info();    

                return &PoseType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Environment::PoseType *sample;

                static RTIXCdrMemberAccessInfo PoseType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PoseType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PoseType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Environment::PoseType);
                if (sample == NULL) {
                    return NULL;
                }

                PoseType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                PoseType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                PoseType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                PoseType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeGeodetic() - (char *)sample);

                PoseType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitude() - (char *)sample);

                PoseType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->course() - (char *)sample);

                PoseType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                PoseType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->navigationSolution() - (char *)sample);

                PoseType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                PoseType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionCovariance() - (char *)sample);

                PoseType_g_sampleAccessInfo.memberAccessInfos = 
                PoseType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Environment::PoseType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PoseType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PoseType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PoseType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PoseType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Environment::PoseType >;

                PoseType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PoseType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PoseType_g_typePlugin = 
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

                return &PoseType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Environment::PoseType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Environment::PoseType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Environment::PoseType >::reset_sample(::UMAA::Common::Environment::PoseType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
            ::rti::topic::reset_sample(sample.altitudeAGL());
            ::rti::topic::reset_sample(sample.altitudeASF());
            ::rti::topic::reset_sample(sample.altitudeGeodetic());
            ::rti::topic::reset_sample(sample.attitude());
            sample.course(0.0);
            ::rti::topic::reset_sample(sample.depth());
            sample.navigationSolution(UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::ESTIMATED);
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.positionCovariance());
        }

        void topic_type_support< ::UMAA::Common::Environment::PoseType >::allocate_sample(::UMAA::Common::Environment::PoseType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.attitude(),  -1, -1);
            ::rti::topic::allocate_sample(sample.navigationSolution(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
