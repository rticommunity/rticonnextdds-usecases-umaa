

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandAckReportType_1072962277_h
#define PrimitiveDriverCommandAckReportType_1072962277_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/LinearEffort.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/RotationalEffort.h"

static const DDS_Char * const UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReport_TOPIC= "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeTypeSupport;
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeDataWriter;
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeDataReader;
#endif
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_LinearEffort   propulsiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   propulsiveRotationalEffort ;
    UMAA_Common_Measurement_LinearEffort   resistiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   resistiveRotationalEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeSeq, UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_initialize(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_initialize_ex(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_initialize_w_params(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_finalize_w_return(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_finalize(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_finalize_ex(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_finalize_w_params(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_finalize_optional_members(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType_copy(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* dst,
    const UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType* src);

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
        struct type_code< UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PrimitiveDriverCommandAckReportType */

