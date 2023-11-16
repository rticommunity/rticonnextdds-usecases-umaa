

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProductDisseminateFileObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ProductDisseminateFileObjectiveType_1767497409_h
#define ProductDisseminateFileObjectiveType_1767497409_h

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

    extern const char *UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeDataWriter;
class UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_ProductDisseminateFileObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   destinationID ;
    DDS_Char *   sourceURI ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ProductDisseminateFileObjectiveTypeSeq, UMAA_MM_BaseType_ProductDisseminateFileObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_initialize(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_initialize_ex(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize_ex(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_copy(
    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* dst,
    const UMAA_MM_BaseType_ProductDisseminateFileObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_ProductDisseminateFileObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ProductDisseminateFileObjectiveType */

