

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityCommandAckReportType_1333374482_h
#define VelocityCommandAckReportType_1333374482_h

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
#include "UMAA/Common/Measurement/OrientationVelocity3D.h"
#include "UMAA/Common/Measurement/Velocity3D_PlatformXYZ.h"

static const DDS_Char * const UMAA_MO_VelocityControl_VelocityCommandAckReport_TOPIC= "UMAA::MO::VelocityControl::VelocityCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_VelocityControl_VelocityCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_VelocityControl_VelocityCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_VelocityControl_VelocityCommandAckReportTypeTypeSupport;
class UMAA_MO_VelocityControl_VelocityCommandAckReportTypeDataWriter;
class UMAA_MO_VelocityControl_VelocityCommandAckReportTypeDataReader;
#endif
class UMAA_MO_VelocityControl_VelocityCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_VelocityControl_VelocityCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_VelocityControl_VelocityCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_VelocityControl_VelocityCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_VelocityControl_VelocityCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_OrientationVelocity3D   attitudeRate ;
    UMAA_Common_Measurement_Velocity3D_PlatformXYZ   velocity ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumType   commandType ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_VelocityControl_VelocityCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_VelocityControl_VelocityCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_VelocityControl_VelocityCommandAckReportTypeSeq, UMAA_MO_VelocityControl_VelocityCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandAckReportType_initialize(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandAckReportType_initialize_ex(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandAckReportType_initialize_w_params(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandAckReportType_finalize_w_return(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandAckReportType_finalize(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandAckReportType_finalize_ex(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandAckReportType_finalize_w_params(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandAckReportType_finalize_optional_members(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandAckReportType_copy(
    UMAA_MO_VelocityControl_VelocityCommandAckReportType* dst,
    const UMAA_MO_VelocityControl_VelocityCommandAckReportType* src);

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
        struct type_code< UMAA_MO_VelocityControl_VelocityCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VelocityCommandAckReportType */

