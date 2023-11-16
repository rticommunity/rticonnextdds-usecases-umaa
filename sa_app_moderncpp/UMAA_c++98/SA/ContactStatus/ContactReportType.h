

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactReportType_494622691_h
#define ContactReportType_494622691_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SA/ContactStatus/ContactType.h"

static const DDS_Char * const UMAA_SA_ContactStatus_ContactReport_TOPIC= "UMAA::SA::ContactStatus::ContactReport";

extern "C" {

    extern const char *UMAA_SA_ContactStatus_ContactReportTypeTYPENAME;

}

struct UMAA_SA_ContactStatus_ContactReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactStatus_ContactReportTypeTypeSupport;
class UMAA_SA_ContactStatus_ContactReportTypeDataWriter;
class UMAA_SA_ContactStatus_ContactReportTypeDataReader;
#endif
class UMAA_SA_ContactStatus_ContactReportType 
{
  public:
    typedef struct UMAA_SA_ContactStatus_ContactReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactStatus_ContactReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ContactStatus_ContactReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ContactStatus_ContactReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   contactsSetID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactStatus_ContactReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactStatus_ContactReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactStatus_ContactReportTypeSeq, UMAA_SA_ContactStatus_ContactReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_initialize(
    UMAA_SA_ContactStatus_ContactReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_initialize_ex(
    UMAA_SA_ContactStatus_ContactReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_initialize_w_params(
    UMAA_SA_ContactStatus_ContactReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_finalize_w_return(
    UMAA_SA_ContactStatus_ContactReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_finalize(
    UMAA_SA_ContactStatus_ContactReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_finalize_ex(
    UMAA_SA_ContactStatus_ContactReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_finalize_w_params(
    UMAA_SA_ContactStatus_ContactReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_finalize_optional_members(
    UMAA_SA_ContactStatus_ContactReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_copy(
    UMAA_SA_ContactStatus_ContactReportType* dst,
    const UMAA_SA_ContactStatus_ContactReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

static const DDS_Char * const UMAA_SA_ContactStatus_ContactReport_ContactsSet_TOPIC= "UMAA::SA::ContactStatus::ContactReport_ContactsSet";

extern "C" {

    extern const char *UMAA_SA_ContactStatus_ContactReportType_ContactsSetTYPENAME;

}

struct UMAA_SA_ContactStatus_ContactReportType_ContactsSetSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactStatus_ContactReportType_ContactsSetTypeSupport;
class UMAA_SA_ContactStatus_ContactReportType_ContactsSetDataWriter;
class UMAA_SA_ContactStatus_ContactReportType_ContactsSetDataReader;
#endif
class UMAA_SA_ContactStatus_ContactReportType_ContactsSet 
: public UMAA_SA_ContactStatus_ContactType{
  public:
    typedef struct UMAA_SA_ContactStatus_ContactReportType_ContactsSetSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactStatus_ContactReportType_ContactsSetTypeSupport TypeSupport;
    typedef UMAA_SA_ContactStatus_ContactReportType_ContactsSetDataWriter DataWriter;
    typedef UMAA_SA_ContactStatus_ContactReportType_ContactsSetDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   contactsSetID ;
    UMAA_Common_Measurement_DateTime   contactsTimestamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactStatus_ContactReportType_ContactsSet_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactStatus_ContactReportType_ContactsSet_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactReportType_ContactsSet_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactReportType_ContactsSet_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactStatus_ContactReportType_ContactsSetSeq, UMAA_SA_ContactStatus_ContactReportType_ContactsSet);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_ContactsSet_initialize(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_ContactsSet_initialize_ex(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_ContactsSet_initialize_w_params(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_ContactsSet_finalize_w_return(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_ContactsSet_finalize(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_ContactsSet_finalize_ex(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_ContactsSet_finalize_w_params(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactReportType_ContactsSet_finalize_optional_members(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactReportType_ContactsSet_copy(
    UMAA_SA_ContactStatus_ContactReportType_ContactsSet* dst,
    const UMAA_SA_ContactStatus_ContactReportType_ContactsSet* src);

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
        struct type_code< UMAA_SA_ContactStatus_ContactReportType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_SA_ContactStatus_ContactReportType_ContactsSet> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactReportType */

