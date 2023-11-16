

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ECEFPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ECEFPoseReportType_1687388287_h
#define ECEFPoseReportType_1687388287_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation_PlatformECEF.h"

static const DDS_Char * const UMAA_SA_ECEFPoseStatus_ECEFPoseReport_TOPIC= "UMAA::SA::ECEFPoseStatus::ECEFPoseReport";

extern "C" {

    extern const char *UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeTYPENAME;

}

struct UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeTypeSupport;
class UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeDataWriter;
class UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeDataReader;
#endif
class UMAA_SA_ECEFPoseStatus_ECEFPoseReportType 
{
  public:
    typedef struct UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Orientation_PlatformECEF   attitude ;
    DDS_Double   xPosition ;
    DDS_Double   yPosition ;
    DDS_Double   zPosition ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeSeq, UMAA_SA_ECEFPoseStatus_ECEFPoseReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_initialize(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_initialize_ex(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_initialize_w_params(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_finalize_w_return(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_finalize(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_finalize_ex(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_finalize_w_params(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_finalize_optional_members(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ECEFPoseStatus_ECEFPoseReportType_copy(
    UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* dst,
    const UMAA_SA_ECEFPoseStatus_ECEFPoseReportType* src);

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
        struct type_code< UMAA_SA_ECEFPoseStatus_ECEFPoseReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ECEFPoseReportType */

