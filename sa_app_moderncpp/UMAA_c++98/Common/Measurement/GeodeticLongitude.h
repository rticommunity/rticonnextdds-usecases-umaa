

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeodeticLongitude.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeodeticLongitude_1012816534_h
#define GeodeticLongitude_1012816534_h

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

    extern const char *UMAA_Common_Measurement_GeodeticLongitudeTYPENAME;

}

struct UMAA_Common_Measurement_GeodeticLongitudeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_GeodeticLongitudeTypeSupport;
class UMAA_Common_Measurement_GeodeticLongitudeDataWriter;
class UMAA_Common_Measurement_GeodeticLongitudeDataReader;
#endif
class UMAA_Common_Measurement_GeodeticLongitude 
{
  public:
    typedef struct UMAA_Common_Measurement_GeodeticLongitudeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_GeodeticLongitudeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_GeodeticLongitudeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_GeodeticLongitudeDataReader DataReader;
    #endif

    DDS_Double   longitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_GeodeticLongitude_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_GeodeticLongitude_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GeodeticLongitude_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GeodeticLongitude_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_GeodeticLongitudeSeq, UMAA_Common_Measurement_GeodeticLongitude);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GeodeticLongitude_initialize(
    UMAA_Common_Measurement_GeodeticLongitude* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GeodeticLongitude_initialize_ex(
    UMAA_Common_Measurement_GeodeticLongitude* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GeodeticLongitude_initialize_w_params(
    UMAA_Common_Measurement_GeodeticLongitude* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GeodeticLongitude_finalize_w_return(
    UMAA_Common_Measurement_GeodeticLongitude* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_GeodeticLongitude_finalize(
    UMAA_Common_Measurement_GeodeticLongitude* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_GeodeticLongitude_finalize_ex(
    UMAA_Common_Measurement_GeodeticLongitude* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_GeodeticLongitude_finalize_w_params(
    UMAA_Common_Measurement_GeodeticLongitude* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_GeodeticLongitude_finalize_optional_members(
    UMAA_Common_Measurement_GeodeticLongitude* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GeodeticLongitude_copy(
    UMAA_Common_Measurement_GeodeticLongitude* dst,
    const UMAA_Common_Measurement_GeodeticLongitude* src);

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
        struct type_code< UMAA_Common_Measurement_GeodeticLongitude> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GeodeticLongitude */

