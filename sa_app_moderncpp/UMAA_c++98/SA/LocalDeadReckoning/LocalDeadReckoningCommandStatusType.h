

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDeadReckoningCommandStatusType_2096002366_h
#define LocalDeadReckoningCommandStatusType_2096002366_h

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

static const DDS_Char * const UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatus_TOPIC= "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandStatus";

extern "C" {

    extern const char *UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeTYPENAME;

}

struct UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeTypeSupport;
class UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeDataWriter;
class UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeDataReader;
#endif
class UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType 
{
  public:
    typedef struct UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusTypeSeq, UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_initialize(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_initialize_ex(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_initialize_w_params(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_finalize_w_return(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_finalize(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_finalize_ex(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_finalize_w_params(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_finalize_optional_members(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType_copy(
    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* dst,
    const UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType* src);

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
        struct type_code< UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalDeadReckoningCommandStatusType */

