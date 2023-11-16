

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReporterCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthReporterCommandType_1912908258_h
#define HealthReporterCommandType_1912908258_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/BuiltInTestStatusType_All.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_HealthReporter_HealthReporterCommand_TOPIC= "UMAA::SO::HealthReporter::HealthReporterCommand";

extern "C" {

    extern const char *UMAA_SO_HealthReporter_HealthReporterCommandTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_HealthReporterCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_HealthReporterCommandTypeTypeSupport;
class UMAA_SO_HealthReporter_HealthReporterCommandTypeDataWriter;
class UMAA_SO_HealthReporter_HealthReporterCommandTypeDataReader;
#endif
class UMAA_SO_HealthReporter_HealthReporterCommandType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_HealthReporterCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_HealthReporterCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_HealthReporterCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_HealthReporterCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_BuiltInTestStatusType_All   builtInTest ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_HealthReporterCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_HealthReporterCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthReporterCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthReporterCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_HealthReporterCommandTypeSeq, UMAA_SO_HealthReporter_HealthReporterCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandType_initialize(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandType_initialize_ex(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandType_initialize_w_params(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandType_finalize_w_return(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandType_finalize(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandType_finalize_ex(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandType_finalize_w_params(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandType_finalize_optional_members(
    UMAA_SO_HealthReporter_HealthReporterCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandType_copy(
    UMAA_SO_HealthReporter_HealthReporterCommandType* dst,
    const UMAA_SO_HealthReporter_HealthReporterCommandType* src);

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
        struct type_code< UMAA_SO_HealthReporter_HealthReporterCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HealthReporterCommandType */

