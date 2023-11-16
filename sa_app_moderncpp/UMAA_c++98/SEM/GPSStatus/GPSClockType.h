

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSClockType_1708034919_h
#define GPSClockType_1708034919_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

extern "C" {

    extern const char *UMAA_SEM_GPSStatus_GPSClockTypeTYPENAME;

}

struct UMAA_SEM_GPSStatus_GPSClockTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSStatus_GPSClockTypeTypeSupport;
class UMAA_SEM_GPSStatus_GPSClockTypeDataWriter;
class UMAA_SEM_GPSStatus_GPSClockTypeDataReader;
#endif
class UMAA_SEM_GPSStatus_GPSClockType 
{
  public:
    typedef struct UMAA_SEM_GPSStatus_GPSClockTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSStatus_GPSClockTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSStatus_GPSClockTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSStatus_GPSClockTypeDataReader DataReader;
    #endif

    DDS_Long   * bias ;
    DDS_Long   * biasUncertianty ;
    DDS_Long   * drift ;
    DDS_Long   * driftUncertainty ;
    DDS_Long   * elapsedRealtime ;
    DDS_Long   * elapsedRealtimeUncertainty ;
    DDS_Long   * fullBias ;
    DDS_Long   * hardwareClockDiscontinuityCount ;
    DDS_Long   * leapSecond ;
    DDS_Double   * referenceCarrierFrequency ;
    DDS_Char *   referenceCodeTypeFor ;
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType   * referenceConstellationType ;
    DDS_Long   * time ;
    DDS_Double   * timeUncertainty ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSStatus_GPSClockType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSClockType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSClockType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSClockType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSStatus_GPSClockTypeSeq, UMAA_SEM_GPSStatus_GPSClockType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize(
    UMAA_SEM_GPSStatus_GPSClockType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSClockType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSClockType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSClockType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSClockType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSClockType_finalize(
    UMAA_SEM_GPSStatus_GPSClockType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSClockType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSClockType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSClockType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSClockType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSClockType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSClockType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSClockType_copy(
    UMAA_SEM_GPSStatus_GPSClockType* dst,
    const UMAA_SEM_GPSStatus_GPSClockType* src);

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
        struct type_code< UMAA_SEM_GPSStatus_GPSClockType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSClockType */

