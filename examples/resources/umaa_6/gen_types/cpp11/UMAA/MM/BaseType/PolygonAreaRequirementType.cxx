

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonAreaRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PolygonAreaRequirementTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PolygonAreaRequirementType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- PolygonAreaRequirementType: 

            PolygonAreaRequirementType::PolygonAreaRequirementType()  {

            }   

            PolygonAreaRequirementType::PolygonAreaRequirementType (const ::UMAA::Common::Measurement::Polygon& area_,const ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >& areaTolerance_):
                m_area_(area_), 
                m_areaTolerance_(areaTolerance_) {
            }

            void PolygonAreaRequirementType::swap(PolygonAreaRequirementType& other_)  noexcept 
            {
                using std::swap;
                swap(m_area_, other_.m_area_);
                swap(m_areaTolerance_, other_.m_areaTolerance_);
            }  

            bool PolygonAreaRequirementType::operator == (const PolygonAreaRequirementType& other_) const {
                if (m_area_ != other_.m_area_) {
                    return false;
                }
                if (m_areaTolerance_ != other_.m_areaTolerance_) {
                    return false;
                }
                return true;
            }

            bool PolygonAreaRequirementType::operator != (const PolygonAreaRequirementType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PolygonAreaRequirementType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "area: " << sample.area ()<<", ";
                o << "areaTolerance: " << sample.areaTolerance ();
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
        struct native_type_code< ::UMAA::MM::BaseType::PolygonAreaRequirementType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PolygonAreaRequirementType_g_tc_members[2]=
                {

                    {
                        (char *)"area",/* Member name */
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
                        (char *)"areaTolerance",/* Member name */
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
                    }
                };

                static DDS_TypeCode PolygonAreaRequirementType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::PolygonAreaRequirementType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PolygonAreaRequirementType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PolygonAreaRequirementType*/

                if (is_initialized) {
                    return &PolygonAreaRequirementType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PolygonAreaRequirementType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PolygonAreaRequirementType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Polygon>::get().native();
                PolygonAreaRequirementType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::PolygonAreaToleranceType>::get().native();

                /* Initialize the values for member annotations. */

                PolygonAreaRequirementType_g_tc._data._sampleAccessInfo = sample_access_info();
                PolygonAreaRequirementType_g_tc._data._typePlugin = type_plugin_info();    

                return &PolygonAreaRequirementType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::PolygonAreaRequirementType *sample;

                static RTIXCdrMemberAccessInfo PolygonAreaRequirementType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PolygonAreaRequirementType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PolygonAreaRequirementType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::PolygonAreaRequirementType);
                if (sample == NULL) {
                    return NULL;
                }

                PolygonAreaRequirementType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->area() - (char *)sample);

                PolygonAreaRequirementType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->areaTolerance() - (char *)sample);

                PolygonAreaRequirementType_g_sampleAccessInfo.memberAccessInfos = 
                PolygonAreaRequirementType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::PolygonAreaRequirementType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PolygonAreaRequirementType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PolygonAreaRequirementType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PolygonAreaRequirementType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PolygonAreaRequirementType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::PolygonAreaRequirementType >;

                PolygonAreaRequirementType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PolygonAreaRequirementType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PolygonAreaRequirementType_g_typePlugin = 
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

                return &PolygonAreaRequirementType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::PolygonAreaRequirementType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::PolygonAreaRequirementType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::PolygonAreaRequirementType >::reset_sample(::UMAA::MM::BaseType::PolygonAreaRequirementType& sample) 
        {
            ::rti::topic::reset_sample(sample.area());
            ::rti::topic::reset_sample(sample.areaTolerance());
        }

        void topic_type_support< ::UMAA::MM::BaseType::PolygonAreaRequirementType >::allocate_sample(::UMAA::MM::BaseType::PolygonAreaRequirementType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.area(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
