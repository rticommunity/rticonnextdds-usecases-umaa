

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopConfigReportType_1549002656_h
#define GuardedTeleopConfigReportType_1549002656_h

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

static const DDS_Char * const UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReport_TOPIC= "UMAA::MO::GuardedTeleopConfig::GuardedTeleopConfigReport";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeTypeSupport;
class UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeDataWriter;
class UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumType   obstacleAvoidance ;
    DDS_Double   pathTolerance ;
    DDS_Boolean   stopOnPitchoverLimit ;
    DDS_Boolean   stopOnRolloverLimit ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportTypeSeq, UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_initialize(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_initialize_ex(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_initialize_w_params(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_finalize_w_return(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_finalize(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_finalize_ex(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_finalize_w_params(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_finalize_optional_members(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType_copy(
    UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* dst,
    const UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopConfig_GuardedTeleopConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopConfigReportType */

