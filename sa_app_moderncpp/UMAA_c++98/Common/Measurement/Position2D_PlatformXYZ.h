

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2D_PlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position2D_PlatformXYZ_2097022356_h
#define Position2D_PlatformXYZ_2097022356_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Position2D_PlatformXYZTYPENAME;

}

struct UMAA_Common_Measurement_Position2D_PlatformXYZSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Position2D_PlatformXYZTypeSupport;
class UMAA_Common_Measurement_Position2D_PlatformXYZDataWriter;
class UMAA_Common_Measurement_Position2D_PlatformXYZDataReader;
#endif
class UMAA_Common_Measurement_Position2D_PlatformXYZ 
{
  public:
    typedef struct UMAA_Common_Measurement_Position2D_PlatformXYZSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Position2D_PlatformXYZTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Position2D_PlatformXYZDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Position2D_PlatformXYZDataReader DataReader;
    #endif

    DDS_Double   xAxis ;
    DDS_Double   yAxis ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Position2D_PlatformXYZ_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Position2D_PlatformXYZ_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position2D_PlatformXYZ_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position2D_PlatformXYZ_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Position2D_PlatformXYZSeq, UMAA_Common_Measurement_Position2D_PlatformXYZ);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize_ex(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize_w_params(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_w_return(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_ex(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_w_params(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_optional_members(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2D_PlatformXYZ_copy(
    UMAA_Common_Measurement_Position2D_PlatformXYZ* dst,
    const UMAA_Common_Measurement_Position2D_PlatformXYZ* src);

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
        struct type_code< UMAA_Common_Measurement_Position2D_PlatformXYZ> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Position2D_PlatformXYZ */

