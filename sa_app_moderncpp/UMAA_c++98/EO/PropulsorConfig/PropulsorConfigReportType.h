

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorConfigReportType_333886599_h
#define PropulsorConfigReportType_333886599_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_PropulsorConfig_PropulsorConfigReport_TOPIC= "UMAA::EO::PropulsorConfig::PropulsorConfigReport";

extern "C" {

    extern const char *UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeTYPENAME;

}

struct UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeTypeSupport;
class UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeDataWriter;
class UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeDataReader;
#endif
class UMAA_EO_PropulsorConfig_PropulsorConfigReportType 
{
  public:
    typedef struct UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeDataWriter DataWriter;
    typedef UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeDataReader DataReader;
    #endif

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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PropulsorConfig_PropulsorConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PropulsorConfig_PropulsorConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorConfig_PropulsorConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorConfig_PropulsorConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PropulsorConfig_PropulsorConfigReportTypeSeq, UMAA_EO_PropulsorConfig_PropulsorConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorConfig_PropulsorConfigReportType_initialize(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorConfig_PropulsorConfigReportType_initialize_ex(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorConfig_PropulsorConfigReportType_initialize_w_params(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorConfig_PropulsorConfigReportType_finalize_w_return(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorConfig_PropulsorConfigReportType_finalize(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorConfig_PropulsorConfigReportType_finalize_ex(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PropulsorConfig_PropulsorConfigReportType_finalize_w_params(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PropulsorConfig_PropulsorConfigReportType_finalize_optional_members(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorConfig_PropulsorConfigReportType_copy(
    UMAA_EO_PropulsorConfig_PropulsorConfigReportType* dst,
    const UMAA_EO_PropulsorConfig_PropulsorConfigReportType* src);

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
        struct type_code< UMAA_EO_PropulsorConfig_PropulsorConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsorConfigReportType */

