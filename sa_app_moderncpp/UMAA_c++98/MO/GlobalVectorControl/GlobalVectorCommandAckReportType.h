

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalVectorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalVectorCommandAckReportType_775209799_h
#define GlobalVectorCommandAckReportType_775209799_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D_Tolerance.h"
#include "UMAA/Common/Orientation/OrientationType.h"
#include "UMAA/Common/Speed/SpeedControlType.h"

static const DDS_Char * const UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReport_TOPIC= "UMAA::MO::GlobalVectorControl::GlobalVectorCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeTypeSupport;
class UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeDataWriter;
class UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Orientation_OrientationType   attitude ;
    UMAA_Common_Measurement_Orientation3D_Tolerance   attitudeTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Speed_SpeedControlType   speed ;
    DDS_Double   speedTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeSeq, UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_initialize(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_initialize_ex(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_initialize_w_params(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_finalize_w_return(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_finalize(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_finalize_ex(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_finalize_w_params(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_finalize_optional_members(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType_copy(
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* dst,
    const UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalVectorCommandAckReportType */

