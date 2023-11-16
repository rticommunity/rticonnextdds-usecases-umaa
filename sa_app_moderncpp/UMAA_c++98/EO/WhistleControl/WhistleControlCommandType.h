

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlCommandType_850798814_h
#define WhistleControlCommandType_850798814_h

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
#include "UMAA/Common/Propulsion/WhistlePropertiesType.h"

static const DDS_Char * const UMAA_EO_WhistleControl_WhistleControlCommand_TOPIC= "UMAA::EO::WhistleControl::WhistleControlCommand";

extern "C" {

    extern const char *UMAA_EO_WhistleControl_WhistleControlCommandTypeTYPENAME;

}

struct UMAA_EO_WhistleControl_WhistleControlCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_WhistleControl_WhistleControlCommandTypeTypeSupport;
class UMAA_EO_WhistleControl_WhistleControlCommandTypeDataWriter;
class UMAA_EO_WhistleControl_WhistleControlCommandTypeDataReader;
#endif
class UMAA_EO_WhistleControl_WhistleControlCommandType 
{
  public:
    typedef struct UMAA_EO_WhistleControl_WhistleControlCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_WhistleControl_WhistleControlCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   status ;
    UMAA_Common_Propulsion_WhistlePropertiesType   * whistleProperties ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_WhistleControl_WhistleControlCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_WhistleControl_WhistleControlCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_WhistleControl_WhistleControlCommandTypeSeq, UMAA_EO_WhistleControl_WhistleControlCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandType_initialize(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandType_initialize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandType_initialize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandType_finalize_w_return(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandType_finalize(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandType_finalize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandType_finalize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandType_finalize_optional_members(
    UMAA_EO_WhistleControl_WhistleControlCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandType_copy(
    UMAA_EO_WhistleControl_WhistleControlCommandType* dst,
    const UMAA_EO_WhistleControl_WhistleControlCommandType* src);

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
        struct type_code< UMAA_EO_WhistleControl_WhistleControlCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WhistleControlCommandType */

