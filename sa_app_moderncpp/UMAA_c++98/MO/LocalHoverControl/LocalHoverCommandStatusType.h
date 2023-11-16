

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverCommandStatusType_1959407533_h
#define LocalHoverCommandStatusType_1959407533_h

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

static const DDS_Char * const UMAA_MO_LocalHoverControl_LocalHoverCommandStatus_TOPIC= "UMAA::MO::LocalHoverControl::LocalHoverCommandStatus";

extern "C" {

    extern const char *UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeTYPENAME;

}

struct UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeTypeSupport;
class UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeDataWriter;
class UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeDataReader;
#endif
class UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType 
{
  public:
    typedef struct UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverControl_LocalHoverCommandStatusTypeSeq, UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_initialize(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_initialize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_initialize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_finalize_w_return(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_finalize(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_finalize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_finalize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_finalize_optional_members(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType_copy(
    UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* dst,
    const UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType* src);

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
        struct type_code< UMAA_MO_LocalHoverControl_LocalHoverCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalHoverCommandStatusType */

