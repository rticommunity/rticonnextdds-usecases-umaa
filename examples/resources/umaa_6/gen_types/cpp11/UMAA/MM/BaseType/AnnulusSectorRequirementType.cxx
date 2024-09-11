

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnnulusSectorRequirementType.idl
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
#include "AnnulusSectorRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AnnulusSectorRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- AnnulusSectorRequirementType: 

            AnnulusSectorRequirementType::AnnulusSectorRequirementType() :
                m_maxRange_ (0.0) ,
                m_minRange_ (0.0)  {

            }   

            AnnulusSectorRequirementType::AnnulusSectorRequirementType (const ::dds::core::optional< ::UMAA::MM::BaseType::AnnulusSectorToleranceType >& annulusSectorTolerance_,double maxRange_,double minRange_,const ::UMAA::Common::Orientation::BearingSectorVariantType& sector_):
                m_annulusSectorTolerance_(annulusSectorTolerance_), 
                m_maxRange_(maxRange_), 
                m_minRange_(minRange_), 
                m_sector_(sector_) {
            }

            void AnnulusSectorRequirementType::swap(AnnulusSectorRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_annulusSectorTolerance_, other_.m_annulusSectorTolerance_);
                swap(m_maxRange_, other_.m_maxRange_);
                swap(m_minRange_, other_.m_minRange_);
                swap(m_sector_, other_.m_sector_);
            }  

            bool AnnulusSectorRequirementType::operator == (const AnnulusSectorRequirementType& other_) const {
                if (m_annulusSectorTolerance_ != other_.m_annulusSectorTolerance_) {
                    return false;
                }
                if (std::fabs(m_maxRange_ - other_.m_maxRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxRange_ - other_.m_maxRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minRange_ - other_.m_minRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minRange_ - other_.m_minRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_sector_ != other_.m_sector_) {
                    return false;
                }
                return true;
            }

            bool AnnulusSectorRequirementType::operator != (const AnnulusSectorRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AnnulusSectorRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "annulusSectorTolerance: " << sample.annulusSectorTolerance ()<<", ";
                o << "maxRange: " << std::setprecision(15) << sample.maxRange ()<<", ";
                o << "minRange: " << std::setprecision(15) << sample.minRange ()<<", ";
                o << "sector: " << sample.sector ();
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
        struct native_type_code< ::UMAA::MM::BaseType::AnnulusSectorRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnnulusSectorRequirementType_g_tc_members[4]=
                {

                    {
                        (char *)"annulusSectorTolerance",/* Member name */
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
                        (char *)"maxRange",/* Member name */
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
                        (char *)"minRange",/* Member name */
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
                        (char *)"sector",/* Member name */
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

                static DDS_TypeCode AnnulusSectorRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::AnnulusSectorRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        AnnulusSectorRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnnulusSectorRequirementType*/

                if (is_initialized) {
                    return &AnnulusSectorRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnnulusSectorRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AnnulusSectorRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::AnnulusSectorToleranceType>::get().native();
                AnnulusSectorRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                AnnulusSectorRequirementType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                AnnulusSectorRequirementType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantType>::get().native();

                /* Initialize the values for member annotations. */
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AnnulusSectorRequirementType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AnnulusSectorRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnnulusSectorRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnnulusSectorRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::AnnulusSectorRequirementType *sample;

                static RTIXCdrMemberAccessInfo AnnulusSectorRequirementType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnnulusSectorRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnnulusSectorRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::AnnulusSectorRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                AnnulusSectorRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->annulusSectorTolerance() - (char *)sample);

                AnnulusSectorRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRange() - (char *)sample);

                AnnulusSectorRequirementType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minRange() - (char *)sample);

                AnnulusSectorRequirementType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sector() - (char *)sample);

                AnnulusSectorRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                AnnulusSectorRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::AnnulusSectorRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnnulusSectorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnnulusSectorRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnnulusSectorRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnnulusSectorRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::AnnulusSectorRequirementType >;

                AnnulusSectorRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnnulusSectorRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnnulusSectorRequirementType_g_typePlugin = 
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

                return &AnnulusSectorRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::AnnulusSectorRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::AnnulusSectorRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::AnnulusSectorRequirementType >::reset_sample(::UMAA::MM::BaseType::AnnulusSectorRequirementType& sample) 
        {
            ::rti::topic::reset_sample(sample.annulusSectorTolerance());
            sample.maxRange(0.0);
            sample.minRange(0.0);
            ::rti::topic::reset_sample(sample.sector());
        }

        void topic_type_support< ::UMAA::MM::BaseType::AnnulusSectorRequirementType >::allocate_sample(::UMAA::MM::BaseType::AnnulusSectorRequirementType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.sector(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
