

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleNavigationModeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleNavigationModeReportType_963483659_h
#define VehicleNavigationModeReportType_963483659_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReport_TOPIC= "UMAA::SA::VehicleNavigationModeStatus::VehicleNavigationModeReport";

extern "C" {

    extern const char *UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeTYPENAME;

}

struct UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeTypeSupport;
class UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeDataWriter;
class UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeDataReader;
#endif
class UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType 
{
  public:
    typedef struct UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeDataWriter DataWriter;
    typedef UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeDataReader DataReader;
    #endif

    DDS_Char *   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportTypeSeq, UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_initialize(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_initialize_ex(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_initialize_w_params(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_finalize_w_return(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self);

NDDSUSERDllExport
void UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_finalize(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self);

NDDSUSERDllExport
void UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_finalize_ex(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_finalize_w_params(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_finalize_optional_members(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType_copy(
    UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* dst,
    const UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType* src);

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
        struct type_code< UMAA_SA_VehicleNavigationModeStatus_VehicleNavigationModeReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VehicleNavigationModeReportType */

