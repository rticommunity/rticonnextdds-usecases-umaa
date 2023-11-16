

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalVectorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalVectorCommandType_1166797509_h
#define LocalVectorCommandType_1166797509_h

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

static const DDS_Char * const UMAA_MO_LocalVectorControl_LocalVectorCommand_TOPIC= "UMAA::MO::LocalVectorControl::LocalVectorCommand";

extern "C" {

    extern const char *UMAA_MO_LocalVectorControl_LocalVectorCommandTypeTYPENAME;

}

struct UMAA_MO_LocalVectorControl_LocalVectorCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalVectorControl_LocalVectorCommandTypeTypeSupport;
class UMAA_MO_LocalVectorControl_LocalVectorCommandTypeDataWriter;
class UMAA_MO_LocalVectorControl_LocalVectorCommandTypeDataReader;
#endif
class UMAA_MO_LocalVectorControl_LocalVectorCommandType 
{
  public:
    typedef struct UMAA_MO_LocalVectorControl_LocalVectorCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalVectorControl_LocalVectorCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalVectorControl_LocalVectorCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalVectorControl_LocalVectorCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Orientation_OrientationType   attitude ;
    UMAA_Common_Measurement_Orientation3D_Tolerance   attitudeTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Speed_SpeedControlType   speed ;
    DDS_Double   speedTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalVectorControl_LocalVectorCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalVectorControl_LocalVectorCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalVectorControl_LocalVectorCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalVectorControl_LocalVectorCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalVectorControl_LocalVectorCommandTypeSeq, UMAA_MO_LocalVectorControl_LocalVectorCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorCommandType_initialize(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorCommandType_initialize_ex(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorCommandType_initialize_w_params(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorCommandType_finalize_w_return(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorCommandType_finalize(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorCommandType_finalize_ex(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorCommandType_finalize_w_params(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorCommandType_finalize_optional_members(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorCommandType_copy(
    UMAA_MO_LocalVectorControl_LocalVectorCommandType* dst,
    const UMAA_MO_LocalVectorControl_LocalVectorCommandType* src);

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
        struct type_code< UMAA_MO_LocalVectorControl_LocalVectorCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalVectorCommandType */

