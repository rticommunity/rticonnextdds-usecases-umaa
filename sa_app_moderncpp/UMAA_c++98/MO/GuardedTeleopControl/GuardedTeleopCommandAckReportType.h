

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandAckReportType_1479877957_h
#define GuardedTeleopCommandAckReportType_1479877957_h

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

static const DDS_Char * const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReport_TOPIC= "UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeTypeSupport;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeDataWriter;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumType   obstacleAvoidance ;
    DDS_Double   pathTolerance ;
    DDS_Boolean   stopOnPitchoverLimit ;
    DDS_Boolean   stopOnRolloverLimit ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportTypeSeq, UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_initialize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_initialize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_initialize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_finalize_w_return(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_finalize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_finalize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_finalize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_finalize_optional_members(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType_copy(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* dst,
    const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopCommandAckReportType */

