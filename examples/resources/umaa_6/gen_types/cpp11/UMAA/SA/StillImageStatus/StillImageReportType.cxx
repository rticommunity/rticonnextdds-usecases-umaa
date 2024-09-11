

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageReportType.idl
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
#include "StillImageReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StillImageReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace StillImageStatus {

            // ---- StillImageReportType: 

            StillImageReportType::StillImageReportType() :
                m_imageFormat_(UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::ARW) ,
                m_imageURI_ ("")  {

            }   

            StillImageReportType::StillImageReportType (const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::dds::core::optional< double >& altitudeMSL_,const ::dds::core::optional< double >& depth_,const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType& imageFormat_,const ::dds::core::optional< std::string >& imageName_,const std::string& imageURI_,const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >& position_,const ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >& transform_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& contactID_,const ::UMAA::Common::Measurement::NumericGUID& imageID_):
                m_altitudeAGL_(altitudeAGL_), 
                m_altitudeASF_(altitudeASF_), 
                m_altitudeGeodetic_(altitudeGeodetic_), 
                m_altitudeMSL_(altitudeMSL_), 
                m_depth_(depth_), 
                m_imageFormat_(imageFormat_), 
                m_imageName_(imageName_), 
                m_imageURI_(imageURI_), 
                m_position_(position_), 
                m_transform_(transform_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_contactID_(contactID_), 
                m_imageID_(imageID_) {
            }

            void StillImageReportType::swap(StillImageReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_altitudeGeodetic_, other_.m_altitudeGeodetic_);
                swap(m_altitudeMSL_, other_.m_altitudeMSL_);
                swap(m_depth_, other_.m_depth_);
                swap(m_imageFormat_, other_.m_imageFormat_);
                swap(m_imageName_, other_.m_imageName_);
                swap(m_imageURI_, other_.m_imageURI_);
                swap(m_position_, other_.m_position_);
                swap(m_transform_, other_.m_transform_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_contactID_, other_.m_contactID_);
                swap(m_imageID_, other_.m_imageID_);
            }  

            bool StillImageReportType::operator == (const StillImageReportType& other_) const {
                if (m_altitudeAGL_.has_value() != other_.m_altitudeAGL_.has_value()) {
                    return false;
                } else if (m_altitudeAGL_.has_value()) {
                    if (std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeASF_.has_value() != other_.m_altitudeASF_.has_value()) {
                    return false;
                } else if (m_altitudeASF_.has_value()) {
                    if (std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeGeodetic_.has_value() != other_.m_altitudeGeodetic_.has_value()) {
                    return false;
                } else if (m_altitudeGeodetic_.has_value()) {
                    if (std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeMSL_.has_value() != other_.m_altitudeMSL_.has_value()) {
                    return false;
                } else if (m_altitudeMSL_.has_value()) {
                    if (std::fabs(*m_altitudeMSL_ - *other_.m_altitudeMSL_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeMSL_ - *other_.m_altitudeMSL_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_depth_.has_value() != other_.m_depth_.has_value()) {
                    return false;
                } else if (m_depth_.has_value()) {
                    if (std::fabs(*m_depth_ - *other_.m_depth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_depth_ - *other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_imageFormat_ != other_.m_imageFormat_) {
                    return false;
                }
                if (m_imageName_ != other_.m_imageName_) {
                    return false;
                }
                if (m_imageURI_ != other_.m_imageURI_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_transform_ != other_.m_transform_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_contactID_ != other_.m_contactID_) {
                    return false;
                }
                if (m_imageID_ != other_.m_imageID_) {
                    return false;
                }
                return true;
            }

            bool StillImageReportType::operator != (const StillImageReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StillImageReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitudeAGL: " << sample.altitudeAGL ()<<", ";
                o << "altitudeASF: " << sample.altitudeASF ()<<", ";
                o << "altitudeGeodetic: " << sample.altitudeGeodetic ()<<", ";
                o << "altitudeMSL: " << sample.altitudeMSL ()<<", ";
                o << "depth: " << sample.depth ()<<", ";
                o << "imageFormat: " << sample.imageFormat ()<<", ";
                o << "imageName: " << sample.imageName ()<<", ";
                o << "imageURI: " << sample.imageURI ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "transform: " << sample.transform ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "contactID: " << sample.contactID ()<<", ";
                o << "imageID: " << sample.imageID ();
                o <<"]";
                return o;
            }

        } // namespace StillImageStatus  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::StillImageStatus::StillImageReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StillImageReportType_g_tc_members[14]=
                {

                    {
                        (char *)"altitudeAGL",/* Member name */
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
                        (char *)"altitudeASF",/* Member name */
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
                        (char *)"altitudeGeodetic",/* Member name */
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
                        (char *)"altitudeMSL",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        (char *)"imageFormat",/* Member name */
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
                        (char *)"imageName",/* Member name */
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
                        (char *)"imageURI",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"transform",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"contactID",/* Member name */
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
                        (char *)"imageID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode StillImageReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::StillImageStatus::StillImageReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        StillImageReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StillImageReportType*/

                if (is_initialized) {
                    return &StillImageReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StillImageReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StillImageReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType>::get().native();
                StillImageReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition3DWGS84>::get().native();
                StillImageReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Environment::WorldTransformType>::get().native();
                StillImageReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                StillImageReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                StillImageReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StillImageReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                StillImageReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StillImageReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StillImageReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StillImageReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StillImageReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StillImageReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StillImageReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StillImageReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StillImageReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StillImageReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StillImageReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StillImageReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StillImageReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;
                StillImageReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                StillImageReportType_g_tc_members[7]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                StillImageReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                StillImageReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &StillImageReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::StillImageStatus::StillImageReportType *sample;

                static RTIXCdrMemberAccessInfo StillImageReportType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StillImageReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StillImageReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::StillImageStatus::StillImageReportType);
                if (sample == NULL) {
                    return NULL;
                }

                StillImageReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeGeodetic() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeMSL() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageFormat() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageName() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageURI() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transform() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactID() - (char *)sample);

                StillImageReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageID() - (char *)sample);

                StillImageReportType_g_sampleAccessInfo.memberAccessInfos = 
                StillImageReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::StillImageStatus::StillImageReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StillImageReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StillImageReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StillImageReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StillImageReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::StillImageStatus::StillImageReportType >;

                StillImageReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StillImageReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StillImageReportType_g_typePlugin = 
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

                return &StillImageReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::StillImageStatus::StillImageReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::StillImageStatus::StillImageReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::StillImageStatus::StillImageReportTypePlugin_new,
                ::UMAA::SA::StillImageStatus::StillImageReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::StillImageStatus::StillImageReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StillImageReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StillImageReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType >::from_cdr_buffer(::UMAA::SA::StillImageStatus::StillImageReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StillImageReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::StillImageStatus::StillImageReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType >::reset_sample(::UMAA::SA::StillImageStatus::StillImageReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitudeAGL());
            ::rti::topic::reset_sample(sample.altitudeASF());
            ::rti::topic::reset_sample(sample.altitudeGeodetic());
            ::rti::topic::reset_sample(sample.altitudeMSL());
            ::rti::topic::reset_sample(sample.depth());
            sample.imageFormat(UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::ARW);
            ::rti::topic::reset_sample(sample.imageName());
            sample.imageURI("");
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.transform());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.contactID());
            ::rti::topic::reset_sample(sample.imageID());
        }

        void topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType >::allocate_sample(::UMAA::SA::StillImageStatus::StillImageReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.imageFormat(),  -1, -1);
            ::rti::topic::allocate_sample(sample.imageURI(),  -1, 2047L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.imageID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
