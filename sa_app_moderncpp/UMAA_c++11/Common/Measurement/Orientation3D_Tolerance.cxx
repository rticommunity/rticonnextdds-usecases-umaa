

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3D_Tolerance.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Orientation3D_TolerancePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Orientation3D_Tolerance.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Orientation3D_Tolerance: 

            Orientation3D_Tolerance::Orientation3D_Tolerance()  {

            }   

            Orientation3D_Tolerance::Orientation3D_Tolerance (const ::UMAA::Common::Measurement::Orientation3D& lowerLimit_,const ::UMAA::Common::Measurement::Orientation3D& stepSize_,const ::UMAA::Common::Measurement::Orientation3D& upperLimit_):
                m_lowerLimit_(lowerLimit_), 
                m_stepSize_(stepSize_), 
                m_upperLimit_(upperLimit_) {
            }

            void Orientation3D_Tolerance::swap(Orientation3D_Tolerance& other_)  noexcept 
            {
                using std::swap;
                swap(m_lowerLimit_, other_.m_lowerLimit_);
                swap(m_stepSize_, other_.m_stepSize_);
                swap(m_upperLimit_, other_.m_upperLimit_);
            }  

            bool Orientation3D_Tolerance::operator == (const Orientation3D_Tolerance& other_) const {
                if (m_lowerLimit_ != other_.m_lowerLimit_) {
                    return false;
                }
                if (m_stepSize_ != other_.m_stepSize_) {
                    return false;
                }
                if (m_upperLimit_ != other_.m_upperLimit_) {
                    return false;
                }
                return true;
            }

            bool Orientation3D_Tolerance::operator != (const Orientation3D_Tolerance& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Orientation3D_Tolerance& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "lowerLimit: " << sample.lowerLimit ()<<", ";
                o << "stepSize: " << sample.stepSize ()<<", ";
                o << "upperLimit: " << sample.upperLimit ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Measurement::Orientation3D_Tolerance > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Orientation3D_Tolerance_g_tc_members[3]=
                {

                    {
                        (char *)"lowerLimit",/* Member name */
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
                        (char *)"stepSize",/* Member name */
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
                        (char *)"upperLimit",/* Member name */
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

                static DDS_TypeCode Orientation3D_Tolerance_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Orientation3D_Tolerance", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Orientation3D_Tolerance_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Orientation3D_Tolerance*/

                if (is_initialized) {
                    return &Orientation3D_Tolerance_g_tc;
                }

                is_initialized = RTI_TRUE;

                Orientation3D_Tolerance_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Orientation3D_Tolerance_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Orientation3D>::get().native();
                Orientation3D_Tolerance_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Orientation3D>::get().native();
                Orientation3D_Tolerance_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Orientation3D>::get().native();

                /* Initialize the values for member annotations. */

                Orientation3D_Tolerance_g_tc._data._sampleAccessInfo = sample_access_info();
                Orientation3D_Tolerance_g_tc._data._typePlugin = type_plugin_info();    

                return &Orientation3D_Tolerance_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Orientation3D_Tolerance *sample;

                static RTIXCdrMemberAccessInfo Orientation3D_Tolerance_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Orientation3D_Tolerance_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Orientation3D_Tolerance_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Orientation3D_Tolerance);
                if (sample == NULL) {
                    return NULL;
                }

                Orientation3D_Tolerance_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowerLimit() - (char *)sample);

                Orientation3D_Tolerance_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stepSize() - (char *)sample);

                Orientation3D_Tolerance_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLimit() - (char *)sample);

                Orientation3D_Tolerance_g_sampleAccessInfo.memberAccessInfos = 
                Orientation3D_Tolerance_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Orientation3D_Tolerance);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Orientation3D_Tolerance_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Orientation3D_Tolerance_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Orientation3D_Tolerance_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Orientation3D_Tolerance_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Orientation3D_Tolerance >;

                Orientation3D_Tolerance_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Orientation3D_Tolerance_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Orientation3D_Tolerance_g_typePlugin = 
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

                return &Orientation3D_Tolerance_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Orientation3D_Tolerance >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Orientation3D_TolerancePlugin_new,
                ::UMAA::Common::Measurement::Orientation3D_TolerancePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Orientation3D_Tolerance& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Orientation3D_TolerancePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Orientation3D_TolerancePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::from_cdr_buffer(::UMAA::Common::Measurement::Orientation3D_Tolerance& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Orientation3D_TolerancePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Orientation3D_Tolerance from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::reset_sample(::UMAA::Common::Measurement::Orientation3D_Tolerance& sample) 
        {
            ::rti::topic::reset_sample(sample.lowerLimit());
            ::rti::topic::reset_sample(sample.stepSize());
            ::rti::topic::reset_sample(sample.upperLimit());
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation3D_Tolerance >::allocate_sample(::UMAA::Common::Measurement::Orientation3D_Tolerance& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.lowerLimit(),  -1, -1);
            ::rti::topic::allocate_sample(sample.stepSize(),  -1, -1);
            ::rti::topic::allocate_sample(sample.upperLimit(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
