

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CourseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CourseType_1901767255_h
#define CourseType_1901767255_h

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

    extern const char *UMAA_Common_Orientation_CourseTypeTYPENAME;

}

struct UMAA_Common_Orientation_CourseTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_CourseTypeTypeSupport;
class UMAA_Common_Orientation_CourseTypeDataWriter;
class UMAA_Common_Orientation_CourseTypeDataReader;
#endif
class UMAA_Common_Orientation_CourseType 
{
  public:
    typedef struct UMAA_Common_Orientation_CourseTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_CourseTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_CourseTypeDataWriter DataWriter;
    typedef UMAA_Common_Orientation_CourseTypeDataReader DataReader;
    #endif

    DDS_Double   course ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_CourseType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_CourseType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_CourseType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_CourseType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_CourseTypeSeq, UMAA_Common_Orientation_CourseType);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_CourseType_initialize(
    UMAA_Common_Orientation_CourseType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_CourseType_initialize_ex(
    UMAA_Common_Orientation_CourseType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_CourseType_initialize_w_params(
    UMAA_Common_Orientation_CourseType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_CourseType_finalize_w_return(
    UMAA_Common_Orientation_CourseType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_CourseType_finalize(
    UMAA_Common_Orientation_CourseType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_CourseType_finalize_ex(
    UMAA_Common_Orientation_CourseType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_CourseType_finalize_w_params(
    UMAA_Common_Orientation_CourseType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_CourseType_finalize_optional_members(
    UMAA_Common_Orientation_CourseType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_CourseType_copy(
    UMAA_Common_Orientation_CourseType* dst,
    const UMAA_Common_Orientation_CourseType* src);

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
        struct type_code< UMAA_Common_Orientation_CourseType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CourseType */

