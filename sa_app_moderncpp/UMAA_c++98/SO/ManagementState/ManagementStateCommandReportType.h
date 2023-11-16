

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManagementStateCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ManagementStateCommandReportType_1794630772_h
#define ManagementStateCommandReportType_1794630772_h

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

static const DDS_Char * const UMAA_SO_ManagementState_ManagementStateCommandReport_TOPIC= "UMAA::SO::ManagementState::ManagementStateCommandReport";

extern "C" {

    extern const char *UMAA_SO_ManagementState_ManagementStateCommandReportTypeTYPENAME;

}

struct UMAA_SO_ManagementState_ManagementStateCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ManagementState_ManagementStateCommandReportTypeTypeSupport;
class UMAA_SO_ManagementState_ManagementStateCommandReportTypeDataWriter;
class UMAA_SO_ManagementState_ManagementStateCommandReportTypeDataReader;
#endif
class UMAA_SO_ManagementState_ManagementStateCommandReportType 
{
  public:
    typedef struct UMAA_SO_ManagementState_ManagementStateCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ManagementState_ManagementStateCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ManagementState_ManagementStateCommandReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ManagementState_ManagementStateCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ManagementState_ManagementStateCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ManagementState_ManagementStateCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_ManagementStateCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_ManagementStateCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ManagementState_ManagementStateCommandReportTypeSeq, UMAA_SO_ManagementState_ManagementStateCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandReportType_initialize(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandReportType_initialize_ex(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandReportType_initialize_w_params(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandReportType_finalize_w_return(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandReportType_finalize(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandReportType_finalize_ex(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandReportType_finalize_w_params(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandReportType_finalize_optional_members(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandReportType_copy(
    UMAA_SO_ManagementState_ManagementStateCommandReportType* dst,
    const UMAA_SO_ManagementState_ManagementStateCommandReportType* src);

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
        struct type_code< UMAA_SO_ManagementState_ManagementStateCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ManagementStateCommandReportType */

