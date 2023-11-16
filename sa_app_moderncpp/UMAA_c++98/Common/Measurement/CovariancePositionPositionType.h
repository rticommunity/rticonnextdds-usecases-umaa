

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionPositionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovariancePositionPositionType_1049099530_h
#define CovariancePositionPositionType_1049099530_h

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

    extern const char *UMAA_Common_Measurement_CovariancePositionPositionTypeTYPENAME;

}

struct UMAA_Common_Measurement_CovariancePositionPositionTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_CovariancePositionPositionTypeTypeSupport;
class UMAA_Common_Measurement_CovariancePositionPositionTypeDataWriter;
class UMAA_Common_Measurement_CovariancePositionPositionTypeDataReader;
#endif
class UMAA_Common_Measurement_CovariancePositionPositionType 
{
  public:
    typedef struct UMAA_Common_Measurement_CovariancePositionPositionTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_CovariancePositionPositionTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_CovariancePositionPositionTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_CovariancePositionPositionTypeDataReader DataReader;
    #endif

    DDS_Double   * pdPd ;
    DDS_Double   * pePd ;
    DDS_Double   pePe ;
    DDS_Double   * pnPd ;
    DDS_Double   pnPe ;
    DDS_Double   pnPn ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovariancePositionPositionType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovariancePositionPositionType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovariancePositionPositionType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovariancePositionPositionType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovariancePositionPositionTypeSeq, UMAA_Common_Measurement_CovariancePositionPositionType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovariancePositionPositionType_initialize(
    UMAA_Common_Measurement_CovariancePositionPositionType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovariancePositionPositionType_initialize_ex(
    UMAA_Common_Measurement_CovariancePositionPositionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovariancePositionPositionType_initialize_w_params(
    UMAA_Common_Measurement_CovariancePositionPositionType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovariancePositionPositionType_finalize_w_return(
    UMAA_Common_Measurement_CovariancePositionPositionType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovariancePositionPositionType_finalize(
    UMAA_Common_Measurement_CovariancePositionPositionType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovariancePositionPositionType_finalize_ex(
    UMAA_Common_Measurement_CovariancePositionPositionType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovariancePositionPositionType_finalize_w_params(
    UMAA_Common_Measurement_CovariancePositionPositionType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovariancePositionPositionType_finalize_optional_members(
    UMAA_Common_Measurement_CovariancePositionPositionType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovariancePositionPositionType_copy(
    UMAA_Common_Measurement_CovariancePositionPositionType* dst,
    const UMAA_Common_Measurement_CovariancePositionPositionType* src);

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
        struct type_code< UMAA_Common_Measurement_CovariancePositionPositionType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CovariancePositionPositionType */

