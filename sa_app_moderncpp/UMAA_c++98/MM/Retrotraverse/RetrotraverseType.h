

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraverseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraverseType_1296792066_h
#define RetrotraverseType_1296792066_h

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
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_Retrotraverse_RetrotraverseTypeTYPENAME;

}

struct UMAA_MM_Retrotraverse_RetrotraverseTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_Retrotraverse_RetrotraverseTypeTypeSupport;
class UMAA_MM_Retrotraverse_RetrotraverseTypeDataWriter;
class UMAA_MM_Retrotraverse_RetrotraverseTypeDataReader;
#endif
class UMAA_MM_Retrotraverse_RetrotraverseType 
{
  public:
    typedef struct UMAA_MM_Retrotraverse_RetrotraverseTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_Retrotraverse_RetrotraverseTypeTypeSupport TypeSupport;
    typedef UMAA_MM_Retrotraverse_RetrotraverseTypeDataWriter DataWriter;
    typedef UMAA_MM_Retrotraverse_RetrotraverseTypeDataReader DataReader;
    #endif

    DDS_Double   distance ;
    DDS_Double   maxSpeed ;
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType   mode ;
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumType   speedReference ;
    DDS_Double   standoffDistance ;
    DDS_Boolean   travelDirection ;
    DDS_Boolean   travelMethod ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_Retrotraverse_RetrotraverseType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_Retrotraverse_RetrotraverseType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_Retrotraverse_RetrotraverseType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_Retrotraverse_RetrotraverseType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_Retrotraverse_RetrotraverseTypeSeq, UMAA_MM_Retrotraverse_RetrotraverseType);

NDDSUSERDllExport
RTIBool UMAA_MM_Retrotraverse_RetrotraverseType_initialize(
    UMAA_MM_Retrotraverse_RetrotraverseType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_Retrotraverse_RetrotraverseType_initialize_ex(
    UMAA_MM_Retrotraverse_RetrotraverseType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_Retrotraverse_RetrotraverseType_initialize_w_params(
    UMAA_MM_Retrotraverse_RetrotraverseType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_Retrotraverse_RetrotraverseType_finalize_w_return(
    UMAA_MM_Retrotraverse_RetrotraverseType* self);

NDDSUSERDllExport
void UMAA_MM_Retrotraverse_RetrotraverseType_finalize(
    UMAA_MM_Retrotraverse_RetrotraverseType* self);

NDDSUSERDllExport
void UMAA_MM_Retrotraverse_RetrotraverseType_finalize_ex(
    UMAA_MM_Retrotraverse_RetrotraverseType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_Retrotraverse_RetrotraverseType_finalize_w_params(
    UMAA_MM_Retrotraverse_RetrotraverseType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_Retrotraverse_RetrotraverseType_finalize_optional_members(
    UMAA_MM_Retrotraverse_RetrotraverseType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_Retrotraverse_RetrotraverseType_copy(
    UMAA_MM_Retrotraverse_RetrotraverseType* dst,
    const UMAA_MM_Retrotraverse_RetrotraverseType* src);

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
        struct type_code< UMAA_MM_Retrotraverse_RetrotraverseType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RetrotraverseType */

