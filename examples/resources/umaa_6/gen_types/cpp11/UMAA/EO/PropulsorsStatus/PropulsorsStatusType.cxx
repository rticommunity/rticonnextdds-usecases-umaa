

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsorsStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsorsStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace PropulsorsStatus {

            // ---- PropulsorsStatusType: 

            PropulsorsStatusType::PropulsorsStatusType()  {

            }   

            PropulsorsStatusType::PropulsorsStatusType (const ::rti::core::bounded_sequence< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType, 16L >& propulsorStatus_):
                m_propulsorStatus_(propulsorStatus_) {
            }

            void PropulsorsStatusType::swap(PropulsorsStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_propulsorStatus_, other_.m_propulsorStatus_);
            }  

            bool PropulsorsStatusType::operator == (const PropulsorsStatusType& other_) const {
                if (m_propulsorStatus_ != other_.m_propulsorStatus_) {
                    return false;
                }
                return true;
            }

            bool PropulsorsStatusType::operator != (const PropulsorsStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsorsStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "propulsorStatus: " << sample.propulsorStatus ();
                o <<"]";
                return o;
            }

        } // namespace PropulsorsStatus  

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
        struct native_type_code< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PropulsorsStatusType_g_tc_propulsorStatus_sequence;

                static DDS_TypeCode_Member PropulsorsStatusType_g_tc_members[1]=
                {

                    {
                        (char *)"propulsorStatus",/* Member name */
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
                    }
                };

                static DDS_TypeCode PropulsorsStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::PropulsorsStatus::PropulsorsStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsorsStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsorsStatusType*/

                if (is_initialized) {
                    return &PropulsorsStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsorsStatusType_g_tc_propulsorStatus_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType, 16L > >((16L));

                PropulsorsStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsorsStatusType_g_tc_propulsorStatus_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType>::get().native();
                PropulsorsStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& PropulsorsStatusType_g_tc_propulsorStatus_sequence;

                /* Initialize the values for member annotations. */

                PropulsorsStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsorsStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsorsStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType *sample;

                static RTIXCdrMemberAccessInfo PropulsorsStatusType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsorsStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsorsStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsorsStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsorStatus() - (char *)sample);

                PropulsorsStatusType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsorsStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::PropulsorsStatus::PropulsorsStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsorsStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsorsStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsorsStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsorsStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType >;

                PropulsorsStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsorsStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsorsStatusType_g_typePlugin = 
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

                return &PropulsorsStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType >::reset_sample(::UMAA::EO::PropulsorsStatus::PropulsorsStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.propulsorStatus());
        }

        void topic_type_support< ::UMAA::EO::PropulsorsStatus::PropulsorsStatusType >::allocate_sample(::UMAA::EO::PropulsorsStatus::PropulsorsStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.propulsorStatus(),  16L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
