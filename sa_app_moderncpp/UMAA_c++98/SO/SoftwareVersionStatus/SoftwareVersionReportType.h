

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoftwareVersionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SoftwareVersionReportType_1126667748_h
#define SoftwareVersionReportType_1126667748_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReport_TOPIC= "UMAA::SO::SoftwareVersionStatus::SoftwareVersionReport";

extern "C" {

    extern const char *UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeTYPENAME;

}

struct UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeTypeSupport;
class UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeDataWriter;
class UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeDataReader;
#endif
class UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType 
{
  public:
    typedef struct UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeDataWriter DataWriter;
    typedef UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeDataReader DataReader;
    #endif

    DDS_Char *   buildID ;
    DDS_Char *   copyright ;
    UMAA_Common_Measurement_NumericGUID   name ;
    DDS_Char *   softwareDescription ;
    DDS_Char *   version ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   softwareID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeSeq, UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_initialize(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_initialize_ex(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_initialize_w_params(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_finalize_w_return(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self);

NDDSUSERDllExport
void UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_finalize(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self);

NDDSUSERDllExport
void UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_finalize_ex(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_finalize_w_params(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_finalize_optional_members(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType_copy(
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* dst,
    const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType* src);

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
        struct type_code< UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SoftwareVersionReportType */

