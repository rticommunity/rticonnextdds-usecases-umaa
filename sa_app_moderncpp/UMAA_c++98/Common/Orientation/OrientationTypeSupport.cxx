
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "OrientationTypeSupport.h"
#include "OrientationTypePlugin.h"

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

Configure and implement 'UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union' support classes.

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
#define TTYPENAME   UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataWriter
#define TData       UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union

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
#define TTYPENAME   UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataReader
#define TDataSeq    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionSeq
#define TData       UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union

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
#define TTYPENAME    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTYPENAME
#define TPlugin_new  UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_new
#define TPlugin_delete  UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTypeSupport
#define TData        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union
#define TDataReader  UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataReader
#define TDataWriter  UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataWriter
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

Configure and implement 'UMAA_Common_Orientation_OrientationType' support classes.

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
#define TTYPENAME   UMAA_Common_Orientation_OrientationTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Orientation_OrientationTypeDataWriter
#define TData       UMAA_Common_Orientation_OrientationType

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
#define TTYPENAME   UMAA_Common_Orientation_OrientationTypeTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Orientation_OrientationTypeDataReader
#define TDataSeq    UMAA_Common_Orientation_OrientationTypeSeq
#define TData       UMAA_Common_Orientation_OrientationType

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
#define TTYPENAME    UMAA_Common_Orientation_OrientationTypeTYPENAME
#define TPlugin_new  UMAA_Common_Orientation_OrientationTypePlugin_new
#define TPlugin_delete  UMAA_Common_Orientation_OrientationTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Orientation_OrientationTypeTypeSupport
#define TData        UMAA_Common_Orientation_OrientationType
#define TDataReader  UMAA_Common_Orientation_OrientationTypeDataReader
#define TDataWriter  UMAA_Common_Orientation_OrientationTypeDataWriter
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

