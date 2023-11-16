

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineCommandAckReportType_1882543150_h
#define EngineCommandAckReportType_1882543150_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Propulsion/PropulsionType.h"

static const DDS_Char * const UMAA_EO_EngineControl_EngineCommandAckReport_TOPIC= "UMAA::EO::EngineControl::EngineCommandAckReport";

extern "C" {

    extern const char *UMAA_EO_EngineControl_EngineCommandAckReportTypeTYPENAME;

}

struct UMAA_EO_EngineControl_EngineCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_EngineControl_EngineCommandAckReportTypeTypeSupport;
class UMAA_EO_EngineControl_EngineCommandAckReportTypeDataWriter;
class UMAA_EO_EngineControl_EngineCommandAckReportTypeDataReader;
#endif
class UMAA_EO_EngineControl_EngineCommandAckReportType 
{
  public:
    typedef struct UMAA_EO_EngineControl_EngineCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_EngineControl_EngineCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_EngineControl_EngineCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_EO_EngineControl_EngineCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   * plugState ;
    UMAA_Common_Propulsion_PropulsionType   propulsion ;
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_EngineControl_EngineCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_EngineControl_EngineCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineControl_EngineCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_EngineControl_EngineCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_EngineControl_EngineCommandAckReportTypeSeq, UMAA_EO_EngineControl_EngineCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineControl_EngineCommandAckReportType_initialize(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineControl_EngineCommandAckReportType_initialize_ex(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_EngineControl_EngineCommandAckReportType_initialize_w_params(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineControl_EngineCommandAckReportType_finalize_w_return(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineControl_EngineCommandAckReportType_finalize(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_EngineControl_EngineCommandAckReportType_finalize_ex(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_EngineControl_EngineCommandAckReportType_finalize_w_params(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_EngineControl_EngineCommandAckReportType_finalize_optional_members(
    UMAA_EO_EngineControl_EngineCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_EngineControl_EngineCommandAckReportType_copy(
    UMAA_EO_EngineControl_EngineCommandAckReportType* dst,
    const UMAA_EO_EngineControl_EngineCommandAckReportType* src);

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
        struct type_code< UMAA_EO_EngineControl_EngineCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EngineCommandAckReportType */

