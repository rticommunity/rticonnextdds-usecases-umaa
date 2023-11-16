

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RecoveryObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RecoveryObjectiveType_933868422_h
#define RecoveryObjectiveType_933868422_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Altitude_AGL.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_RecoveryObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_RecoveryObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_RecoveryObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_RecoveryObjectiveTypeDataWriter;
class UMAA_MM_BaseType_RecoveryObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_RecoveryObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_RecoveryObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_RecoveryObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_RecoveryObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_RecoveryObjectiveTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   altitude ;
    UMAA_Common_Measurement_Altitude_AGL   altitudeAGL ;
    DDS_Double   altitudeASF ;
    UMAA_Common_Measurement_Position2D   position ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_RecoveryObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_RecoveryObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RecoveryObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RecoveryObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_RecoveryObjectiveTypeSeq, UMAA_MM_BaseType_RecoveryObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RecoveryObjectiveType_initialize(
    UMAA_MM_BaseType_RecoveryObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RecoveryObjectiveType_initialize_ex(
    UMAA_MM_BaseType_RecoveryObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RecoveryObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_RecoveryObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RecoveryObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_RecoveryObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_RecoveryObjectiveType_finalize(
    UMAA_MM_BaseType_RecoveryObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_RecoveryObjectiveType_finalize_ex(
    UMAA_MM_BaseType_RecoveryObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_RecoveryObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_RecoveryObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_RecoveryObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_RecoveryObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RecoveryObjectiveType_copy(
    UMAA_MM_BaseType_RecoveryObjectiveType* dst,
    const UMAA_MM_BaseType_RecoveryObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_RecoveryObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RecoveryObjectiveType */

