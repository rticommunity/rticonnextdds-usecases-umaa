

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastMassType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastMassType_920017871_h
#define BallastMassType_920017871_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_BallastMassTypeTYPENAME;

}

struct UMAA_Common_Measurement_BallastMassTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_BallastMassTypeTypeSupport;
class UMAA_Common_Measurement_BallastMassTypeDataWriter;
class UMAA_Common_Measurement_BallastMassTypeDataReader;
#endif
class UMAA_Common_Measurement_BallastMassType 
{
  public:
    typedef struct UMAA_Common_Measurement_BallastMassTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_BallastMassTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_BallastMassTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_BallastMassTypeDataReader DataReader;
    #endif

    DDS_Double   mass ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_BallastMassType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_BallastMassType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BallastMassType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BallastMassType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_BallastMassTypeSeq, UMAA_Common_Measurement_BallastMassType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BallastMassType_initialize(
    UMAA_Common_Measurement_BallastMassType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BallastMassType_initialize_ex(
    UMAA_Common_Measurement_BallastMassType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BallastMassType_initialize_w_params(
    UMAA_Common_Measurement_BallastMassType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BallastMassType_finalize_w_return(
    UMAA_Common_Measurement_BallastMassType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_BallastMassType_finalize(
    UMAA_Common_Measurement_BallastMassType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_BallastMassType_finalize_ex(
    UMAA_Common_Measurement_BallastMassType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_BallastMassType_finalize_w_params(
    UMAA_Common_Measurement_BallastMassType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_BallastMassType_finalize_optional_members(
    UMAA_Common_Measurement_BallastMassType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BallastMassType_copy(
    UMAA_Common_Measurement_BallastMassType* dst,
    const UMAA_Common_Measurement_BallastMassType* src);

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
        struct type_code< UMAA_Common_Measurement_BallastMassType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastMassType */

