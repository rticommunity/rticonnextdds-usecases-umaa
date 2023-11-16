

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundingBoxType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BoundingBoxType_139266429_h
#define BoundingBoxType_139266429_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SA_BoundingBox_BoundingBoxTypeTYPENAME;

}

struct UMAA_SA_BoundingBox_BoundingBoxTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_BoundingBox_BoundingBoxTypeTypeSupport;
class UMAA_SA_BoundingBox_BoundingBoxTypeDataWriter;
class UMAA_SA_BoundingBox_BoundingBoxTypeDataReader;
#endif
class UMAA_SA_BoundingBox_BoundingBoxType 
{
  public:
    typedef struct UMAA_SA_BoundingBox_BoundingBoxTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_BoundingBox_BoundingBoxTypeTypeSupport TypeSupport;
    typedef UMAA_SA_BoundingBox_BoundingBoxTypeDataWriter DataWriter;
    typedef UMAA_SA_BoundingBox_BoundingBoxTypeDataReader DataReader;
    #endif

    DDS_Long   lowerRight_x ;
    DDS_Long   lowerRight_y ;
    DDS_Long   upperLeft_x ;
    DDS_Long   upperLeft_y ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_BoundingBox_BoundingBoxType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_BoundingBox_BoundingBoxType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_BoundingBox_BoundingBoxType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_BoundingBox_BoundingBoxType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_BoundingBox_BoundingBoxTypeSeq, UMAA_SA_BoundingBox_BoundingBoxType);

NDDSUSERDllExport
RTIBool UMAA_SA_BoundingBox_BoundingBoxType_initialize(
    UMAA_SA_BoundingBox_BoundingBoxType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_BoundingBox_BoundingBoxType_initialize_ex(
    UMAA_SA_BoundingBox_BoundingBoxType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_BoundingBox_BoundingBoxType_initialize_w_params(
    UMAA_SA_BoundingBox_BoundingBoxType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_BoundingBox_BoundingBoxType_finalize_w_return(
    UMAA_SA_BoundingBox_BoundingBoxType* self);

NDDSUSERDllExport
void UMAA_SA_BoundingBox_BoundingBoxType_finalize(
    UMAA_SA_BoundingBox_BoundingBoxType* self);

NDDSUSERDllExport
void UMAA_SA_BoundingBox_BoundingBoxType_finalize_ex(
    UMAA_SA_BoundingBox_BoundingBoxType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_BoundingBox_BoundingBoxType_finalize_w_params(
    UMAA_SA_BoundingBox_BoundingBoxType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_BoundingBox_BoundingBoxType_finalize_optional_members(
    UMAA_SA_BoundingBox_BoundingBoxType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_BoundingBox_BoundingBoxType_copy(
    UMAA_SA_BoundingBox_BoundingBoxType* dst,
    const UMAA_SA_BoundingBox_BoundingBoxType* src);

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
        struct type_code< UMAA_SA_BoundingBox_BoundingBoxType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BoundingBoxType */

