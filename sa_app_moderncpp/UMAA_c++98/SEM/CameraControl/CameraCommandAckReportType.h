

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraCommandAckReportType_202597353_h
#define CameraCommandAckReportType_202597353_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/BuiltInTestStatusType_All.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"

static const DDS_Char * const UMAA_SEM_CameraControl_CameraCommandAckReport_TOPIC= "UMAA::SEM::CameraControl::CameraCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_CameraControl_CameraCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_CameraControl_CameraCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraControl_CameraCommandAckReportTypeTypeSupport;
class UMAA_SEM_CameraControl_CameraCommandAckReportTypeDataWriter;
class UMAA_SEM_CameraControl_CameraCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_CameraControl_CameraCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_CameraControl_CameraCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraControl_CameraCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraControl_CameraCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraControl_CameraCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_BuiltInTestStatusType_All   * builtInTest ;
    DDS_Boolean   filtered ;
    UMAA_Common_Measurement_Position2D   imageCenterLocation ;
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraControl_CameraCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraControl_CameraCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraControl_CameraCommandAckReportTypeSeq, UMAA_SEM_CameraControl_CameraCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandAckReportType_initialize(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandAckReportType_initialize_ex(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandAckReportType_initialize_w_params(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandAckReportType_finalize_w_return(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandAckReportType_finalize(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandAckReportType_finalize_ex(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandAckReportType_finalize_w_params(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandAckReportType_finalize_optional_members(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandAckReportType_copy(
    UMAA_SEM_CameraControl_CameraCommandAckReportType* dst,
    const UMAA_SEM_CameraControl_CameraCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_CameraControl_CameraCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraCommandAckReportType */

