

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandStatusType_1328411909_h
#define CameraSelectionCommandStatusType_1328411909_h

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

static const DDS_Char * const UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatus_TOPIC= "UMAA::SEM::CameraSelectionControl::CameraSelectionCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeTypeSupport;
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeDataWriter;
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeDataReader;
#endif
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusTypeSeq, UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_initialize(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_initialize_ex(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_initialize_w_params(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_finalize_w_return(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_finalize(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_finalize_ex(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_finalize_w_params(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_finalize_optional_members(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType_copy(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* dst,
    const UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType* src);

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
        struct type_code< UMAA_SEM_CameraSelectionControl_CameraSelectionCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraSelectionCommandStatusType */

