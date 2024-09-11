

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BITSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BITSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace BITSpecs {

            // ---- BITSpecsReportType: 

            BITSpecsReportType::BITSpecsReportType() :
                m_fullContinuousTestSupported_ (0) ,
                m_fullPowerOnTestSupported_ (0) ,
                m_initiatedDestructiveTestSupported_ (0) ,
                m_initiatedNonDestructiveTestSupported_ (0) ,
                m_minTimeBetweenTestsSupported_ (0) ,
                m_nonIntrusiveContinuousTestSupported_ (0) ,
                m_quickPowerOnTestSupported_ (0)  {

            }   

            BITSpecsReportType::BITSpecsReportType (const ::dds::core::optional< double >& avgMinTimeBetweenContinuousTests_,bool fullContinuousTestSupported_,bool fullPowerOnTestSupported_,bool initiatedDestructiveTestSupported_,bool initiatedNonDestructiveTestSupported_,bool minTimeBetweenTestsSupported_,bool nonIntrusiveContinuousTestSupported_,bool quickPowerOnTestSupported_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::IdentifierType& resourceID_):
                m_avgMinTimeBetweenContinuousTests_(avgMinTimeBetweenContinuousTests_), 
                m_fullContinuousTestSupported_(fullContinuousTestSupported_), 
                m_fullPowerOnTestSupported_(fullPowerOnTestSupported_), 
                m_initiatedDestructiveTestSupported_(initiatedDestructiveTestSupported_), 
                m_initiatedNonDestructiveTestSupported_(initiatedNonDestructiveTestSupported_), 
                m_minTimeBetweenTestsSupported_(minTimeBetweenTestsSupported_), 
                m_nonIntrusiveContinuousTestSupported_(nonIntrusiveContinuousTestSupported_), 
                m_quickPowerOnTestSupported_(quickPowerOnTestSupported_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_resourceID_(resourceID_) {
            }

            void BITSpecsReportType::swap(BITSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_avgMinTimeBetweenContinuousTests_, other_.m_avgMinTimeBetweenContinuousTests_);
                swap(m_fullContinuousTestSupported_, other_.m_fullContinuousTestSupported_);
                swap(m_fullPowerOnTestSupported_, other_.m_fullPowerOnTestSupported_);
                swap(m_initiatedDestructiveTestSupported_, other_.m_initiatedDestructiveTestSupported_);
                swap(m_initiatedNonDestructiveTestSupported_, other_.m_initiatedNonDestructiveTestSupported_);
                swap(m_minTimeBetweenTestsSupported_, other_.m_minTimeBetweenTestsSupported_);
                swap(m_nonIntrusiveContinuousTestSupported_, other_.m_nonIntrusiveContinuousTestSupported_);
                swap(m_quickPowerOnTestSupported_, other_.m_quickPowerOnTestSupported_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_resourceID_, other_.m_resourceID_);
            }  

            bool BITSpecsReportType::operator == (const BITSpecsReportType& other_) const {
                if (m_avgMinTimeBetweenContinuousTests_.has_value() != other_.m_avgMinTimeBetweenContinuousTests_.has_value()) {
                    return false;
                } else if (m_avgMinTimeBetweenContinuousTests_.has_value()) {
                    if (std::fabs(*m_avgMinTimeBetweenContinuousTests_ - *other_.m_avgMinTimeBetweenContinuousTests_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_avgMinTimeBetweenContinuousTests_ - *other_.m_avgMinTimeBetweenContinuousTests_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_fullContinuousTestSupported_ != other_.m_fullContinuousTestSupported_) {
                    return false;
                }
                if (m_fullPowerOnTestSupported_ != other_.m_fullPowerOnTestSupported_) {
                    return false;
                }
                if (m_initiatedDestructiveTestSupported_ != other_.m_initiatedDestructiveTestSupported_) {
                    return false;
                }
                if (m_initiatedNonDestructiveTestSupported_ != other_.m_initiatedNonDestructiveTestSupported_) {
                    return false;
                }
                if (m_minTimeBetweenTestsSupported_ != other_.m_minTimeBetweenTestsSupported_) {
                    return false;
                }
                if (m_nonIntrusiveContinuousTestSupported_ != other_.m_nonIntrusiveContinuousTestSupported_) {
                    return false;
                }
                if (m_quickPowerOnTestSupported_ != other_.m_quickPowerOnTestSupported_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_resourceID_ != other_.m_resourceID_) {
                    return false;
                }
                return true;
            }

            bool BITSpecsReportType::operator != (const BITSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BITSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "avgMinTimeBetweenContinuousTests: " << sample.avgMinTimeBetweenContinuousTests ()<<", ";
                o << "fullContinuousTestSupported: " << sample.fullContinuousTestSupported ()<<", ";
                o << "fullPowerOnTestSupported: " << sample.fullPowerOnTestSupported ()<<", ";
                o << "initiatedDestructiveTestSupported: " << sample.initiatedDestructiveTestSupported ()<<", ";
                o << "initiatedNonDestructiveTestSupported: " << sample.initiatedNonDestructiveTestSupported ()<<", ";
                o << "minTimeBetweenTestsSupported: " << sample.minTimeBetweenTestsSupported ()<<", ";
                o << "nonIntrusiveContinuousTestSupported: " << sample.nonIntrusiveContinuousTestSupported ()<<", ";
                o << "quickPowerOnTestSupported: " << sample.quickPowerOnTestSupported ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "resourceID: " << sample.resourceID ();
                o <<"]";
                return o;
            }

        } // namespace BITSpecs  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::BITSpecs::BITSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BITSpecsReportType_g_tc_members[11]=
                {

                    {
                        (char *)"avgMinTimeBetweenContinuousTests",/* Member name */
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
                        (char *)"fullContinuousTestSupported",/* Member name */
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
                        (char *)"fullPowerOnTestSupported",/* Member name */
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
                        (char *)"initiatedDestructiveTestSupported",/* Member name */
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
                        (char *)"initiatedNonDestructiveTestSupported",/* Member name */
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
                        (char *)"minTimeBetweenTestsSupported",/* Member name */
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
                    }, 
                    {
                        (char *)"nonIntrusiveContinuousTestSupported",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"quickPowerOnTestSupported",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            8,/* Representation ID */
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
                            9,/* Representation ID */
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
                        (char *)"resourceID",/* Member name */
                        {
                            10,/* Representation ID */
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

                static DDS_TypeCode BITSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::BITSpecs::BITSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        BITSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BITSpecsReportType*/

                if (is_initialized) {
                    return &BITSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BITSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BITSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t>::get().native();
                BITSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BITSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BITSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                BITSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                BITSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BITSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BITSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BITSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BITSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                BITSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BITSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                BITSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BITSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BITSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::BITSpecs::BITSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo BITSpecsReportType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BITSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BITSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::BITSpecs::BITSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BITSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->avgMinTimeBetweenContinuousTests() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fullContinuousTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fullPowerOnTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initiatedDestructiveTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initiatedNonDestructiveTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTimeBetweenTestsSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nonIntrusiveContinuousTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->quickPowerOnTestSupported() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BITSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceID() - (char *)sample);

                BITSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                BITSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::BITSpecs::BITSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BITSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BITSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BITSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BITSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::BITSpecs::BITSpecsReportType >;

                BITSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BITSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BITSpecsReportType_g_typePlugin = 
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

                return &BITSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::BITSpecs::BITSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::BITSpecs::BITSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::BITSpecs::BITSpecsReportTypePlugin_new,
                ::UMAA::SO::BITSpecs::BITSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::BITSpecs::BITSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BITSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BITSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType >::from_cdr_buffer(::UMAA::SO::BITSpecs::BITSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BITSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::BITSpecs::BITSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType >::reset_sample(::UMAA::SO::BITSpecs::BITSpecsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.avgMinTimeBetweenContinuousTests());
            sample.fullContinuousTestSupported(0);
            sample.fullPowerOnTestSupported(0);
            sample.initiatedDestructiveTestSupported(0);
            sample.initiatedNonDestructiveTestSupported(0);
            sample.minTimeBetweenTestsSupported(0);
            sample.nonIntrusiveContinuousTestSupported(0);
            sample.quickPowerOnTestSupported(0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.resourceID());
        }

        void topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType >::allocate_sample(::UMAA::SO::BITSpecs::BITSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resourceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
