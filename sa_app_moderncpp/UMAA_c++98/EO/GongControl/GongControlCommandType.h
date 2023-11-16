

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandType_2004822265_h
#define GongControlCommandType_2004822265_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Propulsion/BlastPropertiesType.h"

static const DDS_Char * const UMAA_EO_GongControl_GongControlCommand_TOPIC= "UMAA::EO::GongControl::GongControlCommand";

extern "C" {

    extern const char *UMAA_EO_GongControl_GongControlCommandTypeTYPENAME;

}

struct UMAA_EO_GongControl_GongControlCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_GongControl_GongControlCommandTypeTypeSupport;
class UMAA_EO_GongControl_GongControlCommandTypeDataWriter;
class UMAA_EO_GongControl_GongControlCommandTypeDataReader;
#endif
class UMAA_EO_GongControl_GongControlCommandType 
{
  public:
    typedef struct UMAA_EO_GongControl_GongControlCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_GongControl_GongControlCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_GongControl_GongControlCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_GongControl_GongControlCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_BlastPropertiesType   * blastProperties ;
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   status ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_GongControl_GongControlCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_GongControl_GongControlCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_GongControl_GongControlCommandTypeSeq, UMAA_EO_GongControl_GongControlCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandType_initialize(
    UMAA_EO_GongControl_GongControlCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandType_initialize_ex(
    UMAA_EO_GongControl_GongControlCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandType_initialize_w_params(
    UMAA_EO_GongControl_GongControlCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandType_finalize_w_return(
    UMAA_EO_GongControl_GongControlCommandType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandType_finalize(
    UMAA_EO_GongControl_GongControlCommandType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandType_finalize_ex(
    UMAA_EO_GongControl_GongControlCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandType_finalize_w_params(
    UMAA_EO_GongControl_GongControlCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlCommandType_finalize_optional_members(
    UMAA_EO_GongControl_GongControlCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlCommandType_copy(
    UMAA_EO_GongControl_GongControlCommandType* dst,
    const UMAA_EO_GongControl_GongControlCommandType* src);

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
        struct type_code< UMAA_EO_GongControl_GongControlCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GongControlCommandType */

