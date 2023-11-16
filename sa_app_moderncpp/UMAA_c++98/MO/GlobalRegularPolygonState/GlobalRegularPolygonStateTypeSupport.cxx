
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "GlobalRegularPolygonStateTypeSupport.h"
#include "GlobalRegularPolygonStateTypePlugin.h"

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

Configure and implement 'UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_Union' support classes.

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
#define TTYPENAME   UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionDataWriter
#define TData       UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_Union

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
#define TTYPENAME   UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionDataReader
#define TDataSeq    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionSeq
#define TData       UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_Union

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
#define TTYPENAME    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionTYPENAME
#define TPlugin_new  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionPlugin_new
#define TPlugin_delete  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionTypeSupport
#define TData        UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_Union
#define TDataReader  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionDataReader
#define TDataWriter  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType_Specializations_GlobalRegularPolygonStateType_UnionDataWriter
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

Configure and implement 'UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType' support classes.

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
#define TTYPENAME   UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeDataWriter
#define TData       UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType

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
#define TTYPENAME   UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeTYPENAME

/* Defines */
#define TDataReader UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeDataReader
#define TDataSeq    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeSeq
#define TData       UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType

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
#define TTYPENAME    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeTYPENAME
#define TPlugin_new  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypePlugin_new
#define TPlugin_delete  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeTypeSupport
#define TData        UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType
#define TDataReader  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeDataReader
#define TDataWriter  UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateTypeDataWriter
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

