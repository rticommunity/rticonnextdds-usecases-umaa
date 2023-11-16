

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWithSpeed.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "TimeWithSpeed.hpp"
#include "TimeWithSpeedPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace VariableSpeedControl {

            // ---- TimeWithSpeed: 

            TimeWithSpeed::TimeWithSpeed()  {
            }   

            TimeWithSpeed::TimeWithSpeed (const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& recommendedSpeed,const UMAA::Common::TimeWindow::TimeWindowType& timeWindow):
                m_recommendedSpeed_( recommendedSpeed ),
                m_timeWindow_( timeWindow ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            TimeWithSpeed::TimeWithSpeed(TimeWithSpeed&& other_) OMG_NOEXCEPT  :m_recommendedSpeed_ (std::move(other_.m_recommendedSpeed_))
            ,
            m_timeWindow_ (std::move(other_.m_timeWindow_))
            {
            } 

            TimeWithSpeed& TimeWithSpeed::operator=(TimeWithSpeed&&  other_) OMG_NOEXCEPT {
                TimeWithSpeed tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void TimeWithSpeed::swap(TimeWithSpeed& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_recommendedSpeed_, other_.m_recommendedSpeed_);
                swap(m_timeWindow_, other_.m_timeWindow_);
            }  

            bool TimeWithSpeed::operator == (const TimeWithSpeed& other_) const {
                if (m_recommendedSpeed_ != other_.m_recommendedSpeed_) {
                    return false;
                }
                if (m_timeWindow_ != other_.m_timeWindow_) {
                    return false;
                }
                return true;
            }
            bool TimeWithSpeed::operator != (const TimeWithSpeed& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TimeWithSpeed& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "recommendedSpeed: " << sample.recommendedSpeed()<<", ";
                o << "timeWindow: " << sample.timeWindow() ;
                o <<"]";
                return o;
            }

        } // namespace VariableSpeedControl  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::VariableSpeedControl::TimeWithSpeed > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TimeWithSpeed_g_tc_members[2]=
                {

                    {
                        (char *)"recommendedSpeed",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeWindow",/* Member name */
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

                static DDS_TypeCode TimeWithSpeed_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::VariableSpeedControl::TimeWithSpeed", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TimeWithSpeed_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TimeWithSpeed*/

                if (is_initialized) {
                    return &TimeWithSpeed_g_tc;
                }

                TimeWithSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TimeWithSpeed_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedControlType>::get().native();
                TimeWithSpeed_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::TimeWindow::TimeWindowType>::get().native();

                /* Initialize the values for member annotations. */

                TimeWithSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                TimeWithSpeed_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &TimeWithSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::VariableSpeedControl::TimeWithSpeed *sample;

                static RTIXCdrMemberAccessInfo TimeWithSpeed_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TimeWithSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TimeWithSpeed_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::VariableSpeedControl::TimeWithSpeed);
                if (sample == NULL) {
                    return NULL;
                }

                TimeWithSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedSpeed() - (char *)sample);

                TimeWithSpeed_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeWindow() - (char *)sample);

                TimeWithSpeed_g_sampleAccessInfo.memberAccessInfos = 
                TimeWithSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::VariableSpeedControl::TimeWithSpeed);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TimeWithSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TimeWithSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TimeWithSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TimeWithSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::VariableSpeedControl::TimeWithSpeed >;

                TimeWithSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TimeWithSpeed_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TimeWithSpeed_g_typePlugin = 
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
                    NULL
                };

                return &TimeWithSpeed_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::VariableSpeedControl::TimeWithSpeed >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::VariableSpeedControl::TimeWithSpeedPlugin_new,
                UMAA::Common::VariableSpeedControl::TimeWithSpeedPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::VariableSpeedControl::TimeWithSpeed& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TimeWithSpeedPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TimeWithSpeedPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::from_cdr_buffer(UMAA::Common::VariableSpeedControl::TimeWithSpeed& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TimeWithSpeedPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::VariableSpeedControl::TimeWithSpeed from cdr buffer");
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::reset_sample(UMAA::Common::VariableSpeedControl::TimeWithSpeed& sample) 
        {
            ::rti::topic::reset_sample(sample.recommendedSpeed());
            ::rti::topic::reset_sample(sample.timeWindow());
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::TimeWithSpeed >::allocate_sample(UMAA::Common::VariableSpeedControl::TimeWithSpeed& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeWindow(),  -1, -1);
        }

    }
}  

