

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TranslationalShipMotionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TranslationalShipMotionReportType_1153455098_h
#define TranslationalShipMotionReportType_1153455098_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReport_TOPIC= "UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReport";

extern "C" {

    extern const char *UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeTYPENAME;

}

struct UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeTypeSupport;
class UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeDataWriter;
class UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeDataReader;
#endif
class UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType 
{
  public:
    typedef struct UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeDataWriter DataWriter;
    typedef UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeDataReader DataReader;
    #endif

    DDS_Double   * heave ;
    DDS_Double   * surge ;
    DDS_Double   * sway ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportTypeSeq, UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_initialize(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_initialize_ex(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_initialize_w_params(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_finalize_w_return(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self);

NDDSUSERDllExport
void UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_finalize(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self);

NDDSUSERDllExport
void UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_finalize_ex(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_finalize_w_params(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_finalize_optional_members(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType_copy(
    UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* dst,
    const UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType* src);

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
        struct type_code< UMAA_SA_TranslationalShipMotionStatus_TranslationalShipMotionReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TranslationalShipMotionReportType */

