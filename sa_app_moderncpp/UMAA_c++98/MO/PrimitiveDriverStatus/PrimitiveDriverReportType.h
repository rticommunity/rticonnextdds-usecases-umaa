

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverReportType_1656513768_h
#define PrimitiveDriverReportType_1656513768_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/LinearEffort.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/RotationalEffort.h"

static const DDS_Char * const UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReport_TOPIC= "UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReport";

extern "C" {

    extern const char *UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeTYPENAME;

}

struct UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeTypeSupport;
class UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeDataWriter;
class UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeDataReader;
#endif
class UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType 
{
  public:
    typedef struct UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeDataWriter DataWriter;
    typedef UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_LinearEffort   propulsiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   propulsiveRotationalEffort ;
    UMAA_Common_Measurement_LinearEffort   resistiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   resistiveRotationalEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportTypeSeq, UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_initialize(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_initialize_ex(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_initialize_w_params(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_finalize_w_return(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_finalize(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_finalize_ex(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_finalize_w_params(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_finalize_optional_members(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType_copy(
    UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* dst,
    const UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType* src);

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
        struct type_code< UMAA_MO_PrimitiveDriverStatus_PrimitiveDriverReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PrimitiveDriverReportType */

