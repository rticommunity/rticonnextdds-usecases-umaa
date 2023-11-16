

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "DigitalVideoSpecsReportType.hpp"
#include "DigitalVideoSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalVideoSpecs {

            // ---- DigitalVideoSpecsReportType: 

            DigitalVideoSpecsReportType::DigitalVideoSpecsReportType() :
                m_maxBitRate_ (0.0) ,
                m_maxFrameRate_ (0.0) ,
                m_minBitRate_ (0.0) ,
                m_minFrameRate_ (0.0) ,
                m_supportedAVI_ (0) ,
                m_supportedCGA_320x200_ (0) ,
                m_supportedCIF_1408x1152_ (0) ,
                m_supportedCIF_352x288_ (0) ,
                m_supportedCIF_704x576_ (0) ,
                m_supportedEGA_640x350_ (0) ,
                m_supportedH262_ (0) ,
                m_supportedH263_ (0) ,
                m_supportedH263PLUS_ (0) ,
                m_supportedH264_ (0) ,
                m_supportedHD1080_1920x1080_ (0) ,
                m_supportedHD480_852x480_ (0) ,
                m_supportedHD720_1280x720_ (0) ,
                m_supportedHSXGA_5120x4096_ (0) ,
                m_supportedMJPEG_ (0) ,
                m_supportedMPEG4_ (0) ,
                m_supportedQCIF_176x144_ (0) ,
                m_supportedQQVGA_160x120_ (0) ,
                m_supportedQSXGA_2560x2048_ (0) ,
                m_supportedQVGA_320x240_ (0) ,
                m_supportedQXGA_2048x1536_ (0) ,
                m_supportedSQCIF_128x96_ (0) ,
                m_supportedSVGA_800x600_ (0) ,
                m_supportedSXGA_1280x1024_ (0) ,
                m_supportedUXGA_1600x1200_ (0) ,
                m_supportedVGA_640x480_ (0) ,
                m_supportedWHSXGA_6400x4096_ (0) ,
                m_supportedWHUXGA_7680x4800_ (0) ,
                m_supportedWOXGA_2560x1600_ (0) ,
                m_supportedWQSXGA_3200x2048_ (0) ,
                m_supportedWQUXGA_3840x2400_ (0) ,
                m_supportedWSXGA_1600x1024_ (0) ,
                m_supportedWUXGA_1920x1200_ (0) ,
                m_supportedWVGA_852x480_ (0) ,
                m_supportedWXGA_1366x768_ (0) ,
                m_supportedXGA_1024x768_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            DigitalVideoSpecsReportType::DigitalVideoSpecsReportType (double maxBitRate,double maxFrameRate,double minBitRate,double minFrameRate,bool supportedAVI,bool supportedCGA_320x200,bool supportedCIF_1408x1152,bool supportedCIF_352x288,bool supportedCIF_704x576,bool supportedEGA_640x350,bool supportedH262,bool supportedH263,bool supportedH263PLUS,bool supportedH264,bool supportedHD1080_1920x1080,bool supportedHD480_852x480,bool supportedHD720_1280x720,bool supportedHSXGA_5120x4096,bool supportedMJPEG,bool supportedMPEG4,bool supportedQCIF_176x144,bool supportedQQVGA_160x120,bool supportedQSXGA_2560x2048,bool supportedQVGA_320x240,bool supportedQXGA_2048x1536,bool supportedSQCIF_128x96,bool supportedSVGA_800x600,bool supportedSXGA_1280x1024,bool supportedUXGA_1600x1200,bool supportedVGA_640x480,bool supportedWHSXGA_6400x4096,bool supportedWHUXGA_7680x4800,bool supportedWOXGA_2560x1600,bool supportedWQSXGA_3200x2048,bool supportedWQUXGA_3840x2400,bool supportedWSXGA_1600x1024,bool supportedWUXGA_1920x1200,bool supportedWVGA_852x480,bool supportedWXGA_1366x768,bool supportedXGA_1024x768,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_maxBitRate_( maxBitRate ),
                m_maxFrameRate_( maxFrameRate ),
                m_minBitRate_( minBitRate ),
                m_minFrameRate_( minFrameRate ),
                m_supportedAVI_( supportedAVI ),
                m_supportedCGA_320x200_( supportedCGA_320x200 ),
                m_supportedCIF_1408x1152_( supportedCIF_1408x1152 ),
                m_supportedCIF_352x288_( supportedCIF_352x288 ),
                m_supportedCIF_704x576_( supportedCIF_704x576 ),
                m_supportedEGA_640x350_( supportedEGA_640x350 ),
                m_supportedH262_( supportedH262 ),
                m_supportedH263_( supportedH263 ),
                m_supportedH263PLUS_( supportedH263PLUS ),
                m_supportedH264_( supportedH264 ),
                m_supportedHD1080_1920x1080_( supportedHD1080_1920x1080 ),
                m_supportedHD480_852x480_( supportedHD480_852x480 ),
                m_supportedHD720_1280x720_( supportedHD720_1280x720 ),
                m_supportedHSXGA_5120x4096_( supportedHSXGA_5120x4096 ),
                m_supportedMJPEG_( supportedMJPEG ),
                m_supportedMPEG4_( supportedMPEG4 ),
                m_supportedQCIF_176x144_( supportedQCIF_176x144 ),
                m_supportedQQVGA_160x120_( supportedQQVGA_160x120 ),
                m_supportedQSXGA_2560x2048_( supportedQSXGA_2560x2048 ),
                m_supportedQVGA_320x240_( supportedQVGA_320x240 ),
                m_supportedQXGA_2048x1536_( supportedQXGA_2048x1536 ),
                m_supportedSQCIF_128x96_( supportedSQCIF_128x96 ),
                m_supportedSVGA_800x600_( supportedSVGA_800x600 ),
                m_supportedSXGA_1280x1024_( supportedSXGA_1280x1024 ),
                m_supportedUXGA_1600x1200_( supportedUXGA_1600x1200 ),
                m_supportedVGA_640x480_( supportedVGA_640x480 ),
                m_supportedWHSXGA_6400x4096_( supportedWHSXGA_6400x4096 ),
                m_supportedWHUXGA_7680x4800_( supportedWHUXGA_7680x4800 ),
                m_supportedWOXGA_2560x1600_( supportedWOXGA_2560x1600 ),
                m_supportedWQSXGA_3200x2048_( supportedWQSXGA_3200x2048 ),
                m_supportedWQUXGA_3840x2400_( supportedWQUXGA_3840x2400 ),
                m_supportedWSXGA_1600x1024_( supportedWSXGA_1600x1024 ),
                m_supportedWUXGA_1920x1200_( supportedWUXGA_1920x1200 ),
                m_supportedWVGA_852x480_( supportedWVGA_852x480 ),
                m_supportedWXGA_1366x768_( supportedWXGA_1366x768 ),
                m_supportedXGA_1024x768_( supportedXGA_1024x768 ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DigitalVideoSpecsReportType::DigitalVideoSpecsReportType(DigitalVideoSpecsReportType&& other_) OMG_NOEXCEPT  :m_maxBitRate_ (std::move(other_.m_maxBitRate_))
            ,
            m_maxFrameRate_ (std::move(other_.m_maxFrameRate_))
            ,
            m_minBitRate_ (std::move(other_.m_minBitRate_))
            ,
            m_minFrameRate_ (std::move(other_.m_minFrameRate_))
            ,
            m_supportedAVI_ (std::move(other_.m_supportedAVI_))
            ,
            m_supportedCGA_320x200_ (std::move(other_.m_supportedCGA_320x200_))
            ,
            m_supportedCIF_1408x1152_ (std::move(other_.m_supportedCIF_1408x1152_))
            ,
            m_supportedCIF_352x288_ (std::move(other_.m_supportedCIF_352x288_))
            ,
            m_supportedCIF_704x576_ (std::move(other_.m_supportedCIF_704x576_))
            ,
            m_supportedEGA_640x350_ (std::move(other_.m_supportedEGA_640x350_))
            ,
            m_supportedH262_ (std::move(other_.m_supportedH262_))
            ,
            m_supportedH263_ (std::move(other_.m_supportedH263_))
            ,
            m_supportedH263PLUS_ (std::move(other_.m_supportedH263PLUS_))
            ,
            m_supportedH264_ (std::move(other_.m_supportedH264_))
            ,
            m_supportedHD1080_1920x1080_ (std::move(other_.m_supportedHD1080_1920x1080_))
            ,
            m_supportedHD480_852x480_ (std::move(other_.m_supportedHD480_852x480_))
            ,
            m_supportedHD720_1280x720_ (std::move(other_.m_supportedHD720_1280x720_))
            ,
            m_supportedHSXGA_5120x4096_ (std::move(other_.m_supportedHSXGA_5120x4096_))
            ,
            m_supportedMJPEG_ (std::move(other_.m_supportedMJPEG_))
            ,
            m_supportedMPEG4_ (std::move(other_.m_supportedMPEG4_))
            ,
            m_supportedQCIF_176x144_ (std::move(other_.m_supportedQCIF_176x144_))
            ,
            m_supportedQQVGA_160x120_ (std::move(other_.m_supportedQQVGA_160x120_))
            ,
            m_supportedQSXGA_2560x2048_ (std::move(other_.m_supportedQSXGA_2560x2048_))
            ,
            m_supportedQVGA_320x240_ (std::move(other_.m_supportedQVGA_320x240_))
            ,
            m_supportedQXGA_2048x1536_ (std::move(other_.m_supportedQXGA_2048x1536_))
            ,
            m_supportedSQCIF_128x96_ (std::move(other_.m_supportedSQCIF_128x96_))
            ,
            m_supportedSVGA_800x600_ (std::move(other_.m_supportedSVGA_800x600_))
            ,
            m_supportedSXGA_1280x1024_ (std::move(other_.m_supportedSXGA_1280x1024_))
            ,
            m_supportedUXGA_1600x1200_ (std::move(other_.m_supportedUXGA_1600x1200_))
            ,
            m_supportedVGA_640x480_ (std::move(other_.m_supportedVGA_640x480_))
            ,
            m_supportedWHSXGA_6400x4096_ (std::move(other_.m_supportedWHSXGA_6400x4096_))
            ,
            m_supportedWHUXGA_7680x4800_ (std::move(other_.m_supportedWHUXGA_7680x4800_))
            ,
            m_supportedWOXGA_2560x1600_ (std::move(other_.m_supportedWOXGA_2560x1600_))
            ,
            m_supportedWQSXGA_3200x2048_ (std::move(other_.m_supportedWQSXGA_3200x2048_))
            ,
            m_supportedWQUXGA_3840x2400_ (std::move(other_.m_supportedWQUXGA_3840x2400_))
            ,
            m_supportedWSXGA_1600x1024_ (std::move(other_.m_supportedWSXGA_1600x1024_))
            ,
            m_supportedWUXGA_1920x1200_ (std::move(other_.m_supportedWUXGA_1920x1200_))
            ,
            m_supportedWVGA_852x480_ (std::move(other_.m_supportedWVGA_852x480_))
            ,
            m_supportedWXGA_1366x768_ (std::move(other_.m_supportedWXGA_1366x768_))
            ,
            m_supportedXGA_1024x768_ (std::move(other_.m_supportedXGA_1024x768_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            DigitalVideoSpecsReportType& DigitalVideoSpecsReportType::operator=(DigitalVideoSpecsReportType&&  other_) OMG_NOEXCEPT {
                DigitalVideoSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void DigitalVideoSpecsReportType::swap(DigitalVideoSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_maxBitRate_, other_.m_maxBitRate_);
                swap(m_maxFrameRate_, other_.m_maxFrameRate_);
                swap(m_minBitRate_, other_.m_minBitRate_);
                swap(m_minFrameRate_, other_.m_minFrameRate_);
                swap(m_supportedAVI_, other_.m_supportedAVI_);
                swap(m_supportedCGA_320x200_, other_.m_supportedCGA_320x200_);
                swap(m_supportedCIF_1408x1152_, other_.m_supportedCIF_1408x1152_);
                swap(m_supportedCIF_352x288_, other_.m_supportedCIF_352x288_);
                swap(m_supportedCIF_704x576_, other_.m_supportedCIF_704x576_);
                swap(m_supportedEGA_640x350_, other_.m_supportedEGA_640x350_);
                swap(m_supportedH262_, other_.m_supportedH262_);
                swap(m_supportedH263_, other_.m_supportedH263_);
                swap(m_supportedH263PLUS_, other_.m_supportedH263PLUS_);
                swap(m_supportedH264_, other_.m_supportedH264_);
                swap(m_supportedHD1080_1920x1080_, other_.m_supportedHD1080_1920x1080_);
                swap(m_supportedHD480_852x480_, other_.m_supportedHD480_852x480_);
                swap(m_supportedHD720_1280x720_, other_.m_supportedHD720_1280x720_);
                swap(m_supportedHSXGA_5120x4096_, other_.m_supportedHSXGA_5120x4096_);
                swap(m_supportedMJPEG_, other_.m_supportedMJPEG_);
                swap(m_supportedMPEG4_, other_.m_supportedMPEG4_);
                swap(m_supportedQCIF_176x144_, other_.m_supportedQCIF_176x144_);
                swap(m_supportedQQVGA_160x120_, other_.m_supportedQQVGA_160x120_);
                swap(m_supportedQSXGA_2560x2048_, other_.m_supportedQSXGA_2560x2048_);
                swap(m_supportedQVGA_320x240_, other_.m_supportedQVGA_320x240_);
                swap(m_supportedQXGA_2048x1536_, other_.m_supportedQXGA_2048x1536_);
                swap(m_supportedSQCIF_128x96_, other_.m_supportedSQCIF_128x96_);
                swap(m_supportedSVGA_800x600_, other_.m_supportedSVGA_800x600_);
                swap(m_supportedSXGA_1280x1024_, other_.m_supportedSXGA_1280x1024_);
                swap(m_supportedUXGA_1600x1200_, other_.m_supportedUXGA_1600x1200_);
                swap(m_supportedVGA_640x480_, other_.m_supportedVGA_640x480_);
                swap(m_supportedWHSXGA_6400x4096_, other_.m_supportedWHSXGA_6400x4096_);
                swap(m_supportedWHUXGA_7680x4800_, other_.m_supportedWHUXGA_7680x4800_);
                swap(m_supportedWOXGA_2560x1600_, other_.m_supportedWOXGA_2560x1600_);
                swap(m_supportedWQSXGA_3200x2048_, other_.m_supportedWQSXGA_3200x2048_);
                swap(m_supportedWQUXGA_3840x2400_, other_.m_supportedWQUXGA_3840x2400_);
                swap(m_supportedWSXGA_1600x1024_, other_.m_supportedWSXGA_1600x1024_);
                swap(m_supportedWUXGA_1920x1200_, other_.m_supportedWUXGA_1920x1200_);
                swap(m_supportedWVGA_852x480_, other_.m_supportedWVGA_852x480_);
                swap(m_supportedWXGA_1366x768_, other_.m_supportedWXGA_1366x768_);
                swap(m_supportedXGA_1024x768_, other_.m_supportedXGA_1024x768_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DigitalVideoSpecsReportType::operator == (const DigitalVideoSpecsReportType& other_) const {
                if (m_maxBitRate_ != other_.m_maxBitRate_) {
                    return false;
                }
                if (m_maxFrameRate_ != other_.m_maxFrameRate_) {
                    return false;
                }
                if (m_minBitRate_ != other_.m_minBitRate_) {
                    return false;
                }
                if (m_minFrameRate_ != other_.m_minFrameRate_) {
                    return false;
                }
                if (m_supportedAVI_ != other_.m_supportedAVI_) {
                    return false;
                }
                if (m_supportedCGA_320x200_ != other_.m_supportedCGA_320x200_) {
                    return false;
                }
                if (m_supportedCIF_1408x1152_ != other_.m_supportedCIF_1408x1152_) {
                    return false;
                }
                if (m_supportedCIF_352x288_ != other_.m_supportedCIF_352x288_) {
                    return false;
                }
                if (m_supportedCIF_704x576_ != other_.m_supportedCIF_704x576_) {
                    return false;
                }
                if (m_supportedEGA_640x350_ != other_.m_supportedEGA_640x350_) {
                    return false;
                }
                if (m_supportedH262_ != other_.m_supportedH262_) {
                    return false;
                }
                if (m_supportedH263_ != other_.m_supportedH263_) {
                    return false;
                }
                if (m_supportedH263PLUS_ != other_.m_supportedH263PLUS_) {
                    return false;
                }
                if (m_supportedH264_ != other_.m_supportedH264_) {
                    return false;
                }
                if (m_supportedHD1080_1920x1080_ != other_.m_supportedHD1080_1920x1080_) {
                    return false;
                }
                if (m_supportedHD480_852x480_ != other_.m_supportedHD480_852x480_) {
                    return false;
                }
                if (m_supportedHD720_1280x720_ != other_.m_supportedHD720_1280x720_) {
                    return false;
                }
                if (m_supportedHSXGA_5120x4096_ != other_.m_supportedHSXGA_5120x4096_) {
                    return false;
                }
                if (m_supportedMJPEG_ != other_.m_supportedMJPEG_) {
                    return false;
                }
                if (m_supportedMPEG4_ != other_.m_supportedMPEG4_) {
                    return false;
                }
                if (m_supportedQCIF_176x144_ != other_.m_supportedQCIF_176x144_) {
                    return false;
                }
                if (m_supportedQQVGA_160x120_ != other_.m_supportedQQVGA_160x120_) {
                    return false;
                }
                if (m_supportedQSXGA_2560x2048_ != other_.m_supportedQSXGA_2560x2048_) {
                    return false;
                }
                if (m_supportedQVGA_320x240_ != other_.m_supportedQVGA_320x240_) {
                    return false;
                }
                if (m_supportedQXGA_2048x1536_ != other_.m_supportedQXGA_2048x1536_) {
                    return false;
                }
                if (m_supportedSQCIF_128x96_ != other_.m_supportedSQCIF_128x96_) {
                    return false;
                }
                if (m_supportedSVGA_800x600_ != other_.m_supportedSVGA_800x600_) {
                    return false;
                }
                if (m_supportedSXGA_1280x1024_ != other_.m_supportedSXGA_1280x1024_) {
                    return false;
                }
                if (m_supportedUXGA_1600x1200_ != other_.m_supportedUXGA_1600x1200_) {
                    return false;
                }
                if (m_supportedVGA_640x480_ != other_.m_supportedVGA_640x480_) {
                    return false;
                }
                if (m_supportedWHSXGA_6400x4096_ != other_.m_supportedWHSXGA_6400x4096_) {
                    return false;
                }
                if (m_supportedWHUXGA_7680x4800_ != other_.m_supportedWHUXGA_7680x4800_) {
                    return false;
                }
                if (m_supportedWOXGA_2560x1600_ != other_.m_supportedWOXGA_2560x1600_) {
                    return false;
                }
                if (m_supportedWQSXGA_3200x2048_ != other_.m_supportedWQSXGA_3200x2048_) {
                    return false;
                }
                if (m_supportedWQUXGA_3840x2400_ != other_.m_supportedWQUXGA_3840x2400_) {
                    return false;
                }
                if (m_supportedWSXGA_1600x1024_ != other_.m_supportedWSXGA_1600x1024_) {
                    return false;
                }
                if (m_supportedWUXGA_1920x1200_ != other_.m_supportedWUXGA_1920x1200_) {
                    return false;
                }
                if (m_supportedWVGA_852x480_ != other_.m_supportedWVGA_852x480_) {
                    return false;
                }
                if (m_supportedWXGA_1366x768_ != other_.m_supportedWXGA_1366x768_) {
                    return false;
                }
                if (m_supportedXGA_1024x768_ != other_.m_supportedXGA_1024x768_) {
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
            bool DigitalVideoSpecsReportType::operator != (const DigitalVideoSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalVideoSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxBitRate: " << std::setprecision(15) <<sample.maxBitRate()<<", ";
                o << "maxFrameRate: " << std::setprecision(15) <<sample.maxFrameRate()<<", ";
                o << "minBitRate: " << std::setprecision(15) <<sample.minBitRate()<<", ";
                o << "minFrameRate: " << std::setprecision(15) <<sample.minFrameRate()<<", ";
                o << "supportedAVI: " << sample.supportedAVI()<<", ";
                o << "supportedCGA_320x200: " << sample.supportedCGA_320x200()<<", ";
                o << "supportedCIF_1408x1152: " << sample.supportedCIF_1408x1152()<<", ";
                o << "supportedCIF_352x288: " << sample.supportedCIF_352x288()<<", ";
                o << "supportedCIF_704x576: " << sample.supportedCIF_704x576()<<", ";
                o << "supportedEGA_640x350: " << sample.supportedEGA_640x350()<<", ";
                o << "supportedH262: " << sample.supportedH262()<<", ";
                o << "supportedH263: " << sample.supportedH263()<<", ";
                o << "supportedH263PLUS: " << sample.supportedH263PLUS()<<", ";
                o << "supportedH264: " << sample.supportedH264()<<", ";
                o << "supportedHD1080_1920x1080: " << sample.supportedHD1080_1920x1080()<<", ";
                o << "supportedHD480_852x480: " << sample.supportedHD480_852x480()<<", ";
                o << "supportedHD720_1280x720: " << sample.supportedHD720_1280x720()<<", ";
                o << "supportedHSXGA_5120x4096: " << sample.supportedHSXGA_5120x4096()<<", ";
                o << "supportedMJPEG: " << sample.supportedMJPEG()<<", ";
                o << "supportedMPEG4: " << sample.supportedMPEG4()<<", ";
                o << "supportedQCIF_176x144: " << sample.supportedQCIF_176x144()<<", ";
                o << "supportedQQVGA_160x120: " << sample.supportedQQVGA_160x120()<<", ";
                o << "supportedQSXGA_2560x2048: " << sample.supportedQSXGA_2560x2048()<<", ";
                o << "supportedQVGA_320x240: " << sample.supportedQVGA_320x240()<<", ";
                o << "supportedQXGA_2048x1536: " << sample.supportedQXGA_2048x1536()<<", ";
                o << "supportedSQCIF_128x96: " << sample.supportedSQCIF_128x96()<<", ";
                o << "supportedSVGA_800x600: " << sample.supportedSVGA_800x600()<<", ";
                o << "supportedSXGA_1280x1024: " << sample.supportedSXGA_1280x1024()<<", ";
                o << "supportedUXGA_1600x1200: " << sample.supportedUXGA_1600x1200()<<", ";
                o << "supportedVGA_640x480: " << sample.supportedVGA_640x480()<<", ";
                o << "supportedWHSXGA_6400x4096: " << sample.supportedWHSXGA_6400x4096()<<", ";
                o << "supportedWHUXGA_7680x4800: " << sample.supportedWHUXGA_7680x4800()<<", ";
                o << "supportedWOXGA_2560x1600: " << sample.supportedWOXGA_2560x1600()<<", ";
                o << "supportedWQSXGA_3200x2048: " << sample.supportedWQSXGA_3200x2048()<<", ";
                o << "supportedWQUXGA_3840x2400: " << sample.supportedWQUXGA_3840x2400()<<", ";
                o << "supportedWSXGA_1600x1024: " << sample.supportedWSXGA_1600x1024()<<", ";
                o << "supportedWUXGA_1920x1200: " << sample.supportedWUXGA_1920x1200()<<", ";
                o << "supportedWVGA_852x480: " << sample.supportedWVGA_852x480()<<", ";
                o << "supportedWXGA_1366x768: " << sample.supportedWXGA_1366x768()<<", ";
                o << "supportedXGA_1024x768: " << sample.supportedXGA_1024x768()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace DigitalVideoSpecs  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DigitalVideoSpecsReportType_g_tc_members[42]=
                {

                    {
                        (char *)"maxBitRate",/* Member name */
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
                        (char *)"maxFrameRate",/* Member name */
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
                        (char *)"minBitRate",/* Member name */
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
                        (char *)"minFrameRate",/* Member name */
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
                        (char *)"supportedAVI",/* Member name */
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
                        (char *)"supportedCGA_320x200",/* Member name */
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
                        (char *)"supportedCIF_1408x1152",/* Member name */
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
                        (char *)"supportedCIF_352x288",/* Member name */
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
                        (char *)"supportedCIF_704x576",/* Member name */
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
                        (char *)"supportedEGA_640x350",/* Member name */
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
                        (char *)"supportedH262",/* Member name */
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
                        (char *)"supportedH263",/* Member name */
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
                        (char *)"supportedH263PLUS",/* Member name */
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
                        (char *)"supportedH264",/* Member name */
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
                        (char *)"supportedHD1080_1920x1080",/* Member name */
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
                        (char *)"supportedHD480_852x480",/* Member name */
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
                        (char *)"supportedHD720_1280x720",/* Member name */
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
                        (char *)"supportedHSXGA_5120x4096",/* Member name */
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
                        (char *)"supportedMJPEG",/* Member name */
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
                        (char *)"supportedMPEG4",/* Member name */
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
                        (char *)"supportedQCIF_176x144",/* Member name */
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
                        (char *)"supportedQQVGA_160x120",/* Member name */
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
                        (char *)"supportedQSXGA_2560x2048",/* Member name */
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
                        (char *)"supportedQVGA_320x240",/* Member name */
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
                        (char *)"supportedQXGA_2048x1536",/* Member name */
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
                        (char *)"supportedSQCIF_128x96",/* Member name */
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
                        (char *)"supportedSVGA_800x600",/* Member name */
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
                        (char *)"supportedSXGA_1280x1024",/* Member name */
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
                        (char *)"supportedUXGA_1600x1200",/* Member name */
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
                        (char *)"supportedVGA_640x480",/* Member name */
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
                        (char *)"supportedWHSXGA_6400x4096",/* Member name */
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
                        (char *)"supportedWHUXGA_7680x4800",/* Member name */
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
                        (char *)"supportedWOXGA_2560x1600",/* Member name */
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
                        (char *)"supportedWQSXGA_3200x2048",/* Member name */
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
                        (char *)"supportedWQUXGA_3840x2400",/* Member name */
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
                        (char *)"supportedWSXGA_1600x1024",/* Member name */
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
                        (char *)"supportedWUXGA_1920x1200",/* Member name */
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
                        (char *)"supportedWVGA_852x480",/* Member name */
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
                        (char *)"supportedWXGA_1366x768",/* Member name */
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
                        (char *)"supportedXGA_1024x768",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode DigitalVideoSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        42, /* Number of members */
                        DigitalVideoSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalVideoSpecsReportType*/

                if (is_initialized) {
                    return &DigitalVideoSpecsReportType_g_tc;
                }

                DigitalVideoSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalVideoSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DataTransferRate_AliasTag_t>::get().native();
                DigitalVideoSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::FrameRateFPS_AliasTag_t>::get().native();
                DigitalVideoSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DataTransferRate_AliasTag_t>::get().native();
                DigitalVideoSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::FrameRateFPS_AliasTag_t>::get().native();
                DigitalVideoSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DigitalVideoSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalVideoSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 1000ULL;

                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DigitalVideoSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;

                DigitalVideoSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DigitalVideoSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;

                DigitalVideoSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalVideoSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DigitalVideoSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo DigitalVideoSpecsReportType_g_memberAccessInfos[42] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalVideoSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalVideoSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalVideoSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxBitRate() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxFrameRate() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minBitRate() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minFrameRate() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedAVI() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedCGA_320x200() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_1408x1152() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_352x288() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_704x576() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedEGA_640x350() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedH262() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedH263() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedH263PLUS() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedH264() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD1080_1920x1080() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD480_852x480() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD720_1280x720() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHSXGA_5120x4096() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMJPEG() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMPEG4() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedQCIF_176x144() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedQQVGA_160x120() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedQSXGA_2560x2048() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedQVGA_320x240() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedQXGA_2048x1536() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedSQCIF_128x96() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedSVGA_800x600() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedSXGA_1280x1024() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedUXGA_1600x1200() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedVGA_640x480() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWHSXGA_6400x4096() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWHUXGA_7680x4800() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWOXGA_2560x1600() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWQSXGA_3200x2048() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWQUXGA_3840x2400() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWSXGA_1600x1024() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWUXGA_1920x1200() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWVGA_852x480() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedWXGA_1366x768() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedXGA_1024x768() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalVideoSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DigitalVideoSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalVideoSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalVideoSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalVideoSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalVideoSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalVideoSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >;

                DigitalVideoSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalVideoSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalVideoSpecsReportType_g_typePlugin = 
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

                return &DigitalVideoSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportTypePlugin_new,
                UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalVideoSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalVideoSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::from_cdr_buffer(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalVideoSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::reset_sample(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample) 
        {
            sample.maxBitRate(0.0);
            sample.maxFrameRate(0.0);
            sample.minBitRate(0.0);
            sample.minFrameRate(0.0);
            sample.supportedAVI(0);
            sample.supportedCGA_320x200(0);
            sample.supportedCIF_1408x1152(0);
            sample.supportedCIF_352x288(0);
            sample.supportedCIF_704x576(0);
            sample.supportedEGA_640x350(0);
            sample.supportedH262(0);
            sample.supportedH263(0);
            sample.supportedH263PLUS(0);
            sample.supportedH264(0);
            sample.supportedHD1080_1920x1080(0);
            sample.supportedHD480_852x480(0);
            sample.supportedHD720_1280x720(0);
            sample.supportedHSXGA_5120x4096(0);
            sample.supportedMJPEG(0);
            sample.supportedMPEG4(0);
            sample.supportedQCIF_176x144(0);
            sample.supportedQQVGA_160x120(0);
            sample.supportedQSXGA_2560x2048(0);
            sample.supportedQVGA_320x240(0);
            sample.supportedQXGA_2048x1536(0);
            sample.supportedSQCIF_128x96(0);
            sample.supportedSVGA_800x600(0);
            sample.supportedSXGA_1280x1024(0);
            sample.supportedUXGA_1600x1200(0);
            sample.supportedVGA_640x480(0);
            sample.supportedWHSXGA_6400x4096(0);
            sample.supportedWHUXGA_7680x4800(0);
            sample.supportedWOXGA_2560x1600(0);
            sample.supportedWQSXGA_3200x2048(0);
            sample.supportedWQUXGA_3840x2400(0);
            sample.supportedWSXGA_1600x1024(0);
            sample.supportedWUXGA_1920x1200(0);
            sample.supportedWVGA_852x480(0);
            sample.supportedWXGA_1366x768(0);
            sample.supportedXGA_1024x768(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType >::allocate_sample(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

