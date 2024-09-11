

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
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
#include "WorldTransformTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WorldTransformType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Environment {

            // ---- WorldTransformType: 

            WorldTransformType::WorldTransformType() :
                m_pixelSizex_ (0.0) ,
                m_pixelSizey_ (0.0) ,
                m_rotationx_ (0.0) ,
                m_rotationy_ (0.0) ,
                m_upperLeftCoordinatex_ (0.0) ,
                m_upperLeftCoordinatey_ (0.0)  {

            }   

            WorldTransformType::WorldTransformType (double pixelSizex_,double pixelSizey_,double rotationx_,double rotationy_,double upperLeftCoordinatex_,double upperLeftCoordinatey_):
                m_pixelSizex_(pixelSizex_), 
                m_pixelSizey_(pixelSizey_), 
                m_rotationx_(rotationx_), 
                m_rotationy_(rotationy_), 
                m_upperLeftCoordinatex_(upperLeftCoordinatex_), 
                m_upperLeftCoordinatey_(upperLeftCoordinatey_) {
            }

            void WorldTransformType::swap(WorldTransformType& other_)  noexcept 
            {
                using std::swap;
                swap(m_pixelSizex_, other_.m_pixelSizex_);
                swap(m_pixelSizey_, other_.m_pixelSizey_);
                swap(m_rotationx_, other_.m_rotationx_);
                swap(m_rotationy_, other_.m_rotationy_);
                swap(m_upperLeftCoordinatex_, other_.m_upperLeftCoordinatex_);
                swap(m_upperLeftCoordinatey_, other_.m_upperLeftCoordinatey_);
            }  

            bool WorldTransformType::operator == (const WorldTransformType& other_) const {
                if (std::fabs(m_pixelSizex_ - other_.m_pixelSizex_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pixelSizex_ - other_.m_pixelSizex_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pixelSizey_ - other_.m_pixelSizey_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pixelSizey_ - other_.m_pixelSizey_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rotationx_ - other_.m_rotationx_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rotationx_ - other_.m_rotationx_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rotationy_ - other_.m_rotationy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rotationy_ - other_.m_rotationy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_upperLeftCoordinatex_ - other_.m_upperLeftCoordinatex_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_upperLeftCoordinatex_ - other_.m_upperLeftCoordinatex_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_upperLeftCoordinatey_ - other_.m_upperLeftCoordinatey_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_upperLeftCoordinatey_ - other_.m_upperLeftCoordinatey_) < (std::numeric_limits< double>::min)())) {
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
                o << "pixelSizex: " << std::setprecision(15) << sample.pixelSizex ()<<", ";
                o << "pixelSizey: " << std::setprecision(15) << sample.pixelSizey ()<<", ";
                o << "rotationx: " << std::setprecision(15) << sample.rotationx ()<<", ";
                o << "rotationy: " << std::setprecision(15) << sample.rotationy ()<<", ";
                o << "upperLeftCoordinatex: " << std::setprecision(15) << sample.upperLeftCoordinatex ()<<", ";
                o << "upperLeftCoordinatey: " << std::setprecision(15) << sample.upperLeftCoordinatey ();
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
        struct native_type_code< ::UMAA::Common::Environment::WorldTransformType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WorldTransformType_g_tc_members[6]=
                {

                    {
                        (char *)"pixelSizex",/* Member name */
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
                        (char *)"pixelSizey",/* Member name */
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
                        (char *)"rotationx",/* Member name */
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
                        (char *)"rotationy",/* Member name */
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
                        (char *)"upperLeftCoordinatex",/* Member name */
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
                        (char *)"upperLeftCoordinatey",/* Member name */
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
                        (char *)"UMAA::Common::Environment::WorldTransformType", /* Name */
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
                WorldTransformType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WorldTransformType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
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
                WorldTransformType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WorldTransformType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                WorldTransformType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WorldTransformType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WorldTransformType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WorldTransformType_g_tc._data._sampleAccessInfo = sample_access_info();
                WorldTransformType_g_tc._data._typePlugin = type_plugin_info();    

                return &WorldTransformType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Environment::WorldTransformType *sample;

                static RTIXCdrMemberAccessInfo WorldTransformType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WorldTransformType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WorldTransformType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Environment::WorldTransformType);
                if (sample == NULL) {
                    return NULL;
                }

                WorldTransformType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pixelSizex() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pixelSizey() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rotationx() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rotationy() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeftCoordinatex() - (char *)sample);

                WorldTransformType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeftCoordinatey() - (char *)sample);

                WorldTransformType_g_sampleAccessInfo.memberAccessInfos = 
                WorldTransformType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Environment::WorldTransformType);

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
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Environment::WorldTransformType >;

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

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Environment::WorldTransformType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Environment::WorldTransformType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Environment::WorldTransformType >::reset_sample(::UMAA::Common::Environment::WorldTransformType& sample) 
        {
            sample.pixelSizex(0.0);
            sample.pixelSizey(0.0);
            sample.rotationx(0.0);
            sample.rotationy(0.0);
            sample.upperLeftCoordinatex(0.0);
            sample.upperLeftCoordinatey(0.0);
        }

        void topic_type_support< ::UMAA::Common::Environment::WorldTransformType >::allocate_sample(::UMAA::Common::Environment::WorldTransformType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
