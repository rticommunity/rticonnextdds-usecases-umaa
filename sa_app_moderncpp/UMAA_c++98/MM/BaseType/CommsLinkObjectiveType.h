

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLinkObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLinkObjectiveType_1265740602_h
#define CommsLinkObjectiveType_1265740602_h

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

    extern const char *UMAA_MM_BaseType_CommsLinkObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_CommsLinkObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_CommsLinkObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_CommsLinkObjectiveTypeDataWriter;
class UMAA_MM_BaseType_CommsLinkObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_CommsLinkObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_CommsLinkObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_CommsLinkObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_CommsLinkObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_CommsLinkObjectiveTypeDataReader DataReader;
    #endif

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_CommsLinkObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_CommsLinkObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_CommsLinkObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_CommsLinkObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_CommsLinkObjectiveTypeSeq, UMAA_MM_BaseType_CommsLinkObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_CommsLinkObjectiveType_initialize(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_CommsLinkObjectiveType_initialize_ex(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_CommsLinkObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_CommsLinkObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_CommsLinkObjectiveType_finalize(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_CommsLinkObjectiveType_finalize_ex(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_CommsLinkObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_CommsLinkObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_CommsLinkObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_CommsLinkObjectiveType_copy(
    UMAA_MM_BaseType_CommsLinkObjectiveType* dst,
    const UMAA_MM_BaseType_CommsLinkObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_CommsLinkObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommsLinkObjectiveType */

