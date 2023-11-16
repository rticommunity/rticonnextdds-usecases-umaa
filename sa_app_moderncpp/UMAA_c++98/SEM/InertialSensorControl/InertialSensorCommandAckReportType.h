

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InertialSensorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef InertialSensorCommandAckReportType_696687169_h
#define InertialSensorCommandAckReportType_696687169_h

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

static const DDS_Char * const UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReport_TOPIC= "UMAA::SEM::InertialSensorControl::InertialSensorCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeTypeSupport;
class UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeDataWriter;
class UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeSeq, UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_initialize(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_initialize_ex(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_initialize_w_params(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_finalize_w_return(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_finalize(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_finalize_ex(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_finalize_w_params(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_finalize_optional_members(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType_copy(
    UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* dst,
    const UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* InertialSensorCommandAckReportType */

