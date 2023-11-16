

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinCommandAckReportType_1671148820_h
#define FinCommandAckReportType_1671148820_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_FinControl_FinCommandAckReport_TOPIC= "UMAA::EO::FinControl::FinCommandAckReport";

extern "C" {

    extern const char *UMAA_EO_FinControl_FinCommandAckReportTypeTYPENAME;

}

struct UMAA_EO_FinControl_FinCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_FinControl_FinCommandAckReportTypeTypeSupport;
class UMAA_EO_FinControl_FinCommandAckReportTypeDataWriter;
class UMAA_EO_FinControl_FinCommandAckReportTypeDataReader;
#endif
class UMAA_EO_FinControl_FinCommandAckReportType 
{
  public:
    typedef struct UMAA_EO_FinControl_FinCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_FinControl_FinCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_FinControl_FinCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_EO_FinControl_FinCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   deflection ;
    DDS_Double   deflectionRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_FinControl_FinCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_FinControl_FinCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinControl_FinCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinControl_FinCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_FinControl_FinCommandAckReportTypeSeq, UMAA_EO_FinControl_FinCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandAckReportType_initialize(
    UMAA_EO_FinControl_FinCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandAckReportType_initialize_ex(
    UMAA_EO_FinControl_FinCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandAckReportType_initialize_w_params(
    UMAA_EO_FinControl_FinCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandAckReportType_finalize_w_return(
    UMAA_EO_FinControl_FinCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandAckReportType_finalize(
    UMAA_EO_FinControl_FinCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandAckReportType_finalize_ex(
    UMAA_EO_FinControl_FinCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandAckReportType_finalize_w_params(
    UMAA_EO_FinControl_FinCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandAckReportType_finalize_optional_members(
    UMAA_EO_FinControl_FinCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandAckReportType_copy(
    UMAA_EO_FinControl_FinCommandAckReportType* dst,
    const UMAA_EO_FinControl_FinCommandAckReportType* src);

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
        struct type_code< UMAA_EO_FinControl_FinCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FinCommandAckReportType */

