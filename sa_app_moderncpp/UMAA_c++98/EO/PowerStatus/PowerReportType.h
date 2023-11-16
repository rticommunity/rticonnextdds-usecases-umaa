

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PowerReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PowerReportType_881172067_h
#define PowerReportType_881172067_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_PowerStatus_PowerReport_TOPIC= "UMAA::EO::PowerStatus::PowerReport";

extern "C" {

    extern const char *UMAA_EO_PowerStatus_PowerReportTypeTYPENAME;

}

struct UMAA_EO_PowerStatus_PowerReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PowerStatus_PowerReportTypeTypeSupport;
class UMAA_EO_PowerStatus_PowerReportTypeDataWriter;
class UMAA_EO_PowerStatus_PowerReportTypeDataReader;
#endif
class UMAA_EO_PowerStatus_PowerReportType 
{
  public:
    typedef struct UMAA_EO_PowerStatus_PowerReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PowerStatus_PowerReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PowerStatus_PowerReportTypeDataWriter DataWriter;
    typedef UMAA_EO_PowerStatus_PowerReportTypeDataReader DataReader;
    #endif

    DDS_Char *   name ;
    UMAA_Common_Measurement_NumericGUID   powerPlantID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PowerStatus_PowerReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PowerStatus_PowerReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PowerStatus_PowerReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PowerStatus_PowerReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PowerStatus_PowerReportTypeSeq, UMAA_EO_PowerStatus_PowerReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerStatus_PowerReportType_initialize(
    UMAA_EO_PowerStatus_PowerReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerStatus_PowerReportType_initialize_ex(
    UMAA_EO_PowerStatus_PowerReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerStatus_PowerReportType_initialize_w_params(
    UMAA_EO_PowerStatus_PowerReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PowerStatus_PowerReportType_finalize_w_return(
    UMAA_EO_PowerStatus_PowerReportType* self);

NDDSUSERDllExport
void UMAA_EO_PowerStatus_PowerReportType_finalize(
    UMAA_EO_PowerStatus_PowerReportType* self);

NDDSUSERDllExport
void UMAA_EO_PowerStatus_PowerReportType_finalize_ex(
    UMAA_EO_PowerStatus_PowerReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PowerStatus_PowerReportType_finalize_w_params(
    UMAA_EO_PowerStatus_PowerReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PowerStatus_PowerReportType_finalize_optional_members(
    UMAA_EO_PowerStatus_PowerReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PowerStatus_PowerReportType_copy(
    UMAA_EO_PowerStatus_PowerReportType* dst,
    const UMAA_EO_PowerStatus_PowerReportType* src);

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
        struct type_code< UMAA_EO_PowerStatus_PowerReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PowerReportType */

