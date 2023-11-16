
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "ResourceAllocationReportTypeSupport.h"
#include "ResourceAllocationReportTypePlugin.h"

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

Configure and implement 'UMAA_SO_ResourceAllocation_ResourceAllocationReportType' support classes.

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
#define TTYPENAME   UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataWriter
#define TData       UMAA_SO_ResourceAllocation_ResourceAllocationReportType

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
#define TTYPENAME   UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTYPENAME

/* Defines */
#define TDataReader UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataReader
#define TDataSeq    UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeSeq
#define TData       UMAA_SO_ResourceAllocation_ResourceAllocationReportType

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
#define TTYPENAME    UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTYPENAME
#define TPlugin_new  UMAA_SO_ResourceAllocation_ResourceAllocationReportTypePlugin_new
#define TPlugin_delete  UMAA_SO_ResourceAllocation_ResourceAllocationReportTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTypeSupport
#define TData        UMAA_SO_ResourceAllocation_ResourceAllocationReportType
#define TDataReader  UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataReader
#define TDataWriter  UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataWriter
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

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet' support classes.

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
#define TTYPENAME   UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTYPENAME

/* Defines */
#define TDataWriter UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataWriter
#define TData       UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet

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
#define TTYPENAME   UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTYPENAME

/* Defines */
#define TDataReader UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataReader
#define TDataSeq    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetSeq
#define TData       UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet

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
#define TTYPENAME    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTYPENAME
#define TPlugin_new  UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetPlugin_new
#define TPlugin_delete  UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetPlugin_delete

/* Defines */
#define TTypeSupport UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTypeSupport
#define TData        UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet
#define TDataReader  UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataReader
#define TDataWriter  UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataWriter
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

