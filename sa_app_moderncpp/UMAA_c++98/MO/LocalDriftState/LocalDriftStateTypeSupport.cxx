
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "LocalDriftStateTypeSupport.h"
#include "LocalDriftStateTypePlugin.h"

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

Configure and implement 'UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union' support classes.

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
#define TTYPENAME   UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataWriter
#define TData       UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union

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
#define TTYPENAME   UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataReader
#define TDataSeq    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionSeq
#define TData       UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union

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
#define TTYPENAME    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTYPENAME
#define TPlugin_new  UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionPlugin_new
#define TPlugin_delete  UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTypeSupport
#define TData        UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union
#define TDataReader  UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataReader
#define TDataWriter  UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataWriter
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

Configure and implement 'UMAA_MO_LocalDriftState_LocalDriftStateType' support classes.

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
#define TTYPENAME   UMAA_MO_LocalDriftState_LocalDriftStateTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_LocalDriftState_LocalDriftStateTypeDataWriter
#define TData       UMAA_MO_LocalDriftState_LocalDriftStateType

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
#define TTYPENAME   UMAA_MO_LocalDriftState_LocalDriftStateTypeTYPENAME

/* Defines */
#define TDataReader UMAA_MO_LocalDriftState_LocalDriftStateTypeDataReader
#define TDataSeq    UMAA_MO_LocalDriftState_LocalDriftStateTypeSeq
#define TData       UMAA_MO_LocalDriftState_LocalDriftStateType

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
#define TTYPENAME    UMAA_MO_LocalDriftState_LocalDriftStateTypeTYPENAME
#define TPlugin_new  UMAA_MO_LocalDriftState_LocalDriftStateTypePlugin_new
#define TPlugin_delete  UMAA_MO_LocalDriftState_LocalDriftStateTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_LocalDriftState_LocalDriftStateTypeTypeSupport
#define TData        UMAA_MO_LocalDriftState_LocalDriftStateType
#define TDataReader  UMAA_MO_LocalDriftState_LocalDriftStateTypeDataReader
#define TDataWriter  UMAA_MO_LocalDriftState_LocalDriftStateTypeDataWriter
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

