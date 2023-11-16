

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityVelocityType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceVelocityVelocityType_542407613_h
#define CovarianceVelocityVelocityType_542407613_h

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

    extern const char *UMAA_Common_Measurement_CovarianceVelocityVelocityTypeTYPENAME;

}

struct UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_CovarianceVelocityVelocityTypeTypeSupport;
class UMAA_Common_Measurement_CovarianceVelocityVelocityTypeDataWriter;
class UMAA_Common_Measurement_CovarianceVelocityVelocityTypeDataReader;
#endif
class UMAA_Common_Measurement_CovarianceVelocityVelocityType 
{
  public:
    typedef struct UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_CovarianceVelocityVelocityTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_CovarianceVelocityVelocityTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_CovarianceVelocityVelocityTypeDataReader DataReader;
    #endif

    DDS_Double   * vdVd ;
    DDS_Double   * veVd ;
    DDS_Double   veVe ;
    DDS_Double   * vnVd ;
    DDS_Double   vnVe ;
    DDS_Double   vnVn ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq, UMAA_Common_Measurement_CovarianceVelocityVelocityType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_ex(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_return(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_ex(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_optional_members(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_copy(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* dst,
    const UMAA_Common_Measurement_CovarianceVelocityVelocityType* src);

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
        struct type_code< UMAA_Common_Measurement_CovarianceVelocityVelocityType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CovarianceVelocityVelocityType */

