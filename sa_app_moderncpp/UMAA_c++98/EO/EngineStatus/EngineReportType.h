

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineReportType_1925252964_h
#define EngineReportType_1925252964_h

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

static const DDS_Char * const UMAA_EO_EngineStatus_EngineReport_TOPIC= "UMAA::EO::EngineStatus::EngineReport";

extern "C" {

    extern const char *UMAA_EO_EngineStatus_EngineReportTypeTYPENAME;

}

struct UMAA_EO_EngineStatus_EngineReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_EngineStatus_EngineReportTypeTypeSupport;
class UMAA_EO_EngineStatus_EngineReportTypeDataWriter;
class UMAA_EO_EngineStatus_EngineReportTypeDataReader;
#endif
class UMAA_EO_EngineStatus_EngineReportType 
{
  public:
    typedef struct UMAA_EO_EngineStatus_EngineReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_EngineStatus_EngineReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_EngineStatus_EngineReportTypeDataWriter DataWriter;
    typedef UMAA_EO_EngineStatus_EngineReportTypeDataReader DataReader;
    #endif

    DDS_Double   coolantLevel ;
    DDS_Double   coolantPressure ;
    DDS_Double   coolantTemp ;
    DDS_Double   engineTemp ;
    DDS_Double   exhaustTemp ;
    DDS_Boolean   * glowPlugIndicator ;
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   * glowPlugState ;
    DDS_Double   * glowPlugTemp ;
    DDS_Double   * glowPlugTimeRemaining ;
    DDS_Double   hours ;
    DDS_Double   manifoldAirTemp ;
    DDS_Double   manifoldPressure ;
    DDS_Double   oilLevel ;
    DDS_Double   oilPressure ;
    DDS_Double   oilTemp ;
    DDS_Double   percentOilPressure ;
    DDS_Double   RPM ;
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType   state ;
    DDS_Double   throttle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_EngineStatus_EngineReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_EngineStatus_EngineReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineStatus_EngineReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineStatus_EngineReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_EngineStatus_EngineReportTypeSeq, UMAA_EO_EngineStatus_EngineReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize(
    UMAA_EO_EngineStatus_EngineReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize_ex(
    UMAA_EO_EngineStatus_EngineReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize_w_params(
    UMAA_EO_EngineStatus_EngineReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineStatus_EngineReportType_finalize_w_return(
    UMAA_EO_EngineStatus_EngineReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineStatus_EngineReportType_finalize(
    UMAA_EO_EngineStatus_EngineReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineStatus_EngineReportType_finalize_ex(
    UMAA_EO_EngineStatus_EngineReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_EngineStatus_EngineReportType_finalize_w_params(
    UMAA_EO_EngineStatus_EngineReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_EngineStatus_EngineReportType_finalize_optional_members(
    UMAA_EO_EngineStatus_EngineReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineStatus_EngineReportType_copy(
    UMAA_EO_EngineStatus_EngineReportType* dst,
    const UMAA_EO_EngineStatus_EngineReportType* src);

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
        struct type_code< UMAA_EO_EngineStatus_EngineReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EngineReportType */

