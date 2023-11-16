

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PanTiltSpecsReportType.hpp"
#include "PanTiltSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace PanTiltSpecs {

            // ---- PanTiltSpecsReportType: 

            PanTiltSpecsReportType::PanTiltSpecsReportType() :
                m_panMax_ (0.0) ,
                m_panMaxSpeed_ (0.0) ,
                m_panMin_ (0.0) ,
                m_tiltMax_ (0.0) ,
                m_tiltMaxSpeed_ (0.0) ,
                m_tiltMin_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PanTiltSpecsReportType::PanTiltSpecsReportType (const UMAA::Common::Measurement::Position3D_PlatformXYZ& baseOffset,const BasicTypes::Quaternion& baseOrientation,double panMax,double panMaxSpeed,double panMin,double tiltMax,double tiltMaxSpeed,double tiltMin,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_baseOffset_( baseOffset ),
                m_baseOrientation_( baseOrientation ),
                m_panMax_( panMax ),
                m_panMaxSpeed_( panMaxSpeed ),
                m_panMin_( panMin ),
                m_tiltMax_( tiltMax ),
                m_tiltMaxSpeed_( tiltMaxSpeed ),
                m_tiltMin_( tiltMin ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PanTiltSpecsReportType::PanTiltSpecsReportType(PanTiltSpecsReportType&& other_) OMG_NOEXCEPT  :m_baseOffset_ (std::move(other_.m_baseOffset_))
            ,
            m_baseOrientation_ (std::move(other_.m_baseOrientation_))
            ,
            m_panMax_ (std::move(other_.m_panMax_))
            ,
            m_panMaxSpeed_ (std::move(other_.m_panMaxSpeed_))
            ,
            m_panMin_ (std::move(other_.m_panMin_))
            ,
            m_tiltMax_ (std::move(other_.m_tiltMax_))
            ,
            m_tiltMaxSpeed_ (std::move(other_.m_tiltMaxSpeed_))
            ,
            m_tiltMin_ (std::move(other_.m_tiltMin_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            PanTiltSpecsReportType& PanTiltSpecsReportType::operator=(PanTiltSpecsReportType&&  other_) OMG_NOEXCEPT {
                PanTiltSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PanTiltSpecsReportType::swap(PanTiltSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_baseOffset_, other_.m_baseOffset_);
                swap(m_baseOrientation_, other_.m_baseOrientation_);
                swap(m_panMax_, other_.m_panMax_);
                swap(m_panMaxSpeed_, other_.m_panMaxSpeed_);
                swap(m_panMin_, other_.m_panMin_);
                swap(m_tiltMax_, other_.m_tiltMax_);
                swap(m_tiltMaxSpeed_, other_.m_tiltMaxSpeed_);
                swap(m_tiltMin_, other_.m_tiltMin_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PanTiltSpecsReportType::operator == (const PanTiltSpecsReportType& other_) const {
                if (m_baseOffset_ != other_.m_baseOffset_) {
                    return false;
                }
                if (m_baseOrientation_ != other_.m_baseOrientation_) {
                    return false;
                }
                if (m_panMax_ != other_.m_panMax_) {
                    return false;
                }
                if (m_panMaxSpeed_ != other_.m_panMaxSpeed_) {
                    return false;
                }
                if (m_panMin_ != other_.m_panMin_) {
                    return false;
                }
                if (m_tiltMax_ != other_.m_tiltMax_) {
                    return false;
                }
                if (m_tiltMaxSpeed_ != other_.m_tiltMaxSpeed_) {
                    return false;
                }
                if (m_tiltMin_ != other_.m_tiltMin_) {
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
            bool PanTiltSpecsReportType::operator != (const PanTiltSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PanTiltSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "baseOffset: " << sample.baseOffset()<<", ";
                o << "baseOrientation: " << sample.baseOrientation()<<", ";
                o << "panMax: " << std::setprecision(15) <<sample.panMax()<<", ";
                o << "panMaxSpeed: " << std::setprecision(15) <<sample.panMaxSpeed()<<", ";
                o << "panMin: " << std::setprecision(15) <<sample.panMin()<<", ";
                o << "tiltMax: " << std::setprecision(15) <<sample.tiltMax()<<", ";
                o << "tiltMaxSpeed: " << std::setprecision(15) <<sample.tiltMaxSpeed()<<", ";
                o << "tiltMin: " << std::setprecision(15) <<sample.tiltMin()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace PanTiltSpecs  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanTiltSpecsReportType_g_tc_members[10]=
                {

                    {
                        (char *)"baseOffset",/* Member name */
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
                        (char *)"baseOrientation",/* Member name */
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
                        (char *)"panMax",/* Member name */
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
                        (char *)"panMaxSpeed",/* Member name */
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
                        (char *)"panMin",/* Member name */
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
                        (char *)"tiltMax",/* Member name */
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
                        (char *)"tiltMaxSpeed",/* Member name */
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
                        (char *)"tiltMin",/* Member name */
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

                static DDS_TypeCode PanTiltSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        PanTiltSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanTiltSpecsReportType*/

                if (is_initialized) {
                    return &PanTiltSpecsReportType_g_tc;
                }

                PanTiltSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanTiltSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position3D_PlatformXYZ>::get().native();
                PanTiltSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::OrientationQuaternion_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PanTiltSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                PanTiltSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = -62.831;
                PanTiltSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 62.831;

                PanTiltSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = -62.831;
                PanTiltSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 62.831;

                PanTiltSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PanTiltSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PanTiltSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo PanTiltSpecsReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanTiltSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanTiltSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PanTiltSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->baseOffset() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->baseOrientation() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panMax() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panMaxSpeed() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panMin() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiltMax() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiltMaxSpeed() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiltMin() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PanTiltSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PanTiltSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                PanTiltSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanTiltSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanTiltSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanTiltSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanTiltSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >;

                PanTiltSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanTiltSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanTiltSpecsReportType_g_typePlugin = 
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

                return &PanTiltSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportTypePlugin_new,
                UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanTiltSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanTiltSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::from_cdr_buffer(UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanTiltSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::reset_sample(UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.baseOffset());
            ::rti::topic::reset_sample(sample.baseOrientation());
            sample.panMax(0.0);
            sample.panMaxSpeed(0.0);
            sample.panMin(0.0);
            sample.tiltMax(0.0);
            sample.tiltMaxSpeed(0.0);
            sample.tiltMin(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType >::allocate_sample(UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.baseOffset(),  -1, -1);
            ::rti::topic::allocate_sample(sample.baseOrientation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

