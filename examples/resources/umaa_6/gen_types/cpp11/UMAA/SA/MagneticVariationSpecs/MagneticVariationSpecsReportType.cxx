

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticVariationSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MagneticVariationSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MagneticVariationSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace MagneticVariationSpecs {

            // ---- MagneticVariationSpecsReportType: 

            MagneticVariationSpecsReportType::MagneticVariationSpecsReportType()  {

            }   

            MagneticVariationSpecsReportType::MagneticVariationSpecsReportType (const ::rti::core::bounded_sequence< ::UMAA::Common::Orientation::MagneticDeviationType, 360L >& magneticDeviation_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_magneticDeviation_(magneticDeviation_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void MagneticVariationSpecsReportType::swap(MagneticVariationSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_magneticDeviation_, other_.m_magneticDeviation_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool MagneticVariationSpecsReportType::operator == (const MagneticVariationSpecsReportType& other_) const {
                if (m_magneticDeviation_ != other_.m_magneticDeviation_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool MagneticVariationSpecsReportType::operator != (const MagneticVariationSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MagneticVariationSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "magneticDeviation: " << sample.magneticDeviation ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace MagneticVariationSpecs  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MagneticVariationSpecsReportType_g_tc_magneticDeviation_sequence;

                static DDS_TypeCode_Member MagneticVariationSpecsReportType_g_tc_members[3]=
                {

                    {
                        (char *)"magneticDeviation",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MagneticVariationSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MagneticVariationSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MagneticVariationSpecsReportType*/

                if (is_initialized) {
                    return &MagneticVariationSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MagneticVariationSpecsReportType_g_tc_magneticDeviation_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Orientation::MagneticDeviationType, 360L > >((360L));

                MagneticVariationSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MagneticVariationSpecsReportType_g_tc_magneticDeviation_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::MagneticDeviationType>::get().native();
                MagneticVariationSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MagneticVariationSpecsReportType_g_tc_magneticDeviation_sequence;
                MagneticVariationSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MagneticVariationSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */

                MagneticVariationSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                MagneticVariationSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &MagneticVariationSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo MagneticVariationSpecsReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MagneticVariationSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MagneticVariationSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                MagneticVariationSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->magneticDeviation() - (char *)sample);

                MagneticVariationSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MagneticVariationSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MagneticVariationSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                MagneticVariationSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MagneticVariationSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MagneticVariationSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MagneticVariationSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MagneticVariationSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >;

                MagneticVariationSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MagneticVariationSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MagneticVariationSpecsReportType_g_typePlugin = 
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

                return &MagneticVariationSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportTypePlugin_new,
                ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MagneticVariationSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MagneticVariationSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::from_cdr_buffer(::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MagneticVariationSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::reset_sample(::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.magneticDeviation());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType >::allocate_sample(::UMAA::SA::MagneticVariationSpecs::MagneticVariationSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.magneticDeviation(),  360L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
