

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSConfigSearchVolumeType.idl
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
#include "FLSConfigSearchVolumeTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FLSConfigSearchVolumeType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BaseType {

            // ---- FLSConfigSearchVolumeType: 

            FLSConfigSearchVolumeType::FLSConfigSearchVolumeType() :
                m_goalVehicleAltitude_ (0.0) ,
                m_goalVehicleDepth_ (0.0) ,
                m_maxDepth_ (0.0) ,
                m_maxRange_ (0.0) ,
                m_minDepth_ (0.0)  {

            }   

            FLSConfigSearchVolumeType::FLSConfigSearchVolumeType (double goalVehicleAltitude_,double goalVehicleDepth_,double maxDepth_,double maxRange_,double minDepth_,const ::dds::core::optional< double >& minRange_):
                m_goalVehicleAltitude_(goalVehicleAltitude_), 
                m_goalVehicleDepth_(goalVehicleDepth_), 
                m_maxDepth_(maxDepth_), 
                m_maxRange_(maxRange_), 
                m_minDepth_(minDepth_), 
                m_minRange_(minRange_) {
            }

            void FLSConfigSearchVolumeType::swap(FLSConfigSearchVolumeType& other_)  noexcept 
            {
                using std::swap;
                swap(m_goalVehicleAltitude_, other_.m_goalVehicleAltitude_);
                swap(m_goalVehicleDepth_, other_.m_goalVehicleDepth_);
                swap(m_maxDepth_, other_.m_maxDepth_);
                swap(m_maxRange_, other_.m_maxRange_);
                swap(m_minDepth_, other_.m_minDepth_);
                swap(m_minRange_, other_.m_minRange_);
            }  

            bool FLSConfigSearchVolumeType::operator == (const FLSConfigSearchVolumeType& other_) const {
                if (std::fabs(m_goalVehicleAltitude_ - other_.m_goalVehicleAltitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_goalVehicleAltitude_ - other_.m_goalVehicleAltitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_goalVehicleDepth_ - other_.m_goalVehicleDepth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_goalVehicleDepth_ - other_.m_goalVehicleDepth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxDepth_ - other_.m_maxDepth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxDepth_ - other_.m_maxDepth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxRange_ - other_.m_maxRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxRange_ - other_.m_maxRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minDepth_ - other_.m_minDepth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minDepth_ - other_.m_minDepth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_minRange_.has_value() != other_.m_minRange_.has_value()) {
                    return false;
                } else if (m_minRange_.has_value()) {
                    if (std::fabs(*m_minRange_ - *other_.m_minRange_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_minRange_ - *other_.m_minRange_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool FLSConfigSearchVolumeType::operator != (const FLSConfigSearchVolumeType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FLSConfigSearchVolumeType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "goalVehicleAltitude: " << std::setprecision(15) << sample.goalVehicleAltitude ()<<", ";
                o << "goalVehicleDepth: " << std::setprecision(15) << sample.goalVehicleDepth ()<<", ";
                o << "maxDepth: " << std::setprecision(15) << sample.maxDepth ()<<", ";
                o << "maxRange: " << std::setprecision(15) << sample.maxRange ()<<", ";
                o << "minDepth: " << std::setprecision(15) << sample.minDepth ()<<", ";
                o << "minRange: " << sample.minRange ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSConfigSearchVolumeType_g_tc_members[6]=
                {

                    {
                        (char *)"goalVehicleAltitude",/* Member name */
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
                        (char *)"goalVehicleDepth",/* Member name */
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
                        (char *)"maxDepth",/* Member name */
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
                        (char *)"maxRange",/* Member name */
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
                        (char *)"minDepth",/* Member name */
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
                        (char *)"minRange",/* Member name */
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

                static DDS_TypeCode FLSConfigSearchVolumeType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::FLSConfigSearchVolumeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        FLSConfigSearchVolumeType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSConfigSearchVolumeType*/

                if (is_initialized) {
                    return &FLSConfigSearchVolumeType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSConfigSearchVolumeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FLSConfigSearchVolumeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t>::get().native();
                FLSConfigSearchVolumeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                FLSConfigSearchVolumeType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                FLSConfigSearchVolumeType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                FLSConfigSearchVolumeType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                FLSConfigSearchVolumeType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FLSConfigSearchVolumeType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FLSConfigSearchVolumeType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FLSConfigSearchVolumeType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FLSConfigSearchVolumeType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSConfigSearchVolumeType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSConfigSearchVolumeType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType *sample;

                static RTIXCdrMemberAccessInfo FLSConfigSearchVolumeType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSConfigSearchVolumeType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSConfigSearchVolumeType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType);
                if (sample == NULL) {
                    return NULL;
                }

                FLSConfigSearchVolumeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->goalVehicleAltitude() - (char *)sample);

                FLSConfigSearchVolumeType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->goalVehicleDepth() - (char *)sample);

                FLSConfigSearchVolumeType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDepth() - (char *)sample);

                FLSConfigSearchVolumeType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRange() - (char *)sample);

                FLSConfigSearchVolumeType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minDepth() - (char *)sample);

                FLSConfigSearchVolumeType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minRange() - (char *)sample);

                FLSConfigSearchVolumeType_g_sampleAccessInfo.memberAccessInfos = 
                FLSConfigSearchVolumeType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::FLSConfigSearchVolumeType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSConfigSearchVolumeType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSConfigSearchVolumeType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSConfigSearchVolumeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSConfigSearchVolumeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType >;

                FLSConfigSearchVolumeType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSConfigSearchVolumeType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSConfigSearchVolumeType_g_typePlugin = 
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

                return &FLSConfigSearchVolumeType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType >::reset_sample(::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& sample) 
        {
            sample.goalVehicleAltitude(0.0);
            sample.goalVehicleDepth(0.0);
            sample.maxDepth(0.0);
            sample.maxRange(0.0);
            sample.minDepth(0.0);
            ::rti::topic::reset_sample(sample.minRange());
        }

        void topic_type_support< ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType >::allocate_sample(::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
