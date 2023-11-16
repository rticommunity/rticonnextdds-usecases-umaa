
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "ThrusterSpecsTypeSupport.h"
#include "ThrusterSpecsTypePlugin.h"

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

Configure and implement 'UMAA_EO_ThrusterSpecs_ThrusterSpecsType' support classes.

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
#define TTYPENAME   UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataWriter
#define TData       UMAA_EO_ThrusterSpecs_ThrusterSpecsType

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
#define TTYPENAME   UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTYPENAME

/* Defines */
#define TDataReader UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataReader
#define TDataSeq    UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeSeq
#define TData       UMAA_EO_ThrusterSpecs_ThrusterSpecsType

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
#define TTYPENAME    UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTYPENAME
#define TPlugin_new  UMAA_EO_ThrusterSpecs_ThrusterSpecsTypePlugin_new
#define TPlugin_delete  UMAA_EO_ThrusterSpecs_ThrusterSpecsTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTypeSupport
#define TData        UMAA_EO_ThrusterSpecs_ThrusterSpecsType
#define TDataReader  UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataReader
#define TDataWriter  UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataWriter
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

