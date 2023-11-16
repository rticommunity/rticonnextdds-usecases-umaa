

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepingStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepingStationkeepType_797128733_hpp
#define StationkeepingStationkeepType_797128733_hpp

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
        namespace StationkeepState {

            class NDDSUSERDllExport StationkeepingStationkeepType {
              public:
                StationkeepingStationkeepType();

                StationkeepingStationkeepType(bool bearingToContactAchieved,bool elevationAchieved,bool rangeAchieved);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                StationkeepingStationkeepType (StationkeepingStationkeepType&&) = default;
                StationkeepingStationkeepType& operator=(StationkeepingStationkeepType&&) = default;
                StationkeepingStationkeepType& operator=(const StationkeepingStationkeepType&) = default;
                StationkeepingStationkeepType(const StationkeepingStationkeepType&) = default;
                #else
                StationkeepingStationkeepType(StationkeepingStationkeepType&& other_) OMG_NOEXCEPT;  
                StationkeepingStationkeepType& operator=(StationkeepingStationkeepType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& bearingToContactAchieved() OMG_NOEXCEPT {
                    return m_bearingToContactAchieved_;
                }

                const bool& bearingToContactAchieved() const OMG_NOEXCEPT {
                    return m_bearingToContactAchieved_;
                }

                void bearingToContactAchieved(bool value) {
                    m_bearingToContactAchieved_ = value;
                }

                bool& elevationAchieved() OMG_NOEXCEPT {
                    return m_elevationAchieved_;
                }

                const bool& elevationAchieved() const OMG_NOEXCEPT {
                    return m_elevationAchieved_;
                }

                void elevationAchieved(bool value) {
                    m_elevationAchieved_ = value;
                }

                bool& rangeAchieved() OMG_NOEXCEPT {
                    return m_rangeAchieved_;
                }

                const bool& rangeAchieved() const OMG_NOEXCEPT {
                    return m_rangeAchieved_;
                }

                void rangeAchieved(bool value) {
                    m_rangeAchieved_ = value;
                }

                bool operator == (const StationkeepingStationkeepType& other_) const;
                bool operator != (const StationkeepingStationkeepType& other_) const;

                void swap(StationkeepingStationkeepType& other_) OMG_NOEXCEPT ;

              private:

                bool m_bearingToContactAchieved_;
                bool m_elevationAchieved_;
                bool m_rangeAchieved_;

            };

            inline void swap(StationkeepingStationkeepType& a, StationkeepingStationkeepType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepingStationkeepType& sample);

        } // namespace StationkeepState  
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
        struct topic_type_name< UMAA::MO::StationkeepState::StationkeepingStationkeepType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::StationkeepState::StationkeepingStationkeepType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::StationkeepState::StationkeepingStationkeepType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::StationkeepState::StationkeepingStationkeepType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::StationkeepState::StationkeepingStationkeepType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::StationkeepState::StationkeepingStationkeepType > {
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

#endif // StationkeepingStationkeepType_797128733_hpp

