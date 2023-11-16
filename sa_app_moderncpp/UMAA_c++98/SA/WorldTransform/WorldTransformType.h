

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WorldTransformType_1861464670_h
#define WorldTransformType_1861464670_h

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

    extern const char *UMAA_SA_WorldTransform_WorldTransformTypeTYPENAME;

}

struct UMAA_SA_WorldTransform_WorldTransformTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_WorldTransform_WorldTransformTypeTypeSupport;
class UMAA_SA_WorldTransform_WorldTransformTypeDataWriter;
class UMAA_SA_WorldTransform_WorldTransformTypeDataReader;
#endif
class UMAA_SA_WorldTransform_WorldTransformType 
{
  public:
    typedef struct UMAA_SA_WorldTransform_WorldTransformTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_WorldTransform_WorldTransformTypeTypeSupport TypeSupport;
    typedef UMAA_SA_WorldTransform_WorldTransformTypeDataWriter DataWriter;
    typedef UMAA_SA_WorldTransform_WorldTransformTypeDataReader DataReader;
    #endif

    DDS_Double   pixelSize_x ;
    DDS_Double   pixelSize_y ;
    DDS_Double   rotation_x ;
    DDS_Double   rotation_y ;
    DDS_Double   upperLeftCoordinate_x ;
    DDS_Double   upperLeftCoordinate_y ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_WorldTransform_WorldTransformType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_WorldTransform_WorldTransformType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WorldTransform_WorldTransformType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WorldTransform_WorldTransformType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_WorldTransform_WorldTransformTypeSeq, UMAA_SA_WorldTransform_WorldTransformType);

NDDSUSERDllExport
RTIBool UMAA_SA_WorldTransform_WorldTransformType_initialize(
    UMAA_SA_WorldTransform_WorldTransformType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_WorldTransform_WorldTransformType_initialize_ex(
    UMAA_SA_WorldTransform_WorldTransformType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_WorldTransform_WorldTransformType_initialize_w_params(
    UMAA_SA_WorldTransform_WorldTransformType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_WorldTransform_WorldTransformType_finalize_w_return(
    UMAA_SA_WorldTransform_WorldTransformType* self);

NDDSUSERDllExport
void UMAA_SA_WorldTransform_WorldTransformType_finalize(
    UMAA_SA_WorldTransform_WorldTransformType* self);

NDDSUSERDllExport
void UMAA_SA_WorldTransform_WorldTransformType_finalize_ex(
    UMAA_SA_WorldTransform_WorldTransformType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_WorldTransform_WorldTransformType_finalize_w_params(
    UMAA_SA_WorldTransform_WorldTransformType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_WorldTransform_WorldTransformType_finalize_optional_members(
    UMAA_SA_WorldTransform_WorldTransformType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_WorldTransform_WorldTransformType_copy(
    UMAA_SA_WorldTransform_WorldTransformType* dst,
    const UMAA_SA_WorldTransform_WorldTransformType* src);

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
        struct type_code< UMAA_SA_WorldTransform_WorldTransformType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WorldTransformType */

