

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeneratorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeneratorReportType_368607235_h
#define GeneratorReportType_368607235_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_GeneratorStatus_GeneratorReport_TOPIC= "UMAA::EO::GeneratorStatus::GeneratorReport";

extern "C" {

    extern const char *UMAA_EO_GeneratorStatus_GeneratorReportTypeTYPENAME;

}

struct UMAA_EO_GeneratorStatus_GeneratorReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_GeneratorStatus_GeneratorReportTypeTypeSupport;
class UMAA_EO_GeneratorStatus_GeneratorReportTypeDataWriter;
class UMAA_EO_GeneratorStatus_GeneratorReportTypeDataReader;
#endif
class UMAA_EO_GeneratorStatus_GeneratorReportType 
{
  public:
    typedef struct UMAA_EO_GeneratorStatus_GeneratorReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_GeneratorStatus_GeneratorReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_GeneratorStatus_GeneratorReportTypeDataWriter DataWriter;
    typedef UMAA_EO_GeneratorStatus_GeneratorReportTypeDataReader DataReader;
    #endif

    DDS_Double   current ;
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType   state ;
    DDS_Double   voltage ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_GeneratorStatus_GeneratorReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_GeneratorStatus_GeneratorReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GeneratorStatus_GeneratorReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GeneratorStatus_GeneratorReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_GeneratorStatus_GeneratorReportTypeSeq, UMAA_EO_GeneratorStatus_GeneratorReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_GeneratorStatus_GeneratorReportType_initialize(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_GeneratorStatus_GeneratorReportType_initialize_ex(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_GeneratorStatus_GeneratorReportType_initialize_w_params(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_GeneratorStatus_GeneratorReportType_finalize_w_return(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self);

NDDSUSERDllExport
void UMAA_EO_GeneratorStatus_GeneratorReportType_finalize(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self);

NDDSUSERDllExport
void UMAA_EO_GeneratorStatus_GeneratorReportType_finalize_ex(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_GeneratorStatus_GeneratorReportType_finalize_w_params(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_GeneratorStatus_GeneratorReportType_finalize_optional_members(
    UMAA_EO_GeneratorStatus_GeneratorReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_GeneratorStatus_GeneratorReportType_copy(
    UMAA_EO_GeneratorStatus_GeneratorReportType* dst,
    const UMAA_EO_GeneratorStatus_GeneratorReportType* src);

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
        struct type_code< UMAA_EO_GeneratorStatus_GeneratorReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GeneratorReportType */

