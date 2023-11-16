

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorReportType_42171573_h
#define AnchorReportType_42171573_h

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

static const DDS_Char * const UMAA_EO_AnchorStatus_AnchorReport_TOPIC= "UMAA::EO::AnchorStatus::AnchorReport";

extern "C" {

    extern const char *UMAA_EO_AnchorStatus_AnchorReportTypeTYPENAME;

}

struct UMAA_EO_AnchorStatus_AnchorReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_AnchorStatus_AnchorReportTypeTypeSupport;
class UMAA_EO_AnchorStatus_AnchorReportTypeDataWriter;
class UMAA_EO_AnchorStatus_AnchorReportTypeDataReader;
#endif
class UMAA_EO_AnchorStatus_AnchorReportType 
{
  public:
    typedef struct UMAA_EO_AnchorStatus_AnchorReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_AnchorStatus_AnchorReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_AnchorStatus_AnchorReportTypeDataWriter DataWriter;
    typedef UMAA_EO_AnchorStatus_AnchorReportTypeDataReader DataReader;
    #endif

    DDS_Double   rodeLengthPaidOut ;
    UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_AnchorStatus_AnchorReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_AnchorStatus_AnchorReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_AnchorStatus_AnchorReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_AnchorStatus_AnchorReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_AnchorStatus_AnchorReportTypeSeq, UMAA_EO_AnchorStatus_AnchorReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorStatus_AnchorReportType_initialize(
    UMAA_EO_AnchorStatus_AnchorReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorStatus_AnchorReportType_initialize_ex(
    UMAA_EO_AnchorStatus_AnchorReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorStatus_AnchorReportType_initialize_w_params(
    UMAA_EO_AnchorStatus_AnchorReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorStatus_AnchorReportType_finalize_w_return(
    UMAA_EO_AnchorStatus_AnchorReportType* self);

NDDSUSERDllExport
void UMAA_EO_AnchorStatus_AnchorReportType_finalize(
    UMAA_EO_AnchorStatus_AnchorReportType* self);

NDDSUSERDllExport
void UMAA_EO_AnchorStatus_AnchorReportType_finalize_ex(
    UMAA_EO_AnchorStatus_AnchorReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_AnchorStatus_AnchorReportType_finalize_w_params(
    UMAA_EO_AnchorStatus_AnchorReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_AnchorStatus_AnchorReportType_finalize_optional_members(
    UMAA_EO_AnchorStatus_AnchorReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorStatus_AnchorReportType_copy(
    UMAA_EO_AnchorStatus_AnchorReportType* dst,
    const UMAA_EO_AnchorStatus_AnchorReportType* src);

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
        struct type_code< UMAA_EO_AnchorStatus_AnchorReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AnchorReportType */

