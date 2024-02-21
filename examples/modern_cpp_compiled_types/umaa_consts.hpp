

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from umaa_consts.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef umaa_consts_1138239646_hpp
#define umaa_consts_1138239646_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

RTI_CONSTEXPR_OR_CONST_STRING std::string UMAA_ENTITIES = "../components/umaa_entities.xml";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORCONTROLLER = "UMAAParticipantLibrary::AnchorController";

RTI_CONSTEXPR_OR_CONST_STRING std::string AUTONOMY = "UMAAParticipantLibrary::Autonomy";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORREPORTWRITER = "AnchorReportPublisher::AnchorReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORREPORTREADER = "AnchorReportSubscriber::AnchorReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORCOMMANDSTATUSWRITER = "AnchorCommandStatusPublisher::AnchorCommandStatusWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORCOMMANDSTATUSREADER = "AnchorCommandStatusSubscriber::AnchorCommandStatusReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORCOMMANDWRITER = "AnchorCommandPublisher::AnchorCommandWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string ANCHORCOMMANDREADER = "AnchorCommandSubscriber::AnchorCommandReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string SPEEDREPORTWRITER = "SpeedReportPublisher::SpeedReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string SPEEDREPORTREADER = "SpeedReportSubscriber::SpeedReportReader";

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

    }
}

namespace rti { 
    namespace topic {

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // umaa_consts_1138239646_hpp

