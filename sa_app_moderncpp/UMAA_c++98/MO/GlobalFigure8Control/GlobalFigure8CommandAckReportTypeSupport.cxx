
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8CommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "GlobalFigure8CommandAckReportTypeSupport.h"
#include "GlobalFigure8CommandAckReportTypePlugin.h"

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

Configure and implement 'UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportType' support classes.

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
#define TTYPENAME   UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeDataWriter
#define TData       UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportType

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
#define TTYPENAME   UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeTYPENAME

/* Defines */
#define TDataReader UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeDataReader
#define TDataSeq    UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeSeq
#define TData       UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportType

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
#define TTYPENAME    UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeTYPENAME
#define TPlugin_new  UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypePlugin_new
#define TPlugin_delete  UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeTypeSupport
#define TData        UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportType
#define TDataReader  UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeDataReader
#define TDataWriter  UMAA_MO_GlobalFigure8Control_GlobalFigure8CommandAckReportTypeDataWriter
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

