

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PolygonVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PolygonVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- PolygonVariantType: 

            PolygonVariantType::PolygonVariantType() :
                m_lineKind_(UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::GREAT_CIRCLE)  {

            }   

            PolygonVariantType::PolygonVariantType (const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType& lineKind_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >& referencePoints_):
                m_lineKind_(lineKind_), 
                m_referencePoints_(referencePoints_) {
            }

            void PolygonVariantType::swap(PolygonVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_lineKind_, other_.m_lineKind_);
                swap(m_referencePoints_, other_.m_referencePoints_);
            }  

            bool PolygonVariantType::operator == (const PolygonVariantType& other_) const {
                if (m_lineKind_ != other_.m_lineKind_) {
                    return false;
                }
                if (m_referencePoints_ != other_.m_referencePoints_) {
                    return false;
                }
                return true;
            }

            bool PolygonVariantType::operator != (const PolygonVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PolygonVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "lineKind: " << sample.lineKind ()<<", ";
                o << "referencePoints: " << sample.referencePoints ();
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
        struct native_type_code< ::UMAA::MM::BaseType::PolygonVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PolygonVariantType_g_tc_referencePoints_sequence;

                static DDS_TypeCode_Member PolygonVariantType_g_tc_members[2]=
                {

                    {
                        (char *)"lineKind",/* Member name */
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
                        (char *)"referencePoints",/* Member name */
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
                    }
                };

                static DDS_TypeCode PolygonVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::PolygonVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PolygonVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PolygonVariantType*/

                if (is_initialized) {
                    return &PolygonVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PolygonVariantType_g_tc_referencePoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L > >((128L));

                PolygonVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PolygonVariantType_g_tc_referencePoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();
                PolygonVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType>::get().native();
                PolygonVariantType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& PolygonVariantType_g_tc_referencePoints_sequence;

                /* Initialize the values for member annotations. */
                PolygonVariantType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PolygonVariantType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                PolygonVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                PolygonVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &PolygonVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::PolygonVariantType *sample;

                static RTIXCdrMemberAccessInfo PolygonVariantType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PolygonVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PolygonVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::PolygonVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                PolygonVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lineKind() - (char *)sample);

                PolygonVariantType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referencePoints() - (char *)sample);

                PolygonVariantType_g_sampleAccessInfo.memberAccessInfos = 
                PolygonVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::PolygonVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PolygonVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PolygonVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PolygonVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PolygonVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::PolygonVariantType >;

                PolygonVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PolygonVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PolygonVariantType_g_typePlugin = 
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

                return &PolygonVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::PolygonVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::PolygonVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::PolygonVariantType >::reset_sample(::UMAA::MM::BaseType::PolygonVariantType& sample) 
        {
            sample.lineKind(UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType::GREAT_CIRCLE);
            ::rti::topic::reset_sample(sample.referencePoints());
        }

        void topic_type_support< ::UMAA::MM::BaseType::PolygonVariantType >::allocate_sample(::UMAA::MM::BaseType::PolygonVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.lineKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.referencePoints(),  128L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
