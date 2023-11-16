

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClientIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ClientIDReportType_309797041_h
#define ClientIDReportType_309797041_h

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

static const DDS_Char * const UMAA_MM_ControlSystemID_ClientIDReport_TOPIC= "UMAA::MM::ControlSystemID::ClientIDReport";

extern "C" {

    extern const char *UMAA_MM_ControlSystemID_ClientIDReportTypeTYPENAME;

}

struct UMAA_MM_ControlSystemID_ClientIDReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlSystemID_ClientIDReportTypeTypeSupport;
class UMAA_MM_ControlSystemID_ClientIDReportTypeDataWriter;
class UMAA_MM_ControlSystemID_ClientIDReportTypeDataReader;
#endif
class UMAA_MM_ControlSystemID_ClientIDReportType 
{
  public:
    typedef struct UMAA_MM_ControlSystemID_ClientIDReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlSystemID_ClientIDReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlSystemID_ClientIDReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlSystemID_ClientIDReportTypeDataReader DataReader;
    #endif

    DDS_Char *   name ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlSystemID_ClientIDReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlSystemID_ClientIDReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ClientIDReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ClientIDReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlSystemID_ClientIDReportTypeSeq, UMAA_MM_ControlSystemID_ClientIDReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ClientIDReportType_initialize(
    UMAA_MM_ControlSystemID_ClientIDReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ClientIDReportType_initialize_ex(
    UMAA_MM_ControlSystemID_ClientIDReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ClientIDReportType_initialize_w_params(
    UMAA_MM_ControlSystemID_ClientIDReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ClientIDReportType_finalize_w_return(
    UMAA_MM_ControlSystemID_ClientIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ClientIDReportType_finalize(
    UMAA_MM_ControlSystemID_ClientIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ClientIDReportType_finalize_ex(
    UMAA_MM_ControlSystemID_ClientIDReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ClientIDReportType_finalize_w_params(
    UMAA_MM_ControlSystemID_ClientIDReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ClientIDReportType_finalize_optional_members(
    UMAA_MM_ControlSystemID_ClientIDReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ClientIDReportType_copy(
    UMAA_MM_ControlSystemID_ClientIDReportType* dst,
    const UMAA_MM_ControlSystemID_ClientIDReportType* src);

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
        struct type_code< UMAA_MM_ControlSystemID_ClientIDReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ClientIDReportType */

