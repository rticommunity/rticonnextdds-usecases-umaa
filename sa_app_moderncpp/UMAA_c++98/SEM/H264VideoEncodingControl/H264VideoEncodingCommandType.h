

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandType_1701855170_h
#define H264VideoEncodingCommandType_1701855170_h

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

static const DDS_Char * const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommand_TOPIC= "UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommand";

extern "C" {

    extern const char *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeTYPENAME;

}

struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeTypeSupport;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeDataWriter;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeDataReader;
#endif
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType 
{
  public:
    typedef struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeDataReader DataReader;
    #endif

    DDS_Boolean   gradualDecoderRefresh ;
    DDS_Long   groupOfPictures ;
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumType   preset ;
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumType   profile ;
    DDS_Boolean   regionOfInterest ;
    DDS_Long   ROI_height ;
    DDS_Double   ROI_highBitRate ;
    DDS_Double   ROI_lowBitRate ;
    DDS_Long   ROI_width ;
    DDS_Long   ROI_x ;
    DDS_Long   ROI_y ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandTypeSeq, UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_initialize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_initialize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_finalize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_finalize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType_copy(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* dst,
    const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType* src);

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
        struct type_code< UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* H264VideoEncodingCommandType */

