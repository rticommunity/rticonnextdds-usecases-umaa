

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RotationalEffort.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RotationalEffort.hpp"
#include "RotationalEffortPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- RotationalEffort: 

            RotationalEffort::RotationalEffort() :
                m_pitchEffort_ (0.0) ,
                m_rollEffort_ (0.0) ,
                m_yawEffort_ (0.0)  {
            }   

            RotationalEffort::RotationalEffort (double pitchEffort,double rollEffort,double yawEffort):
                m_pitchEffort_( pitchEffort ),
                m_rollEffort_( rollEffort ),
                m_yawEffort_( yawEffort ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RotationalEffort::RotationalEffort(RotationalEffort&& other_) OMG_NOEXCEPT  :m_pitchEffort_ (std::move(other_.m_pitchEffort_))
            ,
            m_rollEffort_ (std::move(other_.m_rollEffort_))
            ,
            m_yawEffort_ (std::move(other_.m_yawEffort_))
            {
            } 

            RotationalEffort& RotationalEffort::operator=(RotationalEffort&&  other_) OMG_NOEXCEPT {
                RotationalEffort tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RotationalEffort::swap(RotationalEffort& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_pitchEffort_, other_.m_pitchEffort_);
                swap(m_rollEffort_, other_.m_rollEffort_);
                swap(m_yawEffort_, other_.m_yawEffort_);
            }  

            bool RotationalEffort::operator == (const RotationalEffort& other_) const {
                if (m_pitchEffort_ != other_.m_pitchEffort_) {
                    return false;
                }
                if (m_rollEffort_ != other_.m_rollEffort_) {
                    return false;
                }
                if (m_yawEffort_ != other_.m_yawEffort_) {
                    return false;
                }
                return true;
            }
            bool RotationalEffort::operator != (const RotationalEffort& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RotationalEffort& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchEffort: " << std::setprecision(15) <<sample.pitchEffort()<<", ";
                o << "rollEffort: " << std::setprecision(15) <<sample.rollEffort()<<", ";
                o << "yawEffort: " << std::setprecision(15) <<sample.yawEffort() ;
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
        struct native_type_code< UMAA::Common::Measurement::RotationalEffort > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotationalEffort_g_tc_members[3]=
                {

                    {
                        (char *)"pitchEffort",/* Member name */
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
                        (char *)"rollEffort",/* Member name */
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
                        (char *)"yawEffort",/* Member name */
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

                static DDS_TypeCode RotationalEffort_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::RotationalEffort", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        RotationalEffort_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RotationalEffort*/

                if (is_initialized) {
                    return &RotationalEffort_g_tc;
                }

                RotationalEffort_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RotationalEffort_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                RotationalEffort_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                RotationalEffort_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                RotationalEffort_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                RotationalEffort_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RotationalEffort_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RotationalEffort_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                RotationalEffort_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RotationalEffort_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RotationalEffort_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                RotationalEffort_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RotationalEffort_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RotationalEffort_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RotationalEffort_g_tc._data._sampleAccessInfo = sample_access_info();
                RotationalEffort_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RotationalEffort_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::RotationalEffort *sample;

                static RTIXCdrMemberAccessInfo RotationalEffort_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RotationalEffort_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RotationalEffort_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::RotationalEffort);
                if (sample == NULL) {
                    return NULL;
                }

                RotationalEffort_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchEffort() - (char *)sample);

                RotationalEffort_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollEffort() - (char *)sample);

                RotationalEffort_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawEffort() - (char *)sample);

                RotationalEffort_g_sampleAccessInfo.memberAccessInfos = 
                RotationalEffort_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::RotationalEffort);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RotationalEffort_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RotationalEffort_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RotationalEffort_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RotationalEffort_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::RotationalEffort >;

                RotationalEffort_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RotationalEffort_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RotationalEffort_g_typePlugin = 
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

                return &RotationalEffort_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::RotationalEffort >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::RotationalEffort >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::RotationalEffort >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::RotationalEffortPlugin_new,
                UMAA::Common::Measurement::RotationalEffortPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::RotationalEffort >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::RotationalEffort& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RotationalEffortPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RotationalEffortPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::RotationalEffort >::from_cdr_buffer(UMAA::Common::Measurement::RotationalEffort& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RotationalEffortPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::RotationalEffort from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::RotationalEffort >::reset_sample(UMAA::Common::Measurement::RotationalEffort& sample) 
        {
            sample.pitchEffort(0.0);
            sample.rollEffort(0.0);
            sample.yawEffort(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::RotationalEffort >::allocate_sample(UMAA::Common::Measurement::RotationalEffort& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

