

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NEDVelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "NEDVelocityReportType.hpp"
#include "NEDVelocityReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace NEDVelocityStatus {

            // ---- NEDVelocityReportType: 

            NEDVelocityReportType::NEDVelocityReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            NEDVelocityReportType::NEDVelocityReportType (const ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >& attitudeRate,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateRMS,const UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityRMS,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_attitudeRate_( attitudeRate ),
                m_attitudeRateRMS_( attitudeRateRMS ),
                m_velocity_( velocity ),
                m_velocityRMS_( velocityRMS ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            NEDVelocityReportType::NEDVelocityReportType(NEDVelocityReportType&& other_) OMG_NOEXCEPT  :m_attitudeRate_ (std::move(other_.m_attitudeRate_))
            ,
            m_attitudeRateRMS_ (std::move(other_.m_attitudeRateRMS_))
            ,
            m_velocity_ (std::move(other_.m_velocity_))
            ,
            m_velocityRMS_ (std::move(other_.m_velocityRMS_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            NEDVelocityReportType& NEDVelocityReportType::operator=(NEDVelocityReportType&&  other_) OMG_NOEXCEPT {
                NEDVelocityReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void NEDVelocityReportType::swap(NEDVelocityReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_attitudeRate_, other_.m_attitudeRate_);
                swap(m_attitudeRateRMS_, other_.m_attitudeRateRMS_);
                swap(m_velocity_, other_.m_velocity_);
                swap(m_velocityRMS_, other_.m_velocityRMS_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool NEDVelocityReportType::operator == (const NEDVelocityReportType& other_) const {
                if (m_attitudeRate_ != other_.m_attitudeRate_) {
                    return false;
                }
                if (m_attitudeRateRMS_ != other_.m_attitudeRateRMS_) {
                    return false;
                }
                if (m_velocity_ != other_.m_velocity_) {
                    return false;
                }
                if (m_velocityRMS_ != other_.m_velocityRMS_) {
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
            bool NEDVelocityReportType::operator != (const NEDVelocityReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const NEDVelocityReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "attitudeRate: " << sample.attitudeRate()<<", ";
                o << "attitudeRateRMS: " << sample.attitudeRateRMS()<<", ";
                o << "velocity: " << sample.velocity()<<", ";
                o << "velocityRMS: " << sample.velocityRMS()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace NEDVelocityStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NEDVelocityReportType_g_tc_members[6]=
                {

                    {
                        (char *)"attitudeRate",/* Member name */
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
                        (char *)"attitudeRateRMS",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"velocity",/* Member name */
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
                        (char *)"velocityRMS",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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

                static DDS_TypeCode NEDVelocityReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::NEDVelocityStatus::NEDVelocityReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        NEDVelocityReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for NEDVelocityReportType*/

                if (is_initialized) {
                    return &NEDVelocityReportType_g_tc;
                }

                NEDVelocityReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                NEDVelocityReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::OrientationVelocity3D>::get().native();
                NEDVelocityReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarianceOrientationType>::get().native();
                NEDVelocityReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Velocity3D_PlatformNED>::get().native();
                NEDVelocityReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarianceVelocityVelocityType>::get().native();
                NEDVelocityReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                NEDVelocityReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                NEDVelocityReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                NEDVelocityReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &NEDVelocityReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::NEDVelocityStatus::NEDVelocityReportType *sample;

                static RTIXCdrMemberAccessInfo NEDVelocityReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NEDVelocityReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NEDVelocityReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::NEDVelocityStatus::NEDVelocityReportType);
                if (sample == NULL) {
                    return NULL;
                }

                NEDVelocityReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitudeRate() - (char *)sample);

                NEDVelocityReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitudeRateRMS() - (char *)sample);

                NEDVelocityReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocity() - (char *)sample);

                NEDVelocityReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocityRMS() - (char *)sample);

                NEDVelocityReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                NEDVelocityReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                NEDVelocityReportType_g_sampleAccessInfo.memberAccessInfos = 
                NEDVelocityReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NEDVelocityReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NEDVelocityReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NEDVelocityReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NEDVelocityReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >;

                NEDVelocityReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NEDVelocityReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NEDVelocityReportType_g_typePlugin = 
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

                return &NEDVelocityReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::NEDVelocityStatus::NEDVelocityReportTypePlugin_new,
                UMAA::SA::NEDVelocityStatus::NEDVelocityReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = NEDVelocityReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = NEDVelocityReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::from_cdr_buffer(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = NEDVelocityReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::NEDVelocityStatus::NEDVelocityReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::reset_sample(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.attitudeRate());
            ::rti::topic::reset_sample(sample.attitudeRateRMS());
            ::rti::topic::reset_sample(sample.velocity());
            ::rti::topic::reset_sample(sample.velocityRMS());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType >::allocate_sample(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.velocity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

