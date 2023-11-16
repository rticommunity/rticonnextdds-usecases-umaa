

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TamperDetectionReportType_1847949767_h
#define TamperDetectionReportType_1847949767_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SO_TamperDetectionStatus_TamperDetectionReport_TOPIC= "UMAA::SO::TamperDetectionStatus::TamperDetectionReport";

extern "C" {

    extern const char *UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeTYPENAME;

}

struct UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeTypeSupport;
class UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeDataWriter;
class UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeDataReader;
#endif
class UMAA_SO_TamperDetectionStatus_TamperDetectionReportType 
{
  public:
    typedef struct UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeDataWriter DataWriter;
    typedef UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeDataReader DataReader;
    #endif

    DDS_Char *   descriptor ;
    DDS_Boolean   electricalTamper ;
    DDS_Boolean   hardwareTamper ;
    DDS_Boolean   networkInstrusion ;
    DDS_Boolean   otherTamper ;
    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeSeq, UMAA_SO_TamperDetectionStatus_TamperDetectionReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_initialize(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_initialize_ex(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_initialize_w_params(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_finalize_w_return(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_finalize(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_finalize_ex(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_finalize_w_params(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_finalize_optional_members(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionStatus_TamperDetectionReportType_copy(
    UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* dst,
    const UMAA_SO_TamperDetectionStatus_TamperDetectionReportType* src);

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
        struct type_code< UMAA_SO_TamperDetectionStatus_TamperDetectionReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TamperDetectionReportType */

