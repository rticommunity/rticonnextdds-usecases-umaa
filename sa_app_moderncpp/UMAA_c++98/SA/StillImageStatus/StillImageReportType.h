

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageReportType_658394102_h
#define StillImageReportType_658394102_h

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

static const DDS_Char * const UMAA_SA_StillImageStatus_StillImageReport_TOPIC= "UMAA::SA::StillImageStatus::StillImageReport";

extern "C" {

    extern const char *UMAA_SA_StillImageStatus_StillImageReportTypeTYPENAME;

}

struct UMAA_SA_StillImageStatus_StillImageReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_StillImageStatus_StillImageReportTypeTypeSupport;
class UMAA_SA_StillImageStatus_StillImageReportTypeDataWriter;
class UMAA_SA_StillImageStatus_StillImageReportTypeDataReader;
#endif
class UMAA_SA_StillImageStatus_StillImageReportType 
{
  public:
    typedef struct UMAA_SA_StillImageStatus_StillImageReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_StillImageStatus_StillImageReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_StillImageStatus_StillImageReportTypeDataWriter DataWriter;
    typedef UMAA_SA_StillImageStatus_StillImageReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   coordinateSystem ;
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumType   imageFrame ;
    DDS_Char *   URI ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_StillImageStatus_StillImageReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_StillImageStatus_StillImageReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_StillImageStatus_StillImageReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_StillImageStatus_StillImageReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_StillImageStatus_StillImageReportTypeSeq, UMAA_SA_StillImageStatus_StillImageReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageStatus_StillImageReportType_initialize(
    UMAA_SA_StillImageStatus_StillImageReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageStatus_StillImageReportType_initialize_ex(
    UMAA_SA_StillImageStatus_StillImageReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageStatus_StillImageReportType_initialize_w_params(
    UMAA_SA_StillImageStatus_StillImageReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageStatus_StillImageReportType_finalize_w_return(
    UMAA_SA_StillImageStatus_StillImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_StillImageStatus_StillImageReportType_finalize(
    UMAA_SA_StillImageStatus_StillImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_StillImageStatus_StillImageReportType_finalize_ex(
    UMAA_SA_StillImageStatus_StillImageReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_StillImageStatus_StillImageReportType_finalize_w_params(
    UMAA_SA_StillImageStatus_StillImageReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_StillImageStatus_StillImageReportType_finalize_optional_members(
    UMAA_SA_StillImageStatus_StillImageReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageStatus_StillImageReportType_copy(
    UMAA_SA_StillImageStatus_StillImageReportType* dst,
    const UMAA_SA_StillImageStatus_StillImageReportType* src);

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
        struct type_code< UMAA_SA_StillImageStatus_StillImageReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StillImageReportType */

