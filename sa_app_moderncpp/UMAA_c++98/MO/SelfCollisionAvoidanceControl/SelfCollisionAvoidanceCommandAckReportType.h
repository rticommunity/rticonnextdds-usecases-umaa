

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceCommandAckReportType_1854435426_h
#define SelfCollisionAvoidanceCommandAckReportType_1854435426_h

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

static const DDS_Char * const UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReport_TOPIC= "UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeTypeSupport;
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeDataWriter;
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeDataReader;
#endif
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Long   priority ;
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportTypeSeq, UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_initialize(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_initialize_ex(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_initialize_w_params(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_finalize_w_return(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_finalize(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_finalize_ex(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_finalize_w_params(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_finalize_optional_members(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType_copy(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* dst,
    const UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType* src);

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
        struct type_code< UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SelfCollisionAvoidanceCommandAckReportType */

