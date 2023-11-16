

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GPSClockType.hpp"
#include "GPSClockTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSStatus {

            // ---- GPSClockType: 

            GPSClockType::GPSClockType()  {
            }   

            GPSClockType::GPSClockType (const ::dds::core::optional< int32_t >& bias,const ::dds::core::optional< int32_t >& biasUncertianty,const ::dds::core::optional< int32_t >& drift,const ::dds::core::optional< int32_t >& driftUncertainty,const ::dds::core::optional< int32_t >& elapsedRealtime,const ::dds::core::optional< int32_t >& elapsedRealtimeUncertainty,const ::dds::core::optional< int32_t >& fullBias,const ::dds::core::optional< int32_t >& hardwareClockDiscontinuityCount,const ::dds::core::optional< int32_t >& leapSecond,const ::dds::core::optional< double >& referenceCarrierFrequency,const ::dds::core::optional< std::string >& referenceCodeTypeFor,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& referenceConstellationType,const ::dds::core::optional< int32_t >& time,const ::dds::core::optional< double >& timeUncertainty):
                m_bias_( bias ),
                m_biasUncertianty_( biasUncertianty ),
                m_drift_( drift ),
                m_driftUncertainty_( driftUncertainty ),
                m_elapsedRealtime_( elapsedRealtime ),
                m_elapsedRealtimeUncertainty_( elapsedRealtimeUncertainty ),
                m_fullBias_( fullBias ),
                m_hardwareClockDiscontinuityCount_( hardwareClockDiscontinuityCount ),
                m_leapSecond_( leapSecond ),
                m_referenceCarrierFrequency_( referenceCarrierFrequency ),
                m_referenceCodeTypeFor_( referenceCodeTypeFor ),
                m_referenceConstellationType_( referenceConstellationType ),
                m_time_( time ),
                m_timeUncertainty_( timeUncertainty ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GPSClockType::GPSClockType(GPSClockType&& other_) OMG_NOEXCEPT  :m_bias_ (std::move(other_.m_bias_))
            ,
            m_biasUncertianty_ (std::move(other_.m_biasUncertianty_))
            ,
            m_drift_ (std::move(other_.m_drift_))
            ,
            m_driftUncertainty_ (std::move(other_.m_driftUncertainty_))
            ,
            m_elapsedRealtime_ (std::move(other_.m_elapsedRealtime_))
            ,
            m_elapsedRealtimeUncertainty_ (std::move(other_.m_elapsedRealtimeUncertainty_))
            ,
            m_fullBias_ (std::move(other_.m_fullBias_))
            ,
            m_hardwareClockDiscontinuityCount_ (std::move(other_.m_hardwareClockDiscontinuityCount_))
            ,
            m_leapSecond_ (std::move(other_.m_leapSecond_))
            ,
            m_referenceCarrierFrequency_ (std::move(other_.m_referenceCarrierFrequency_))
            ,
            m_referenceCodeTypeFor_ (std::move(other_.m_referenceCodeTypeFor_))
            ,
            m_referenceConstellationType_ (std::move(other_.m_referenceConstellationType_))
            ,
            m_time_ (std::move(other_.m_time_))
            ,
            m_timeUncertainty_ (std::move(other_.m_timeUncertainty_))
            {
            } 

            GPSClockType& GPSClockType::operator=(GPSClockType&&  other_) OMG_NOEXCEPT {
                GPSClockType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GPSClockType::swap(GPSClockType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_bias_, other_.m_bias_);
                swap(m_biasUncertianty_, other_.m_biasUncertianty_);
                swap(m_drift_, other_.m_drift_);
                swap(m_driftUncertainty_, other_.m_driftUncertainty_);
                swap(m_elapsedRealtime_, other_.m_elapsedRealtime_);
                swap(m_elapsedRealtimeUncertainty_, other_.m_elapsedRealtimeUncertainty_);
                swap(m_fullBias_, other_.m_fullBias_);
                swap(m_hardwareClockDiscontinuityCount_, other_.m_hardwareClockDiscontinuityCount_);
                swap(m_leapSecond_, other_.m_leapSecond_);
                swap(m_referenceCarrierFrequency_, other_.m_referenceCarrierFrequency_);
                swap(m_referenceCodeTypeFor_, other_.m_referenceCodeTypeFor_);
                swap(m_referenceConstellationType_, other_.m_referenceConstellationType_);
                swap(m_time_, other_.m_time_);
                swap(m_timeUncertainty_, other_.m_timeUncertainty_);
            }  

            bool GPSClockType::operator == (const GPSClockType& other_) const {
                if (m_bias_ != other_.m_bias_) {
                    return false;
                }
                if (m_biasUncertianty_ != other_.m_biasUncertianty_) {
                    return false;
                }
                if (m_drift_ != other_.m_drift_) {
                    return false;
                }
                if (m_driftUncertainty_ != other_.m_driftUncertainty_) {
                    return false;
                }
                if (m_elapsedRealtime_ != other_.m_elapsedRealtime_) {
                    return false;
                }
                if (m_elapsedRealtimeUncertainty_ != other_.m_elapsedRealtimeUncertainty_) {
                    return false;
                }
                if (m_fullBias_ != other_.m_fullBias_) {
                    return false;
                }
                if (m_hardwareClockDiscontinuityCount_ != other_.m_hardwareClockDiscontinuityCount_) {
                    return false;
                }
                if (m_leapSecond_ != other_.m_leapSecond_) {
                    return false;
                }
                if (m_referenceCarrierFrequency_ != other_.m_referenceCarrierFrequency_) {
                    return false;
                }
                if (m_referenceCodeTypeFor_ != other_.m_referenceCodeTypeFor_) {
                    return false;
                }
                if (m_referenceConstellationType_ != other_.m_referenceConstellationType_) {
                    return false;
                }
                if (m_time_ != other_.m_time_) {
                    return false;
                }
                if (m_timeUncertainty_ != other_.m_timeUncertainty_) {
                    return false;
                }
                return true;
            }
            bool GPSClockType::operator != (const GPSClockType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSClockType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bias: " << sample.bias()<<", ";
                o << "biasUncertianty: " << sample.biasUncertianty()<<", ";
                o << "drift: " << sample.drift()<<", ";
                o << "driftUncertainty: " << sample.driftUncertainty()<<", ";
                o << "elapsedRealtime: " << sample.elapsedRealtime()<<", ";
                o << "elapsedRealtimeUncertainty: " << sample.elapsedRealtimeUncertainty()<<", ";
                o << "fullBias: " << sample.fullBias()<<", ";
                o << "hardwareClockDiscontinuityCount: " << sample.hardwareClockDiscontinuityCount()<<", ";
                o << "leapSecond: " << sample.leapSecond()<<", ";
                o << "referenceCarrierFrequency: " << sample.referenceCarrierFrequency()<<", ";
                o << "referenceCodeTypeFor: " << sample.referenceCodeTypeFor()<<", ";
                o << "referenceConstellationType: " << sample.referenceConstellationType()<<", ";
                o << "time: " << sample.time()<<", ";
                o << "timeUncertainty: " << sample.timeUncertainty() ;
                o <<"]";
                return o;
            }

        } // namespace GPSStatus  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::GPSStatus::GPSClockType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GPSClockType_g_tc_members[14]=
                {

                    {
                        (char *)"bias",/* Member name */
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
                        (char *)"biasUncertianty",/* Member name */
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
                        (char *)"drift",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"driftUncertainty",/* Member name */
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
                        (char *)"elapsedRealtime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elapsedRealtimeUncertainty",/* Member name */
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
                        (char *)"fullBias",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"hardwareClockDiscontinuityCount",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"leapSecond",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"referenceCarrierFrequency",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"referenceCodeTypeFor",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"referenceConstellationType",/* Member name */
                        {
                            11,/* Representation ID */
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
                        (char *)"time",/* Member name */
                        {
                            12,/* Representation ID */
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
                        (char *)"timeUncertainty",/* Member name */
                        {
                            13,/* Representation ID */
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
                    }
                };

                static DDS_TypeCode GPSClockType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSStatus::GPSClockType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        GPSClockType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSClockType*/

                if (is_initialized) {
                    return &GPSClockType_g_tc;
                }

                GPSClockType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSClockType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RadioFrequency_Hertz_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType>::get().native();
                GPSClockType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Size_Numeral_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                GPSClockType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GPSClockType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[8]._annotations._minValue._u.long_value = -2147483648L;
                GPSClockType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[8]._annotations._maxValue._u.long_value = 2147483647L;

                GPSClockType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[9]._annotations._minValue._u.double_value = 0.0;
                GPSClockType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[9]._annotations._maxValue._u.double_value = 10000000000ULL;

                GPSClockType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[12]._annotations._minValue._u.long_value = -2147483648L;
                GPSClockType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[12]._annotations._maxValue._u.long_value = 2147483647L;

                GPSClockType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSClockType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSClockType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSClockType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GPSClockType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::GPSStatus::GPSClockType *sample;

                static RTIXCdrMemberAccessInfo GPSClockType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSClockType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSClockType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::GPSStatus::GPSClockType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSClockType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bias() - (char *)sample);

                GPSClockType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->biasUncertianty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->drift() - (char *)sample);

                GPSClockType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->driftUncertainty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtime() - (char *)sample);

                GPSClockType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtimeUncertainty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fullBias() - (char *)sample);

                GPSClockType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hardwareClockDiscontinuityCount() - (char *)sample);

                GPSClockType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->leapSecond() - (char *)sample);

                GPSClockType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceCarrierFrequency() - (char *)sample);

                GPSClockType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceCodeTypeFor() - (char *)sample);

                GPSClockType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceConstellationType() - (char *)sample);

                GPSClockType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->time() - (char *)sample);

                GPSClockType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeUncertainty() - (char *)sample);

                GPSClockType_g_sampleAccessInfo.memberAccessInfos = 
                GPSClockType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::GPSStatus::GPSClockType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSClockType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSClockType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSClockType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSClockType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::GPSStatus::GPSClockType >;

                GPSClockType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSClockType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSClockType_g_typePlugin = 
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

                return &GPSClockType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::GPSStatus::GPSClockType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::GPSStatus::GPSClockType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::GPSStatus::GPSClockType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::GPSStatus::GPSClockTypePlugin_new,
                UMAA::SEM::GPSStatus::GPSClockTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::GPSStatus::GPSClockType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::GPSStatus::GPSClockType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSClockTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSClockTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::GPSStatus::GPSClockType >::from_cdr_buffer(UMAA::SEM::GPSStatus::GPSClockType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSClockTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::GPSStatus::GPSClockType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::GPSStatus::GPSClockType >::reset_sample(UMAA::SEM::GPSStatus::GPSClockType& sample) 
        {
            ::rti::topic::reset_sample(sample.bias());
            ::rti::topic::reset_sample(sample.biasUncertianty());
            ::rti::topic::reset_sample(sample.drift());
            ::rti::topic::reset_sample(sample.driftUncertainty());
            ::rti::topic::reset_sample(sample.elapsedRealtime());
            ::rti::topic::reset_sample(sample.elapsedRealtimeUncertainty());
            ::rti::topic::reset_sample(sample.fullBias());
            ::rti::topic::reset_sample(sample.hardwareClockDiscontinuityCount());
            ::rti::topic::reset_sample(sample.leapSecond());
            ::rti::topic::reset_sample(sample.referenceCarrierFrequency());
            ::rti::topic::reset_sample(sample.referenceCodeTypeFor());
            ::rti::topic::reset_sample(sample.referenceConstellationType());
            ::rti::topic::reset_sample(sample.time());
            ::rti::topic::reset_sample(sample.timeUncertainty());
        }

        void topic_type_support< UMAA::SEM::GPSStatus::GPSClockType >::allocate_sample(UMAA::SEM::GPSStatus::GPSClockType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

