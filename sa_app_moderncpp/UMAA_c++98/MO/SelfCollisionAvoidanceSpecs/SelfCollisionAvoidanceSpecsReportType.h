

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceSpecsReportType_742993316_h
#define SelfCollisionAvoidanceSpecsReportType_742993316_h

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

static const DDS_Char * const UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReport_TOPIC= "UMAA::MO::SelfCollisionAvoidanceSpecs::SelfCollisionAvoidanceSpecsReport";

extern "C" {

    extern const char *UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeTYPENAME;

}

struct UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeTypeSupport;
class UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeDataWriter;
class UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeDataReader;
#endif
class UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType 
{
  public:
    typedef struct UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   avoidObstacle ;
    DDS_Boolean   stopOnObstacle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportTypeSeq, UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_initialize(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_initialize_ex(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_initialize_w_params(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_finalize_w_return(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_finalize(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_finalize_ex(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_finalize_w_params(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_finalize_optional_members(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType_copy(
    UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* dst,
    const UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType* src);

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
        struct type_code< UMAA_MO_SelfCollisionAvoidanceSpecs_SelfCollisionAvoidanceSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SelfCollisionAvoidanceSpecsReportType */

