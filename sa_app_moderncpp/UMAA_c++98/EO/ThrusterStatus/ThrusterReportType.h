

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterReportType_1988500792_h
#define ThrusterReportType_1988500792_h

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

static const DDS_Char * const UMAA_EO_ThrusterStatus_ThrusterReport_TOPIC= "UMAA::EO::ThrusterStatus::ThrusterReport";

extern "C" {

    extern const char *UMAA_EO_ThrusterStatus_ThrusterReportTypeTYPENAME;

}

struct UMAA_EO_ThrusterStatus_ThrusterReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_ThrusterStatus_ThrusterReportTypeTypeSupport;
class UMAA_EO_ThrusterStatus_ThrusterReportTypeDataWriter;
class UMAA_EO_ThrusterStatus_ThrusterReportTypeDataReader;
#endif
class UMAA_EO_ThrusterStatus_ThrusterReportType 
{
  public:
    typedef struct UMAA_EO_ThrusterStatus_ThrusterReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_ThrusterStatus_ThrusterReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_ThrusterStatus_ThrusterReportTypeDataWriter DataWriter;
    typedef UMAA_EO_ThrusterStatus_ThrusterReportTypeDataReader DataReader;
    #endif

    DDS_Double   * effort ;
    DDS_Boolean   motorFault ;
    DDS_Double   * RPM ;
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_ThrusterStatus_ThrusterReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_ThrusterStatus_ThrusterReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterStatus_ThrusterReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterStatus_ThrusterReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_ThrusterStatus_ThrusterReportTypeSeq, UMAA_EO_ThrusterStatus_ThrusterReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterStatus_ThrusterReportType_initialize(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterStatus_ThrusterReportType_initialize_ex(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterStatus_ThrusterReportType_initialize_w_params(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterStatus_ThrusterReportType_finalize_w_return(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterStatus_ThrusterReportType_finalize(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterStatus_ThrusterReportType_finalize_ex(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_ThrusterStatus_ThrusterReportType_finalize_w_params(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_ThrusterStatus_ThrusterReportType_finalize_optional_members(
    UMAA_EO_ThrusterStatus_ThrusterReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterStatus_ThrusterReportType_copy(
    UMAA_EO_ThrusterStatus_ThrusterReportType* dst,
    const UMAA_EO_ThrusterStatus_ThrusterReportType* src);

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
        struct type_code< UMAA_EO_ThrusterStatus_ThrusterReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrusterReportType */

