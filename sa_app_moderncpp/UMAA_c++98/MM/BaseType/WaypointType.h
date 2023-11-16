

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaypointType_968560137_h
#define WaypointType_968560137_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Altitude_AGL.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_WaypointTypeTYPENAME;

}

struct UMAA_MM_BaseType_WaypointTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_WaypointTypeTypeSupport;
class UMAA_MM_BaseType_WaypointTypeDataWriter;
class UMAA_MM_BaseType_WaypointTypeDataReader;
#endif
class UMAA_MM_BaseType_WaypointType 
{
  public:
    typedef struct UMAA_MM_BaseType_WaypointTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_WaypointTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_WaypointTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_WaypointTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   * altitude ;
    UMAA_Common_Measurement_Altitude_AGL   * altitudeAGL ;
    DDS_Double   * altitudeASF ;
    UMAA_Common_Measurement_Orientation3D   * attitude ;
    DDS_Double   * depth ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_Position2D   * globalPosition ;
    UMAA_Common_Measurement_Position3D_PlatformXYZ   * localPosition ;
    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType   * mode ;
    DDS_Double   * pathTolerance ;
    DDS_Double   * speed ;
    UMAA_Common_Measurement_DateTime   * startTime ;
    DDS_Double   * waypointTolerance ;
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType   waypointType ;
    UMAA_Common_Measurement_NumericGUID   waypointID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_WaypointType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_WaypointType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_WaypointType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_WaypointType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_WaypointTypeSeq, UMAA_MM_BaseType_WaypointType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_WaypointType_initialize(
    UMAA_MM_BaseType_WaypointType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_WaypointType_initialize_ex(
    UMAA_MM_BaseType_WaypointType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_WaypointType_initialize_w_params(
    UMAA_MM_BaseType_WaypointType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_WaypointType_finalize_w_return(
    UMAA_MM_BaseType_WaypointType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_WaypointType_finalize(
    UMAA_MM_BaseType_WaypointType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_WaypointType_finalize_ex(
    UMAA_MM_BaseType_WaypointType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_WaypointType_finalize_w_params(
    UMAA_MM_BaseType_WaypointType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_WaypointType_finalize_optional_members(
    UMAA_MM_BaseType_WaypointType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_WaypointType_copy(
    UMAA_MM_BaseType_WaypointType* dst,
    const UMAA_MM_BaseType_WaypointType* src);

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
        struct type_code< UMAA_MM_BaseType_WaypointType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WaypointType */

