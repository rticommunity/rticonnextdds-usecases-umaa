

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleIDReportType_871172610_h
#define VehicleIDReportType_871172610_h

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

static const DDS_Char * const UMAA_MM_ResourceIdentification_VehicleIDReport_TOPIC= "UMAA::MM::ResourceIdentification::VehicleIDReport";

extern "C" {

    extern const char *UMAA_MM_ResourceIdentification_VehicleIDReportTypeTYPENAME;

}

struct UMAA_MM_ResourceIdentification_VehicleIDReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ResourceIdentification_VehicleIDReportTypeTypeSupport;
class UMAA_MM_ResourceIdentification_VehicleIDReportTypeDataWriter;
class UMAA_MM_ResourceIdentification_VehicleIDReportTypeDataReader;
#endif
class UMAA_MM_ResourceIdentification_VehicleIDReportType 
{
  public:
    typedef struct UMAA_MM_ResourceIdentification_VehicleIDReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ResourceIdentification_VehicleIDReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ResourceIdentification_VehicleIDReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ResourceIdentification_VehicleIDReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumType   domain ;
    DDS_Boolean   isControlTransferCapable ;
    DDS_Char *   make ;
    DDS_Char *   model ;
    DDS_Char *   name ;
    DDS_Char *   protocol ;
    DDS_Char *   type ;
    UMAA_Common_Measurement_NumericGUID   vehicleNumber ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ResourceIdentification_VehicleIDReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ResourceIdentification_VehicleIDReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ResourceIdentification_VehicleIDReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ResourceIdentification_VehicleIDReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ResourceIdentification_VehicleIDReportTypeSeq, UMAA_MM_ResourceIdentification_VehicleIDReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_VehicleIDReportType_initialize(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_VehicleIDReportType_initialize_ex(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_VehicleIDReportType_initialize_w_params(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_VehicleIDReportType_finalize_w_return(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_VehicleIDReportType_finalize(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_VehicleIDReportType_finalize_ex(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_VehicleIDReportType_finalize_w_params(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_VehicleIDReportType_finalize_optional_members(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_VehicleIDReportType_copy(
    UMAA_MM_ResourceIdentification_VehicleIDReportType* dst,
    const UMAA_MM_ResourceIdentification_VehicleIDReportType* src);

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
        struct type_code< UMAA_MM_ResourceIdentification_VehicleIDReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VehicleIDReportType */

