

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankSpecsReportType_1206348414_h
#define BallastTankSpecsReportType_1206348414_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_BallastTank_BallastTankSpecsReport_TOPIC= "UMAA::EO::BallastTank::BallastTankSpecsReport";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastTankSpecsReportTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastTankSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastTankSpecsReportTypeTypeSupport;
class UMAA_EO_BallastTank_BallastTankSpecsReportTypeDataWriter;
class UMAA_EO_BallastTank_BallastTankSpecsReportTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastTankSpecsReportType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastTankSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastTankSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastTankSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastTankSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   massCapacity ;
    DDS_Char *   name ;
    DDS_Boolean   trimTank ;
    DDS_Double   volumeCapacity ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastTankSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastTankSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastTankSpecsReportTypeSeq, UMAA_EO_BallastTank_BallastTankSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankSpecsReportType_initialize(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankSpecsReportType_initialize_ex(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankSpecsReportType_initialize_w_params(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankSpecsReportType_finalize_w_return(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankSpecsReportType_finalize(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankSpecsReportType_finalize_ex(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankSpecsReportType_finalize_w_params(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankSpecsReportType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankSpecsReportType_copy(
    UMAA_EO_BallastTank_BallastTankSpecsReportType* dst,
    const UMAA_EO_BallastTank_BallastTankSpecsReportType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastTankSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastTankSpecsReportType */

