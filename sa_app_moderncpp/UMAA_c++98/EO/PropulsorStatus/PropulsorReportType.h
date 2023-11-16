

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorReportType_296258062_h
#define PropulsorReportType_296258062_h

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

static const DDS_Char * const UMAA_EO_PropulsorStatus_PropulsorReport_TOPIC= "UMAA::EO::PropulsorStatus::PropulsorReport";

extern "C" {

    extern const char *UMAA_EO_PropulsorStatus_PropulsorReportTypeTYPENAME;

}

struct UMAA_EO_PropulsorStatus_PropulsorReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PropulsorStatus_PropulsorReportTypeTypeSupport;
class UMAA_EO_PropulsorStatus_PropulsorReportTypeDataWriter;
class UMAA_EO_PropulsorStatus_PropulsorReportTypeDataReader;
#endif
class UMAA_EO_PropulsorStatus_PropulsorReportType 
{
  public:
    typedef struct UMAA_EO_PropulsorStatus_PropulsorReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PropulsorStatus_PropulsorReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PropulsorStatus_PropulsorReportTypeDataWriter DataWriter;
    typedef UMAA_EO_PropulsorStatus_PropulsorReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   motorFault ;
    DDS_Double   pitch ;
    DDS_Double   pitchEffort ;
    DDS_Double   * propulsiveEffort ;
    DDS_Double   * RPM ;
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType   state ;
    DDS_Double   * yaw ;
    DDS_Double   * yawEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PropulsorStatus_PropulsorReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PropulsorStatus_PropulsorReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorStatus_PropulsorReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorStatus_PropulsorReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PropulsorStatus_PropulsorReportTypeSeq, UMAA_EO_PropulsorStatus_PropulsorReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorStatus_PropulsorReportType_initialize(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorStatus_PropulsorReportType_initialize_ex(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorStatus_PropulsorReportType_initialize_w_params(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorStatus_PropulsorReportType_finalize_w_return(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorStatus_PropulsorReportType_finalize(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorStatus_PropulsorReportType_finalize_ex(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PropulsorStatus_PropulsorReportType_finalize_w_params(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PropulsorStatus_PropulsorReportType_finalize_optional_members(
    UMAA_EO_PropulsorStatus_PropulsorReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorStatus_PropulsorReportType_copy(
    UMAA_EO_PropulsorStatus_PropulsorReportType* dst,
    const UMAA_EO_PropulsorStatus_PropulsorReportType* src);

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
        struct type_code< UMAA_EO_PropulsorStatus_PropulsorReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsorReportType */

