

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonCommandStatusType_1447421576_h
#define LocalRegularPolygonCommandStatusType_1447421576_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatus_TOPIC= "UMAA::MO::LocalRegularPolygonControl::LocalRegularPolygonCommandStatus";

extern "C" {

    extern const char *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeTYPENAME;

}

struct UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeTypeSupport;
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeDataWriter;
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeDataReader;
#endif
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType 
{
  public:
    typedef struct UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusTypeSeq, UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_initialize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_initialize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_initialize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_finalize_w_return(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_finalize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_finalize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_finalize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType_copy(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* dst,
    const UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType* src);

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
        struct type_code< UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRegularPolygonCommandStatusType */

