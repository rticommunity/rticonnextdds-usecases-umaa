

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RangeSpecsReportType.hpp"
#include "RangeSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace RangeSpecs {

            // ---- RangeSpecsReportType: 

            RangeSpecsReportType::RangeSpecsReportType() :
                m_coordinateTransformation_ (0) ,
                m_maxHorizontalFOVStopAngle_ (0.0) ,
                m_maxRange_ (0.0) ,
                m_maxUpdateRate_ (0.0) ,
                m_maxVerticalFOVStopAngle_ (0.0) ,
                m_minHorizontalFOVStartAngle_ (0.0) ,
                m_minRange_ (0.0) ,
                m_minUpdateRate_ (0.0) ,
                m_minVerticalFOVStartAngle_ (0.0) ,
                m_name_ ("") ,
                m_stateActive_ (0) ,
                m_stateOff_ (0) ,
                m_stateStandby_ (0) ,
                m_supportedBzip2_ (0) ,
                m_supportedDeflated_ (0) ,
                m_supportedLZMA_ (0) ,
                m_supportedNoCompression_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            RangeSpecsReportType::RangeSpecsReportType (bool coordinateTransformation,double maxHorizontalFOVStopAngle,double maxRange,double maxUpdateRate,double maxVerticalFOVStopAngle,double minHorizontalFOVStartAngle,double minRange,double minUpdateRate,double minVerticalFOVStartAngle,const std::string& name,bool stateActive,bool stateOff,bool stateStandby,bool supportedBzip2,bool supportedDeflated,bool supportedLZMA,bool supportedNoCompression,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_coordinateTransformation_( coordinateTransformation ),
                m_maxHorizontalFOVStopAngle_( maxHorizontalFOVStopAngle ),
                m_maxRange_( maxRange ),
                m_maxUpdateRate_( maxUpdateRate ),
                m_maxVerticalFOVStopAngle_( maxVerticalFOVStopAngle ),
                m_minHorizontalFOVStartAngle_( minHorizontalFOVStartAngle ),
                m_minRange_( minRange ),
                m_minUpdateRate_( minUpdateRate ),
                m_minVerticalFOVStartAngle_( minVerticalFOVStartAngle ),
                m_name_( name ),
                m_stateActive_( stateActive ),
                m_stateOff_( stateOff ),
                m_stateStandby_( stateStandby ),
                m_supportedBzip2_( supportedBzip2 ),
                m_supportedDeflated_( supportedDeflated ),
                m_supportedLZMA_( supportedLZMA ),
                m_supportedNoCompression_( supportedNoCompression ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RangeSpecsReportType::RangeSpecsReportType(RangeSpecsReportType&& other_) OMG_NOEXCEPT  :m_coordinateTransformation_ (std::move(other_.m_coordinateTransformation_))
            ,
            m_maxHorizontalFOVStopAngle_ (std::move(other_.m_maxHorizontalFOVStopAngle_))
            ,
            m_maxRange_ (std::move(other_.m_maxRange_))
            ,
            m_maxUpdateRate_ (std::move(other_.m_maxUpdateRate_))
            ,
            m_maxVerticalFOVStopAngle_ (std::move(other_.m_maxVerticalFOVStopAngle_))
            ,
            m_minHorizontalFOVStartAngle_ (std::move(other_.m_minHorizontalFOVStartAngle_))
            ,
            m_minRange_ (std::move(other_.m_minRange_))
            ,
            m_minUpdateRate_ (std::move(other_.m_minUpdateRate_))
            ,
            m_minVerticalFOVStartAngle_ (std::move(other_.m_minVerticalFOVStartAngle_))
            ,
            m_name_ (std::move(other_.m_name_))
            ,
            m_stateActive_ (std::move(other_.m_stateActive_))
            ,
            m_stateOff_ (std::move(other_.m_stateOff_))
            ,
            m_stateStandby_ (std::move(other_.m_stateStandby_))
            ,
            m_supportedBzip2_ (std::move(other_.m_supportedBzip2_))
            ,
            m_supportedDeflated_ (std::move(other_.m_supportedDeflated_))
            ,
            m_supportedLZMA_ (std::move(other_.m_supportedLZMA_))
            ,
            m_supportedNoCompression_ (std::move(other_.m_supportedNoCompression_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            RangeSpecsReportType& RangeSpecsReportType::operator=(RangeSpecsReportType&&  other_) OMG_NOEXCEPT {
                RangeSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RangeSpecsReportType::swap(RangeSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_coordinateTransformation_, other_.m_coordinateTransformation_);
                swap(m_maxHorizontalFOVStopAngle_, other_.m_maxHorizontalFOVStopAngle_);
                swap(m_maxRange_, other_.m_maxRange_);
                swap(m_maxUpdateRate_, other_.m_maxUpdateRate_);
                swap(m_maxVerticalFOVStopAngle_, other_.m_maxVerticalFOVStopAngle_);
                swap(m_minHorizontalFOVStartAngle_, other_.m_minHorizontalFOVStartAngle_);
                swap(m_minRange_, other_.m_minRange_);
                swap(m_minUpdateRate_, other_.m_minUpdateRate_);
                swap(m_minVerticalFOVStartAngle_, other_.m_minVerticalFOVStartAngle_);
                swap(m_name_, other_.m_name_);
                swap(m_stateActive_, other_.m_stateActive_);
                swap(m_stateOff_, other_.m_stateOff_);
                swap(m_stateStandby_, other_.m_stateStandby_);
                swap(m_supportedBzip2_, other_.m_supportedBzip2_);
                swap(m_supportedDeflated_, other_.m_supportedDeflated_);
                swap(m_supportedLZMA_, other_.m_supportedLZMA_);
                swap(m_supportedNoCompression_, other_.m_supportedNoCompression_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool RangeSpecsReportType::operator == (const RangeSpecsReportType& other_) const {
                if (m_coordinateTransformation_ != other_.m_coordinateTransformation_) {
                    return false;
                }
                if (m_maxHorizontalFOVStopAngle_ != other_.m_maxHorizontalFOVStopAngle_) {
                    return false;
                }
                if (m_maxRange_ != other_.m_maxRange_) {
                    return false;
                }
                if (m_maxUpdateRate_ != other_.m_maxUpdateRate_) {
                    return false;
                }
                if (m_maxVerticalFOVStopAngle_ != other_.m_maxVerticalFOVStopAngle_) {
                    return false;
                }
                if (m_minHorizontalFOVStartAngle_ != other_.m_minHorizontalFOVStartAngle_) {
                    return false;
                }
                if (m_minRange_ != other_.m_minRange_) {
                    return false;
                }
                if (m_minUpdateRate_ != other_.m_minUpdateRate_) {
                    return false;
                }
                if (m_minVerticalFOVStartAngle_ != other_.m_minVerticalFOVStartAngle_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_stateActive_ != other_.m_stateActive_) {
                    return false;
                }
                if (m_stateOff_ != other_.m_stateOff_) {
                    return false;
                }
                if (m_stateStandby_ != other_.m_stateStandby_) {
                    return false;
                }
                if (m_supportedBzip2_ != other_.m_supportedBzip2_) {
                    return false;
                }
                if (m_supportedDeflated_ != other_.m_supportedDeflated_) {
                    return false;
                }
                if (m_supportedLZMA_ != other_.m_supportedLZMA_) {
                    return false;
                }
                if (m_supportedNoCompression_ != other_.m_supportedNoCompression_) {
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
            bool RangeSpecsReportType::operator != (const RangeSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RangeSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "coordinateTransformation: " << sample.coordinateTransformation()<<", ";
                o << "maxHorizontalFOVStopAngle: " << std::setprecision(15) <<sample.maxHorizontalFOVStopAngle()<<", ";
                o << "maxRange: " << std::setprecision(15) <<sample.maxRange()<<", ";
                o << "maxUpdateRate: " << std::setprecision(15) <<sample.maxUpdateRate()<<", ";
                o << "maxVerticalFOVStopAngle: " << std::setprecision(15) <<sample.maxVerticalFOVStopAngle()<<", ";
                o << "minHorizontalFOVStartAngle: " << std::setprecision(15) <<sample.minHorizontalFOVStartAngle()<<", ";
                o << "minRange: " << std::setprecision(15) <<sample.minRange()<<", ";
                o << "minUpdateRate: " << std::setprecision(15) <<sample.minUpdateRate()<<", ";
                o << "minVerticalFOVStartAngle: " << std::setprecision(15) <<sample.minVerticalFOVStartAngle()<<", ";
                o << "name: " << sample.name()<<", ";
                o << "stateActive: " << sample.stateActive()<<", ";
                o << "stateOff: " << sample.stateOff()<<", ";
                o << "stateStandby: " << sample.stateStandby()<<", ";
                o << "supportedBzip2: " << sample.supportedBzip2()<<", ";
                o << "supportedDeflated: " << sample.supportedDeflated()<<", ";
                o << "supportedLZMA: " << sample.supportedLZMA()<<", ";
                o << "supportedNoCompression: " << sample.supportedNoCompression()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace RangeSpecs  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::RangeSpecs::RangeSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RangeSpecsReportType_g_tc_members[19]=
                {

                    {
                        (char *)"coordinateTransformation",/* Member name */
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
                        (char *)"maxHorizontalFOVStopAngle",/* Member name */
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
                        (char *)"maxRange",/* Member name */
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
                        (char *)"maxUpdateRate",/* Member name */
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
                        (char *)"maxVerticalFOVStopAngle",/* Member name */
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
                        (char *)"minHorizontalFOVStartAngle",/* Member name */
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
                        (char *)"minRange",/* Member name */
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
                        (char *)"minUpdateRate",/* Member name */
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
                        (char *)"minVerticalFOVStartAngle",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"stateActive",/* Member name */
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
                        (char *)"stateOff",/* Member name */
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
                        (char *)"stateStandby",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"supportedBzip2",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedDeflated",/* Member name */
                        {
                            14,/* Representation ID */
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
                        (char *)"supportedLZMA",/* Member name */
                        {
                            15,/* Representation ID */
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
                        (char *)"supportedNoCompression",/* Member name */
                        {
                            16,/* Representation ID */
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
                            17,/* Representation ID */
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
                            18,/* Representation ID */
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

                static DDS_TypeCode RangeSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::RangeSpecs::RangeSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        19, /* Number of members */
                        RangeSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RangeSpecsReportType*/

                if (is_initialized) {
                    return &RangeSpecsReportType_g_tc;
                }

                RangeSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RangeSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RangeSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                RangeSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                RangeSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                RangeSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 10000000000ULL;

                RangeSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                RangeSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;

                RangeSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 10000000000ULL;

                RangeSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                RangeSpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeSpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeSpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                RangeSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                RangeSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;

                RangeSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                RangeSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RangeSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::RangeSpecs::RangeSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo RangeSpecsReportType_g_memberAccessInfos[19] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RangeSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RangeSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::RangeSpecs::RangeSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                RangeSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coordinateTransformation() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxHorizontalFOVStopAngle() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRange() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxUpdateRate() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxVerticalFOVStopAngle() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minHorizontalFOVStartAngle() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minRange() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minUpdateRate() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minVerticalFOVStartAngle() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateActive() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateOff() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateStandby() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedBzip2() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedDeflated() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLZMA() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedNoCompression() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                RangeSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                RangeSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                RangeSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::RangeSpecs::RangeSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RangeSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RangeSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RangeSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RangeSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::RangeSpecs::RangeSpecsReportType >;

                RangeSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RangeSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RangeSpecsReportType_g_typePlugin = 
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

                return &RangeSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::RangeSpecs::RangeSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::RangeSpecs::RangeSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::RangeSpecs::RangeSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::RangeSpecs::RangeSpecsReportTypePlugin_new,
                UMAA::SA::RangeSpecs::RangeSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::RangeSpecs::RangeSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::RangeSpecs::RangeSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RangeSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RangeSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::RangeSpecs::RangeSpecsReportType >::from_cdr_buffer(UMAA::SA::RangeSpecs::RangeSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RangeSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::RangeSpecs::RangeSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::RangeSpecs::RangeSpecsReportType >::reset_sample(UMAA::SA::RangeSpecs::RangeSpecsReportType& sample) 
        {
            sample.coordinateTransformation(0);
            sample.maxHorizontalFOVStopAngle(0.0);
            sample.maxRange(0.0);
            sample.maxUpdateRate(0.0);
            sample.maxVerticalFOVStopAngle(0.0);
            sample.minHorizontalFOVStartAngle(0.0);
            sample.minRange(0.0);
            sample.minUpdateRate(0.0);
            sample.minVerticalFOVStartAngle(0.0);
            sample.name("");
            sample.stateActive(0);
            sample.stateOff(0);
            sample.stateStandby(0);
            sample.supportedBzip2(0);
            sample.supportedDeflated(0);
            sample.supportedLZMA(0);
            sample.supportedNoCompression(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::RangeSpecs::RangeSpecsReportType >::allocate_sample(UMAA::SA::RangeSpecs::RangeSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

