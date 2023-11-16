

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalHoverExecutionStatusReportPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalHoverExecutionStatusReport.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalHoverControl {

            // ---- GlobalHoverExecutionStatusReport: 

            GlobalHoverExecutionStatusReport::GlobalHoverExecutionStatusReport()  {

            }   

            GlobalHoverExecutionStatusReport::GlobalHoverExecutionStatusReport (const ::UMAA::MO::GlobalHoverState::GlobalHoverStateType& globalHoverState_,const ::UMAA::Common::Measurement::DateTime& timeHoverAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeHoverCompleted_):
                m_globalHoverState_(globalHoverState_), 
                m_timeHoverAchieved_(timeHoverAchieved_), 
                m_timeHoverCompleted_(timeHoverCompleted_) {
            }

            void GlobalHoverExecutionStatusReport::swap(GlobalHoverExecutionStatusReport& other_)  noexcept 
            {
                using std::swap;
                swap(m_globalHoverState_, other_.m_globalHoverState_);
                swap(m_timeHoverAchieved_, other_.m_timeHoverAchieved_);
                swap(m_timeHoverCompleted_, other_.m_timeHoverCompleted_);
            }  

            bool GlobalHoverExecutionStatusReport::operator == (const GlobalHoverExecutionStatusReport& other_) const {
                if (m_globalHoverState_ != other_.m_globalHoverState_) {
                    return false;
                }
                if (m_timeHoverAchieved_ != other_.m_timeHoverAchieved_) {
                    return false;
                }
                if (m_timeHoverCompleted_ != other_.m_timeHoverCompleted_) {
                    return false;
                }
                return true;
            }

            bool GlobalHoverExecutionStatusReport::operator != (const GlobalHoverExecutionStatusReport& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalHoverExecutionStatusReport& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "globalHoverState: " << sample.globalHoverState ()<<", ";
                o << "timeHoverAchieved: " << sample.timeHoverAchieved ()<<", ";
                o << "timeHoverCompleted: " << sample.timeHoverCompleted ();
                o <<"]";
                return o;
            }

        } // namespace GlobalHoverControl  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverExecutionStatusReport_g_tc_members[3]=
                {

                    {
                        (char *)"globalHoverState",/* Member name */
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
                        (char *)"timeHoverAchieved",/* Member name */
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
                        (char *)"timeHoverCompleted",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalHoverExecutionStatusReport_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GlobalHoverExecutionStatusReport_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverExecutionStatusReport*/

                if (is_initialized) {
                    return &GlobalHoverExecutionStatusReport_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalHoverExecutionStatusReport_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoverExecutionStatusReport_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType>::get().native();
                GlobalHoverExecutionStatusReport_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalHoverExecutionStatusReport_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                GlobalHoverExecutionStatusReport_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverExecutionStatusReport_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalHoverExecutionStatusReport_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport *sample;

                static RTIXCdrMemberAccessInfo GlobalHoverExecutionStatusReport_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverExecutionStatusReport_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverExecutionStatusReport_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoverExecutionStatusReport_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->globalHoverState() - (char *)sample);

                GlobalHoverExecutionStatusReport_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeHoverAchieved() - (char *)sample);

                GlobalHoverExecutionStatusReport_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeHoverCompleted() - (char *)sample);

                GlobalHoverExecutionStatusReport_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverExecutionStatusReport_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverExecutionStatusReport_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverExecutionStatusReport_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverExecutionStatusReport_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverExecutionStatusReport_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >;

                GlobalHoverExecutionStatusReport_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverExecutionStatusReport_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverExecutionStatusReport_g_typePlugin = 
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

                return &GlobalHoverExecutionStatusReport_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReportPlugin_new,
                ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReportPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalHoverExecutionStatusReportPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalHoverExecutionStatusReportPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::from_cdr_buffer(::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalHoverExecutionStatusReportPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::reset_sample(::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample) 
        {
            ::rti::topic::reset_sample(sample.globalHoverState());
            ::rti::topic::reset_sample(sample.timeHoverAchieved());
            ::rti::topic::reset_sample(sample.timeHoverCompleted());
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport >::allocate_sample(::UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.globalHoverState(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeHoverAchieved(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
