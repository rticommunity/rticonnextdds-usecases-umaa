

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BilgePumpCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BilgePumpCommandAckReportType_332314027_h
#define BilgePumpCommandAckReportType_332314027_h

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

static const DDS_Char * const UMAA_EO_BilgePumpControl_BilgePumpCommandAckReport_TOPIC= "UMAA::EO::BilgePumpControl::BilgePumpCommandAckReport";

extern "C" {

    extern const char *UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeTYPENAME;

}

struct UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeTypeSupport;
class UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeDataWriter;
class UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeDataReader;
#endif
class UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType 
{
  public:
    typedef struct UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportTypeSeq, UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_initialize(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_initialize_ex(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_initialize_w_params(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_finalize_w_return(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_finalize(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_finalize_ex(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_finalize_w_params(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_finalize_optional_members(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType_copy(
    UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* dst,
    const UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType* src);

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
        struct type_code< UMAA_EO_BilgePumpControl_BilgePumpCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BilgePumpCommandAckReportType */

