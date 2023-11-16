

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactManeuverInfluenceReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactManeuverInfluenceReportType_1722537384_h
#define ContactManeuverInfluenceReportType_1722537384_h

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

static const DDS_Char * const UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReport_TOPIC= "UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReport";

extern "C" {

    extern const char *UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeTYPENAME;

}

struct UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeTypeSupport;
class UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeDataWriter;
class UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeDataReader;
#endif
class UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType 
{
  public:
    typedef struct UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeDataWriter DataWriter;
    typedef UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   contactID ;
    UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumType   maneuver ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportTypeSeq, UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_initialize(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_initialize_ex(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_initialize_w_params(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_finalize_w_return(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self);

NDDSUSERDllExport
void UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_finalize(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self);

NDDSUSERDllExport
void UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_finalize_ex(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_finalize_w_params(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_finalize_optional_members(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType_copy(
    UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* dst,
    const UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType* src);

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
        struct type_code< UMAA_MO_ContactManeuverInfluenceStatus_ContactManeuverInfluenceReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactManeuverInfluenceReportType */

