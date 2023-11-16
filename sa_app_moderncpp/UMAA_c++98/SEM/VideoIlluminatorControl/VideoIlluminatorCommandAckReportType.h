

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandAckReportType_1310512084_h
#define VideoIlluminatorCommandAckReportType_1310512084_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReport_TOPIC= "UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeTypeSupport;
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeDataWriter;
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   beamWidth ;
    DDS_Long   level ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportTypeSeq, UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_initialize(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_initialize_ex(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_initialize_w_params(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_finalize_w_return(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_finalize(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_finalize_ex(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_finalize_w_params(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_finalize_optional_members(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType_copy(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* dst,
    const UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VideoIlluminatorCommandAckReportType */

