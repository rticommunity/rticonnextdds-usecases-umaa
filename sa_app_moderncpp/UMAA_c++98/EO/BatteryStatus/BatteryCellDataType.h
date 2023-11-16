

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryCellDataType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryCellDataType_665770853_h
#define BatteryCellDataType_665770853_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_EO_BatteryStatus_BatteryCellDataTypeTYPENAME;

}

struct UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BatteryStatus_BatteryCellDataTypeTypeSupport;
class UMAA_EO_BatteryStatus_BatteryCellDataTypeDataWriter;
class UMAA_EO_BatteryStatus_BatteryCellDataTypeDataReader;
#endif
class UMAA_EO_BatteryStatus_BatteryCellDataType 
{
  public:
    typedef struct UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BatteryStatus_BatteryCellDataTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BatteryStatus_BatteryCellDataTypeDataWriter DataWriter;
    typedef UMAA_EO_BatteryStatus_BatteryCellDataTypeDataReader DataReader;
    #endif

    DDS_Double   current ;
    DDS_Double   temperature ;
    DDS_Double   voltage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BatteryStatus_BatteryCellDataType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BatteryStatus_BatteryCellDataType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryCellDataType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryCellDataType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq, UMAA_EO_BatteryStatus_BatteryCellDataType);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_ex(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_w_params(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_return(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_ex(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_params(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_optional_members(
    UMAA_EO_BatteryStatus_BatteryCellDataType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_copy(
    UMAA_EO_BatteryStatus_BatteryCellDataType* dst,
    const UMAA_EO_BatteryStatus_BatteryCellDataType* src);

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
        struct type_code< UMAA_EO_BatteryStatus_BatteryCellDataType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BatteryCellDataType */

