

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2DTime.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position2DTime_1278718484_h
#define Position2DTime_1278718484_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Position2DTimeTYPENAME;

}

struct UMAA_Common_Measurement_Position2DTimeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Position2DTimeTypeSupport;
class UMAA_Common_Measurement_Position2DTimeDataWriter;
class UMAA_Common_Measurement_Position2DTimeDataReader;
#endif
class UMAA_Common_Measurement_Position2DTime 
{
  public:
    typedef struct UMAA_Common_Measurement_Position2DTimeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Position2DTimeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Position2DTimeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Position2DTimeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Position2D   geodeticPosition ;
    DDS_Double   * timeAtPosition ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Position2DTime_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Position2DTime_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position2DTime_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Position2DTime_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Position2DTimeSeq, UMAA_Common_Measurement_Position2DTime);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2DTime_initialize(
    UMAA_Common_Measurement_Position2DTime* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2DTime_initialize_ex(
    UMAA_Common_Measurement_Position2DTime* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2DTime_initialize_w_params(
    UMAA_Common_Measurement_Position2DTime* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2DTime_finalize_w_return(
    UMAA_Common_Measurement_Position2DTime* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2DTime_finalize(
    UMAA_Common_Measurement_Position2DTime* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2DTime_finalize_ex(
    UMAA_Common_Measurement_Position2DTime* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2DTime_finalize_w_params(
    UMAA_Common_Measurement_Position2DTime* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Position2DTime_finalize_optional_members(
    UMAA_Common_Measurement_Position2DTime* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Position2DTime_copy(
    UMAA_Common_Measurement_Position2DTime* dst,
    const UMAA_Common_Measurement_Position2DTime* src);

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
        struct type_code< UMAA_Common_Measurement_Position2DTime> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Position2DTime */

