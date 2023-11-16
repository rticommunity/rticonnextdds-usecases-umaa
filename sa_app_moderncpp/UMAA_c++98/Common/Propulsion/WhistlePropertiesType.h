

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistlePropertiesType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistlePropertiesType_350957921_h
#define WhistlePropertiesType_350957921_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_Common_Propulsion_WhistlePropertiesTypeTYPENAME;

}

struct UMAA_Common_Propulsion_WhistlePropertiesTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_WhistlePropertiesTypeTypeSupport;
class UMAA_Common_Propulsion_WhistlePropertiesTypeDataWriter;
class UMAA_Common_Propulsion_WhistlePropertiesTypeDataReader;
#endif
class UMAA_Common_Propulsion_WhistlePropertiesType 
{
  public:
    typedef struct UMAA_Common_Propulsion_WhistlePropertiesTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_WhistlePropertiesTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_WhistlePropertiesTypeDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_WhistlePropertiesTypeDataReader DataReader;
    #endif

    DDS_Double   restTime ;
    DDS_Double   whistleNumber ;
    UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumType   whistleType ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_WhistlePropertiesType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_WhistlePropertiesType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_WhistlePropertiesType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_WhistlePropertiesType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_WhistlePropertiesTypeSeq, UMAA_Common_Propulsion_WhistlePropertiesType);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_WhistlePropertiesType_initialize(
    UMAA_Common_Propulsion_WhistlePropertiesType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_WhistlePropertiesType_initialize_ex(
    UMAA_Common_Propulsion_WhistlePropertiesType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_WhistlePropertiesType_initialize_w_params(
    UMAA_Common_Propulsion_WhistlePropertiesType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_WhistlePropertiesType_finalize_w_return(
    UMAA_Common_Propulsion_WhistlePropertiesType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_WhistlePropertiesType_finalize(
    UMAA_Common_Propulsion_WhistlePropertiesType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_WhistlePropertiesType_finalize_ex(
    UMAA_Common_Propulsion_WhistlePropertiesType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_WhistlePropertiesType_finalize_w_params(
    UMAA_Common_Propulsion_WhistlePropertiesType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_WhistlePropertiesType_finalize_optional_members(
    UMAA_Common_Propulsion_WhistlePropertiesType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_WhistlePropertiesType_copy(
    UMAA_Common_Propulsion_WhistlePropertiesType* dst,
    const UMAA_Common_Propulsion_WhistlePropertiesType* src);

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
        struct type_code< UMAA_Common_Propulsion_WhistlePropertiesType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WhistlePropertiesType */

