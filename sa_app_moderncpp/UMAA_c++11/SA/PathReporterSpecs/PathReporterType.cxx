

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterType.idl
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
#include "PathReporterTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PathReporterType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PathReporterSpecs {

            // ---- PathReporterType: 

            PathReporterType::PathReporterType() :
                m_maxDistance_ (0.0) ,
                m_maxPoints_ (0) ,
                m_maxTgtResolution_ (0.0) ,
                m_maxTime_ (0.0) ,
                m_minTgtResolution_ (0.0) ,
                m_pathType_(UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType::HISTORIAL_GLOBAL)  {

            }   

            PathReporterType::PathReporterType (double maxDistance_,int32_t maxPoints_,double maxTgtResolution_,double maxTime_,double minTgtResolution_,const ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType& pathType_):
                m_maxDistance_(maxDistance_), 
                m_maxPoints_(maxPoints_), 
                m_maxTgtResolution_(maxTgtResolution_), 
                m_maxTime_(maxTime_), 
                m_minTgtResolution_(minTgtResolution_), 
                m_pathType_(pathType_) {
            }

            void PathReporterType::swap(PathReporterType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxDistance_, other_.m_maxDistance_);
                swap(m_maxPoints_, other_.m_maxPoints_);
                swap(m_maxTgtResolution_, other_.m_maxTgtResolution_);
                swap(m_maxTime_, other_.m_maxTime_);
                swap(m_minTgtResolution_, other_.m_minTgtResolution_);
                swap(m_pathType_, other_.m_pathType_);
            }  

            bool PathReporterType::operator == (const PathReporterType& other_) const {
                if (std::fabs(m_maxDistance_ - other_.m_maxDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxDistance_ - other_.m_maxDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_maxPoints_ != other_.m_maxPoints_) {
                    return false;
                }
                if (std::fabs(m_maxTgtResolution_ - other_.m_maxTgtResolution_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxTgtResolution_ - other_.m_maxTgtResolution_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxTime_ - other_.m_maxTime_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxTime_ - other_.m_maxTime_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minTgtResolution_ - other_.m_minTgtResolution_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minTgtResolution_ - other_.m_minTgtResolution_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_pathType_ != other_.m_pathType_) {
                    return false;
                }
                return true;
            }

            bool PathReporterType::operator != (const PathReporterType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxDistance: " << std::setprecision(15) << sample.maxDistance ()<<", ";
                o << "maxPoints: " << sample.maxPoints ()<<", ";
                o << "maxTgtResolution: " << std::setprecision(15) << sample.maxTgtResolution ()<<", ";
                o << "maxTime: " << std::setprecision(15) << sample.maxTime ()<<", ";
                o << "minTgtResolution: " << std::setprecision(15) << sample.minTgtResolution ()<<", ";
                o << "pathType: " << sample.pathType ();
                o <<"]";
                return o;
            }

        } // namespace PathReporterSpecs  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::PathReporterSpecs::PathReporterType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterType_g_tc_members[6]=
                {

                    {
                        (char *)"maxDistance",/* Member name */
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
                        (char *)"maxPoints",/* Member name */
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
                        (char *)"maxTgtResolution",/* Member name */
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
                        (char *)"maxTime",/* Member name */
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
                        (char *)"minTgtResolution",/* Member name */
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
                        (char *)"pathType",/* Member name */
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
                    }
                };

                static DDS_TypeCode PathReporterType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterSpecs::PathReporterType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PathReporterType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterType*/

                if (is_initialized) {
                    return &PathReporterType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PathReporterType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                PathReporterType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PathReporterType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                PathReporterType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PathReporterType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType>::get().native();

                /* Initialize the values for member annotations. */
                PathReporterType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PathReporterType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                PathReporterType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
                PathReporterType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PathReporterType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                PathReporterType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PathReporterType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                PathReporterType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PathReporterType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
                PathReporterType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                PathReporterType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                PathReporterType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
                PathReporterType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                PathReporterType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                PathReporterType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[3]._annotations._maxValue._u.double_value = 37817280ULL;
                PathReporterType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                PathReporterType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                PathReporterType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PathReporterType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;
                PathReporterType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PathReporterType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                PathReporterType_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterType_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterSpecs::PathReporterType *sample;

                static RTIXCdrMemberAccessInfo PathReporterType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterSpecs::PathReporterType);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDistance() - (char *)sample);

                PathReporterType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPoints() - (char *)sample);

                PathReporterType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTgtResolution() - (char *)sample);

                PathReporterType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTime() - (char *)sample);

                PathReporterType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTgtResolution() - (char *)sample);

                PathReporterType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathType() - (char *)sample);

                PathReporterType_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterSpecs::PathReporterType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterSpecs::PathReporterType >;

                PathReporterType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterType_g_typePlugin = 
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

                return &PathReporterType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterSpecs::PathReporterType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterSpecs::PathReporterType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterSpecs::PathReporterTypePlugin_new,
                ::UMAA::SA::PathReporterSpecs::PathReporterTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterSpecs::PathReporterType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType >::from_cdr_buffer(::UMAA::SA::PathReporterSpecs::PathReporterType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterSpecs::PathReporterType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType >::reset_sample(::UMAA::SA::PathReporterSpecs::PathReporterType& sample) 
        {
            sample.maxDistance(0.0);
            sample.maxPoints(0);
            sample.maxTgtResolution(0.0);
            sample.maxTime(0.0);
            sample.minTgtResolution(0.0);
            sample.pathType(UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType::HISTORIAL_GLOBAL);
        }

        void topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType >::allocate_sample(::UMAA::SA::PathReporterSpecs::PathReporterType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.pathType(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
