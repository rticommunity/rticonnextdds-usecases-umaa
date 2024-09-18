

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AirSpeedTolerance.idl
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
#include "AirSpeedTolerancePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AirSpeedTolerance.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- AirSpeedTolerance: 

            AirSpeedTolerance::AirSpeedTolerance() :
                m_lowerlimit_ (0.0) ,
                m_upperlimit_ (0.0)  {

            }   

            AirSpeedTolerance::AirSpeedTolerance (const ::dds::core::optional< double >& failureDelay_,double lowerlimit_,double upperlimit_):
                m_failureDelay_(failureDelay_), 
                m_lowerlimit_(lowerlimit_), 
                m_upperlimit_(upperlimit_) {
            }

            void AirSpeedTolerance::swap(AirSpeedTolerance& other_)  noexcept 
            {
                using std::swap;
                swap(m_failureDelay_, other_.m_failureDelay_);
                swap(m_lowerlimit_, other_.m_lowerlimit_);
                swap(m_upperlimit_, other_.m_upperlimit_);
            }  

            bool AirSpeedTolerance::operator == (const AirSpeedTolerance& other_) const {
                if (m_failureDelay_.has_value() != other_.m_failureDelay_.has_value()) {
                    return false;
                } else if (m_failureDelay_.has_value()) {
                    if (std::fabs(*m_failureDelay_ - *other_.m_failureDelay_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_failureDelay_ - *other_.m_failureDelay_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_lowerlimit_ - other_.m_lowerlimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_lowerlimit_ - other_.m_lowerlimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_upperlimit_ - other_.m_upperlimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_upperlimit_ - other_.m_upperlimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool AirSpeedTolerance::operator != (const AirSpeedTolerance& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AirSpeedTolerance& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "failureDelay: " << sample.failureDelay ()<<", ";
                o << "lowerlimit: " << std::setprecision(15) << sample.lowerlimit ()<<", ";
                o << "upperlimit: " << std::setprecision(15) << sample.upperlimit ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Speed::AirSpeedTolerance > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AirSpeedTolerance_g_tc_members[3]=
                {

                    {
                        (char *)"failureDelay",/* Member name */
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
                        (char *)"lowerlimit",/* Member name */
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
                        (char *)"upperlimit",/* Member name */
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

                static DDS_TypeCode AirSpeedTolerance_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::AirSpeedTolerance", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        AirSpeedTolerance_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AirSpeedTolerance*/

                if (is_initialized) {
                    return &AirSpeedTolerance_g_tc;
                }

                is_initialized = RTI_TRUE;

                AirSpeedTolerance_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AirSpeedTolerance_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                AirSpeedTolerance_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t>::get().native();
                AirSpeedTolerance_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                AirSpeedTolerance_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AirSpeedTolerance_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AirSpeedTolerance_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                AirSpeedTolerance_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AirSpeedTolerance_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AirSpeedTolerance_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                AirSpeedTolerance_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AirSpeedTolerance_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedTolerance_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AirSpeedTolerance_g_tc._data._sampleAccessInfo = sample_access_info();
                AirSpeedTolerance_g_tc._data._typePlugin = type_plugin_info();    

                return &AirSpeedTolerance_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::AirSpeedTolerance *sample;

                static RTIXCdrMemberAccessInfo AirSpeedTolerance_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AirSpeedTolerance_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AirSpeedTolerance_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::AirSpeedTolerance);
                if (sample == NULL) {
                    return NULL;
                }

                AirSpeedTolerance_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->failureDelay() - (char *)sample);

                AirSpeedTolerance_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowerlimit() - (char *)sample);

                AirSpeedTolerance_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperlimit() - (char *)sample);

                AirSpeedTolerance_g_sampleAccessInfo.memberAccessInfos = 
                AirSpeedTolerance_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::AirSpeedTolerance);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AirSpeedTolerance_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AirSpeedTolerance_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AirSpeedTolerance_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AirSpeedTolerance_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::AirSpeedTolerance >;

                AirSpeedTolerance_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AirSpeedTolerance_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AirSpeedTolerance_g_typePlugin = 
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

                return &AirSpeedTolerance_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::AirSpeedTolerance >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::AirSpeedTolerance >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::AirSpeedTolerance >::reset_sample(::UMAA::Common::Speed::AirSpeedTolerance& sample) 
        {
            ::rti::topic::reset_sample(sample.failureDelay());
            sample.lowerlimit(0.0);
            sample.upperlimit(0.0);
        }

        void topic_type_support< ::UMAA::Common::Speed::AirSpeedTolerance >::allocate_sample(::UMAA::Common::Speed::AirSpeedTolerance& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE