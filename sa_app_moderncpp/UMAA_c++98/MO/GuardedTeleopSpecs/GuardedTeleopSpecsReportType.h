

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopSpecsReportType_1469068303_h
#define GuardedTeleopSpecsReportType_1469068303_h

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

static const DDS_Char * const UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReport_TOPIC= "UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReport";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeTypeSupport;
class UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeDataWriter;
class UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   supportedAvoidObstacle ;
    DDS_Boolean   supportedPitchoverLimit ;
    DDS_Boolean   supportedRolloverLimit ;
    DDS_Boolean   supportedStopOnObstacle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportTypeSeq, UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_initialize(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_initialize_ex(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_initialize_w_params(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_finalize_w_return(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_finalize(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_finalize_ex(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_finalize_w_params(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_finalize_optional_members(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType_copy(
    UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* dst,
    const UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopSpecs_GuardedTeleopSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopSpecsReportType */

