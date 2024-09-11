

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingSectorType.idl
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
#include "HeadingSectorTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "HeadingSectorType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace Conditional {

            // ---- HeadingSectorType: 

            HeadingSectorType::HeadingSectorType() :
                m_endHeading_ (0.0) ,
                m_headingSectorKind_(UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::INSIDE) ,
                m_startHeading_ (0.0)  {

            }   

            HeadingSectorType::HeadingSectorType (double endHeading_,const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType& headingSectorKind_,double startHeading_):
                m_endHeading_(endHeading_), 
                m_headingSectorKind_(headingSectorKind_), 
                m_startHeading_(startHeading_) {
            }

            void HeadingSectorType::swap(HeadingSectorType& other_)  noexcept 
            {
                using std::swap;
                swap(m_endHeading_, other_.m_endHeading_);
                swap(m_headingSectorKind_, other_.m_headingSectorKind_);
                swap(m_startHeading_, other_.m_startHeading_);
            }  

            bool HeadingSectorType::operator == (const HeadingSectorType& other_) const {
                if (std::fabs(m_endHeading_ - other_.m_endHeading_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_endHeading_ - other_.m_endHeading_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_headingSectorKind_ != other_.m_headingSectorKind_) {
                    return false;
                }
                if (std::fabs(m_startHeading_ - other_.m_startHeading_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_startHeading_ - other_.m_startHeading_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool HeadingSectorType::operator != (const HeadingSectorType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HeadingSectorType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endHeading: " << std::setprecision(15) << sample.endHeading ()<<", ";
                o << "headingSectorKind: " << sample.headingSectorKind ()<<", ";
                o << "startHeading: " << std::setprecision(15) << sample.startHeading ();
                o <<"]";
                return o;
            }

        } // namespace Conditional  

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
        struct native_type_code< ::UMAA::MM::Conditional::HeadingSectorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingSectorType_g_tc_members[3]=
                {

                    {
                        (char *)"endHeading",/* Member name */
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
                        (char *)"headingSectorKind",/* Member name */
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
                        (char *)"startHeading",/* Member name */
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
                    }
                };

                static DDS_TypeCode HeadingSectorType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::Conditional::HeadingSectorType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        HeadingSectorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingSectorType*/

                if (is_initialized) {
                    return &HeadingSectorType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingSectorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingSectorType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawAngle_AliasTag_t>::get().native();
                HeadingSectorType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType>::get().native();
                HeadingSectorType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawAngle_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                HeadingSectorType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                HeadingSectorType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingSectorType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                HeadingSectorType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HeadingSectorType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                HeadingSectorType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                HeadingSectorType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                HeadingSectorType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingSectorType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                HeadingSectorType_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingSectorType_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingSectorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::Conditional::HeadingSectorType *sample;

                static RTIXCdrMemberAccessInfo HeadingSectorType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingSectorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingSectorType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::Conditional::HeadingSectorType);
                if (sample == NULL) {
                    return NULL;
                }

                HeadingSectorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endHeading() - (char *)sample);

                HeadingSectorType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingSectorKind() - (char *)sample);

                HeadingSectorType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startHeading() - (char *)sample);

                HeadingSectorType_g_sampleAccessInfo.memberAccessInfos = 
                HeadingSectorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::Conditional::HeadingSectorType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingSectorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingSectorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingSectorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingSectorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::Conditional::HeadingSectorType >;

                HeadingSectorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingSectorType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingSectorType_g_typePlugin = 
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

                return &HeadingSectorType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::Conditional::HeadingSectorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::Conditional::HeadingSectorType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::Conditional::HeadingSectorType >::reset_sample(::UMAA::MM::Conditional::HeadingSectorType& sample) 
        {
            sample.endHeading(0.0);
            sample.headingSectorKind(UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::INSIDE);
            sample.startHeading(0.0);
        }

        void topic_type_support< ::UMAA::MM::Conditional::HeadingSectorType >::allocate_sample(::UMAA::MM::Conditional::HeadingSectorType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.headingSectorKind(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
