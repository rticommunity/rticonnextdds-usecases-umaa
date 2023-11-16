

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixStatusReportType_537848047_h
#define GPSFixStatusReportType_537848047_h

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
#include "UMAA/Common/Measurement/Position3D_WGS84.h"

static const DDS_Char * const UMAA_SEM_GPSFixStatus_GPSFixStatusReport_TOPIC= "UMAA::SEM::GPSFixStatus::GPSFixStatusReport";

extern "C" {

    extern const char *UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeTYPENAME;

}

struct UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeTypeSupport;
class UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeDataWriter;
class UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeDataReader;
#endif
class UMAA_SEM_GPSFixStatus_GPSFixStatusReportType 
{
  public:
    typedef struct UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeDataReader DataReader;
    #endif

    DDS_DoubleSeq  carrierToNoise ;
    DDS_Long   countDown ;
    DDS_Boolean   fixValid ;
    DDS_Boolean   lowBkupBattery ;
    UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumType   navSolution ;
    UMAA_Common_Measurement_Position3D_WGS84   originPosition ;
    DDS_Boolean   pCode ;
    DDS_Boolean   timeOut ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSFixStatus_GPSFixStatusReportTypeSeq, UMAA_SEM_GPSFixStatus_GPSFixStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_initialize(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_initialize_ex(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_initialize_w_params(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_finalize_w_return(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_finalize(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_finalize_ex(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_finalize_w_params(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_finalize_optional_members(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixStatusReportType_copy(
    UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* dst,
    const UMAA_SEM_GPSFixStatus_GPSFixStatusReportType* src);

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
        struct type_code< UMAA_SEM_GPSFixStatus_GPSFixStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSFixStatusReportType */

