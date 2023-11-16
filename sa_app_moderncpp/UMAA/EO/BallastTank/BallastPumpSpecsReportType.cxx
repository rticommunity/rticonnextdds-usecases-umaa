

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BallastPumpSpecsReportType.hpp"
#include "BallastPumpSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            // ---- BallastPumpSpecsReportType: 

            BallastPumpSpecsReportType::BallastPumpSpecsReportType() :
                m_maxMassEmptyRate_ (0.0) ,
                m_maxMassFillRate_ (0.0) ,
                m_maxVolumeEmptyRate_ (0.0) ,
                m_maxVolumeFillRate_ (0.0) ,
                m_minMassEmptyRate_ (0.0) ,
                m_minMassFillRate_ (0.0) ,
                m_minVolumeEmptyRate_ (0.0) ,
                m_minVolumeFillRate_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            BallastPumpSpecsReportType::BallastPumpSpecsReportType (double maxMassEmptyRate,double maxMassFillRate,double maxVolumeEmptyRate,double maxVolumeFillRate,double minMassEmptyRate,double minMassFillRate,double minVolumeEmptyRate,double minVolumeFillRate,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_maxMassEmptyRate_( maxMassEmptyRate ),
                m_maxMassFillRate_( maxMassFillRate ),
                m_maxVolumeEmptyRate_( maxVolumeEmptyRate ),
                m_maxVolumeFillRate_( maxVolumeFillRate ),
                m_minMassEmptyRate_( minMassEmptyRate ),
                m_minMassFillRate_( minMassFillRate ),
                m_minVolumeEmptyRate_( minVolumeEmptyRate ),
                m_minVolumeFillRate_( minVolumeFillRate ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BallastPumpSpecsReportType::BallastPumpSpecsReportType(BallastPumpSpecsReportType&& other_) OMG_NOEXCEPT  :m_maxMassEmptyRate_ (std::move(other_.m_maxMassEmptyRate_))
            ,
            m_maxMassFillRate_ (std::move(other_.m_maxMassFillRate_))
            ,
            m_maxVolumeEmptyRate_ (std::move(other_.m_maxVolumeEmptyRate_))
            ,
            m_maxVolumeFillRate_ (std::move(other_.m_maxVolumeFillRate_))
            ,
            m_minMassEmptyRate_ (std::move(other_.m_minMassEmptyRate_))
            ,
            m_minMassFillRate_ (std::move(other_.m_minMassFillRate_))
            ,
            m_minVolumeEmptyRate_ (std::move(other_.m_minVolumeEmptyRate_))
            ,
            m_minVolumeFillRate_ (std::move(other_.m_minVolumeFillRate_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            BallastPumpSpecsReportType& BallastPumpSpecsReportType::operator=(BallastPumpSpecsReportType&&  other_) OMG_NOEXCEPT {
                BallastPumpSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BallastPumpSpecsReportType::swap(BallastPumpSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_maxMassEmptyRate_, other_.m_maxMassEmptyRate_);
                swap(m_maxMassFillRate_, other_.m_maxMassFillRate_);
                swap(m_maxVolumeEmptyRate_, other_.m_maxVolumeEmptyRate_);
                swap(m_maxVolumeFillRate_, other_.m_maxVolumeFillRate_);
                swap(m_minMassEmptyRate_, other_.m_minMassEmptyRate_);
                swap(m_minMassFillRate_, other_.m_minMassFillRate_);
                swap(m_minVolumeEmptyRate_, other_.m_minVolumeEmptyRate_);
                swap(m_minVolumeFillRate_, other_.m_minVolumeFillRate_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BallastPumpSpecsReportType::operator == (const BallastPumpSpecsReportType& other_) const {
                if (m_maxMassEmptyRate_ != other_.m_maxMassEmptyRate_) {
                    return false;
                }
                if (m_maxMassFillRate_ != other_.m_maxMassFillRate_) {
                    return false;
                }
                if (m_maxVolumeEmptyRate_ != other_.m_maxVolumeEmptyRate_) {
                    return false;
                }
                if (m_maxVolumeFillRate_ != other_.m_maxVolumeFillRate_) {
                    return false;
                }
                if (m_minMassEmptyRate_ != other_.m_minMassEmptyRate_) {
                    return false;
                }
                if (m_minMassFillRate_ != other_.m_minMassFillRate_) {
                    return false;
                }
                if (m_minVolumeEmptyRate_ != other_.m_minVolumeEmptyRate_) {
                    return false;
                }
                if (m_minVolumeFillRate_ != other_.m_minVolumeFillRate_) {
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
            bool BallastPumpSpecsReportType::operator != (const BallastPumpSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastPumpSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxMassEmptyRate: " << std::setprecision(15) <<sample.maxMassEmptyRate()<<", ";
                o << "maxMassFillRate: " << std::setprecision(15) <<sample.maxMassFillRate()<<", ";
                o << "maxVolumeEmptyRate: " << std::setprecision(15) <<sample.maxVolumeEmptyRate()<<", ";
                o << "maxVolumeFillRate: " << std::setprecision(15) <<sample.maxVolumeFillRate()<<", ";
                o << "minMassEmptyRate: " << std::setprecision(15) <<sample.minMassEmptyRate()<<", ";
                o << "minMassFillRate: " << std::setprecision(15) <<sample.minMassFillRate()<<", ";
                o << "minVolumeEmptyRate: " << std::setprecision(15) <<sample.minVolumeEmptyRate()<<", ";
                o << "minVolumeFillRate: " << std::setprecision(15) <<sample.minVolumeFillRate()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpSpecsReportType_g_tc_members[10]=
                {

                    {
                        (char *)"maxMassEmptyRate",/* Member name */
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
                        (char *)"maxMassFillRate",/* Member name */
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
                        (char *)"maxVolumeEmptyRate",/* Member name */
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
                        (char *)"maxVolumeFillRate",/* Member name */
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
                        (char *)"minMassEmptyRate",/* Member name */
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
                        (char *)"minMassFillRate",/* Member name */
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
                        (char *)"minVolumeEmptyRate",/* Member name */
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
                        (char *)"minVolumeFillRate",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastPumpSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        BallastPumpSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpSpecsReportType*/

                if (is_initialized) {
                    return &BallastPumpSpecsReportType_g_tc;
                }

                BallastPumpSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastPumpSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::MassFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::MassFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::MassFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::MassFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BallastPumpSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                BallastPumpSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastPumpSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastPumpSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastPumpSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BallastPumpSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::BallastTank::BallastPumpSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo BallastPumpSpecsReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::BallastTank::BallastPumpSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastPumpSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxMassEmptyRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxMassFillRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxVolumeEmptyRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxVolumeFillRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minMassEmptyRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minMassFillRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minVolumeEmptyRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minVolumeFillRate() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BallastPumpSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BallastPumpSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::BallastTank::BallastPumpSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::BallastTank::BallastPumpSpecsReportType >;

                BallastPumpSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpSpecsReportType_g_typePlugin = 
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

                return &BallastPumpSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::BallastTank::BallastPumpSpecsReportTypePlugin_new,
                UMAA::EO::BallastTank::BallastPumpSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastPumpSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastPumpSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::from_cdr_buffer(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastPumpSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::BallastTank::BallastPumpSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::reset_sample(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample) 
        {
            sample.maxMassEmptyRate(0.0);
            sample.maxMassFillRate(0.0);
            sample.maxVolumeEmptyRate(0.0);
            sample.maxVolumeFillRate(0.0);
            sample.minMassEmptyRate(0.0);
            sample.minMassFillRate(0.0);
            sample.minVolumeEmptyRate(0.0);
            sample.minVolumeFillRate(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType >::allocate_sample(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

