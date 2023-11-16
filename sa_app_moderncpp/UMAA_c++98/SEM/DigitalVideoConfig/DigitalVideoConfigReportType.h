

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoConfigReportType_612099485_h
#define DigitalVideoConfigReportType_612099485_h

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
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/SEM/SensorManagement/DigitalSensorErrorType.h"

static const DDS_Char * const UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReport_TOPIC= "UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReport";

extern "C" {

    extern const char *UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeTYPENAME;

}

struct UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeTypeSupport;
class UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeDataWriter;
class UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeDataReader;
#endif
class UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType 
{
  public:
    typedef struct UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType   commsProtocol ;
    DDS_Double   commsRate ;
    UMAA_SEM_SensorManagement_DigitalSensorErrorType   digitalVideoError ;
    UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumType   format ;
    DDS_Double   frameRate ;
    UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumType   frameSize ;
    DDS_Char *   IPaddress ;
    DDS_Long   IPPort ;
    DDS_Double   maxBitRate ;
    DDS_Double   minBitRate ;
    UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumType   transportEncoding ;
    DDS_Char *   URI ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportTypeSeq, UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_initialize(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_initialize_ex(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_initialize_w_params(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_finalize_w_return(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_finalize(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_finalize_ex(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_finalize_w_params(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_finalize_optional_members(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType_copy(
    UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* dst,
    const UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType* src);

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
        struct type_code< UMAA_SEM_DigitalVideoConfig_DigitalVideoConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalVideoConfigReportType */

