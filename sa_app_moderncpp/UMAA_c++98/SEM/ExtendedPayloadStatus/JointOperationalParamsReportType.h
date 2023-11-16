

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointOperationalParamsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef JointOperationalParamsReportType_1879797462_h
#define JointOperationalParamsReportType_1879797462_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SEM/ExtendedPayloadStatus/JointOperationalParamsType.h"

static const DDS_Char * const UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReport_TOPIC= "UMAA::SEM::ExtendedPayloadStatus::JointOperationalParamsReport";

extern "C" {

    extern const char *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeTYPENAME;

}

struct UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeTypeSupport;
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeDataWriter;
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeDataReader;
#endif
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType 
{
  public:
    typedef struct UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeDataReader DataReader;
    #endif

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq  jointParameters ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportTypeSeq, UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_initialize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_initialize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_initialize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_finalize_w_return(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_finalize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_finalize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_finalize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_finalize_optional_members(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType_copy(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* dst,
    const UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType* src);

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
        struct type_code< UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* JointOperationalParamsReportType */

