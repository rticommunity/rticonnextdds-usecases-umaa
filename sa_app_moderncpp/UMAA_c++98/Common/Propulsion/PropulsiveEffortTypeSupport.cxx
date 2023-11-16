
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveEffortType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "PropulsiveEffortTypeSupport.h"
#include "PropulsiveEffortTypePlugin.h"

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

Configure and implement 'UMAA_Common_Propulsion_PropulsiveEffortType' support classes.

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
#define TTYPENAME   UMAA_Common_Propulsion_PropulsiveEffortTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_Common_Propulsion_PropulsiveEffortTypeDataWriter
#define TData       UMAA_Common_Propulsion_PropulsiveEffortType

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
#define TTYPENAME   UMAA_Common_Propulsion_PropulsiveEffortTypeTYPENAME

/* Defines */
#define TDataReader UMAA_Common_Propulsion_PropulsiveEffortTypeDataReader
#define TDataSeq    UMAA_Common_Propulsion_PropulsiveEffortTypeSeq
#define TData       UMAA_Common_Propulsion_PropulsiveEffortType

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
#define TTYPENAME    UMAA_Common_Propulsion_PropulsiveEffortTypeTYPENAME
#define TPlugin_new  UMAA_Common_Propulsion_PropulsiveEffortTypePlugin_new
#define TPlugin_delete  UMAA_Common_Propulsion_PropulsiveEffortTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_Common_Propulsion_PropulsiveEffortTypeTypeSupport
#define TData        UMAA_Common_Propulsion_PropulsiveEffortType
#define TDataReader  UMAA_Common_Propulsion_PropulsiveEffortTypeDataReader
#define TDataWriter  UMAA_Common_Propulsion_PropulsiveEffortTypeDataWriter
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

