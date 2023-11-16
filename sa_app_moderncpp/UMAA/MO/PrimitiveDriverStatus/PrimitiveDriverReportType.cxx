

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PrimitiveDriverReportType.hpp"
#include "PrimitiveDriverReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace PrimitiveDriverStatus {

            // ---- PrimitiveDriverReportType: 

            PrimitiveDriverReportType::PrimitiveDriverReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PrimitiveDriverReportType::PrimitiveDriverReportType (const UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort,const UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_propulsiveLinearEffort_( propulsiveLinearEffort ),
                m_propulsiveRotationalEffort_( propulsiveRotationalEffort ),
                m_resistiveLinearEffort_( resistiveLinearEffort ),
                m_resistiveRotationalEffort_( resistiveRotationalEffort ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PrimitiveDriverReportType::PrimitiveDriverReportType(PrimitiveDriverReportType&& other_) OMG_NOEXCEPT  :m_propulsiveLinearEffort_ (std::move(other_.m_propulsiveLinearEffort_))
            ,
            m_propulsiveRotationalEffort_ (std::move(other_.m_propulsiveRotationalEffort_))
            ,
            m_resistiveLinearEffort_ (std::move(other_.m_resistiveLinearEffort_))
            ,
            m_resistiveRotationalEffort_ (std::move(other_.m_resistiveRotationalEffort_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            PrimitiveDriverReportType& PrimitiveDriverReportType::operator=(PrimitiveDriverReportType&&  other_) OMG_NOEXCEPT {
                PrimitiveDriverReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PrimitiveDriverReportType::swap(PrimitiveDriverReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_propulsiveLinearEffort_, other_.m_propulsiveLinearEffort_);
                swap(m_propulsiveRotationalEffort_, other_.m_propulsiveRotationalEffort_);
                swap(m_resistiveLinearEffort_, other_.m_resistiveLinearEffort_);
                swap(m_resistiveRotationalEffort_, other_.m_resistiveRotationalEffort_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PrimitiveDriverReportType::operator == (const PrimitiveDriverReportType& other_) const {
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
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool PrimitiveDriverReportType::operator != (const PrimitiveDriverReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PrimitiveDriverReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "propulsiveLinearEffort: " << sample.propulsiveLinearEffort()<<", ";
                o << "propulsiveRotationalEffort: " << sample.propulsiveRotationalEffort()<<", ";
                o << "resistiveLinearEffort: " << sample.resistiveLinearEffort()<<", ";
                o << "resistiveRotationalEffort: " << sample.resistiveRotationalEffort()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace PrimitiveDriverStatus  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrimitiveDriverReportType_g_tc_members[6]=
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
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PrimitiveDriverReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PrimitiveDriverReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PrimitiveDriverReportType*/

                if (is_initialized) {
                    return &PrimitiveDriverReportType_g_tc;
                }

                PrimitiveDriverReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PrimitiveDriverReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::LinearEffort>::get().native();
                PrimitiveDriverReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RotationalEffort>::get().native();
                PrimitiveDriverReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PrimitiveDriverReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                PrimitiveDriverReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PrimitiveDriverReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PrimitiveDriverReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType *sample;

                static RTIXCdrMemberAccessInfo PrimitiveDriverReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PrimitiveDriverReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PrimitiveDriverReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveLinearEffort() - (char *)sample);

                PrimitiveDriverReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsiveRotationalEffort() - (char *)sample);

                PrimitiveDriverReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveLinearEffort() - (char *)sample);

                PrimitiveDriverReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resistiveRotationalEffort() - (char *)sample);

                PrimitiveDriverReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PrimitiveDriverReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PrimitiveDriverReportType_g_sampleAccessInfo.memberAccessInfos = 
                PrimitiveDriverReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PrimitiveDriverReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PrimitiveDriverReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PrimitiveDriverReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PrimitiveDriverReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >;

                PrimitiveDriverReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PrimitiveDriverReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PrimitiveDriverReportType_g_typePlugin = 
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

                return &PrimitiveDriverReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportTypePlugin_new,
                UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PrimitiveDriverReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PrimitiveDriverReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::from_cdr_buffer(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PrimitiveDriverReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::reset_sample(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.propulsiveLinearEffort());
            ::rti::topic::reset_sample(sample.propulsiveRotationalEffort());
            ::rti::topic::reset_sample(sample.resistiveLinearEffort());
            ::rti::topic::reset_sample(sample.resistiveRotationalEffort());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType >::allocate_sample(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.propulsiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.propulsiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveLinearEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resistiveRotationalEffort(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

