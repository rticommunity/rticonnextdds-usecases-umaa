

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWindowType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "TimeWindowType.hpp"
#include "TimeWindowTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace TimeWindow {

            // ---- TimeWindowType: 

            TimeWindowType::TimeWindowType()  {
            }   

            TimeWindowType::TimeWindowType (const UMAA::Common::Measurement::DateTime& end,const UMAA::Common::Measurement::DateTime& start):
                m_end_( end ),
                m_start_( start ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            TimeWindowType::TimeWindowType(TimeWindowType&& other_) OMG_NOEXCEPT  :m_end_ (std::move(other_.m_end_))
            ,
            m_start_ (std::move(other_.m_start_))
            {
            } 

            TimeWindowType& TimeWindowType::operator=(TimeWindowType&&  other_) OMG_NOEXCEPT {
                TimeWindowType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void TimeWindowType::swap(TimeWindowType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_end_, other_.m_end_);
                swap(m_start_, other_.m_start_);
            }  

            bool TimeWindowType::operator == (const TimeWindowType& other_) const {
                if (m_end_ != other_.m_end_) {
                    return false;
                }
                if (m_start_ != other_.m_start_) {
                    return false;
                }
                return true;
            }
            bool TimeWindowType::operator != (const TimeWindowType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TimeWindowType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "end: " << sample.end()<<", ";
                o << "start: " << sample.start() ;
                o <<"]";
                return o;
            }

        } // namespace TimeWindow  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::TimeWindow::TimeWindowType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TimeWindowType_g_tc_members[2]=
                {

                    {
                        (char *)"end",/* Member name */
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
                        (char *)"start",/* Member name */
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

                static DDS_TypeCode TimeWindowType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::TimeWindow::TimeWindowType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TimeWindowType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TimeWindowType*/

                if (is_initialized) {
                    return &TimeWindowType_g_tc;
                }

                TimeWindowType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TimeWindowType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                TimeWindowType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                TimeWindowType_g_tc._data._sampleAccessInfo = sample_access_info();
                TimeWindowType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &TimeWindowType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::TimeWindow::TimeWindowType *sample;

                static RTIXCdrMemberAccessInfo TimeWindowType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TimeWindowType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TimeWindowType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::TimeWindow::TimeWindowType);
                if (sample == NULL) {
                    return NULL;
                }

                TimeWindowType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->end() - (char *)sample);

                TimeWindowType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->start() - (char *)sample);

                TimeWindowType_g_sampleAccessInfo.memberAccessInfos = 
                TimeWindowType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::TimeWindow::TimeWindowType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TimeWindowType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TimeWindowType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TimeWindowType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TimeWindowType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::TimeWindow::TimeWindowType >;

                TimeWindowType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TimeWindowType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TimeWindowType_g_typePlugin = 
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

                return &TimeWindowType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::TimeWindow::TimeWindowType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::TimeWindow::TimeWindowType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::TimeWindow::TimeWindowType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::TimeWindow::TimeWindowTypePlugin_new,
                UMAA::Common::TimeWindow::TimeWindowTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::TimeWindow::TimeWindowType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::TimeWindow::TimeWindowType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TimeWindowTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TimeWindowTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::TimeWindow::TimeWindowType >::from_cdr_buffer(UMAA::Common::TimeWindow::TimeWindowType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TimeWindowTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::TimeWindow::TimeWindowType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::TimeWindow::TimeWindowType >::reset_sample(UMAA::Common::TimeWindow::TimeWindowType& sample) 
        {
            ::rti::topic::reset_sample(sample.end());
            ::rti::topic::reset_sample(sample.start());
        }

        void topic_type_support< UMAA::Common::TimeWindow::TimeWindowType >::allocate_sample(UMAA::Common::TimeWindow::TimeWindowType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.end(),  -1, -1);
            ::rti::topic::allocate_sample(sample.start(),  -1, -1);
        }

    }
}  

