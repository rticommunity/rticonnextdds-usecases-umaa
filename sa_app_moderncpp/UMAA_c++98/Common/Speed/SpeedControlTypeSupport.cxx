
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "SpeedControlTypeSupport.h"
#include "SpeedControlTypePlugin.h"

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

Configure and implement 'UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union' support classes.

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
#define TTYPENAME   UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataWriter
#define TData       UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union

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
#define TTYPENAME   UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataReader
#define TDataSeq    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionSeq
#define TData       UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union

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
#define TTYPENAME    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTYPENAME
#define TPlugin_new  UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionPlugin_new
#define TPlugin_delete  UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTypeSupport
#define TData        UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union
#define TDataReader  UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataReader
#define TDataWriter  UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataWriter
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

Configure and implement 'UMAA_Common_Speed_SpeedControlType' support classes.

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
#define TTYPENAME   UMAA_Common_Speed_SpeedControlTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Speed_SpeedControlTypeDataWriter
#define TData       UMAA_Common_Speed_SpeedControlType

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
#define TTYPENAME   UMAA_Common_Speed_SpeedControlTypeTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Speed_SpeedControlTypeDataReader
#define TDataSeq    UMAA_Common_Speed_SpeedControlTypeSeq
#define TData       UMAA_Common_Speed_SpeedControlType

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
#define TTYPENAME    UMAA_Common_Speed_SpeedControlTypeTYPENAME
#define TPlugin_new  UMAA_Common_Speed_SpeedControlTypePlugin_new
#define TPlugin_delete  UMAA_Common_Speed_SpeedControlTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Speed_SpeedControlTypeTypeSupport
#define TData        UMAA_Common_Speed_SpeedControlType
#define TDataReader  UMAA_Common_Speed_SpeedControlTypeDataReader
#define TDataWriter  UMAA_Common_Speed_SpeedControlTypeDataWriter
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

