

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactType_1508709596_h
#define ContactType_1508709596_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/CovariancePositionPositionType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Polygon.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/Measurement/RMSDistanceErrorType.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SA_ContactStatus_ContactTypeTYPENAME;

}

struct UMAA_SA_ContactStatus_ContactTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactStatus_ContactTypeTypeSupport;
class UMAA_SA_ContactStatus_ContactTypeDataWriter;
class UMAA_SA_ContactStatus_ContactTypeDataReader;
#endif
class UMAA_SA_ContactStatus_ContactType 
{
  public:
    typedef struct UMAA_SA_ContactStatus_ContactTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactStatus_ContactTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ContactStatus_ContactTypeDataWriter DataWriter;
    typedef UMAA_SA_ContactStatus_ContactTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Polygon   area ;
    DDS_Char *   callSign ;
    DDS_Char *   contactName ;
    DDS_Double   course ;
    UMAA_Common_Measurement_Position2D   * CPA ;
    UMAA_Common_Measurement_DateTime   * CPATime ;
    DDS_Double   diameter ;
    UMAA_Common_Measurement_Altitude_MSL   elevation ;
    UMAA_Common_Measurement_RMSDistanceErrorType   elevationError ;
    DDS_Double   heading ;
    DDS_Double   * height ;
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType   kind ;
    DDS_Double   * length ;
    DDS_Char *   MMSINumber ;
    DDS_Char *   originator ;
    UMAA_Common_Measurement_Position2D   position ;
    UMAA_Common_Measurement_CovariancePositionPositionType   positionCovariance ;
    DDS_Char *   SIDC ;
    UMAA_Common_Measurement_NumericGUIDSeq  source ;
    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType   sourceIndicator ;
    DDS_Double   speedOverGround ;
    UMAA_Common_Measurement_DateTime   timeFirstAcquired ;
    UMAA_Common_Measurement_DateTime   * timeLost ;
    DDS_Double   * width ;
    UMAA_Common_Measurement_NumericGUID   featureID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactStatus_ContactType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactStatus_ContactType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactStatus_ContactTypeSeq, UMAA_SA_ContactStatus_ContactType);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactType_initialize(
    UMAA_SA_ContactStatus_ContactType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactType_initialize_ex(
    UMAA_SA_ContactStatus_ContactType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactType_initialize_w_params(
    UMAA_SA_ContactStatus_ContactType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactType_finalize_w_return(
    UMAA_SA_ContactStatus_ContactType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactType_finalize(
    UMAA_SA_ContactStatus_ContactType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactType_finalize_ex(
    UMAA_SA_ContactStatus_ContactType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactType_finalize_w_params(
    UMAA_SA_ContactStatus_ContactType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactType_finalize_optional_members(
    UMAA_SA_ContactStatus_ContactType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactType_copy(
    UMAA_SA_ContactStatus_ContactType* dst,
    const UMAA_SA_ContactStatus_ContactType* src);

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
        struct type_code< UMAA_SA_ContactStatus_ContactType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactType */

