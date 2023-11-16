

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HourMeterStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HourMeterStatusType_554661288_h
#define HourMeterStatusType_554661288_h

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

    extern const char *UMAA_SO_HealthReporter_HourMeterStatusTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_HourMeterStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_HourMeterStatusTypeTypeSupport;
class UMAA_SO_HealthReporter_HourMeterStatusTypeDataWriter;
class UMAA_SO_HealthReporter_HourMeterStatusTypeDataReader;
#endif
class UMAA_SO_HealthReporter_HourMeterStatusType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_HourMeterStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_HourMeterStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_HourMeterStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_HourMeterStatusTypeDataReader DataReader;
    #endif

    DDS_Double   elapsedMin ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_HourMeterStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_HourMeterStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HourMeterStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HourMeterStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_HourMeterStatusTypeSeq, UMAA_SO_HealthReporter_HourMeterStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HourMeterStatusType_initialize(
    UMAA_SO_HealthReporter_HourMeterStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HourMeterStatusType_initialize_ex(
    UMAA_SO_HealthReporter_HourMeterStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HourMeterStatusType_initialize_w_params(
    UMAA_SO_HealthReporter_HourMeterStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HourMeterStatusType_finalize_w_return(
    UMAA_SO_HealthReporter_HourMeterStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HourMeterStatusType_finalize(
    UMAA_SO_HealthReporter_HourMeterStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HourMeterStatusType_finalize_ex(
    UMAA_SO_HealthReporter_HourMeterStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HourMeterStatusType_finalize_w_params(
    UMAA_SO_HealthReporter_HourMeterStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HourMeterStatusType_finalize_optional_members(
    UMAA_SO_HealthReporter_HourMeterStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HourMeterStatusType_copy(
    UMAA_SO_HealthReporter_HourMeterStatusType* dst,
    const UMAA_SO_HealthReporter_HourMeterStatusType* src);

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
        struct type_code< UMAA_SO_HealthReporter_HourMeterStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HourMeterStatusType */

