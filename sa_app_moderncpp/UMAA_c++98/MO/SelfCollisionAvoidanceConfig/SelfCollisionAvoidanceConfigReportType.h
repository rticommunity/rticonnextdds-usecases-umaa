

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceConfigReportType_1403327077_h
#define SelfCollisionAvoidanceConfigReportType_1403327077_h

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

static const DDS_Char * const UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReport_TOPIC= "UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReport";

extern "C" {

    extern const char *UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeTYPENAME;

}

struct UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeTypeSupport;
class UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeDataWriter;
class UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeDataReader;
#endif
class UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType 
{
  public:
    typedef struct UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeDataWriter DataWriter;
    typedef UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeDataReader DataReader;
    #endif

    DDS_Long   priority ;
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportTypeSeq, UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_initialize(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_initialize_ex(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_initialize_w_params(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_finalize_w_return(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_finalize(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_finalize_ex(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_finalize_w_params(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_finalize_optional_members(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType_copy(
    UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* dst,
    const UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType* src);

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
        struct type_code< UMAA_MO_SelfCollisionAvoidanceConfig_SelfCollisionAvoidanceConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SelfCollisionAvoidanceConfigReportType */

