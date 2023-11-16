

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinCommandType_850174333_h
#define FinCommandType_850174333_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_FinControl_FinCommand_TOPIC= "UMAA::EO::FinControl::FinCommand";

extern "C" {

    extern const char *UMAA_EO_FinControl_FinCommandTypeTYPENAME;

}

struct UMAA_EO_FinControl_FinCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_FinControl_FinCommandTypeTypeSupport;
class UMAA_EO_FinControl_FinCommandTypeDataWriter;
class UMAA_EO_FinControl_FinCommandTypeDataReader;
#endif
class UMAA_EO_FinControl_FinCommandType 
{
  public:
    typedef struct UMAA_EO_FinControl_FinCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_FinControl_FinCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_FinControl_FinCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_FinControl_FinCommandTypeDataReader DataReader;
    #endif

    DDS_Double   deflection ;
    DDS_Double   deflectionRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_FinControl_FinCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_FinControl_FinCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinControl_FinCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinControl_FinCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_FinControl_FinCommandTypeSeq, UMAA_EO_FinControl_FinCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandType_initialize(
    UMAA_EO_FinControl_FinCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandType_initialize_ex(
    UMAA_EO_FinControl_FinCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandType_initialize_w_params(
    UMAA_EO_FinControl_FinCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandType_finalize_w_return(
    UMAA_EO_FinControl_FinCommandType* self);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandType_finalize(
    UMAA_EO_FinControl_FinCommandType* self);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandType_finalize_ex(
    UMAA_EO_FinControl_FinCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandType_finalize_w_params(
    UMAA_EO_FinControl_FinCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_FinControl_FinCommandType_finalize_optional_members(
    UMAA_EO_FinControl_FinCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinControl_FinCommandType_copy(
    UMAA_EO_FinControl_FinCommandType* dst,
    const UMAA_EO_FinControl_FinCommandType* src);

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
        struct type_code< UMAA_EO_FinControl_FinCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FinCommandType */

