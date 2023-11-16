

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_Volume.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Polygon_Volume_34458482_h
#define Polygon_Volume_34458482_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/Position2D.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Polygon_VolumeTYPENAME;

}

struct UMAA_Common_Measurement_Polygon_VolumeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Polygon_VolumeTypeSupport;
class UMAA_Common_Measurement_Polygon_VolumeDataWriter;
class UMAA_Common_Measurement_Polygon_VolumeDataReader;
#endif
class UMAA_Common_Measurement_Polygon_Volume 
{
  public:
    typedef struct UMAA_Common_Measurement_Polygon_VolumeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Polygon_VolumeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Polygon_VolumeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Polygon_VolumeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   ceiling ;
    UMAA_Common_Measurement_Altitude_MSL   floor ;
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType   lineKind ;
    UMAA_Common_Measurement_Position2DSeq  referencePoints ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Polygon_Volume_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Polygon_Volume_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_Volume_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_Volume_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Polygon_VolumeSeq, UMAA_Common_Measurement_Polygon_Volume);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize(
    UMAA_Common_Measurement_Polygon_Volume* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize_ex(
    UMAA_Common_Measurement_Polygon_Volume* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize_w_params(
    UMAA_Common_Measurement_Polygon_Volume* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_Volume_finalize_w_return(
    UMAA_Common_Measurement_Polygon_Volume* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_Volume_finalize(
    UMAA_Common_Measurement_Polygon_Volume* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_Volume_finalize_ex(
    UMAA_Common_Measurement_Polygon_Volume* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_Volume_finalize_w_params(
    UMAA_Common_Measurement_Polygon_Volume* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_Volume_finalize_optional_members(
    UMAA_Common_Measurement_Polygon_Volume* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_Volume_copy(
    UMAA_Common_Measurement_Polygon_Volume* dst,
    const UMAA_Common_Measurement_Polygon_Volume* src);

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
        struct type_code< UMAA_Common_Measurement_Polygon_Volume> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Polygon_Volume */

