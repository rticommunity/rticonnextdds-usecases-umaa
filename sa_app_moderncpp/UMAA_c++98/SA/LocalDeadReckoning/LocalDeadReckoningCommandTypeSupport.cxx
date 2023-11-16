
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "LocalDeadReckoningCommandTypeSupport.h"
#include "LocalDeadReckoningCommandTypePlugin.h"

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

Configure and implement 'UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandType' support classes.

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
#define TTYPENAME   UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeDataWriter
#define TData       UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandType

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
#define TTYPENAME   UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeTYPENAME

/* Defines */
#define TDataReader UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeDataReader
#define TDataSeq    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeSeq
#define TData       UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandType

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
#define TTYPENAME    UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeTYPENAME
#define TPlugin_new  UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypePlugin_new
#define TPlugin_delete  UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeTypeSupport
#define TData        UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandType
#define TDataReader  UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeDataReader
#define TDataWriter  UMAA_SA_LocalDeadReckoning_LocalDeadReckoningCommandTypeDataWriter
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

