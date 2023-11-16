

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemIDCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemIDCommandReportType_982994837_h
#define ControlSystemIDCommandReportType_982994837_h

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

static const DDS_Char * const UMAA_MM_ControlSystemID_ControlSystemIDCommandReport_TOPIC= "UMAA::MM::ControlSystemID::ControlSystemIDCommandReport";

extern "C" {

    extern const char *UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeTYPENAME;

}

struct UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeTypeSupport;
class UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeDataWriter;
class UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeDataReader;
#endif
class UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType 
{
  public:
    typedef struct UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlSystemID_ControlSystemIDCommandReportTypeSeq, UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_initialize(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_initialize_ex(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_initialize_w_params(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_finalize_w_return(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_finalize(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_finalize_ex(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_finalize_w_params(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_finalize_optional_members(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType_copy(
    UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* dst,
    const UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType* src);

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
        struct type_code< UMAA_MM_ControlSystemID_ControlSystemIDCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlSystemIDCommandReportType */

