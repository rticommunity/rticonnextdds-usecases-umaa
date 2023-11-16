

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandReportType_1053810251_h
#define GongControlCommandReportType_1053810251_h

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

static const DDS_Char * const UMAA_EO_GongControl_GongControlCommandReport_TOPIC= "UMAA::EO::GongControl::GongControlCommandReport";

extern "C" {

    extern const char *UMAA_EO_GongControl_GongControlCommandReportTypeTYPENAME;

}

struct UMAA_EO_GongControl_GongControlCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_GongControl_GongControlCommandReportTypeTypeSupport;
class UMAA_EO_GongControl_GongControlCommandReportTypeDataWriter;
class UMAA_EO_GongControl_GongControlCommandReportTypeDataReader;
#endif
class UMAA_EO_GongControl_GongControlCommandReportType 
{
  public:
    typedef struct UMAA_EO_GongControl_GongControlCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_GongControl_GongControlCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_GongControl_GongControlCommandReportTypeDataWriter DataWriter;
    typedef UMAA_EO_GongControl_GongControlCommandReportTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_GongControl_GongControlCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_GongControl_GongControlCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_GongControl_GongControlCommandReportTypeSeq, UMAA_EO_GongControl_GongControlCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize(
    UMAA_EO_GongControl_GongControlCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize_ex(
    UMAA_EO_GongControl_GongControlCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize_w_params(
    UMAA_EO_GongControl_GongControlCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_return(
    UMAA_EO_GongControl_GongControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandReportType_finalize(
    UMAA_EO_GongControl_GongControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandReportType_finalize_ex(
    UMAA_EO_GongControl_GongControlCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_params(
    UMAA_EO_GongControl_GongControlCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandReportType_finalize_optional_members(
    UMAA_EO_GongControl_GongControlCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_copy(
    UMAA_EO_GongControl_GongControlCommandReportType* dst,
    const UMAA_EO_GongControl_GongControlCommandReportType* src);

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
        struct type_code< UMAA_EO_GongControl_GongControlCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GongControlCommandReportType */

