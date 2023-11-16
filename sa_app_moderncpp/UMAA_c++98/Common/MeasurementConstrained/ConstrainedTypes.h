

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypes_846145405_h
#define ConstrainedTypes_846145405_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_MeasurementConstrained_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementConstrained_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementConstrained_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementConstrained_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementConstrained_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementConstrained_PercentSeq, UMAA_Common_MeasurementConstrained_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementConstrained_Percent_initialize(
    UMAA_Common_MeasurementConstrained_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementConstrained_Percent_initialize_ex(
    UMAA_Common_MeasurementConstrained_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementConstrained_Percent_initialize_w_params(
    UMAA_Common_MeasurementConstrained_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementConstrained_Percent_finalize_w_return(
    UMAA_Common_MeasurementConstrained_Percent* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementConstrained_Percent_finalize(
    UMAA_Common_MeasurementConstrained_Percent* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementConstrained_Percent_finalize_ex(
    UMAA_Common_MeasurementConstrained_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementConstrained_Percent_finalize_w_params(
    UMAA_Common_MeasurementConstrained_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementConstrained_Percent_finalize_optional_members(
    UMAA_Common_MeasurementConstrained_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementConstrained_Percent_copy(
    UMAA_Common_MeasurementConstrained_Percent* dst,
    const UMAA_Common_MeasurementConstrained_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
    } 
}

#endif

#endif /* ConstrainedTypes */

