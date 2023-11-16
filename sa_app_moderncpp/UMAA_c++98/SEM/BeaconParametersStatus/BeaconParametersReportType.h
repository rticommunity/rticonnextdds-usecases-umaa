

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersReportType_1276118028_h
#define BeaconParametersReportType_1276118028_h

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

static const DDS_Char * const UMAA_SEM_BeaconParametersStatus_BeaconParametersReport_TOPIC= "UMAA::SEM::BeaconParametersStatus::BeaconParametersReport";

extern "C" {

    extern const char *UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeTYPENAME;

}

struct UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeTypeSupport;
class UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeDataWriter;
class UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeDataReader;
#endif
class UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType 
{
  public:
    typedef struct UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeDataReader DataReader;
    #endif

    DDS_Long   frequencyBand ;
    DDS_Boolean   IRLightsArmed ;
    DDS_Boolean   IRLightsOn ;
    DDS_Boolean   locatorArmed ;
    DDS_Boolean   locatorOn ;
    DDS_Boolean   multibandLocator ;
    DDS_Boolean   RGLightsArmed ;
    DDS_Boolean   RGLightsOn ;
    DDS_Long   transmitChannel ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_BeaconParametersStatus_BeaconParametersReportTypeSeq, UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_initialize(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_initialize_ex(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_initialize_w_params(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_finalize_w_return(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_finalize(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_finalize_ex(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_finalize_w_params(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_finalize_optional_members(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType_copy(
    UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* dst,
    const UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType* src);

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
        struct type_code< UMAA_SEM_BeaconParametersStatus_BeaconParametersReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BeaconParametersReportType */

