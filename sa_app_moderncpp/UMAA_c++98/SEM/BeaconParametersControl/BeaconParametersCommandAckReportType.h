

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersCommandAckReportType_554097845_h
#define BeaconParametersCommandAckReportType_554097845_h

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

static const DDS_Char * const UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReport_TOPIC= "UMAA::SEM::BeaconParametersControl::BeaconParametersCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeTypeSupport;
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeDataWriter;
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeDataReader DataReader;
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
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportTypeSeq, UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_initialize(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_initialize_ex(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_initialize_w_params(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_finalize_w_return(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_finalize(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_finalize_ex(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_finalize_w_params(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_finalize_optional_members(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType_copy(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* dst,
    const UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_BeaconParametersControl_BeaconParametersCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BeaconParametersCommandAckReportType */

