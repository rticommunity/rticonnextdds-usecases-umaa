

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraReportType_1007550522_h
#define CameraReportType_1007550522_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"

static const DDS_Char * const UMAA_SEM_CameraStatus_CameraReport_TOPIC= "UMAA::SEM::CameraStatus::CameraReport";

extern "C" {

    extern const char *UMAA_SEM_CameraStatus_CameraReportTypeTYPENAME;

}

struct UMAA_SEM_CameraStatus_CameraReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraStatus_CameraReportTypeTypeSupport;
class UMAA_SEM_CameraStatus_CameraReportTypeDataWriter;
class UMAA_SEM_CameraStatus_CameraReportTypeDataReader;
#endif
class UMAA_SEM_CameraStatus_CameraReportType 
{
  public:
    typedef struct UMAA_SEM_CameraStatus_CameraReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraStatus_CameraReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraStatus_CameraReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraStatus_CameraReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   filtered ;
    UMAA_Common_Measurement_Position2D   imageCenterLocation ;
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraStatus_CameraReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraStatus_CameraReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraStatus_CameraReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraStatus_CameraReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraStatus_CameraReportTypeSeq, UMAA_SEM_CameraStatus_CameraReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraStatus_CameraReportType_initialize(
    UMAA_SEM_CameraStatus_CameraReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraStatus_CameraReportType_initialize_ex(
    UMAA_SEM_CameraStatus_CameraReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraStatus_CameraReportType_initialize_w_params(
    UMAA_SEM_CameraStatus_CameraReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraStatus_CameraReportType_finalize_w_return(
    UMAA_SEM_CameraStatus_CameraReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraStatus_CameraReportType_finalize(
    UMAA_SEM_CameraStatus_CameraReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraStatus_CameraReportType_finalize_ex(
    UMAA_SEM_CameraStatus_CameraReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraStatus_CameraReportType_finalize_w_params(
    UMAA_SEM_CameraStatus_CameraReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraStatus_CameraReportType_finalize_optional_members(
    UMAA_SEM_CameraStatus_CameraReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraStatus_CameraReportType_copy(
    UMAA_SEM_CameraStatus_CameraReportType* dst,
    const UMAA_SEM_CameraStatus_CameraReportType* src);

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
        struct type_code< UMAA_SEM_CameraStatus_CameraReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraReportType */

