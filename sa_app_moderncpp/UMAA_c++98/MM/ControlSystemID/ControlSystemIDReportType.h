

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemIDReportType_991238338_h
#define ControlSystemIDReportType_991238338_h

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

static const DDS_Char * const UMAA_MM_ControlSystemID_ControlSystemIDReport_TOPIC= "UMAA::MM::ControlSystemID::ControlSystemIDReport";

extern "C" {

    extern const char *UMAA_MM_ControlSystemID_ControlSystemIDReportTypeTYPENAME;

}

struct UMAA_MM_ControlSystemID_ControlSystemIDReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlSystemID_ControlSystemIDReportTypeTypeSupport;
class UMAA_MM_ControlSystemID_ControlSystemIDReportTypeDataWriter;
class UMAA_MM_ControlSystemID_ControlSystemIDReportTypeDataReader;
#endif
class UMAA_MM_ControlSystemID_ControlSystemIDReportType 
{
  public:
    typedef struct UMAA_MM_ControlSystemID_ControlSystemIDReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlSystemID_ControlSystemIDReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlSystemID_ControlSystemIDReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlSystemID_ControlSystemIDReportTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlSystemID_ControlSystemIDReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlSystemID_ControlSystemIDReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ControlSystemIDReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ControlSystemIDReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlSystemID_ControlSystemIDReportTypeSeq, UMAA_MM_ControlSystemID_ControlSystemIDReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDReportType_initialize(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDReportType_initialize_ex(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDReportType_initialize_w_params(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDReportType_finalize_w_return(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDReportType_finalize(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDReportType_finalize_ex(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDReportType_finalize_w_params(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDReportType_finalize_optional_members(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDReportType_copy(
    UMAA_MM_ControlSystemID_ControlSystemIDReportType* dst,
    const UMAA_MM_ControlSystemID_ControlSystemIDReportType* src);

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
        struct type_code< UMAA_MM_ControlSystemID_ControlSystemIDReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlSystemIDReportType */

