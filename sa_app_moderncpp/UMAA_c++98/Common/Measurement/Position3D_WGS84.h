

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position3D_WGS84.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position3D_WGS84_411581087_h
#define Position3D_WGS84_411581087_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Altitude_HAE.h"
#include "UMAA/Common/Measurement/Position2D.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Position3D_WGS84TYPENAME;

}

struct UMAA_Common_Measurement_Position3D_WGS84Seq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Position3D_WGS84TypeSupport;
class UMAA_Common_Measurement_Position3D_WGS84DataWriter;
class UMAA_Common_Measurement_Position3D_WGS84DataReader;
#endif
class UMAA_Common_Measurement_Position3D_WGS84 
{
  public:
    typedef struct UMAA_Common_Measurement_Position3D_WGS84Seq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Position3D_WGS84TypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Position3D_WGS84DataWriter DataWriter;
    typedef UMAA_Common_Measurement_Position3D_WGS84DataReader DataReader;
    #endif

    UMAA_Common_Measurement_Position2D   geodeticPosition ;
    UMAA_Common_Measurement_Altitude_HAE   heightAboveEllipsoid ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Position3D_WGS84_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Position3D_WGS84_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position3D_WGS84_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position3D_WGS84_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Position3D_WGS84Seq, UMAA_Common_Measurement_Position3D_WGS84);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position3D_WGS84_initialize(
    UMAA_Common_Measurement_Position3D_WGS84* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position3D_WGS84_initialize_ex(
    UMAA_Common_Measurement_Position3D_WGS84* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position3D_WGS84_initialize_w_params(
    UMAA_Common_Measurement_Position3D_WGS84* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position3D_WGS84_finalize_w_return(
    UMAA_Common_Measurement_Position3D_WGS84* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position3D_WGS84_finalize(
    UMAA_Common_Measurement_Position3D_WGS84* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position3D_WGS84_finalize_ex(
    UMAA_Common_Measurement_Position3D_WGS84* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position3D_WGS84_finalize_w_params(
    UMAA_Common_Measurement_Position3D_WGS84* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position3D_WGS84_finalize_optional_members(
    UMAA_Common_Measurement_Position3D_WGS84* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position3D_WGS84_copy(
    UMAA_Common_Measurement_Position3D_WGS84* dst,
    const UMAA_Common_Measurement_Position3D_WGS84* src);

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
        struct type_code< UMAA_Common_Measurement_Position3D_WGS84> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Position3D_WGS84 */

