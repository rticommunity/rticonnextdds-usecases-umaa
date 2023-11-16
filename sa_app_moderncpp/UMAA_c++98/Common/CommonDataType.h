

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonDataType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommonDataType_1432003034_h
#define CommonDataType_1432003034_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

extern "C" {

    extern const char *UMAA_Common_CommonDataTypeTYPENAME;

}

struct UMAA_Common_CommonDataTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_CommonDataTypeTypeSupport;
class UMAA_Common_CommonDataTypeDataWriter;
class UMAA_Common_CommonDataTypeDataReader;
#endif
class UMAA_Common_CommonDataType 
{
  public:
    typedef struct UMAA_Common_CommonDataTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_CommonDataTypeTypeSupport TypeSupport;
    typedef UMAA_Common_CommonDataTypeDataWriter DataWriter;
    typedef UMAA_Common_CommonDataTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_CommonDataType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_CommonDataType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_CommonDataType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_CommonDataType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_CommonDataTypeSeq, UMAA_Common_CommonDataType);

NDDSUSERDllExport
RTIBool UMAA_Common_CommonDataType_initialize(
    UMAA_Common_CommonDataType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_CommonDataType_initialize_ex(
    UMAA_Common_CommonDataType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_CommonDataType_initialize_w_params(
    UMAA_Common_CommonDataType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_CommonDataType_finalize_w_return(
    UMAA_Common_CommonDataType* self);

NDDSUSERDllExport
void UMAA_Common_CommonDataType_finalize(
    UMAA_Common_CommonDataType* self);

NDDSUSERDllExport
void UMAA_Common_CommonDataType_finalize_ex(
    UMAA_Common_CommonDataType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_CommonDataType_finalize_w_params(
    UMAA_Common_CommonDataType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_CommonDataType_finalize_optional_members(
    UMAA_Common_CommonDataType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_CommonDataType_copy(
    UMAA_Common_CommonDataType* dst,
    const UMAA_Common_CommonDataType* src);

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
        struct type_code< UMAA_Common_CommonDataType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommonDataType */

