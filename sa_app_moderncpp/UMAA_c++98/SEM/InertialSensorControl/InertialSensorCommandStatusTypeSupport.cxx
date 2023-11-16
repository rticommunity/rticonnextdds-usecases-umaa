
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InertialSensorCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "InertialSensorCommandStatusTypeSupport.h"
#include "InertialSensorCommandStatusTypePlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusType' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeDataWriter
#define TData       UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusType

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeTYPENAME

/* Defines */
#define TDataReader UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeDataReader
#define TDataSeq    UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeSeq
#define TData       UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusType

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeTYPENAME
#define TPlugin_new  UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypePlugin_new
#define TPlugin_delete  UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeTypeSupport
#define TData        UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusType
#define TDataReader  UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeDataReader
#define TDataWriter  UMAA_SEM_InertialSensorControl_InertialSensorCommandStatusTypeDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

