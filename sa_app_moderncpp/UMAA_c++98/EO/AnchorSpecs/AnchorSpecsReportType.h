

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorSpecsReportType_431074103_h
#define AnchorSpecsReportType_431074103_h

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

static const DDS_Char * const UMAA_EO_AnchorSpecs_AnchorSpecsReport_TOPIC= "UMAA::EO::AnchorSpecs::AnchorSpecsReport";

extern "C" {

    extern const char *UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTYPENAME;

}

struct UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTypeSupport;
class UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeDataWriter;
class UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeDataReader;
#endif
class UMAA_EO_AnchorSpecs_AnchorSpecsReportType 
{
  public:
    typedef struct UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   anchorHoldingPower ;
    DDS_Double   anchorHoldingPowerRatio ;
    UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumType   anchorKind ;
    UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumType   anchorLocation ;
    DDS_Double   anchorSize ;
    DDS_Double   rodeLength ;
    DDS_Double   rodeSize ;
    DDS_Double   rodeWorkingLoadLimit ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_AnchorSpecs_AnchorSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_AnchorSpecs_AnchorSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_AnchorSpecs_AnchorSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_AnchorSpecs_AnchorSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeSeq, UMAA_EO_AnchorSpecs_AnchorSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorSpecs_AnchorSpecsReportType_initialize(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorSpecs_AnchorSpecsReportType_initialize_ex(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorSpecs_AnchorSpecsReportType_initialize_w_params(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorSpecs_AnchorSpecsReportType_finalize_w_return(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_AnchorSpecs_AnchorSpecsReportType_finalize(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_AnchorSpecs_AnchorSpecsReportType_finalize_ex(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_AnchorSpecs_AnchorSpecsReportType_finalize_w_params(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_AnchorSpecs_AnchorSpecsReportType_finalize_optional_members(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_AnchorSpecs_AnchorSpecsReportType_copy(
    UMAA_EO_AnchorSpecs_AnchorSpecsReportType* dst,
    const UMAA_EO_AnchorSpecs_AnchorSpecsReportType* src);

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
        struct type_code< UMAA_EO_AnchorSpecs_AnchorSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AnchorSpecsReportType */

