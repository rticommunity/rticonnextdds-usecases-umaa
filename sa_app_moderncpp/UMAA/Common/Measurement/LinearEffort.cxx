

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinearEffort.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LinearEffort.hpp"
#include "LinearEffortPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- LinearEffort: 

            LinearEffort::LinearEffort() :
                m_xAxis_ (0.0) ,
                m_yAxis_ (0.0) ,
                m_zAxis_ (0.0)  {
            }   

            LinearEffort::LinearEffort (double xAxis,double yAxis,double zAxis):
                m_xAxis_( xAxis ),
                m_yAxis_( yAxis ),
                m_zAxis_( zAxis ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LinearEffort::LinearEffort(LinearEffort&& other_) OMG_NOEXCEPT  :m_xAxis_ (std::move(other_.m_xAxis_))
            ,
            m_yAxis_ (std::move(other_.m_yAxis_))
            ,
            m_zAxis_ (std::move(other_.m_zAxis_))
            {
            } 

            LinearEffort& LinearEffort::operator=(LinearEffort&&  other_) OMG_NOEXCEPT {
                LinearEffort tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LinearEffort::swap(LinearEffort& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_xAxis_, other_.m_xAxis_);
                swap(m_yAxis_, other_.m_yAxis_);
                swap(m_zAxis_, other_.m_zAxis_);
            }  

            bool LinearEffort::operator == (const LinearEffort& other_) const {
                if (m_xAxis_ != other_.m_xAxis_) {
                    return false;
                }
                if (m_yAxis_ != other_.m_yAxis_) {
                    return false;
                }
                if (m_zAxis_ != other_.m_zAxis_) {
                    return false;
                }
                return true;
            }
            bool LinearEffort::operator != (const LinearEffort& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LinearEffort& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "xAxis: " << std::setprecision(15) <<sample.xAxis()<<", ";
                o << "yAxis: " << std::setprecision(15) <<sample.yAxis()<<", ";
                o << "zAxis: " << std::setprecision(15) <<sample.zAxis() ;
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Measurement::LinearEffort > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LinearEffort_g_tc_members[3]=
                {

                    {
                        (char *)"xAxis",/* Member name */
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
                        (char *)"yAxis",/* Member name */
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
                        (char *)"zAxis",/* Member name */
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

                static DDS_TypeCode LinearEffort_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::LinearEffort", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LinearEffort_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LinearEffort*/

                if (is_initialized) {
                    return &LinearEffort_g_tc;
                }

                LinearEffort_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LinearEffort_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                LinearEffort_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                LinearEffort_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                LinearEffort_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                LinearEffort_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                LinearEffort_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                LinearEffort_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                LinearEffort_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                LinearEffort_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                LinearEffort_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                LinearEffort_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                LinearEffort_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LinearEffort_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                LinearEffort_g_tc._data._sampleAccessInfo = sample_access_info();
                LinearEffort_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LinearEffort_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::LinearEffort *sample;

                static RTIXCdrMemberAccessInfo LinearEffort_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LinearEffort_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LinearEffort_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::LinearEffort);
                if (sample == NULL) {
                    return NULL;
                }

                LinearEffort_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->xAxis() - (char *)sample);

                LinearEffort_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yAxis() - (char *)sample);

                LinearEffort_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zAxis() - (char *)sample);

                LinearEffort_g_sampleAccessInfo.memberAccessInfos = 
                LinearEffort_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::LinearEffort);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LinearEffort_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LinearEffort_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LinearEffort_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LinearEffort_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::LinearEffort >;

                LinearEffort_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LinearEffort_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LinearEffort_g_typePlugin = 
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

                return &LinearEffort_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::LinearEffort >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::LinearEffort >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::LinearEffort >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::LinearEffortPlugin_new,
                UMAA::Common::Measurement::LinearEffortPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::LinearEffort >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::LinearEffort& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LinearEffortPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LinearEffortPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::LinearEffort >::from_cdr_buffer(UMAA::Common::Measurement::LinearEffort& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LinearEffortPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::LinearEffort from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::LinearEffort >::reset_sample(UMAA::Common::Measurement::LinearEffort& sample) 
        {
            sample.xAxis(0.0);
            sample.yAxis(0.0);
            sample.zAxis(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::LinearEffort >::allocate_sample(UMAA::Common::Measurement::LinearEffort& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

