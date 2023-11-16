

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixReportType_593219773_h
#define GPSFixReportType_593219773_h

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
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2DTime.h"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNED.h"

static const DDS_Char * const UMAA_SEM_GPSFixStatus_GPSFixReport_TOPIC= "UMAA::SEM::GPSFixStatus::GPSFixReport";

extern "C" {

    extern const char *UMAA_SEM_GPSFixStatus_GPSFixReportTypeTYPENAME;

}

struct UMAA_SEM_GPSFixStatus_GPSFixReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSFixStatus_GPSFixReportTypeTypeSupport;
class UMAA_SEM_GPSFixStatus_GPSFixReportTypeDataWriter;
class UMAA_SEM_GPSFixStatus_GPSFixReportTypeDataReader;
#endif
class UMAA_SEM_GPSFixStatus_GPSFixReportType 
{
  public:
    typedef struct UMAA_SEM_GPSFixStatus_GPSFixReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSFixStatus_GPSFixReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSFixStatus_GPSFixReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSFixStatus_GPSFixReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   altitudeMSL ;
    UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumType   GPSFixCommandStatus ;
    DDS_Boolean   GPSLatLongValid ;
    DDS_Double   magneticVariation ;
    UMAA_Common_Measurement_Position2DTime   position2DWithTime ;
    DDS_Double   SOG ;
    DDS_Double   trueCourse ;
    UMAA_Common_Measurement_Velocity3D_PlatformNED   velocity ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSFixStatus_GPSFixReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSFixStatus_GPSFixReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixStatus_GPSFixReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixStatus_GPSFixReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSFixStatus_GPSFixReportTypeSeq, UMAA_SEM_GPSFixStatus_GPSFixReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixReportType_initialize(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixReportType_initialize_ex(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixReportType_initialize_w_params(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixReportType_finalize_w_return(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixReportType_finalize(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixReportType_finalize_ex(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixReportType_finalize_w_params(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSFixStatus_GPSFixReportType_finalize_optional_members(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixStatus_GPSFixReportType_copy(
    UMAA_SEM_GPSFixStatus_GPSFixReportType* dst,
    const UMAA_SEM_GPSFixStatus_GPSFixReportType* src);

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
        struct type_code< UMAA_SEM_GPSFixStatus_GPSFixReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSFixReportType */

