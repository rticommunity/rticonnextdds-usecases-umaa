

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeDataPointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeDataPointType_702923335_h
#define RangeDataPointType_702923335_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/CovariancePolarType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SA_RangeStatus_RangeDataPointTypeTYPENAME;

}

struct UMAA_SA_RangeStatus_RangeDataPointTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_RangeStatus_RangeDataPointTypeTypeSupport;
class UMAA_SA_RangeStatus_RangeDataPointTypeDataWriter;
class UMAA_SA_RangeStatus_RangeDataPointTypeDataReader;
#endif
class UMAA_SA_RangeStatus_RangeDataPointType 
{
  public:
    typedef struct UMAA_SA_RangeStatus_RangeDataPointTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_RangeStatus_RangeDataPointTypeTypeSupport TypeSupport;
    typedef UMAA_SA_RangeStatus_RangeDataPointTypeDataWriter DataWriter;
    typedef UMAA_SA_RangeStatus_RangeDataPointTypeDataReader DataReader;
    #endif

    DDS_Double   bearing ;
    DDS_Boolean   bearingValidity ;
    UMAA_Common_Measurement_CovariancePolarType   dataPointCovariance ;
    DDS_Double   inclination ;
    DDS_Boolean   inclinationValidity ;
    DDS_Double   range ;
    DDS_Boolean   rangeValidity ;
    UMAA_Common_Measurement_NumericGUID   pointID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_RangeStatus_RangeDataPointType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_RangeStatus_RangeDataPointType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeDataPointType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeDataPointType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_RangeStatus_RangeDataPointTypeSeq, UMAA_SA_RangeStatus_RangeDataPointType);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize(
    UMAA_SA_RangeStatus_RangeDataPointType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize_ex(
    UMAA_SA_RangeStatus_RangeDataPointType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize_w_params(
    UMAA_SA_RangeStatus_RangeDataPointType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_return(
    UMAA_SA_RangeStatus_RangeDataPointType* self);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeDataPointType_finalize(
    UMAA_SA_RangeStatus_RangeDataPointType* self);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeDataPointType_finalize_ex(
    UMAA_SA_RangeStatus_RangeDataPointType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_params(
    UMAA_SA_RangeStatus_RangeDataPointType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeDataPointType_finalize_optional_members(
    UMAA_SA_RangeStatus_RangeDataPointType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_copy(
    UMAA_SA_RangeStatus_RangeDataPointType* dst,
    const UMAA_SA_RangeStatus_RangeDataPointType* src);

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
        struct type_code< UMAA_SA_RangeStatus_RangeDataPointType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RangeDataPointType */

