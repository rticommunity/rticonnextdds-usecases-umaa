

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandType_1045312834_h
#define PrimitiveDriverCommandType_1045312834_h

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

static const DDS_Char * const UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommand_TOPIC= "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommand";

extern "C" {

    extern const char *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeTYPENAME;

}

struct UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeTypeSupport;
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeDataWriter;
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeDataReader;
#endif
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType 
{
  public:
    typedef struct UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_LinearEffort   propulsiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   propulsiveRotationalEffort ;
    UMAA_Common_Measurement_LinearEffort   resistiveLinearEffort ;
    UMAA_Common_Measurement_RotationalEffort   resistiveRotationalEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandTypeSeq, UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_initialize(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_initialize_ex(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_initialize_w_params(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_finalize_w_return(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_finalize(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_finalize_ex(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_finalize_w_params(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_finalize_optional_members(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType_copy(
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* dst,
    const UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType* src);

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
        struct type_code< UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PrimitiveDriverCommandType */

