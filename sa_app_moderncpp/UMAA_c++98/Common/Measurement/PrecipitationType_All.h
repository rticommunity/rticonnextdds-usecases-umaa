

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrecipitationType_All.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrecipitationType_All_849259551_h
#define PrecipitationType_All_849259551_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_PrecipitationType_AllTYPENAME;

}

struct UMAA_Common_Measurement_PrecipitationType_AllSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_PrecipitationType_AllTypeSupport;
class UMAA_Common_Measurement_PrecipitationType_AllDataWriter;
class UMAA_Common_Measurement_PrecipitationType_AllDataReader;
#endif
class UMAA_Common_Measurement_PrecipitationType_All 
{
  public:
    typedef struct UMAA_Common_Measurement_PrecipitationType_AllSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_PrecipitationType_AllTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_PrecipitationType_AllDataWriter DataWriter;
    typedef UMAA_Common_Measurement_PrecipitationType_AllDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq  domain ;
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType   setPoint ;
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType   value ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PrecipitationType_All_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PrecipitationType_All_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PrecipitationType_All_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PrecipitationType_All_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PrecipitationType_AllSeq, UMAA_Common_Measurement_PrecipitationType_All);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PrecipitationType_All_initialize(
    UMAA_Common_Measurement_PrecipitationType_All* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PrecipitationType_All_initialize_ex(
    UMAA_Common_Measurement_PrecipitationType_All* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PrecipitationType_All_initialize_w_params(
    UMAA_Common_Measurement_PrecipitationType_All* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PrecipitationType_All_finalize_w_return(
    UMAA_Common_Measurement_PrecipitationType_All* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PrecipitationType_All_finalize(
    UMAA_Common_Measurement_PrecipitationType_All* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PrecipitationType_All_finalize_ex(
    UMAA_Common_Measurement_PrecipitationType_All* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(
    UMAA_Common_Measurement_PrecipitationType_All* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PrecipitationType_All_finalize_optional_members(
    UMAA_Common_Measurement_PrecipitationType_All* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PrecipitationType_All_copy(
    UMAA_Common_Measurement_PrecipitationType_All* dst,
    const UMAA_Common_Measurement_PrecipitationType_All* src);

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
        struct type_code< UMAA_Common_Measurement_PrecipitationType_All> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PrecipitationType_All */

