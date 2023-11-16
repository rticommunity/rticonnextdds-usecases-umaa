

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeCommandAckReportType_1871923554_h
#define PlatformModeCommandAckReportType_1871923554_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_PlatformModeControl_PlatformModeCommandAckReport_TOPIC= "UMAA::SO::PlatformModeControl::PlatformModeCommandAckReport";

extern "C" {

    extern const char *UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeTYPENAME;

}

struct UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeTypeSupport;
class UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeDataWriter;
class UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeDataReader;
#endif
class UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType 
{
  public:
    typedef struct UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumType   mode ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportTypeSeq, UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_initialize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_initialize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_initialize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_finalize_w_return(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_finalize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_finalize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_finalize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_finalize_optional_members(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType_copy(
    UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* dst,
    const UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType* src);

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
        struct type_code< UMAA_SO_PlatformModeControl_PlatformModeCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlatformModeCommandAckReportType */

