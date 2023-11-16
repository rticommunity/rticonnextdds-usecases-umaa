

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TamperDetectionCommandType_218747731_h
#define TamperDetectionCommandType_218747731_h

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

static const DDS_Char * const UMAA_SO_TamperDetectionControl_TamperDetectionCommand_TOPIC= "UMAA::SO::TamperDetectionControl::TamperDetectionCommand";

extern "C" {

    extern const char *UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeTYPENAME;

}

struct UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeTypeSupport;
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeDataWriter;
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeDataReader;
#endif
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandType 
{
  public:
    typedef struct UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeSeq, UMAA_SO_TamperDetectionControl_TamperDetectionCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_initialize(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_initialize_ex(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_initialize_w_params(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_finalize_w_return(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_finalize(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_finalize_ex(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_finalize_w_params(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_finalize_optional_members(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandType_copy(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* dst,
    const UMAA_SO_TamperDetectionControl_TamperDetectionCommandType* src);

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
        struct type_code< UMAA_SO_TamperDetectionControl_TamperDetectionCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TamperDetectionCommandType */

