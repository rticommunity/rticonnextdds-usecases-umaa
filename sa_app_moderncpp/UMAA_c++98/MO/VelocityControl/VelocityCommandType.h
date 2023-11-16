

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityCommandType_2093809857_h
#define VelocityCommandType_2093809857_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/OrientationVelocity3D.h"
#include "UMAA/Common/Measurement/Velocity3D_PlatformXYZ.h"

static const DDS_Char * const UMAA_MO_VelocityControl_VelocityCommand_TOPIC= "UMAA::MO::VelocityControl::VelocityCommand";

extern "C" {

    extern const char *UMAA_MO_VelocityControl_VelocityCommandTypeTYPENAME;

}

struct UMAA_MO_VelocityControl_VelocityCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_VelocityControl_VelocityCommandTypeTypeSupport;
class UMAA_MO_VelocityControl_VelocityCommandTypeDataWriter;
class UMAA_MO_VelocityControl_VelocityCommandTypeDataReader;
#endif
class UMAA_MO_VelocityControl_VelocityCommandType 
{
  public:
    typedef struct UMAA_MO_VelocityControl_VelocityCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_VelocityControl_VelocityCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_VelocityControl_VelocityCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_VelocityControl_VelocityCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_OrientationVelocity3D   attitudeRate ;
    UMAA_Common_Measurement_Velocity3D_PlatformXYZ   velocity ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumType   commandType ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_VelocityControl_VelocityCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_VelocityControl_VelocityCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_VelocityControl_VelocityCommandTypeSeq, UMAA_MO_VelocityControl_VelocityCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandType_initialize(
    UMAA_MO_VelocityControl_VelocityCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandType_initialize_ex(
    UMAA_MO_VelocityControl_VelocityCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandType_initialize_w_params(
    UMAA_MO_VelocityControl_VelocityCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandType_finalize_w_return(
    UMAA_MO_VelocityControl_VelocityCommandType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandType_finalize(
    UMAA_MO_VelocityControl_VelocityCommandType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandType_finalize_ex(
    UMAA_MO_VelocityControl_VelocityCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandType_finalize_w_params(
    UMAA_MO_VelocityControl_VelocityCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityCommandType_finalize_optional_members(
    UMAA_MO_VelocityControl_VelocityCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityCommandType_copy(
    UMAA_MO_VelocityControl_VelocityCommandType* dst,
    const UMAA_MO_VelocityControl_VelocityCommandType* src);

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
        struct type_code< UMAA_MO_VelocityControl_VelocityCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VelocityCommandType */

