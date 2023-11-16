

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalTransitDriftType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalTransitDriftType_98748119_hpp
#define LocalTransitDriftType_98748119_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalDriftState {

            class NDDSUSERDllExport LocalTransitDriftType {
              public:
                LocalTransitDriftType();

                LocalTransitDriftType(bool transitElevationAchieved,bool transitSpeedAchieved);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalTransitDriftType (LocalTransitDriftType&&) = default;
                LocalTransitDriftType& operator=(LocalTransitDriftType&&) = default;
                LocalTransitDriftType& operator=(const LocalTransitDriftType&) = default;
                LocalTransitDriftType(const LocalTransitDriftType&) = default;
                #else
                LocalTransitDriftType(LocalTransitDriftType&& other_) OMG_NOEXCEPT;  
                LocalTransitDriftType& operator=(LocalTransitDriftType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& transitElevationAchieved() OMG_NOEXCEPT {
                    return m_transitElevationAchieved_;
                }

                const bool& transitElevationAchieved() const OMG_NOEXCEPT {
                    return m_transitElevationAchieved_;
                }

                void transitElevationAchieved(bool value) {
                    m_transitElevationAchieved_ = value;
                }

                bool& transitSpeedAchieved() OMG_NOEXCEPT {
                    return m_transitSpeedAchieved_;
                }

                const bool& transitSpeedAchieved() const OMG_NOEXCEPT {
                    return m_transitSpeedAchieved_;
                }

                void transitSpeedAchieved(bool value) {
                    m_transitSpeedAchieved_ = value;
                }

                bool operator == (const LocalTransitDriftType& other_) const;
                bool operator != (const LocalTransitDriftType& other_) const;

                void swap(LocalTransitDriftType& other_) OMG_NOEXCEPT ;

              private:

                bool m_transitElevationAchieved_;
                bool m_transitSpeedAchieved_;

            };

            inline void swap(LocalTransitDriftType& a, LocalTransitDriftType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalTransitDriftType& sample);

        } // namespace LocalDriftState  
    } // namespace MO  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::MO::LocalDriftState::LocalTransitDriftType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalDriftState::LocalTransitDriftType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalDriftState::LocalTransitDriftType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalDriftState::LocalTransitDriftType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalDriftState::LocalTransitDriftType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalDriftState::LocalTransitDriftType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalDriftState::LocalTransitDriftType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalDriftState::LocalTransitDriftType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalDriftState::LocalTransitDriftType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalDriftState::LocalTransitDriftType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // LocalTransitDriftType_98748119_hpp

