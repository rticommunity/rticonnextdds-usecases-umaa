

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpCommandType_1495240865_h
#define BallastPumpCommandType_1495240865_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/EO/BallastTank/BallastPumpFlowRateType.h"

static const DDS_Char * const UMAA_EO_BallastTank_BallastPumpCommand_TOPIC= "UMAA::EO::BallastTank::BallastPumpCommand";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastPumpCommandTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastPumpCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastPumpCommandTypeTypeSupport;
class UMAA_EO_BallastTank_BallastPumpCommandTypeDataWriter;
class UMAA_EO_BallastTank_BallastPumpCommandTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastPumpCommandType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastPumpCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastPumpCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastPumpCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastPumpCommandTypeDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastPumpFlowRateType   ballastPumpFlowRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpCommandTypeSeq, UMAA_EO_BallastTank_BallastPumpCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandType_initialize(
    UMAA_EO_BallastTank_BallastPumpCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandType_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandType_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandType_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpCommandType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandType_finalize(
    UMAA_EO_BallastTank_BallastPumpCommandType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandType_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandType_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandType_copy(
    UMAA_EO_BallastTank_BallastPumpCommandType* dst,
    const UMAA_EO_BallastTank_BallastPumpCommandType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastPumpCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastPumpCommandType */

