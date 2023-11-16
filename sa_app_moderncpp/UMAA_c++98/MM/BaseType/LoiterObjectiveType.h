

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LoiterObjectiveType_1994294626_h
#define LoiterObjectiveType_1994294626_h

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
#include "UMAA/Common/Measurement/Altitude_AGL.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position3D_WGS84.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_LoiterObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_LoiterObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_LoiterObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_LoiterObjectiveTypeDataWriter;
class UMAA_MM_BaseType_LoiterObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_LoiterObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_LoiterObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_LoiterObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_LoiterObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_LoiterObjectiveTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   * altitude ;
    UMAA_Common_Measurement_Altitude_AGL   * altitudeAGL ;
    DDS_Double   * altitudeASF ;
    DDS_Boolean   * autoHeading ;
    DDS_Double   * bearing ;
    DDS_Double   * depth ;
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType   * direction ;
    DDS_Double   duration ;
    DDS_Double   * heading ;
    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType   * hoverKind ;
    DDS_Double   * length ;
    UMAA_Common_Measurement_Position3D_WGS84   position ;
    DDS_Double   speed ;
    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType   type ;
    DDS_Double   width ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_LoiterObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_LoiterObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_LoiterObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_LoiterObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_LoiterObjectiveTypeSeq, UMAA_MM_BaseType_LoiterObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize(
    UMAA_MM_BaseType_LoiterObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize_ex(
    UMAA_MM_BaseType_LoiterObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_LoiterObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_LoiterObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_LoiterObjectiveType_finalize(
    UMAA_MM_BaseType_LoiterObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_LoiterObjectiveType_finalize_ex(
    UMAA_MM_BaseType_LoiterObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_LoiterObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_LoiterObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_LoiterObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_copy(
    UMAA_MM_BaseType_LoiterObjectiveType* dst,
    const UMAA_MM_BaseType_LoiterObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_LoiterObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LoiterObjectiveType */

