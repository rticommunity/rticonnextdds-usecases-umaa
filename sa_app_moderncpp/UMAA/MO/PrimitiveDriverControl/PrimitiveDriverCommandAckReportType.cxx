

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PrimitiveDriverCommandAckReportType.hpp"
#include "PrimitiveDriverCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace PrimitiveDriverControl {

            // ---- PrimitiveDriverCommandAckReportType: 

            PrimitiveDriverCommandAckReportType::PrimitiveDriverCommandAckReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_sessionID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PrimitiveDriverCommandAckReportType::PrimitiveDriverCommandAckReportType (const UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort,const UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_propulsiveLinearEffort_( propulsiveLinearEffort ),
                m_propulsiveRotationalEffort_( propulsiveRotationalEffort ),
                m_resistiveLinearEffort_( resistiveLinearEffort ),
                m_resistiveRotationalEffort_( resistiveRotationalEffort ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PrimitiveDriverCommandAckReportType::PrimitiveDriverCommandAckReportType(PrimitiveDriverCommandAckReportType&& other_) OMG_NOEXCEPT  :m_propulsiveLinearEffort_ (std::move(other_.m_propulsiveLinearEffort_))
            ,
            m_propulsiveRotationalEffort_ (std::move(other_.m_propulsiveRotationalEffort_))
            ,
            m_resistiveLinearEffort_ (std::move(other_.m_resistiveLinearEffort_))
            ,
            m_resistiveRotationalEffort_ (std::move(other_.m_resistiveRotationalEffort_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            PrimitiveDriverCommandAckReportType& PrimitiveDriverCommandAckReportType::operator=(PrimitiveDriverCommandAckReportType&&  other_) OMG_NOEXCEPT {
                PrimitiveDriverCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PrimitiveDriverCommandAckReportType::swap(PrimitiveDriverCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_propulsiveLinearEffort_, other_.m_propulsiveLinearEffort_);
                swap(m_propulsiveRotationalEffort_, other_.m_propulsiveRotationalEffort_);
                swap(m_resistiveLinearEffort_, other_.m_resistiveLinearEffort_);
                swap(m_resistiveRotationalEffort_, other_.m_resistiveRotationalEffort_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool PrimitiveDriverCommandAckReportType::operator == (const PrimitiveDriverCommandAckReportType& other_) const {
                if (m_propulsiveLinearEffort_ != other_.m_propulsiveLinearEffort_) {
                    return false;
                }
                if (m_propulsiveRotationalEffort_ != other_.m_propulsiveRotationalEffort_) {
                    return false;
                }
                if (m_resistiveLinearEffort_ != other_.m_resistiveLinearEffort_) {
                    return false;
                }
                if (m_resistiveRotationalEffort_ != other_.m_resistiveRotationalEffort_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }
            bool PrimitiveDriverCommandAckReportType::operator != (const PrimitiveDriverCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PrimitiveDriverCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "propulsiveLinearEffort: " << sample.propulsiveLinearEffort()<<", ";
                o << "propulsiveRotationalEffort: " << sample.propulsiveRotationalEffort()<<", ";
                o << "resistiveLinearEffort: " << sample.resistiveLinearEffort()<<", ";
                o << "resistiveRotationalEffort: " << sample.resistiveRotationalEffort()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace PrimitiveDriverControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrimitiveDriverCommandAckReportType_g_tc_members[6]=
                {

                    {
                        (char *)"propulsiveLinearEffort",/* Member name */
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
                        (char *)"propulsiveRotationalEffort",/* Member name */
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
                        (char *)"resistiveLinearEffort",/* Member name */
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
                    }, 
                    {
                        (char *)"resistiveRotationalEffort",/* Member name */
                        {
                            3,/* Representation ID */
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
                            4,/* Representation ID */
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
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
                        {
                            5,/* Representation ID */
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

                static DDS_TypeCode PrimitiveDriverCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PrimitiveDriverCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PrimitiveDriverCommandAckReportType*/

                if (is_initialized) {
                    return &PrimitiveDriverCommandAckReportType_g_tc;
                }

                PrimitiveDriverCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PrimitiveDriverCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverCommandAckReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PrimitiveDriverCommandAckReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PrimitiveDriverCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PrimitiveDriverCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PrimitiveDriverCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo PrimitiveDriverCommandAckReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PrimitiveDriverCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveLinearEffort() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveRotationalEffort() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveLinearEffort() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveRotationalEffort() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                PrimitiveDriverCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >;

                PrimitiveDriverCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PrimitiveDriverCommandAckReportType_g_typePlugin = 
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

                return &PrimitiveDriverCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportTypePlugin_new,
                UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PrimitiveDriverCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PrimitiveDriverCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::from_cdr_buffer(UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PrimitiveDriverCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::reset_sample(UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.propulsiveLinearEffort());
            ::rti::topic::reset_sample(sample.propulsiveRotationalEffort());
            ::rti::topic::reset_sample(sample.resistiveLinearEffort());
            ::rti::topic::reset_sample(sample.resistiveRotationalEffort());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType >::allocate_sample(UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.propulsiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.propulsiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

