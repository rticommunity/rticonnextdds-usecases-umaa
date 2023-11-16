

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VolumeBallastFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VolumeBallastFlowRateType_1129683267_h
#define VolumeBallastFlowRateType_1129683267_h

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

    extern const char *UMAA_EO_BallastTank_VolumeBallastFlowRateTypeTYPENAME;

}

struct UMAA_EO_BallastTank_VolumeBallastFlowRateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_VolumeBallastFlowRateTypeTypeSupport;
class UMAA_EO_BallastTank_VolumeBallastFlowRateTypeDataWriter;
class UMAA_EO_BallastTank_VolumeBallastFlowRateTypeDataReader;
#endif
class UMAA_EO_BallastTank_VolumeBallastFlowRateType 
{
  public:
    typedef struct UMAA_EO_BallastTank_VolumeBallastFlowRateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_VolumeBallastFlowRateTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_VolumeBallastFlowRateTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_VolumeBallastFlowRateTypeDataReader DataReader;
    #endif

    DDS_Double   volumeBallastFlowRate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_VolumeBallastFlowRateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_VolumeBallastFlowRateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_VolumeBallastFlowRateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_VolumeBallastFlowRateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_VolumeBallastFlowRateTypeSeq, UMAA_EO_BallastTank_VolumeBallastFlowRateType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_VolumeBallastFlowRateType_initialize(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_VolumeBallastFlowRateType_initialize_ex(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_VolumeBallastFlowRateType_initialize_w_params(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_VolumeBallastFlowRateType_finalize_w_return(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_VolumeBallastFlowRateType_finalize(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_VolumeBallastFlowRateType_finalize_ex(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_VolumeBallastFlowRateType_finalize_w_params(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_VolumeBallastFlowRateType_finalize_optional_members(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_VolumeBallastFlowRateType_copy(
    UMAA_EO_BallastTank_VolumeBallastFlowRateType* dst,
    const UMAA_EO_BallastTank_VolumeBallastFlowRateType* src);

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
        struct type_code< UMAA_EO_BallastTank_VolumeBallastFlowRateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VolumeBallastFlowRateType */

