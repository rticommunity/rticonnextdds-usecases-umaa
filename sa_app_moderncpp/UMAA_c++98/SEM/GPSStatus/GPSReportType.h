

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSReportType_832787563_h
#define GPSReportType_832787563_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SEM/GPSStatus/GPSClockType.h"
#include "UMAA/SEM/GPSStatus/GPSSatelliteType.h"

static const DDS_Char * const UMAA_SEM_GPSStatus_GPSReport_TOPIC= "UMAA::SEM::GPSStatus::GPSReport";

extern "C" {

    extern const char *UMAA_SEM_GPSStatus_GPSReportTypeTYPENAME;

}

struct UMAA_SEM_GPSStatus_GPSReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSStatus_GPSReportTypeTypeSupport;
class UMAA_SEM_GPSStatus_GPSReportTypeDataWriter;
class UMAA_SEM_GPSStatus_GPSReportTypeDataReader;
#endif
class UMAA_SEM_GPSStatus_GPSReportType 
{
  public:
    typedef struct UMAA_SEM_GPSStatus_GPSReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSStatus_GPSReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSStatus_GPSReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSStatus_GPSReportTypeDataReader DataReader;
    #endif

    UMAA_SEM_GPSStatus_GPSClockType   clock ;
    DDS_Long   numberSatellitesInView ;
    UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq  satellites ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSStatus_GPSReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSStatus_GPSReportTypeSeq, UMAA_SEM_GPSStatus_GPSReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize(
    UMAA_SEM_GPSStatus_GPSReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSReportType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSReportType_finalize(
    UMAA_SEM_GPSStatus_GPSReportType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSReportType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSReportType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSReportType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSReportType_copy(
    UMAA_SEM_GPSStatus_GPSReportType* dst,
    const UMAA_SEM_GPSStatus_GPSReportType* src);

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
        struct type_code< UMAA_SEM_GPSStatus_GPSReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSReportType */

