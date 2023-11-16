

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3D.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3D_1410828055_h
#define Orientation3D_1410828055_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Orientation3DTYPENAME;

}

struct UMAA_Common_Measurement_Orientation3DSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Orientation3DTypeSupport;
class UMAA_Common_Measurement_Orientation3DDataWriter;
class UMAA_Common_Measurement_Orientation3DDataReader;
#endif
class UMAA_Common_Measurement_Orientation3D 
{
  public:
    typedef struct UMAA_Common_Measurement_Orientation3DSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Orientation3DTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Orientation3DDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Orientation3DDataReader DataReader;
    #endif

    DDS_Double   pitchY ;
    DDS_Double   rollX ;
    DDS_Double   yawZ ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Orientation3D_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Orientation3D_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Orientation3D_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Orientation3D_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Orientation3DSeq, UMAA_Common_Measurement_Orientation3D);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Orientation3D_initialize(
    UMAA_Common_Measurement_Orientation3D* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Orientation3D_initialize_ex(
    UMAA_Common_Measurement_Orientation3D* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Orientation3D_initialize_w_params(
    UMAA_Common_Measurement_Orientation3D* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Orientation3D_finalize_w_return(
    UMAA_Common_Measurement_Orientation3D* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Orientation3D_finalize(
    UMAA_Common_Measurement_Orientation3D* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Orientation3D_finalize_ex(
    UMAA_Common_Measurement_Orientation3D* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Orientation3D_finalize_w_params(
    UMAA_Common_Measurement_Orientation3D* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Orientation3D_finalize_optional_members(
    UMAA_Common_Measurement_Orientation3D* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Orientation3D_copy(
    UMAA_Common_Measurement_Orientation3D* dst,
    const UMAA_Common_Measurement_Orientation3D* src);

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
        struct type_code< UMAA_Common_Measurement_Orientation3D> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Orientation3D */

