

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Quaternion_1529911878_h
#define Quaternion_1529911878_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *BasicTypes_QuaternionTYPENAME;

}

struct BasicTypes_QuaternionSeq;
#ifndef NDDS_STANDALONE_TYPE
class BasicTypes_QuaternionTypeSupport;
class BasicTypes_QuaternionDataWriter;
class BasicTypes_QuaternionDataReader;
#endif
class BasicTypes_Quaternion 
{
  public:
    typedef struct BasicTypes_QuaternionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypes_QuaternionTypeSupport TypeSupport;
    typedef BasicTypes_QuaternionDataWriter DataWriter;
    typedef BasicTypes_QuaternionDataReader DataReader;
    #endif

    DDS_Double   a ;
    DDS_Double   b ;
    DDS_Double   c ;
    DDS_Double   d ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * BasicTypes_Quaternion_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *BasicTypes_Quaternion_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *BasicTypes_Quaternion_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *BasicTypes_Quaternion_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(BasicTypes_QuaternionSeq, BasicTypes_Quaternion);

NDDSUSERDllExport
RTIBool BasicTypes_Quaternion_initialize(
    BasicTypes_Quaternion* self);

NDDSUSERDllExport
RTIBool BasicTypes_Quaternion_initialize_ex(
    BasicTypes_Quaternion* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool BasicTypes_Quaternion_initialize_w_params(
    BasicTypes_Quaternion* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool BasicTypes_Quaternion_finalize_w_return(
    BasicTypes_Quaternion* self);

NDDSUSERDllExport
void BasicTypes_Quaternion_finalize(
    BasicTypes_Quaternion* self);

NDDSUSERDllExport
void BasicTypes_Quaternion_finalize_ex(
    BasicTypes_Quaternion* self,RTIBool deletePointers);

NDDSUSERDllExport
void BasicTypes_Quaternion_finalize_w_params(
    BasicTypes_Quaternion* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void BasicTypes_Quaternion_finalize_optional_members(
    BasicTypes_Quaternion* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool BasicTypes_Quaternion_copy(
    BasicTypes_Quaternion* dst,
    const BasicTypes_Quaternion* src);

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
        struct type_code< BasicTypes_Quaternion> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Quaternion */

