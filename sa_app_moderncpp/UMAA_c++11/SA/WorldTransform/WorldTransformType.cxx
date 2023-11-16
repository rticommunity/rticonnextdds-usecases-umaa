

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
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
#include "WorldTransformTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WorldTransformType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace WorldTransform {

            // ---- WorldTransformType: 

            WorldTransformType::WorldTransformType() :
                m_pixelSize_x_ (0.0) ,
                m_pixelSize_y_ (0.0) ,
                m_rotation_x_ (0.0) ,
                m_rotation_y_ (0.0) ,
                m_upperLeftCoordinate_x_ (0.0) ,
                m_upperLeftCoordinate_y_ (0.0)  {

            }   

            WorldTransformType::WorldTransformType (double pixelSize_x_,double pixelSize_y_,double rotation_x_,double rotation_y_,double upperLeftCoordinate_x_,double upperLeftCoordinate_y_):
                m_pixelSize_x_(pixelSize_x_), 
                m_pixelSize_y_(pixelSize_y_), 
                m_rotation_x_(rotation_x_), 
                m_rotation_y_(rotation_y_), 
                m_upperLeftCoordinate_x_(upperLeftCoordinate_x_), 
                m_upperLeftCoordinate_y_(upperLeftCoordinate_y_) {
            }

            void WorldTransformType::swap(WorldTransformType& other_)  noexcept 
            {
                using std::swap;
                swap(m_pixelSize_x_, other_.m_pixelSize_x_);
                swap(m_pixelSize_y_, other_.m_pixelSize_y_);
                swap(m_rotation_x_, other_.m_rotation_x_);
                swap(m_rotation_y_, other_.m_rotation_y_);
                swap(m_upperLeftCoordinate_x_, other_.m_upperLeftCoordinate_x_);
                swap(m_upperLeftCoordinate_y_, other_.m_upperLeftCoordinate_y_);
            }  

            bool WorldTransformType::operator == (const WorldTransformType& other_) const {
                if (std::fabs(m_pixelSize_x_ - other_.m_pixelSize_x_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pixelSize_x_ - other_.m_pixelSize_x_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pixelSize_y_ - other_.m_pixelSize_y_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pixelSize_y_ - other_.m_pixelSize_y_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rotation_x_ - other_.m_rotation_x_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rotation_x_ - other_.m_rotation_x_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rotation_y_ - other_.m_rotation_y_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rotation_y_ - other_.m_rotation_y_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_upperLeftCoordinate_x_ - other_.m_upperLeftCoordinate_x_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_upperLeftCoordinate_x_ - other_.m_upperLeftCoordinate_x_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_upperLeftCoordinate_y_ - other_.m_upperLeftCoordinate_y_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_upperLeftCoordinate_y_ - other_.m_upperLeftCoordinate_y_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool WorldTransformType::operator != (const WorldTransformType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WorldTransformType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pixelSize_x: " << std::setprecision(15) << sample.pixelSize_x ()<<", ";
                o << "pixelSize_y: " << std::setprecision(15) << sample.pixelSize_y ()<<", ";
                o << "rotation_x: " << std::setprecision(15) << sample.rotation_x ()<<", ";
                o << "rotation_y: " << std::setprecision(15) << sample.rotation_y ()<<", ";
                o << "upperLeftCoordinate_x: " << std::setprecision(15) << sample.upperLeftCoordinate_x ()<<", ";
                o << "upperLeftCoordinate_y: " << std::setprecision(15) << sample.upperLeftCoordinate_y ();
                o <<"]";
                return o;
            }

        } // namespace WorldTransform  

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
        struct native_type_code< ::UMAA::SA::WorldTransform::WorldTransformType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WorldTransformType_g_tc_members[6]=
                {

                    {
                        (char *)"pixelSize_x",/* Member name */
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
                        (char *)"pixelSize_y",/* Member name */
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
                        (char *)"rotation_x",/* Member name */
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
                        (char *)"rotation_y",/* Member name */
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
                        (char *)"upperLeftCoordinate_x",/* Member name */
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
                        (char *)"upperLeftCoordinate_y",/* Member name */
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

                static DDS_TypeCode WorldTransformType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::WorldTransform::WorldTransformType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        WorldTransformType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WorldTransformType*/

                if (is_initialized) {
                    return &WorldTransformType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WorldTransformType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WorldTransformType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WorldTransformType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WorldTransformType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                WorldTransformType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                WorldTransformType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WorldTransformType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WorldTransformType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                WorldTransformType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
                WorldTransformType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                WorldTransformType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._maxValue._u.double_value = 401056000ULL;
                WorldTransformType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WorldTransformType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WorldTransformType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                WorldTransformType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;
                WorldTransformType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                WorldTransformType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;

                WorldTransformType_g_tc._data._sampleAccessInfo = sample_access_info();
                WorldTransformType_g_tc._data._typePlugin = type_plugin_info();    

                return &WorldTransformType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::WorldTransform::WorldTransformType *sample;

                static RTIXCdrMemberAccessInfo WorldTransformType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WorldTransformType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WorldTransformType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::WorldTransform::WorldTransformType);
                if (sample == NULL) {
                    return NULL;
                }

                WorldTransformType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pixelSize_x() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pixelSize_y() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rotation_x() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rotation_y() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeftCoordinate_x() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeftCoordinate_y() - (char *)sample);

                WorldTransformType_g_sampleAccessInfo.memberAccessInfos = 
                WorldTransformType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::WorldTransform::WorldTransformType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WorldTransformType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WorldTransformType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WorldTransformType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WorldTransformType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::WorldTransform::WorldTransformType >;

                WorldTransformType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WorldTransformType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WorldTransformType_g_typePlugin = 
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

                return &WorldTransformType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::WorldTransform::WorldTransformType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::WorldTransform::WorldTransformType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::WorldTransform::WorldTransformTypePlugin_new,
                ::UMAA::SA::WorldTransform::WorldTransformTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::WorldTransform::WorldTransformType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WorldTransformTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WorldTransformTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType >::from_cdr_buffer(::UMAA::SA::WorldTransform::WorldTransformType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WorldTransformTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::WorldTransform::WorldTransformType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType >::reset_sample(::UMAA::SA::WorldTransform::WorldTransformType& sample) 
        {
            sample.pixelSize_x(0.0);
            sample.pixelSize_y(0.0);
            sample.rotation_x(0.0);
            sample.rotation_y(0.0);
            sample.upperLeftCoordinate_x(0.0);
            sample.upperLeftCoordinate_y(0.0);
        }

        void topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType >::allocate_sample(::UMAA::SA::WorldTransform::WorldTransformType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
