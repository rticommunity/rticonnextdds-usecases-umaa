

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineSpecsReportType_166603692_h
#define EngineSpecsReportType_166603692_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_EngineSpecs_EngineSpecsReport_TOPIC= "UMAA::EO::EngineSpecs::EngineSpecsReport";

extern "C" {

    extern const char *UMAA_EO_EngineSpecs_EngineSpecsReportTypeTYPENAME;

}

struct UMAA_EO_EngineSpecs_EngineSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_EngineSpecs_EngineSpecsReportTypeTypeSupport;
class UMAA_EO_EngineSpecs_EngineSpecsReportTypeDataWriter;
class UMAA_EO_EngineSpecs_EngineSpecsReportTypeDataReader;
#endif
class UMAA_EO_EngineSpecs_EngineSpecsReportType 
{
  public:
    typedef struct UMAA_EO_EngineSpecs_EngineSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_EngineSpecs_EngineSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_EngineSpecs_EngineSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_EngineSpecs_EngineSpecsReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumType   engineKind ;
    DDS_Double   * glowPlugTime ;
    DDS_Double   maxCoolantLevel ;
    DDS_Double   maxCoolantPressure ;
    DDS_Double   maxCoolantTemp ;
    DDS_Double   maxEngineTemp ;
    DDS_Double   * maxGlowPlugTemp ;
    DDS_Double   maxManifoldAirTemp ;
    DDS_Double   maxManifoldPressure ;
    DDS_Double   maxOilPressure ;
    DDS_Double   maxOilTemp ;
    DDS_Double   minCoolantLevel ;
    DDS_Double   minOilLevel ;
    DDS_Char *   name ;
    DDS_Double   oilCapacity ;
    DDS_Double   reverseRPMLowerLimit ;
    DDS_Double   reverseRPMMaxLimit ;
    DDS_Double   reverseRPMUpperLimit ;
    DDS_Boolean   reversible ;
    DDS_Double   RPMLowerLimit ;
    DDS_Double   RPMMaxLimit ;
    DDS_Double   RPMUpperLimit ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_EngineSpecs_EngineSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_EngineSpecs_EngineSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineSpecs_EngineSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineSpecs_EngineSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_EngineSpecs_EngineSpecsReportTypeSeq, UMAA_EO_EngineSpecs_EngineSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineSpecs_EngineSpecsReportType_initialize(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineSpecs_EngineSpecsReportType_initialize_ex(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineSpecs_EngineSpecsReportType_initialize_w_params(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineSpecs_EngineSpecsReportType_finalize_w_return(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineSpecs_EngineSpecsReportType_finalize(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineSpecs_EngineSpecsReportType_finalize_ex(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_EngineSpecs_EngineSpecsReportType_finalize_w_params(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_EngineSpecs_EngineSpecsReportType_finalize_optional_members(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineSpecs_EngineSpecsReportType_copy(
    UMAA_EO_EngineSpecs_EngineSpecsReportType* dst,
    const UMAA_EO_EngineSpecs_EngineSpecsReportType* src);

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
        struct type_code< UMAA_EO_EngineSpecs_EngineSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EngineSpecsReportType */

