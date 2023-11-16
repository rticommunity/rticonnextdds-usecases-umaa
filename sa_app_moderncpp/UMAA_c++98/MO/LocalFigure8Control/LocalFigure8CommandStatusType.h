

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8CommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8CommandStatusType_13981709_h
#define LocalFigure8CommandStatusType_13981709_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatus_TOPIC= "UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatus";

extern "C" {

    extern const char *UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeTYPENAME;

}

struct UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeTypeSupport;
class UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeDataWriter;
class UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeDataReader;
#endif
class UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType 
{
  public:
    typedef struct UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusTypeSeq, UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_initialize(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_initialize_ex(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_initialize_w_params(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_finalize_w_return(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_finalize(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_finalize_ex(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_finalize_w_params(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_finalize_optional_members(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType_copy(
    UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* dst,
    const UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType* src);

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
        struct type_code< UMAA_MO_LocalFigure8Control_LocalFigure8CommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalFigure8CommandStatusType */

