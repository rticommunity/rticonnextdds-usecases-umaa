

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChargingObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ChargingObjectiveType_715522288_h
#define ChargingObjectiveType_715522288_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_ChargingObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_ChargingObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ChargingObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_ChargingObjectiveTypeDataWriter;
class UMAA_MM_BaseType_ChargingObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_ChargingObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_ChargingObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ChargingObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ChargingObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ChargingObjectiveTypeDataReader DataReader;
    #endif

    DDS_Double   chargeLevel ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ChargingObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ChargingObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ChargingObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ChargingObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ChargingObjectiveTypeSeq, UMAA_MM_BaseType_ChargingObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ChargingObjectiveType_initialize(
    UMAA_MM_BaseType_ChargingObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ChargingObjectiveType_initialize_ex(
    UMAA_MM_BaseType_ChargingObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ChargingObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_ChargingObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ChargingObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_ChargingObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ChargingObjectiveType_finalize(
    UMAA_MM_BaseType_ChargingObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ChargingObjectiveType_finalize_ex(
    UMAA_MM_BaseType_ChargingObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ChargingObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_ChargingObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ChargingObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_ChargingObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ChargingObjectiveType_copy(
    UMAA_MM_BaseType_ChargingObjectiveType* dst,
    const UMAA_MM_BaseType_ChargingObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_ChargingObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ChargingObjectiveType */

