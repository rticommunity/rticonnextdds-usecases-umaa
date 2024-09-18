

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EllipseVariantType.idl
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
#include "EllipseVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EllipseVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- EllipseVariantType: 

            EllipseVariantType::EllipseVariantType() :
                m_direction_ (0.0) ,
                m_semiMajorRadius_ (0.0) ,
                m_semiMinorRadius_ (0.0)  {

            }   

            EllipseVariantType::EllipseVariantType (const ::UMAA::Common::Measurement::GeoPosition2D& centerPosition_,double direction_,double semiMajorRadius_,double semiMinorRadius_):
                m_centerPosition_(centerPosition_), 
                m_direction_(direction_), 
                m_semiMajorRadius_(semiMajorRadius_), 
                m_semiMinorRadius_(semiMinorRadius_) {
            }

            void EllipseVariantType::swap(EllipseVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_centerPosition_, other_.m_centerPosition_);
                swap(m_direction_, other_.m_direction_);
                swap(m_semiMajorRadius_, other_.m_semiMajorRadius_);
                swap(m_semiMinorRadius_, other_.m_semiMinorRadius_);
            }  

            bool EllipseVariantType::operator == (const EllipseVariantType& other_) const {
                if (m_centerPosition_ != other_.m_centerPosition_) {
                    return false;
                }
                if (std::fabs(m_direction_ - other_.m_direction_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_direction_ - other_.m_direction_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_semiMajorRadius_ - other_.m_semiMajorRadius_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_semiMajorRadius_ - other_.m_semiMajorRadius_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_semiMinorRadius_ - other_.m_semiMinorRadius_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_semiMinorRadius_ - other_.m_semiMinorRadius_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool EllipseVariantType::operator != (const EllipseVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EllipseVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "centerPosition: " << sample.centerPosition ()<<", ";
                o << "direction: " << std::setprecision(15) << sample.direction ()<<", ";
                o << "semiMajorRadius: " << std::setprecision(15) << sample.semiMajorRadius ()<<", ";
                o << "semiMinorRadius: " << std::setprecision(15) << sample.semiMinorRadius ();
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
        struct native_type_code< ::UMAA::MM::BaseType::EllipseVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EllipseVariantType_g_tc_members[4]=
                {

                    {
                        (char *)"centerPosition",/* Member name */
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
                        (char *)"direction",/* Member name */
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
                        (char *)"semiMajorRadius",/* Member name */
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
                        (char *)"semiMinorRadius",/* Member name */
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

                static DDS_TypeCode EllipseVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::EllipseVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        EllipseVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EllipseVariantType*/

                if (is_initialized) {
                    return &EllipseVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EllipseVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EllipseVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();
                EllipseVariantType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t>::get().native();
                EllipseVariantType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                EllipseVariantType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                EllipseVariantType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                EllipseVariantType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EllipseVariantType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EllipseVariantType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                EllipseVariantType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EllipseVariantType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EllipseVariantType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                EllipseVariantType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EllipseVariantType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EllipseVariantType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                EllipseVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                EllipseVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &EllipseVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::EllipseVariantType *sample;

                static RTIXCdrMemberAccessInfo EllipseVariantType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EllipseVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EllipseVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::EllipseVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                EllipseVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->centerPosition() - (char *)sample);

                EllipseVariantType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->direction() - (char *)sample);

                EllipseVariantType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->semiMajorRadius() - (char *)sample);

                EllipseVariantType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->semiMinorRadius() - (char *)sample);

                EllipseVariantType_g_sampleAccessInfo.memberAccessInfos = 
                EllipseVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::EllipseVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EllipseVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EllipseVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EllipseVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EllipseVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::EllipseVariantType >;

                EllipseVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EllipseVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EllipseVariantType_g_typePlugin = 
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

                return &EllipseVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::EllipseVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::EllipseVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::EllipseVariantType >::reset_sample(::UMAA::MM::BaseType::EllipseVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.centerPosition());
            sample.direction(0.0);
            sample.semiMajorRadius(0.0);
            sample.semiMinorRadius(0.0);
        }

        void topic_type_support< ::UMAA::MM::BaseType::EllipseVariantType >::allocate_sample(::UMAA::MM::BaseType::EllipseVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.centerPosition(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE