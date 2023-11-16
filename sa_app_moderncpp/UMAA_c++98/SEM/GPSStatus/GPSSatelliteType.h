

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSSatelliteType_1384633428_h
#define GPSSatelliteType_1384633428_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SEM_GPSStatus_GPSSatelliteTypeTYPENAME;

}

struct UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSStatus_GPSSatelliteTypeTypeSupport;
class UMAA_SEM_GPSStatus_GPSSatelliteTypeDataWriter;
class UMAA_SEM_GPSStatus_GPSSatelliteTypeDataReader;
#endif
class UMAA_SEM_GPSStatus_GPSSatelliteType 
{
  public:
    typedef struct UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSStatus_GPSSatelliteTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSStatus_GPSSatelliteTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSStatus_GPSSatelliteTypeDataReader DataReader;
    #endif

    DDS_Double   * antennaCarrierNoiseDensity ;
    DDS_Double   * azimuth ;
    DDS_Double   * basebandCarrierNoiseDensity ;
    DDS_Double   * carrierFrequency ;
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType   * constellationType ;
    DDS_Boolean   * containsAlmanacData ;
    DDS_Double   * elevation ;
    DDS_Boolean   * ephemerisData ;
    UMAA_Common_Measurement_NumericGUID   * satelliteId ;
    DDS_Boolean   * usedInFix ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSStatus_GPSSatelliteType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSSatelliteType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq, UMAA_SEM_GPSStatus_GPSSatelliteType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSSatelliteType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_copy(
    UMAA_SEM_GPSStatus_GPSSatelliteType* dst,
    const UMAA_SEM_GPSStatus_GPSSatelliteType* src);

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
        struct type_code< UMAA_SEM_GPSStatus_GPSSatelliteType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSSatelliteType */

