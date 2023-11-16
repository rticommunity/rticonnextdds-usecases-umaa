

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftCommandType_72221213_h
#define LocalDriftCommandType_72221213_h

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
#include "UMAA/Common/Measurement/Position2D_PlatformXYZ.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_LocalDriftControl_LocalDriftCommand_TOPIC= "UMAA::MO::LocalDriftControl::LocalDriftCommand";

extern "C" {

    extern const char *UMAA_MO_LocalDriftControl_LocalDriftCommandTypeTYPENAME;

}

struct UMAA_MO_LocalDriftControl_LocalDriftCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftControl_LocalDriftCommandTypeTypeSupport;
class UMAA_MO_LocalDriftControl_LocalDriftCommandTypeDataWriter;
class UMAA_MO_LocalDriftControl_LocalDriftCommandTypeDataReader;
#endif
class UMAA_MO_LocalDriftControl_LocalDriftCommandType 
{
  public:
    typedef struct UMAA_MO_LocalDriftControl_LocalDriftCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandTypeDataReader DataReader;
    #endif

    DDS_Double   driftTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_Position2D_PlatformXYZ   * position ;
    DDS_Double   positionTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   speedTolerance ;
    UMAA_Common_Measurement_ElevationType   transitElevation ;
    DDS_Double   transitElevationTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   transitSpeed ;
    DDS_Double   transitSpeedTolerance ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftControl_LocalDriftCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftControl_LocalDriftCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftControl_LocalDriftCommandTypeSeq, UMAA_MO_LocalDriftControl_LocalDriftCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandType_initialize(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandType_initialize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandType_initialize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandType_finalize_w_return(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandType_finalize(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandType_finalize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandType_finalize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandType_finalize_optional_members(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandType_copy(
    UMAA_MO_LocalDriftControl_LocalDriftCommandType* dst,
    const UMAA_MO_LocalDriftControl_LocalDriftCommandType* src);

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
        struct type_code< UMAA_MO_LocalDriftControl_LocalDriftCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalDriftCommandType */

