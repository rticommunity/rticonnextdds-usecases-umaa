

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioStreamReportType_2058115766_h
#define DigitalAudioStreamReportType_2058115766_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReport_TOPIC= "UMAA::SEM::DigitalAudioStreamStatus::DigitalAudioStreamReport";

extern "C" {

    extern const char *UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeTYPENAME;

}

struct UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeTypeSupport;
class UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeDataWriter;
class UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeDataReader;
#endif
class UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType 
{
  public:
    typedef struct UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   repeat ;
    DDS_Char *   url ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportTypeSeq, UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_initialize(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_initialize_ex(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_initialize_w_params(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_finalize_w_return(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_finalize(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_finalize_ex(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_finalize_w_params(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_finalize_optional_members(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType_copy(
    UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* dst,
    const UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType* src);

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
        struct type_code< UMAA_SEM_DigitalAudioStreamStatus_DigitalAudioStreamReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalAudioStreamReportType */

