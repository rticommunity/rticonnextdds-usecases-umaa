

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorCommandType_1827044515_h
#define PropulsorCommandType_1827044515_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Propulsion/PropulsionRotationType.h"
#include "UMAA/Common/Propulsion/PropulsionType.h"

static const DDS_Char * const UMAA_EO_PropulsorControl_PropulsorCommand_TOPIC= "UMAA::EO::PropulsorControl::PropulsorCommand";

extern "C" {

    extern const char *UMAA_EO_PropulsorControl_PropulsorCommandTypeTYPENAME;

}

struct UMAA_EO_PropulsorControl_PropulsorCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PropulsorControl_PropulsorCommandTypeTypeSupport;
class UMAA_EO_PropulsorControl_PropulsorCommandTypeDataWriter;
class UMAA_EO_PropulsorControl_PropulsorCommandTypeDataReader;
#endif
class UMAA_EO_PropulsorControl_PropulsorCommandType 
{
  public:
    typedef struct UMAA_EO_PropulsorControl_PropulsorCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PropulsorControl_PropulsorCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PropulsorControl_PropulsorCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_PropulsorControl_PropulsorCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_PropulsionType   propulsion ;
    UMAA_Common_Propulsion_PropulsionRotationType   rotation ;
    DDS_Double   thrustPitch ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PropulsorControl_PropulsorCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PropulsorControl_PropulsorCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorControl_PropulsorCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorControl_PropulsorCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PropulsorControl_PropulsorCommandTypeSeq, UMAA_EO_PropulsorControl_PropulsorCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandType_initialize(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandType_initialize_ex(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandType_initialize_w_params(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandType_finalize_w_return(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandType_finalize(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandType_finalize_ex(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandType_finalize_w_params(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandType_finalize_optional_members(
    UMAA_EO_PropulsorControl_PropulsorCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandType_copy(
    UMAA_EO_PropulsorControl_PropulsorCommandType* dst,
    const UMAA_EO_PropulsorControl_PropulsorCommandType* src);

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
        struct type_code< UMAA_EO_PropulsorControl_PropulsorCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsorCommandType */

