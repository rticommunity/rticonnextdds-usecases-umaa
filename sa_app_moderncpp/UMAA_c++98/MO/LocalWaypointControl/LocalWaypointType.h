

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointType_1914962981_h
#define LocalWaypointType_1914962981_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZ.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Orientation3D_PlatformXYZ   attitude ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Boolean   maintainTrack ;
    DDS_Double   pathTolerance ;
    UMAA_Common_Measurement_Position2D_PlatformXYZ   position ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   waypointTolerance ;
    UMAA_Common_Measurement_NumericGUID   waypointID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointType */

