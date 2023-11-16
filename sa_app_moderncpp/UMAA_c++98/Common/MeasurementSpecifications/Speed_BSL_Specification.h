

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Speed_BSL_Specification.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Speed_BSL_Specification_9383876_h
#define Speed_BSL_Specification_9383876_h

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

    extern const char *UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationTYPENAME;

}

struct UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationTypeSupport;
class UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationDataWriter;
class UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationDataReader;
#endif
class UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification 
{
  public:
    typedef struct UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationTypeSupport TypeSupport;
    typedef UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationDataWriter DataWriter;
    typedef UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationDataReader DataReader;
    #endif

    DDS_DoubleSeq  lowerLimit ;
    DDS_Double   stepSize ;
    DDS_DoubleSeq  upperLimit ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementSpecifications_Speed_BSL_SpecificationSeq, UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_initialize(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_initialize_ex(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_initialize_w_params(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_finalize_w_return(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_finalize(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_finalize_ex(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_finalize_w_params(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_finalize_optional_members(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification_copy(
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* dst,
    const UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification* src);

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
        struct type_code< UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Speed_BSL_Specification */

