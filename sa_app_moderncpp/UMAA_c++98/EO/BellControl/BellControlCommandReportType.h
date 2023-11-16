

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BellControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BellControlCommandReportType_1845699049_h
#define BellControlCommandReportType_1845699049_h

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
#include "UMAA/Common/Propulsion/BlastPropertiesType.h"

static const DDS_Char * const UMAA_EO_BellControl_BellControlCommandReport_TOPIC= "UMAA::EO::BellControl::BellControlCommandReport";

extern "C" {

    extern const char *UMAA_EO_BellControl_BellControlCommandReportTypeTYPENAME;

}

struct UMAA_EO_BellControl_BellControlCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BellControl_BellControlCommandReportTypeTypeSupport;
class UMAA_EO_BellControl_BellControlCommandReportTypeDataWriter;
class UMAA_EO_BellControl_BellControlCommandReportTypeDataReader;
#endif
class UMAA_EO_BellControl_BellControlCommandReportType 
{
  public:
    typedef struct UMAA_EO_BellControl_BellControlCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BellControl_BellControlCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BellControl_BellControlCommandReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BellControl_BellControlCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_BlastPropertiesType   * blastProperties ;
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BellControl_BellControlCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BellControl_BellControlCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BellControl_BellControlCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BellControl_BellControlCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BellControl_BellControlCommandReportTypeSeq, UMAA_EO_BellControl_BellControlCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlCommandReportType_initialize(
    UMAA_EO_BellControl_BellControlCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlCommandReportType_initialize_ex(
    UMAA_EO_BellControl_BellControlCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlCommandReportType_initialize_w_params(
    UMAA_EO_BellControl_BellControlCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlCommandReportType_finalize_w_return(
    UMAA_EO_BellControl_BellControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlCommandReportType_finalize(
    UMAA_EO_BellControl_BellControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlCommandReportType_finalize_ex(
    UMAA_EO_BellControl_BellControlCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlCommandReportType_finalize_w_params(
    UMAA_EO_BellControl_BellControlCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlCommandReportType_finalize_optional_members(
    UMAA_EO_BellControl_BellControlCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlCommandReportType_copy(
    UMAA_EO_BellControl_BellControlCommandReportType* dst,
    const UMAA_EO_BellControl_BellControlCommandReportType* src);

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
        struct type_code< UMAA_EO_BellControl_BellControlCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BellControlCommandReportType */

