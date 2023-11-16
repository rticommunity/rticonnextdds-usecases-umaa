

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImagePairType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImagePairType_734499926_h
#define FeatureImagePairType_734499926_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SA_FeatureImagePair_FeatureImagePairTypeTYPENAME;

}

struct UMAA_SA_FeatureImagePair_FeatureImagePairTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_FeatureImagePair_FeatureImagePairTypeTypeSupport;
class UMAA_SA_FeatureImagePair_FeatureImagePairTypeDataWriter;
class UMAA_SA_FeatureImagePair_FeatureImagePairTypeDataReader;
#endif
class UMAA_SA_FeatureImagePair_FeatureImagePairType 
{
  public:
    typedef struct UMAA_SA_FeatureImagePair_FeatureImagePairTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_FeatureImagePair_FeatureImagePairTypeTypeSupport TypeSupport;
    typedef UMAA_SA_FeatureImagePair_FeatureImagePairTypeDataWriter DataWriter;
    typedef UMAA_SA_FeatureImagePair_FeatureImagePairTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   featureID ;
    UMAA_Common_Measurement_NumericGUID   imageID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_FeatureImagePair_FeatureImagePairType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_FeatureImagePair_FeatureImagePairType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImagePair_FeatureImagePairType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImagePair_FeatureImagePairType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_FeatureImagePair_FeatureImagePairTypeSeq, UMAA_SA_FeatureImagePair_FeatureImagePairType);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImagePair_FeatureImagePairType_initialize(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImagePair_FeatureImagePairType_initialize_ex(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImagePair_FeatureImagePairType_initialize_w_params(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImagePair_FeatureImagePairType_finalize_w_return(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImagePair_FeatureImagePairType_finalize(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImagePair_FeatureImagePairType_finalize_ex(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_FeatureImagePair_FeatureImagePairType_finalize_w_params(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_FeatureImagePair_FeatureImagePairType_finalize_optional_members(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImagePair_FeatureImagePairType_copy(
    UMAA_SA_FeatureImagePair_FeatureImagePairType* dst,
    const UMAA_SA_FeatureImagePair_FeatureImagePairType* src);

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
        struct type_code< UMAA_SA_FeatureImagePair_FeatureImagePairType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FeatureImagePairType */

