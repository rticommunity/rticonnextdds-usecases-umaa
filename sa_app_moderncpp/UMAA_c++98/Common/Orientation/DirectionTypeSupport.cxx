
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "DirectionTypeSupport.h"
#include "DirectionTypePlugin.h"

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

Configure and implement 'UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union' support classes.

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
#define TTYPENAME   UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataWriter
#define TData       UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union

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
#define TTYPENAME   UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataReader
#define TDataSeq    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionSeq
#define TData       UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union

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
#define TTYPENAME    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTYPENAME
#define TPlugin_new  UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionPlugin_new
#define TPlugin_delete  UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTypeSupport
#define TData        UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union
#define TDataReader  UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataReader
#define TDataWriter  UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataWriter
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

Configure and implement 'UMAA_Common_Orientation_DirectionType' support classes.

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
#define TTYPENAME   UMAA_Common_Orientation_DirectionTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Orientation_DirectionTypeDataWriter
#define TData       UMAA_Common_Orientation_DirectionType

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
#define TTYPENAME   UMAA_Common_Orientation_DirectionTypeTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Orientation_DirectionTypeDataReader
#define TDataSeq    UMAA_Common_Orientation_DirectionTypeSeq
#define TData       UMAA_Common_Orientation_DirectionType

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
#define TTYPENAME    UMAA_Common_Orientation_DirectionTypeTYPENAME
#define TPlugin_new  UMAA_Common_Orientation_DirectionTypePlugin_new
#define TPlugin_delete  UMAA_Common_Orientation_DirectionTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Orientation_DirectionTypeTypeSupport
#define TData        UMAA_Common_Orientation_DirectionType
#define TDataReader  UMAA_Common_Orientation_DirectionTypeDataReader
#define TDataWriter  UMAA_Common_Orientation_DirectionTypeDataWriter
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

