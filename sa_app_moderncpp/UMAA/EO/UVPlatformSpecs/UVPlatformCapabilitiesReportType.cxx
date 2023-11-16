

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "UVPlatformCapabilitiesReportType.hpp"
#include "UVPlatformCapabilitiesReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- UVPlatformCapabilitiesReportType: 

            UVPlatformCapabilitiesReportType::UVPlatformCapabilitiesReportType() :
                m_endurance_ (0.0) ,
                m_maxDepth_ (0.0) ,
                m_range_ (0.0) ,
                m_towingCapacity_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            UVPlatformCapabilitiesReportType::UVPlatformCapabilitiesReportType (double endurance,double maxDepth,double range,const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& surfaceCapabilities,double towingCapacity,const ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >& underwaterCapabilities,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_endurance_( endurance ),
                m_maxDepth_( maxDepth ),
                m_range_( range ),
                m_surfaceCapabilities_( surfaceCapabilities ),
                m_towingCapacity_( towingCapacity ),
                m_underwaterCapabilities_( underwaterCapabilities ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            UVPlatformCapabilitiesReportType::UVPlatformCapabilitiesReportType(UVPlatformCapabilitiesReportType&& other_) OMG_NOEXCEPT  :m_endurance_ (std::move(other_.m_endurance_))
            ,
            m_maxDepth_ (std::move(other_.m_maxDepth_))
            ,
            m_range_ (std::move(other_.m_range_))
            ,
            m_surfaceCapabilities_ (std::move(other_.m_surfaceCapabilities_))
            ,
            m_towingCapacity_ (std::move(other_.m_towingCapacity_))
            ,
            m_underwaterCapabilities_ (std::move(other_.m_underwaterCapabilities_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            UVPlatformCapabilitiesReportType& UVPlatformCapabilitiesReportType::operator=(UVPlatformCapabilitiesReportType&&  other_) OMG_NOEXCEPT {
                UVPlatformCapabilitiesReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void UVPlatformCapabilitiesReportType::swap(UVPlatformCapabilitiesReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_endurance_, other_.m_endurance_);
                swap(m_maxDepth_, other_.m_maxDepth_);
                swap(m_range_, other_.m_range_);
                swap(m_surfaceCapabilities_, other_.m_surfaceCapabilities_);
                swap(m_towingCapacity_, other_.m_towingCapacity_);
                swap(m_underwaterCapabilities_, other_.m_underwaterCapabilities_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool UVPlatformCapabilitiesReportType::operator == (const UVPlatformCapabilitiesReportType& other_) const {
                if (m_endurance_ != other_.m_endurance_) {
                    return false;
                }
                if (m_maxDepth_ != other_.m_maxDepth_) {
                    return false;
                }
                if (m_range_ != other_.m_range_) {
                    return false;
                }
                if (m_surfaceCapabilities_ != other_.m_surfaceCapabilities_) {
                    return false;
                }
                if (m_towingCapacity_ != other_.m_towingCapacity_) {
                    return false;
                }
                if (m_underwaterCapabilities_ != other_.m_underwaterCapabilities_) {
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
            bool UVPlatformCapabilitiesReportType::operator != (const UVPlatformCapabilitiesReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const UVPlatformCapabilitiesReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endurance: " << std::setprecision(15) <<sample.endurance()<<", ";
                o << "maxDepth: " << std::setprecision(15) <<sample.maxDepth()<<", ";
                o << "range: " << std::setprecision(15) <<sample.range()<<", ";
                o << "surfaceCapabilities: " << sample.surfaceCapabilities()<<", ";
                o << "towingCapacity: " << std::setprecision(15) <<sample.towingCapacity()<<", ";
                o << "underwaterCapabilities: " << sample.underwaterCapabilities()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace UVPlatformSpecs  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UVPlatformCapabilitiesReportType_g_tc_members[8]=
                {

                    {
                        (char *)"endurance",/* Member name */
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
                        (char *)"maxDepth",/* Member name */
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
                        (char *)"range",/* Member name */
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
                        (char *)"surfaceCapabilities",/* Member name */
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
                        (char *)"towingCapacity",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"underwaterCapabilities",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            6,/* Representation ID */
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
                            7,/* Representation ID */
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

                static DDS_TypeCode UVPlatformCapabilitiesReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        UVPlatformCapabilitiesReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UVPlatformCapabilitiesReportType*/

                if (is_initialized) {
                    return &UVPlatformCapabilitiesReportType_g_tc;
                }

                UVPlatformCapabilitiesReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UVPlatformCapabilitiesReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Mass_MetricTon_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 37817280ULL;

                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 10000ULL;

                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                UVPlatformCapabilitiesReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                UVPlatformCapabilitiesReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &UVPlatformCapabilitiesReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType *sample;

                static RTIXCdrMemberAccessInfo UVPlatformCapabilitiesReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UVPlatformCapabilitiesReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType);
                if (sample == NULL) {
                    return NULL;
                }

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endurance() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDepth() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->surfaceCapabilities() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingCapacity() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->underwaterCapabilities() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.memberAccessInfos = 
                UVPlatformCapabilitiesReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UVPlatformCapabilitiesReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UVPlatformCapabilitiesReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >;

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UVPlatformCapabilitiesReportType_g_typePlugin = 
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

                return &UVPlatformCapabilitiesReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportTypePlugin_new,
                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = UVPlatformCapabilitiesReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = UVPlatformCapabilitiesReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::from_cdr_buffer(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = UVPlatformCapabilitiesReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::reset_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample) 
        {
            sample.endurance(0.0);
            sample.maxDepth(0.0);
            sample.range(0.0);
            ::rti::topic::reset_sample(sample.surfaceCapabilities());
            sample.towingCapacity(0.0);
            ::rti::topic::reset_sample(sample.underwaterCapabilities());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::allocate_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.surfaceCapabilities(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

