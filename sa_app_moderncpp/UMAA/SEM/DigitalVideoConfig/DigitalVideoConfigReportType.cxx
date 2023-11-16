

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "DigitalVideoConfigReportType.hpp"
#include "DigitalVideoConfigReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalVideoConfig {

            // ---- DigitalVideoConfigReportType: 

            DigitalVideoConfigReportType::DigitalVideoConfigReportType() :
                m_commsProtocol_(UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV4) ,
                m_commsRate_ (0.0) ,
                m_format_(UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType::AVI) ,
                m_frameRate_ (0.0) ,
                m_frameSize_(UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType::CGA_320x200) ,
                m_IPaddress_ ("") ,
                m_IPPort_ (0) ,
                m_maxBitRate_ (0.0) ,
                m_minBitRate_ (0.0) ,
                m_transportEncoding_(UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType::MPEG_2) ,
                m_URI_ ("")  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            DigitalVideoConfigReportType::DigitalVideoConfigReportType (const UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType& commsProtocol,double commsRate,const UMAA::SEM::SensorManagement::DigitalSensorErrorType& digitalVideoError,const UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType& format,double frameRate,const UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize,const std::string& IPaddress,int32_t IPPort,double maxBitRate,double minBitRate,const UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType& transportEncoding,const std::string& URI,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_commsProtocol_( commsProtocol ),
                m_commsRate_( commsRate ),
                m_digitalVideoError_( digitalVideoError ),
                m_format_( format ),
                m_frameRate_( frameRate ),
                m_frameSize_( frameSize ),
                m_IPaddress_( IPaddress ),
                m_IPPort_( IPPort ),
                m_maxBitRate_( maxBitRate ),
                m_minBitRate_( minBitRate ),
                m_transportEncoding_( transportEncoding ),
                m_URI_( URI ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DigitalVideoConfigReportType::DigitalVideoConfigReportType(DigitalVideoConfigReportType&& other_) OMG_NOEXCEPT  :m_commsProtocol_ (std::move(other_.m_commsProtocol_))
            ,
            m_commsRate_ (std::move(other_.m_commsRate_))
            ,
            m_digitalVideoError_ (std::move(other_.m_digitalVideoError_))
            ,
            m_format_ (std::move(other_.m_format_))
            ,
            m_frameRate_ (std::move(other_.m_frameRate_))
            ,
            m_frameSize_ (std::move(other_.m_frameSize_))
            ,
            m_IPaddress_ (std::move(other_.m_IPaddress_))
            ,
            m_IPPort_ (std::move(other_.m_IPPort_))
            ,
            m_maxBitRate_ (std::move(other_.m_maxBitRate_))
            ,
            m_minBitRate_ (std::move(other_.m_minBitRate_))
            ,
            m_transportEncoding_ (std::move(other_.m_transportEncoding_))
            ,
            m_URI_ (std::move(other_.m_URI_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            DigitalVideoConfigReportType& DigitalVideoConfigReportType::operator=(DigitalVideoConfigReportType&&  other_) OMG_NOEXCEPT {
                DigitalVideoConfigReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void DigitalVideoConfigReportType::swap(DigitalVideoConfigReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_commsProtocol_, other_.m_commsProtocol_);
                swap(m_commsRate_, other_.m_commsRate_);
                swap(m_digitalVideoError_, other_.m_digitalVideoError_);
                swap(m_format_, other_.m_format_);
                swap(m_frameRate_, other_.m_frameRate_);
                swap(m_frameSize_, other_.m_frameSize_);
                swap(m_IPaddress_, other_.m_IPaddress_);
                swap(m_IPPort_, other_.m_IPPort_);
                swap(m_maxBitRate_, other_.m_maxBitRate_);
                swap(m_minBitRate_, other_.m_minBitRate_);
                swap(m_transportEncoding_, other_.m_transportEncoding_);
                swap(m_URI_, other_.m_URI_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DigitalVideoConfigReportType::operator == (const DigitalVideoConfigReportType& other_) const {
                if (m_commsProtocol_ != other_.m_commsProtocol_) {
                    return false;
                }
                if (m_commsRate_ != other_.m_commsRate_) {
                    return false;
                }
                if (m_digitalVideoError_ != other_.m_digitalVideoError_) {
                    return false;
                }
                if (m_format_ != other_.m_format_) {
                    return false;
                }
                if (m_frameRate_ != other_.m_frameRate_) {
                    return false;
                }
                if (m_frameSize_ != other_.m_frameSize_) {
                    return false;
                }
                if (m_IPaddress_ != other_.m_IPaddress_) {
                    return false;
                }
                if (m_IPPort_ != other_.m_IPPort_) {
                    return false;
                }
                if (m_maxBitRate_ != other_.m_maxBitRate_) {
                    return false;
                }
                if (m_minBitRate_ != other_.m_minBitRate_) {
                    return false;
                }
                if (m_transportEncoding_ != other_.m_transportEncoding_) {
                    return false;
                }
                if (m_URI_ != other_.m_URI_) {
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
            bool DigitalVideoConfigReportType::operator != (const DigitalVideoConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalVideoConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "commsProtocol: " << sample.commsProtocol()<<", ";
                o << "commsRate: " << std::setprecision(15) <<sample.commsRate()<<", ";
                o << "digitalVideoError: " << sample.digitalVideoError()<<", ";
                o << "format: " << sample.format()<<", ";
                o << "frameRate: " << std::setprecision(15) <<sample.frameRate()<<", ";
                o << "frameSize: " << sample.frameSize()<<", ";
                o << "IPaddress: " << sample.IPaddress()<<", ";
                o << "IPPort: " << sample.IPPort()<<", ";
                o << "maxBitRate: " << std::setprecision(15) <<sample.maxBitRate()<<", ";
                o << "minBitRate: " << std::setprecision(15) <<sample.minBitRate()<<", ";
                o << "transportEncoding: " << sample.transportEncoding()<<", ";
                o << "URI: " << sample.URI()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace DigitalVideoConfig  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DigitalVideoConfigReportType_g_tc_members[14]=
                {

                    {
                        (char *)"commsProtocol",/* Member name */
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
                        (char *)"commsRate",/* Member name */
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
                        (char *)"digitalVideoError",/* Member name */
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
                        (char *)"format",/* Member name */
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
                        (char *)"frameRate",/* Member name */
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
                        (char *)"frameSize",/* Member name */
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
                        (char *)"IPaddress",/* Member name */
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
                        (char *)"IPPort",/* Member name */
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
                        (char *)"maxBitRate",/* Member name */
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
                        (char *)"minBitRate",/* Member name */
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
                    }, 
                    {
                        (char *)"transportEncoding",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"URI",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DigitalVideoConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        DigitalVideoConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalVideoConfigReportType*/

                if (is_initialized) {
                    return &DigitalVideoConfigReportType_g_tc;
                }

                DigitalVideoConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalVideoConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType>::get().native();
                DigitalVideoConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SEM::SensorManagement::DigitalSensorErrorType>::get().native();
                DigitalVideoConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType>::get().native();
                DigitalVideoConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::FrameRateFPS_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType>::get().native();
                DigitalVideoConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::IPPort_Counting_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DataTransferRate_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DataTransferRate_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType>::get().native();
                DigitalVideoConfigReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalVideoConfigReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DigitalVideoConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalVideoConfigReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                DigitalVideoConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoConfigReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                DigitalVideoConfigReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 1125000ULL;

                DigitalVideoConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalVideoConfigReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                DigitalVideoConfigReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                DigitalVideoConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 1000ULL;

                DigitalVideoConfigReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalVideoConfigReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                DigitalVideoConfigReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DigitalVideoConfigReportType_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DigitalVideoConfigReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalVideoConfigReportType_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                DigitalVideoConfigReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalVideoConfigReportType_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DigitalVideoConfigReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalVideoConfigReportType_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DigitalVideoConfigReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoConfigReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DigitalVideoConfigReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DigitalVideoConfigReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoConfigReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DigitalVideoConfigReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoConfigReportType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DigitalVideoConfigReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalVideoConfigReportType_g_tc_members[10]._annotations._defaultValue._u.enumerated_value = 0;

                DigitalVideoConfigReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DigitalVideoConfigReportType_g_tc_members[11]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DigitalVideoConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalVideoConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DigitalVideoConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType *sample;

                static RTIXCdrMemberAccessInfo DigitalVideoConfigReportType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalVideoConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalVideoConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalVideoConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsProtocol() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commsRate() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->digitalVideoError() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->format() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->frameRate() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->frameSize() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IPaddress() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IPPort() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxBitRate() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minBitRate() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transportEncoding() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->URI() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalVideoConfigReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DigitalVideoConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalVideoConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalVideoConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalVideoConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalVideoConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalVideoConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >;

                DigitalVideoConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalVideoConfigReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalVideoConfigReportType_g_typePlugin = 
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

                return &DigitalVideoConfigReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportTypePlugin_new,
                UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalVideoConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalVideoConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::from_cdr_buffer(UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalVideoConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::reset_sample(UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample) 
        {
            sample.commsProtocol(UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType::TCP_IPV4);
            sample.commsRate(0.0);
            ::rti::topic::reset_sample(sample.digitalVideoError());
            sample.format(UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType::AVI);
            sample.frameRate(0.0);
            sample.frameSize(UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType::CGA_320x200);
            sample.IPaddress("");
            sample.IPPort(0);
            sample.maxBitRate(0.0);
            sample.minBitRate(0.0);
            sample.transportEncoding(UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType::MPEG_2);
            sample.URI("");
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType >::allocate_sample(UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.commsProtocol(),  -1, -1);
            ::rti::topic::allocate_sample(sample.digitalVideoError(),  -1, -1);
            ::rti::topic::allocate_sample(sample.format(),  -1, -1);
            ::rti::topic::allocate_sample(sample.frameSize(),  -1, -1);
            ::rti::topic::allocate_sample(sample.IPaddress(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.transportEncoding(),  -1, -1);
            ::rti::topic::allocate_sample(sample.URI(),  -1, 2047L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

