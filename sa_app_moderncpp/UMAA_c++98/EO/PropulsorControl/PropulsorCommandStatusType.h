

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorCommandStatusType_1605699435_h
#define PropulsorCommandStatusType_1605699435_h

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

static const DDS_Char * const UMAA_EO_PropulsorControl_PropulsorCommandStatus_TOPIC= "UMAA::EO::PropulsorControl::PropulsorCommandStatus";

extern "C" {

    extern const char *UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeTYPENAME;

}

struct UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeTypeSupport;
class UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeDataWriter;
class UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeDataReader;
#endif
class UMAA_EO_PropulsorControl_PropulsorCommandStatusType 
{
  public:
    typedef struct UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PropulsorControl_PropulsorCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PropulsorControl_PropulsorCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorControl_PropulsorCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PropulsorControl_PropulsorCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PropulsorControl_PropulsorCommandStatusTypeSeq, UMAA_EO_PropulsorControl_PropulsorCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandStatusType_initialize(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandStatusType_initialize_ex(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandStatusType_initialize_w_params(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandStatusType_finalize_w_return(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandStatusType_finalize(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandStatusType_finalize_ex(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandStatusType_finalize_w_params(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PropulsorControl_PropulsorCommandStatusType_finalize_optional_members(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PropulsorControl_PropulsorCommandStatusType_copy(
    UMAA_EO_PropulsorControl_PropulsorCommandStatusType* dst,
    const UMAA_EO_PropulsorControl_PropulsorCommandStatusType* src);

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
        struct type_code< UMAA_EO_PropulsorControl_PropulsorCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsorCommandStatusType */

