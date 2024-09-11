

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeamWidthSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeamWidthSpecsType_713209182_hpp
#define BeamWidthSpecsType_713209182_hpp

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace IlluminatorSpecs {

            class NDDSUSERDllExport BeamWidthSpecsType {
              public:

                BeamWidthSpecsType();

                BeamWidthSpecsType(double maxBeamWidth_,double minBeamWidth_);

                double& maxBeamWidth() noexcept {
                    return m_maxBeamWidth_;
                }

                const double& maxBeamWidth() const noexcept {
                    return m_maxBeamWidth_;
                }

                void maxBeamWidth(double value) {

                    m_maxBeamWidth_ = value;
                }

                double& minBeamWidth() noexcept {
                    return m_minBeamWidth_;
                }

                const double& minBeamWidth() const noexcept {
                    return m_minBeamWidth_;
                }

                void minBeamWidth(double value) {

                    m_minBeamWidth_ = value;
                }

                bool operator == (const BeamWidthSpecsType& other_) const;
                bool operator != (const BeamWidthSpecsType& other_) const;

                void swap(BeamWidthSpecsType& other_) noexcept ;

              private:

                double m_maxBeamWidth_;
                double m_minBeamWidth_;

            };

            inline void swap(BeamWidthSpecsType& a, BeamWidthSpecsType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BeamWidthSpecsType& sample);

        } // namespace IlluminatorSpecs  
    } // namespace SEM  
} // namespace UMAA  

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

        template<>
        struct topic_type_name< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // BeamWidthSpecsType_713209182_hpp

