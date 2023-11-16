

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8ExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8ExecutionStatusReportType_1526634500_h
#define LocalFigure8ExecutionStatusReportType_1526634500_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalFigure8State/LocalFigure8StateType.h"

static const DDS_Char * const UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReport_TOPIC= "UMAA::MO::LocalFigure8Control::LocalFigure8ExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalFigure8State_LocalFigure8StateType   localFigure8State ;
    UMAA_Common_Measurement_DateTime   timePatternAchieved ;
    UMAA_Common_Measurement_DateTime   * timePatternCompleted ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportTypeSeq, UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_initialize(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_finalize(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType_copy(
    UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* dst,
    const UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalFigure8Control_LocalFigure8ExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalFigure8ExecutionStatusReportType */

