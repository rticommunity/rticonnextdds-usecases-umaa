

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RenderUselessReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RenderUselessReportType_2024058988_h
#define RenderUselessReportType_2024058988_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SO_RenderUselessStatus_RenderUselessReport_TOPIC= "UMAA::SO::RenderUselessStatus::RenderUselessReport";

extern "C" {

    extern const char *UMAA_SO_RenderUselessStatus_RenderUselessReportTypeTYPENAME;

}

struct UMAA_SO_RenderUselessStatus_RenderUselessReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_RenderUselessStatus_RenderUselessReportTypeTypeSupport;
class UMAA_SO_RenderUselessStatus_RenderUselessReportTypeDataWriter;
class UMAA_SO_RenderUselessStatus_RenderUselessReportTypeDataReader;
#endif
class UMAA_SO_RenderUselessStatus_RenderUselessReportType 
{
  public:
    typedef struct UMAA_SO_RenderUselessStatus_RenderUselessReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_RenderUselessStatus_RenderUselessReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_RenderUselessStatus_RenderUselessReportTypeDataWriter DataWriter;
    typedef UMAA_SO_RenderUselessStatus_RenderUselessReportTypeDataReader DataReader;
    #endif

    DDS_Char *   errorString ;
    UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_RenderUselessStatus_RenderUselessReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_RenderUselessStatus_RenderUselessReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_RenderUselessStatus_RenderUselessReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_RenderUselessStatus_RenderUselessReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_RenderUselessStatus_RenderUselessReportTypeSeq, UMAA_SO_RenderUselessStatus_RenderUselessReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessStatus_RenderUselessReportType_initialize(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessStatus_RenderUselessReportType_initialize_ex(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessStatus_RenderUselessReportType_initialize_w_params(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessStatus_RenderUselessReportType_finalize_w_return(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self);

NDDSUSERDllExport
void UMAA_SO_RenderUselessStatus_RenderUselessReportType_finalize(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self);

NDDSUSERDllExport
void UMAA_SO_RenderUselessStatus_RenderUselessReportType_finalize_ex(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_RenderUselessStatus_RenderUselessReportType_finalize_w_params(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_RenderUselessStatus_RenderUselessReportType_finalize_optional_members(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessStatus_RenderUselessReportType_copy(
    UMAA_SO_RenderUselessStatus_RenderUselessReportType* dst,
    const UMAA_SO_RenderUselessStatus_RenderUselessReportType* src);

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
        struct type_code< UMAA_SO_RenderUselessStatus_RenderUselessReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RenderUselessReportType */

