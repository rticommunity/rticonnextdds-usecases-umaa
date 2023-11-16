

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionSpecsReportType_146783325_h
#define CameraSelectionSpecsReportType_146783325_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReport_TOPIC= "UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeTypeSupport;
class UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeDataWriter;
class UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeDataReader;
#endif
class UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   muxID ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   cameraID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportTypeSeq, UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_initialize(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_initialize_ex(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_initialize_w_params(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_finalize_w_return(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_finalize(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_finalize_ex(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_finalize_w_params(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_finalize_optional_members(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType_copy(
    UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* dst,
    const UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType* src);

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
        struct type_code< UMAA_SEM_CameraSelectionSpecs_CameraSelectionSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraSelectionSpecsReportType */

