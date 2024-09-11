

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinsStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "FinsStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FinsStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace FinsStatus {

            // ---- FinsStatusType: 

            FinsStatusType::FinsStatusType()  {

            }   

            FinsStatusType::FinsStatusType (const ::rti::core::bounded_sequence< ::UMAA::EO::FinsStatus::FinStatusType, 16L >& fins_):
                m_fins_(fins_) {
            }

            void FinsStatusType::swap(FinsStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_fins_, other_.m_fins_);
            }  

            bool FinsStatusType::operator == (const FinsStatusType& other_) const {
                if (m_fins_ != other_.m_fins_) {
                    return false;
                }
                return true;
            }

            bool FinsStatusType::operator != (const FinsStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FinsStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "fins: " << sample.fins ();
                o <<"]";
                return o;
            }

        } // namespace FinsStatus  

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
        struct native_type_code< ::UMAA::EO::FinsStatus::FinsStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FinsStatusType_g_tc_fins_sequence;

                static DDS_TypeCode_Member FinsStatusType_g_tc_members[1]=
                {

                    {
                        (char *)"fins",/* Member name */
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

                static DDS_TypeCode FinsStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::FinsStatus::FinsStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FinsStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FinsStatusType*/

                if (is_initialized) {
                    return &FinsStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FinsStatusType_g_tc_fins_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::EO::FinsStatus::FinStatusType, 16L > >((16L));

                FinsStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FinsStatusType_g_tc_fins_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::FinsStatus::FinStatusType>::get().native();
                FinsStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& FinsStatusType_g_tc_fins_sequence;

                /* Initialize the values for member annotations. */

                FinsStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                FinsStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &FinsStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::FinsStatus::FinsStatusType *sample;

                static RTIXCdrMemberAccessInfo FinsStatusType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FinsStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FinsStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::FinsStatus::FinsStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                FinsStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fins() - (char *)sample);

                FinsStatusType_g_sampleAccessInfo.memberAccessInfos = 
                FinsStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::FinsStatus::FinsStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FinsStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FinsStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FinsStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FinsStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::FinsStatus::FinsStatusType >;

                FinsStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FinsStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FinsStatusType_g_typePlugin = 
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

                return &FinsStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::FinsStatus::FinsStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::FinsStatus::FinsStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::FinsStatus::FinsStatusType >::reset_sample(::UMAA::EO::FinsStatus::FinsStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.fins());
        }

        void topic_type_support< ::UMAA::EO::FinsStatus::FinsStatusType >::allocate_sample(::UMAA::EO::FinsStatus::FinsStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.fins(),  16L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
