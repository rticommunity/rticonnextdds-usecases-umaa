
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "GlobalRacetrackStateTypeSupport.h"
#include "GlobalRacetrackStateTypePlugin.h"

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

Configure and implement 'UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_Union' support classes.

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
#define TTYPENAME   UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionDataWriter
#define TData       UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_Union

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
#define TTYPENAME   UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionDataReader
#define TDataSeq    UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionSeq
#define TData       UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_Union

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
#define TTYPENAME    UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionTYPENAME
#define TPlugin_new  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionPlugin_new
#define TPlugin_delete  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionTypeSupport
#define TData        UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_Union
#define TDataReader  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionDataReader
#define TDataWriter  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType_Specializations_GlobalRacetrackStateType_UnionDataWriter
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

Configure and implement 'UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType' support classes.

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
#define TTYPENAME   UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeDataWriter
#define TData       UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType

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
#define TTYPENAME   UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeTYPENAME

/* Defines */
#define TDataReader UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeDataReader
#define TDataSeq    UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeSeq
#define TData       UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType

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
#define TTYPENAME    UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeTYPENAME
#define TPlugin_new  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypePlugin_new
#define TPlugin_delete  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeTypeSupport
#define TData        UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateType
#define TDataReader  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeDataReader
#define TDataWriter  UMAA_MO_GlobalRacetrackState_GlobalRacetrackStateTypeDataWriter
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

