

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandAckReportType_1940141359_h
#define H264VideoEncodingCommandAckReportType_1940141359_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReport_TOPIC= "UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeTypeSupport;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeDataWriter;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   gradualDecoderRefresh ;
    DDS_Long   groupOfPictures ;
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumType   preset ;
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumType   profile ;
    DDS_Boolean   regionOfInterest ;
    DDS_Long   ROI_height ;
    DDS_Double   ROI_highBitRate ;
    DDS_Double   ROI_lowBitRate ;
    DDS_Long   ROI_width ;
    DDS_Long   ROI_x ;
    DDS_Long   ROI_y ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportTypeSeq, UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_initialize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_initialize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_finalize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_finalize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType_copy(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* dst,
    const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code< UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* H264VideoEncodingCommandAckReportType */

