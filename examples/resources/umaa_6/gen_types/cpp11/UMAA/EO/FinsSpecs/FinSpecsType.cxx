

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsType.idl
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
#include "FinSpecsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FinSpecsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace FinsSpecs {

            // ---- FinSpecsType: 

            FinSpecsType::FinSpecsType() :
                m_maxDeflectionRate_ (0.0) ,
                m_maxNegativeDeflection_ (0.0) ,
                m_maxPositiveDeflection_ (0.0) ,
                m_minDeflectionRate_ (0.0) ,
                m_name_ ("")  {

            }   

            FinSpecsType::FinSpecsType (double maxDeflectionRate_,double maxNegativeDeflection_,double maxPositiveDeflection_,double minDeflectionRate_,const std::string& name_,const ::dds::core::optional< double >& nominalDeflectionRate_,const ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& position_):
                m_maxDeflectionRate_(maxDeflectionRate_), 
                m_maxNegativeDeflection_(maxNegativeDeflection_), 
                m_maxPositiveDeflection_(maxPositiveDeflection_), 
                m_minDeflectionRate_(minDeflectionRate_), 
                m_name_(name_), 
                m_nominalDeflectionRate_(nominalDeflectionRate_), 
                m_orientation_(orientation_), 
                m_position_(position_) {
            }

            void FinSpecsType::swap(FinSpecsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxDeflectionRate_, other_.m_maxDeflectionRate_);
                swap(m_maxNegativeDeflection_, other_.m_maxNegativeDeflection_);
                swap(m_maxPositiveDeflection_, other_.m_maxPositiveDeflection_);
                swap(m_minDeflectionRate_, other_.m_minDeflectionRate_);
                swap(m_name_, other_.m_name_);
                swap(m_nominalDeflectionRate_, other_.m_nominalDeflectionRate_);
                swap(m_orientation_, other_.m_orientation_);
                swap(m_position_, other_.m_position_);
            }  

            bool FinSpecsType::operator == (const FinSpecsType& other_) const {
                if (std::fabs(m_maxDeflectionRate_ - other_.m_maxDeflectionRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxDeflectionRate_ - other_.m_maxDeflectionRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxNegativeDeflection_ - other_.m_maxNegativeDeflection_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxNegativeDeflection_ - other_.m_maxNegativeDeflection_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxPositiveDeflection_ - other_.m_maxPositiveDeflection_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxPositiveDeflection_ - other_.m_maxPositiveDeflection_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minDeflectionRate_ - other_.m_minDeflectionRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minDeflectionRate_ - other_.m_minDeflectionRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_nominalDeflectionRate_.has_value() != other_.m_nominalDeflectionRate_.has_value()) {
                    return false;
                } else if (m_nominalDeflectionRate_.has_value()) {
                    if (std::fabs(*m_nominalDeflectionRate_ - *other_.m_nominalDeflectionRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_nominalDeflectionRate_ - *other_.m_nominalDeflectionRate_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_orientation_ != other_.m_orientation_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                return true;
            }

            bool FinSpecsType::operator != (const FinSpecsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FinSpecsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxDeflectionRate: " << std::setprecision(15) << sample.maxDeflectionRate ()<<", ";
                o << "maxNegativeDeflection: " << std::setprecision(15) << sample.maxNegativeDeflection ()<<", ";
                o << "maxPositiveDeflection: " << std::setprecision(15) << sample.maxPositiveDeflection ()<<", ";
                o << "minDeflectionRate: " << std::setprecision(15) << sample.minDeflectionRate ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "nominalDeflectionRate: " << sample.nominalDeflectionRate ()<<", ";
                o << "orientation: " << sample.orientation ()<<", ";
                o << "position: " << sample.position ();
                o <<"]";
                return o;
            }

        } // namespace FinsSpecs  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::FinsSpecs::FinSpecsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FinSpecsType_g_tc_members[8]=
                {

                    {
                        (char *)"maxDeflectionRate",/* Member name */
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
                        (char *)"maxNegativeDeflection",/* Member name */
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
                        (char *)"maxPositiveDeflection",/* Member name */
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
                        (char *)"minDeflectionRate",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"nominalDeflectionRate",/* Member name */
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
                        (char *)"orientation",/* Member name */
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
                        (char *)"position",/* Member name */
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
                    }
                };

                static DDS_TypeCode FinSpecsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::FinsSpecs::FinSpecsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        FinSpecsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FinSpecsType*/

                if (is_initialized) {
                    return &FinSpecsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FinSpecsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FinSpecsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                FinSpecsType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::Orientation3DPlatformType>::get().native();
                FinSpecsType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3DBodyXYZ>::get().native();

                /* Initialize the values for member annotations. */
                FinSpecsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                FinSpecsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FinSpecsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FinSpecsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                FinSpecsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FinSpecsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FinSpecsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                FinSpecsType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FinSpecsType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FinSpecsType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                FinSpecsType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FinSpecsType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FinSpecsType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                FinSpecsType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                FinSpecsType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FinSpecsType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FinSpecsType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FinSpecsType_g_tc._data._sampleAccessInfo = sample_access_info();
                FinSpecsType_g_tc._data._typePlugin = type_plugin_info();    

                return &FinSpecsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::FinsSpecs::FinSpecsType *sample;

                static RTIXCdrMemberAccessInfo FinSpecsType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FinSpecsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FinSpecsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::FinsSpecs::FinSpecsType);
                if (sample == NULL) {
                    return NULL;
                }

                FinSpecsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDeflectionRate() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxNegativeDeflection() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPositiveDeflection() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minDeflectionRate() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nominalDeflectionRate() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->orientation() - (char *)sample);

                FinSpecsType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                FinSpecsType_g_sampleAccessInfo.memberAccessInfos = 
                FinSpecsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::FinsSpecs::FinSpecsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FinSpecsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FinSpecsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FinSpecsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FinSpecsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::FinsSpecs::FinSpecsType >;

                FinSpecsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FinSpecsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FinSpecsType_g_typePlugin = 
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

                return &FinSpecsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::FinsSpecs::FinSpecsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::FinsSpecs::FinSpecsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::FinsSpecs::FinSpecsType >::reset_sample(::UMAA::EO::FinsSpecs::FinSpecsType& sample) 
        {
            sample.maxDeflectionRate(0.0);
            sample.maxNegativeDeflection(0.0);
            sample.maxPositiveDeflection(0.0);
            sample.minDeflectionRate(0.0);
            sample.name("");
            ::rti::topic::reset_sample(sample.nominalDeflectionRate());
            ::rti::topic::reset_sample(sample.orientation());
            ::rti::topic::reset_sample(sample.position());
        }

        void topic_type_support< ::UMAA::EO::FinsSpecs::FinSpecsType >::allocate_sample(::UMAA::EO::FinsSpecs::FinSpecsType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.orientation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
