

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorSpecsReportType_985591458_h
#define PropulsorSpecsReportType_985591458_h

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
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_PropulsorSpecs_PropulsorSpecsReport_TOPIC= "UMAA::EO::PropulsorSpecs::PropulsorSpecsReport";

extern "C" {

    extern const char *UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeTYPENAME;

}

struct UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeTypeSupport;
class UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeDataWriter;
class UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeDataReader;
#endif
class UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType 
{
  public:
    typedef struct UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   bearingMax ;
    DDS_Double   bearingMin ;
    DDS_Double   bearingOffset ;
    DDS_Double   maxReverseRPM ;
    DDS_Double   maxRPM ;
    DDS_Double   minReverseRPM ;
    DDS_Double   minRPM ;
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumType   mountType ;
    DDS_Char *   name ;
    DDS_Boolean   OnOffSwitchable ;
    DDS_Double   pitchMax ;
    DDS_Double   pitchMin ;
    DDS_Double   pitchOffset ;
    UMAA_Common_Measurement_Position3D_PlatformXYZ   positionOffset ;
    DDS_Boolean   reversible ;
    DDS_Boolean   thrustControl ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PropulsorSpecs_PropulsorSpecsReportTypeSeq, UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_initialize(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_initialize_ex(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_initialize_w_params(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_finalize_w_return(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_finalize(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_finalize_ex(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_finalize_w_params(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_finalize_optional_members(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType_copy(
    UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* dst,
    const UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType* src);

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
        struct type_code< UMAA_EO_PropulsorSpecs_PropulsorSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsorSpecsReportType */

