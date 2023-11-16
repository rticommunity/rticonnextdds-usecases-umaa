

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DigitalAudioSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DigitalAudioSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalAudioSpecs {

            // ---- DigitalAudioSpecsReportType: 

            DigitalAudioSpecsReportType::DigitalAudioSpecsReportType() :
                m_maxAllowedBitRate_ (0) ,
                m_maxChannels_ (0) ,
                m_maxSampleRate_ (0) ,
                m_minAllowedBitRate_ (0) ,
                m_minSampleRate_ (0) ,
                m_supported10bits_ (0) ,
                m_supported12bits_ (0) ,
                m_supported14bits_ (0) ,
                m_supported16bits_ (0) ,
                m_supported20bits_ (0) ,
                m_supported24bits_ (0) ,
                m_supported32bits_ (0) ,
                m_supported40bits_ (0) ,
                m_supported48bits_ (0) ,
                m_supported56bits_ (0) ,
                m_supported64bits_ (0) ,
                m_supported8bits_ (0) ,
                m_supportedAAC_MPEG2_ (0) ,
                m_supportedAAC_MPEG4_ (0) ,
                m_supportedAIFF_ (0) ,
                m_supportedALAC_ (0) ,
                m_supportedAverage_ (0) ,
                m_supportedBest_ (0) ,
                m_supportedBetter_ (0) ,
                m_supportedDolbyDigital_ (0) ,
                m_supportedDTS_ (0) ,
                m_supportedFLAC_ (0) ,
                m_supportedGood_ (0) ,
                m_supportedLess_ (0) ,
                m_supportedLPCM_PCM_ (0) ,
                m_supportedMP2_ (0) ,
                m_supportedMP3_ (0) ,
                m_supportedPoor_ (0) ,
                m_supportedRealAudio_ (0) ,
                m_supportedSpeex_ (0) ,
                m_supportedTrueAudio_ (0) ,
                m_supportedULAW_ (0) ,
                m_supportedVORBIS_ (0) ,
                m_supportedWAV_ (0) ,
                m_supportedWMA_ (0) ,
                m_supportedWMA9_Lossless_ (0) ,
                m_supportedWorst_ (0)  {

            }   

            DigitalAudioSpecsReportType::DigitalAudioSpecsReportType (int32_t maxAllowedBitRate_,int32_t maxChannels_,int32_t maxSampleRate_,int32_t minAllowedBitRate_,int32_t minSampleRate_,bool supported10bits_,bool supported12bits_,bool supported14bits_,bool supported16bits_,bool supported20bits_,bool supported24bits_,bool supported32bits_,bool supported40bits_,bool supported48bits_,bool supported56bits_,bool supported64bits_,bool supported8bits_,bool supportedAAC_MPEG2_,bool supportedAAC_MPEG4_,bool supportedAIFF_,bool supportedALAC_,bool supportedAverage_,bool supportedBest_,bool supportedBetter_,bool supportedDolbyDigital_,bool supportedDTS_,bool supportedFLAC_,bool supportedGood_,bool supportedLess_,bool supportedLPCM_PCM_,bool supportedMP2_,bool supportedMP3_,bool supportedPoor_,bool supportedRealAudio_,bool supportedSpeex_,bool supportedTrueAudio_,bool supportedULAW_,bool supportedVORBIS_,bool supportedWAV_,bool supportedWMA_,bool supportedWMA9_Lossless_,bool supportedWorst_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_maxAllowedBitRate_(maxAllowedBitRate_), 
                m_maxChannels_(maxChannels_), 
                m_maxSampleRate_(maxSampleRate_), 
                m_minAllowedBitRate_(minAllowedBitRate_), 
                m_minSampleRate_(minSampleRate_), 
                m_supported10bits_(supported10bits_), 
                m_supported12bits_(supported12bits_), 
                m_supported14bits_(supported14bits_), 
                m_supported16bits_(supported16bits_), 
                m_supported20bits_(supported20bits_), 
                m_supported24bits_(supported24bits_), 
                m_supported32bits_(supported32bits_), 
                m_supported40bits_(supported40bits_), 
                m_supported48bits_(supported48bits_), 
                m_supported56bits_(supported56bits_), 
                m_supported64bits_(supported64bits_), 
                m_supported8bits_(supported8bits_), 
                m_supportedAAC_MPEG2_(supportedAAC_MPEG2_), 
                m_supportedAAC_MPEG4_(supportedAAC_MPEG4_), 
                m_supportedAIFF_(supportedAIFF_), 
                m_supportedALAC_(supportedALAC_), 
                m_supportedAverage_(supportedAverage_), 
                m_supportedBest_(supportedBest_), 
                m_supportedBetter_(supportedBetter_), 
                m_supportedDolbyDigital_(supportedDolbyDigital_), 
                m_supportedDTS_(supportedDTS_), 
                m_supportedFLAC_(supportedFLAC_), 
                m_supportedGood_(supportedGood_), 
                m_supportedLess_(supportedLess_), 
                m_supportedLPCM_PCM_(supportedLPCM_PCM_), 
                m_supportedMP2_(supportedMP2_), 
                m_supportedMP3_(supportedMP3_), 
                m_supportedPoor_(supportedPoor_), 
                m_supportedRealAudio_(supportedRealAudio_), 
                m_supportedSpeex_(supportedSpeex_), 
                m_supportedTrueAudio_(supportedTrueAudio_), 
                m_supportedULAW_(supportedULAW_), 
                m_supportedVORBIS_(supportedVORBIS_), 
                m_supportedWAV_(supportedWAV_), 
                m_supportedWMA_(supportedWMA_), 
                m_supportedWMA9_Lossless_(supportedWMA9_Lossless_), 
                m_supportedWorst_(supportedWorst_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void DigitalAudioSpecsReportType::swap(DigitalAudioSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxAllowedBitRate_, other_.m_maxAllowedBitRate_);
                swap(m_maxChannels_, other_.m_maxChannels_);
                swap(m_maxSampleRate_, other_.m_maxSampleRate_);
                swap(m_minAllowedBitRate_, other_.m_minAllowedBitRate_);
                swap(m_minSampleRate_, other_.m_minSampleRate_);
                swap(m_supported10bits_, other_.m_supported10bits_);
                swap(m_supported12bits_, other_.m_supported12bits_);
                swap(m_supported14bits_, other_.m_supported14bits_);
                swap(m_supported16bits_, other_.m_supported16bits_);
                swap(m_supported20bits_, other_.m_supported20bits_);
                swap(m_supported24bits_, other_.m_supported24bits_);
                swap(m_supported32bits_, other_.m_supported32bits_);
                swap(m_supported40bits_, other_.m_supported40bits_);
                swap(m_supported48bits_, other_.m_supported48bits_);
                swap(m_supported56bits_, other_.m_supported56bits_);
                swap(m_supported64bits_, other_.m_supported64bits_);
                swap(m_supported8bits_, other_.m_supported8bits_);
                swap(m_supportedAAC_MPEG2_, other_.m_supportedAAC_MPEG2_);
                swap(m_supportedAAC_MPEG4_, other_.m_supportedAAC_MPEG4_);
                swap(m_supportedAIFF_, other_.m_supportedAIFF_);
                swap(m_supportedALAC_, other_.m_supportedALAC_);
                swap(m_supportedAverage_, other_.m_supportedAverage_);
                swap(m_supportedBest_, other_.m_supportedBest_);
                swap(m_supportedBetter_, other_.m_supportedBetter_);
                swap(m_supportedDolbyDigital_, other_.m_supportedDolbyDigital_);
                swap(m_supportedDTS_, other_.m_supportedDTS_);
                swap(m_supportedFLAC_, other_.m_supportedFLAC_);
                swap(m_supportedGood_, other_.m_supportedGood_);
                swap(m_supportedLess_, other_.m_supportedLess_);
                swap(m_supportedLPCM_PCM_, other_.m_supportedLPCM_PCM_);
                swap(m_supportedMP2_, other_.m_supportedMP2_);
                swap(m_supportedMP3_, other_.m_supportedMP3_);
                swap(m_supportedPoor_, other_.m_supportedPoor_);
                swap(m_supportedRealAudio_, other_.m_supportedRealAudio_);
                swap(m_supportedSpeex_, other_.m_supportedSpeex_);
                swap(m_supportedTrueAudio_, other_.m_supportedTrueAudio_);
                swap(m_supportedULAW_, other_.m_supportedULAW_);
                swap(m_supportedVORBIS_, other_.m_supportedVORBIS_);
                swap(m_supportedWAV_, other_.m_supportedWAV_);
                swap(m_supportedWMA_, other_.m_supportedWMA_);
                swap(m_supportedWMA9_Lossless_, other_.m_supportedWMA9_Lossless_);
                swap(m_supportedWorst_, other_.m_supportedWorst_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DigitalAudioSpecsReportType::operator == (const DigitalAudioSpecsReportType& other_) const {
                if (m_maxAllowedBitRate_ != other_.m_maxAllowedBitRate_) {
                    return false;
                }
                if (m_maxChannels_ != other_.m_maxChannels_) {
                    return false;
                }
                if (m_maxSampleRate_ != other_.m_maxSampleRate_) {
                    return false;
                }
                if (m_minAllowedBitRate_ != other_.m_minAllowedBitRate_) {
                    return false;
                }
                if (m_minSampleRate_ != other_.m_minSampleRate_) {
                    return false;
                }
                if (m_supported10bits_ != other_.m_supported10bits_) {
                    return false;
                }
                if (m_supported12bits_ != other_.m_supported12bits_) {
                    return false;
                }
                if (m_supported14bits_ != other_.m_supported14bits_) {
                    return false;
                }
                if (m_supported16bits_ != other_.m_supported16bits_) {
                    return false;
                }
                if (m_supported20bits_ != other_.m_supported20bits_) {
                    return false;
                }
                if (m_supported24bits_ != other_.m_supported24bits_) {
                    return false;
                }
                if (m_supported32bits_ != other_.m_supported32bits_) {
                    return false;
                }
                if (m_supported40bits_ != other_.m_supported40bits_) {
                    return false;
                }
                if (m_supported48bits_ != other_.m_supported48bits_) {
                    return false;
                }
                if (m_supported56bits_ != other_.m_supported56bits_) {
                    return false;
                }
                if (m_supported64bits_ != other_.m_supported64bits_) {
                    return false;
                }
                if (m_supported8bits_ != other_.m_supported8bits_) {
                    return false;
                }
                if (m_supportedAAC_MPEG2_ != other_.m_supportedAAC_MPEG2_) {
                    return false;
                }
                if (m_supportedAAC_MPEG4_ != other_.m_supportedAAC_MPEG4_) {
                    return false;
                }
                if (m_supportedAIFF_ != other_.m_supportedAIFF_) {
                    return false;
                }
                if (m_supportedALAC_ != other_.m_supportedALAC_) {
                    return false;
                }
                if (m_supportedAverage_ != other_.m_supportedAverage_) {
                    return false;
                }
                if (m_supportedBest_ != other_.m_supportedBest_) {
                    return false;
                }
                if (m_supportedBetter_ != other_.m_supportedBetter_) {
                    return false;
                }
                if (m_supportedDolbyDigital_ != other_.m_supportedDolbyDigital_) {
                    return false;
                }
                if (m_supportedDTS_ != other_.m_supportedDTS_) {
                    return false;
                }
                if (m_supportedFLAC_ != other_.m_supportedFLAC_) {
                    return false;
                }
                if (m_supportedGood_ != other_.m_supportedGood_) {
                    return false;
                }
                if (m_supportedLess_ != other_.m_supportedLess_) {
                    return false;
                }
                if (m_supportedLPCM_PCM_ != other_.m_supportedLPCM_PCM_) {
                    return false;
                }
                if (m_supportedMP2_ != other_.m_supportedMP2_) {
                    return false;
                }
                if (m_supportedMP3_ != other_.m_supportedMP3_) {
                    return false;
                }
                if (m_supportedPoor_ != other_.m_supportedPoor_) {
                    return false;
                }
                if (m_supportedRealAudio_ != other_.m_supportedRealAudio_) {
                    return false;
                }
                if (m_supportedSpeex_ != other_.m_supportedSpeex_) {
                    return false;
                }
                if (m_supportedTrueAudio_ != other_.m_supportedTrueAudio_) {
                    return false;
                }
                if (m_supportedULAW_ != other_.m_supportedULAW_) {
                    return false;
                }
                if (m_supportedVORBIS_ != other_.m_supportedVORBIS_) {
                    return false;
                }
                if (m_supportedWAV_ != other_.m_supportedWAV_) {
                    return false;
                }
                if (m_supportedWMA_ != other_.m_supportedWMA_) {
                    return false;
                }
                if (m_supportedWMA9_Lossless_ != other_.m_supportedWMA9_Lossless_) {
                    return false;
                }
                if (m_supportedWorst_ != other_.m_supportedWorst_) {
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

            bool DigitalAudioSpecsReportType::operator != (const DigitalAudioSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalAudioSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxAllowedBitRate: " << sample.maxAllowedBitRate ()<<", ";
                o << "maxChannels: " << sample.maxChannels ()<<", ";
                o << "maxSampleRate: " << sample.maxSampleRate ()<<", ";
                o << "minAllowedBitRate: " << sample.minAllowedBitRate ()<<", ";
                o << "minSampleRate: " << sample.minSampleRate ()<<", ";
                o << "supported10bits: " << sample.supported10bits ()<<", ";
                o << "supported12bits: " << sample.supported12bits ()<<", ";
                o << "supported14bits: " << sample.supported14bits ()<<", ";
                o << "supported16bits: " << sample.supported16bits ()<<", ";
                o << "supported20bits: " << sample.supported20bits ()<<", ";
                o << "supported24bits: " << sample.supported24bits ()<<", ";
                o << "supported32bits: " << sample.supported32bits ()<<", ";
                o << "supported40bits: " << sample.supported40bits ()<<", ";
                o << "supported48bits: " << sample.supported48bits ()<<", ";
                o << "supported56bits: " << sample.supported56bits ()<<", ";
                o << "supported64bits: " << sample.supported64bits ()<<", ";
                o << "supported8bits: " << sample.supported8bits ()<<", ";
                o << "supportedAAC_MPEG2: " << sample.supportedAAC_MPEG2 ()<<", ";
                o << "supportedAAC_MPEG4: " << sample.supportedAAC_MPEG4 ()<<", ";
                o << "supportedAIFF: " << sample.supportedAIFF ()<<", ";
                o << "supportedALAC: " << sample.supportedALAC ()<<", ";
                o << "supportedAverage: " << sample.supportedAverage ()<<", ";
                o << "supportedBest: " << sample.supportedBest ()<<", ";
                o << "supportedBetter: " << sample.supportedBetter ()<<", ";
                o << "supportedDolbyDigital: " << sample.supportedDolbyDigital ()<<", ";
                o << "supportedDTS: " << sample.supportedDTS ()<<", ";
                o << "supportedFLAC: " << sample.supportedFLAC ()<<", ";
                o << "supportedGood: " << sample.supportedGood ()<<", ";
                o << "supportedLess: " << sample.supportedLess ()<<", ";
                o << "supportedLPCM_PCM: " << sample.supportedLPCM_PCM ()<<", ";
                o << "supportedMP2: " << sample.supportedMP2 ()<<", ";
                o << "supportedMP3: " << sample.supportedMP3 ()<<", ";
                o << "supportedPoor: " << sample.supportedPoor ()<<", ";
                o << "supportedRealAudio: " << sample.supportedRealAudio ()<<", ";
                o << "supportedSpeex: " << sample.supportedSpeex ()<<", ";
                o << "supportedTrueAudio: " << sample.supportedTrueAudio ()<<", ";
                o << "supportedULAW: " << sample.supportedULAW ()<<", ";
                o << "supportedVORBIS: " << sample.supportedVORBIS ()<<", ";
                o << "supportedWAV: " << sample.supportedWAV ()<<", ";
                o << "supportedWMA: " << sample.supportedWMA ()<<", ";
                o << "supportedWMA9_Lossless: " << sample.supportedWMA9_Lossless ()<<", ";
                o << "supportedWorst: " << sample.supportedWorst ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace DigitalAudioSpecs  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DigitalAudioSpecsReportType_g_tc_members[44]=
                {

                    {
                        (char *)"maxAllowedBitRate",/* Member name */
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
                        (char *)"maxChannels",/* Member name */
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
                        (char *)"maxSampleRate",/* Member name */
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
                        (char *)"minAllowedBitRate",/* Member name */
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
                        (char *)"minSampleRate",/* Member name */
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
                        (char *)"supported10bits",/* Member name */
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
                        (char *)"supported12bits",/* Member name */
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
                        (char *)"supported14bits",/* Member name */
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
                        (char *)"supported16bits",/* Member name */
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
                        (char *)"supported20bits",/* Member name */
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
                        (char *)"supported24bits",/* Member name */
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
                        (char *)"supported32bits",/* Member name */
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
                        (char *)"supported40bits",/* Member name */
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
                        (char *)"supported48bits",/* Member name */
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
                        (char *)"supported56bits",/* Member name */
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
                        (char *)"supported64bits",/* Member name */
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
                        (char *)"supported8bits",/* Member name */
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
                        (char *)"supportedAAC_MPEG2",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"supportedAAC_MPEG4",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedAIFF",/* Member name */
                        {
                            19,/* Representation ID */
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
                        (char *)"supportedALAC",/* Member name */
                        {
                            20,/* Representation ID */
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
                        (char *)"supportedAverage",/* Member name */
                        {
                            21,/* Representation ID */
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
                        (char *)"supportedBest",/* Member name */
                        {
                            22,/* Representation ID */
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
                        (char *)"supportedBetter",/* Member name */
                        {
                            23,/* Representation ID */
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
                        (char *)"supportedDolbyDigital",/* Member name */
                        {
                            24,/* Representation ID */
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
                        (char *)"supportedDTS",/* Member name */
                        {
                            25,/* Representation ID */
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
                        (char *)"supportedFLAC",/* Member name */
                        {
                            26,/* Representation ID */
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
                        (char *)"supportedGood",/* Member name */
                        {
                            27,/* Representation ID */
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
                        (char *)"supportedLess",/* Member name */
                        {
                            28,/* Representation ID */
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
                        (char *)"supportedLPCM_PCM",/* Member name */
                        {
                            29,/* Representation ID */
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
                        (char *)"supportedMP2",/* Member name */
                        {
                            30,/* Representation ID */
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
                        (char *)"supportedMP3",/* Member name */
                        {
                            31,/* Representation ID */
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
                        (char *)"supportedPoor",/* Member name */
                        {
                            32,/* Representation ID */
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
                        (char *)"supportedRealAudio",/* Member name */
                        {
                            33,/* Representation ID */
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
                        (char *)"supportedSpeex",/* Member name */
                        {
                            34,/* Representation ID */
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
                        (char *)"supportedTrueAudio",/* Member name */
                        {
                            35,/* Representation ID */
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
                        (char *)"supportedULAW",/* Member name */
                        {
                            36,/* Representation ID */
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
                        (char *)"supportedVORBIS",/* Member name */
                        {
                            37,/* Representation ID */
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
                        (char *)"supportedWAV",/* Member name */
                        {
                            38,/* Representation ID */
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
                        (char *)"supportedWMA",/* Member name */
                        {
                            39,/* Representation ID */
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
                        (char *)"supportedWMA9_Lossless",/* Member name */
                        {
                            40,/* Representation ID */
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
                        (char *)"supportedWorst",/* Member name */
                        {
                            41,/* Representation ID */
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
                            42,/* Representation ID */
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
                            43,/* Representation ID */
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

                static DDS_TypeCode DigitalAudioSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        44, /* Number of members */
                        DigitalAudioSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalAudioSpecsReportType*/

                if (is_initialized) {
                    return &DigitalAudioSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DigitalAudioSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalAudioSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalAudioSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalAudioSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[2]._annotations._maxValue._u.long_value = 2147483647L;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioSpecsReportType_g_tc_members[4]._annotations._maxValue._u.long_value = 2147483647L;
                DigitalAudioSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
                DigitalAudioSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalAudioSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;

                DigitalAudioSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalAudioSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &DigitalAudioSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo DigitalAudioSpecsReportType_g_memberAccessInfos[44] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalAudioSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalAudioSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalAudioSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowedBitRate() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxChannels() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxSampleRate() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAllowedBitRate() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minSampleRate() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported10bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported12bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported14bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported16bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported20bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported24bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported32bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported40bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported48bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported56bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported64bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supported8bits() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedAAC_MPEG2() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedAAC_MPEG4() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedAIFF() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedALAC() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedAverage() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedBest() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedBetter() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedDolbyDigital() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedDTS() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedFLAC() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedGood() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLess() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLPCM_PCM() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMP2() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMP3() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedPoor() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedRealAudio() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedSpeex() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedTrueAudio() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedULAW() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedVORBIS() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWAV() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWMA() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWMA9_Lossless() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWorst() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalAudioSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DigitalAudioSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalAudioSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalAudioSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalAudioSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalAudioSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalAudioSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >;

                DigitalAudioSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalAudioSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalAudioSpecsReportType_g_typePlugin = 
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

                return &DigitalAudioSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportTypePlugin_new,
                ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalAudioSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalAudioSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::from_cdr_buffer(::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalAudioSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::reset_sample(::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample) 
        {
            sample.maxAllowedBitRate(0);
            sample.maxChannels(0);
            sample.maxSampleRate(0);
            sample.minAllowedBitRate(0);
            sample.minSampleRate(0);
            sample.supported10bits(0);
            sample.supported12bits(0);
            sample.supported14bits(0);
            sample.supported16bits(0);
            sample.supported20bits(0);
            sample.supported24bits(0);
            sample.supported32bits(0);
            sample.supported40bits(0);
            sample.supported48bits(0);
            sample.supported56bits(0);
            sample.supported64bits(0);
            sample.supported8bits(0);
            sample.supportedAAC_MPEG2(0);
            sample.supportedAAC_MPEG4(0);
            sample.supportedAIFF(0);
            sample.supportedALAC(0);
            sample.supportedAverage(0);
            sample.supportedBest(0);
            sample.supportedBetter(0);
            sample.supportedDolbyDigital(0);
            sample.supportedDTS(0);
            sample.supportedFLAC(0);
            sample.supportedGood(0);
            sample.supportedLess(0);
            sample.supportedLPCM_PCM(0);
            sample.supportedMP2(0);
            sample.supportedMP3(0);
            sample.supportedPoor(0);
            sample.supportedRealAudio(0);
            sample.supportedSpeex(0);
            sample.supportedTrueAudio(0);
            sample.supportedULAW(0);
            sample.supportedVORBIS(0);
            sample.supportedWAV(0);
            sample.supportedWMA(0);
            sample.supportedWMA9_Lossless(0);
            sample.supportedWorst(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType >::allocate_sample(::UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
