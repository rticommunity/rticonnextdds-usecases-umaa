

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandStatusType_1193906899_h
#define GlobalDeadReckoningCommandStatusType_1193906899_h

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

static const DDS_Char * const UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatus_TOPIC= "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandStatus";

extern "C" {

    extern const char *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeTYPENAME;

}

struct UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeTypeSupport;
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeDataWriter;
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeDataReader;
#endif
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType 
{
  public:
    typedef struct UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusTypeSeq, UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_initialize(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_initialize_ex(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_initialize_w_params(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_finalize_w_return(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_finalize(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_finalize_ex(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_finalize_w_params(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_finalize_optional_members(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType_copy(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* dst,
    const UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType* src);

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
        struct type_code< UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDeadReckoningCommandStatusType */

