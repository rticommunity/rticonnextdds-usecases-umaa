

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Altitude_HAE.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Altitude_HAE_1347817305_h
#define Altitude_HAE_1347817305_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Geographic_Coordinate_Axes.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Altitude_HAETYPENAME;

}

struct UMAA_Common_Measurement_Altitude_HAESeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Altitude_HAETypeSupport;
class UMAA_Common_Measurement_Altitude_HAEDataWriter;
class UMAA_Common_Measurement_Altitude_HAEDataReader;
#endif
class UMAA_Common_Measurement_Altitude_HAE 
{
  public:
    typedef struct UMAA_Common_Measurement_Altitude_HAESeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Altitude_HAETypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Altitude_HAEDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Altitude_HAEDataReader DataReader;
    #endif

    DDS_Double   altitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Altitude_HAE_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Altitude_HAE_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Altitude_HAE_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Altitude_HAE_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Altitude_HAESeq, UMAA_Common_Measurement_Altitude_HAE);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_HAE_initialize(
    UMAA_Common_Measurement_Altitude_HAE* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_HAE_initialize_ex(
    UMAA_Common_Measurement_Altitude_HAE* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_HAE_initialize_w_params(
    UMAA_Common_Measurement_Altitude_HAE* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_HAE_finalize_w_return(
    UMAA_Common_Measurement_Altitude_HAE* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_HAE_finalize(
    UMAA_Common_Measurement_Altitude_HAE* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_HAE_finalize_ex(
    UMAA_Common_Measurement_Altitude_HAE* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_HAE_finalize_w_params(
    UMAA_Common_Measurement_Altitude_HAE* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_HAE_finalize_optional_members(
    UMAA_Common_Measurement_Altitude_HAE* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_HAE_copy(
    UMAA_Common_Measurement_Altitude_HAE* dst,
    const UMAA_Common_Measurement_Altitude_HAE* src);

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
        struct type_code< UMAA_Common_Measurement_Altitude_HAE> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Altitude_HAE */

