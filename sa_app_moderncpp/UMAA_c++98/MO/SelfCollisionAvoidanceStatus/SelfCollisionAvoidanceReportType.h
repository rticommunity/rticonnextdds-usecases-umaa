

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceReportType_720018204_h
#define SelfCollisionAvoidanceReportType_720018204_h

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

static const DDS_Char * const UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReport_TOPIC= "UMAA::MO::SelfCollisionAvoidanceStatus::SelfCollisionAvoidanceReport";

extern "C" {

    extern const char *UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeTYPENAME;

}

struct UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeTypeSupport;
class UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeDataWriter;
class UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeDataReader;
#endif
class UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType 
{
  public:
    typedef struct UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeDataWriter DataWriter;
    typedef UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportTypeSeq, UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_initialize(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_initialize_ex(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_initialize_w_params(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_finalize_w_return(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_finalize(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_finalize_ex(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_finalize_w_params(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_finalize_optional_members(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType_copy(
    UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* dst,
    const UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType* src);

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
        struct type_code< UMAA_MO_SelfCollisionAvoidanceStatus_SelfCollisionAvoidanceReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SelfCollisionAvoidanceReportType */

