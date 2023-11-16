

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveLoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveLoiterObjectiveType_1584300805_h
#define PassiveLoiterObjectiveType_1584300805_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2DTime.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_PassiveLoiterObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_PassiveLoiterObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_PassiveLoiterObjectiveTypeDataWriter;
class UMAA_MM_BaseType_PassiveLoiterObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_PassiveLoiterObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_PassiveLoiterObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_PassiveLoiterObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_PassiveLoiterObjectiveTypeDataReader DataReader;
    #endif

    DDS_Double   captureRadius ;
    DDS_Double   * depth ;
    DDS_Double   * driftRadius ;
    DDS_Double   * duration ;
    DDS_Double   * heading ;
    UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType   * headingReference ;
    UMAA_Common_Measurement_Position2DTime   position ;
    DDS_Double   speed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq, UMAA_MM_BaseType_PassiveLoiterObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_ex(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_ex(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_copy(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* dst,
    const UMAA_MM_BaseType_PassiveLoiterObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_PassiveLoiterObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PassiveLoiterObjectiveType */

