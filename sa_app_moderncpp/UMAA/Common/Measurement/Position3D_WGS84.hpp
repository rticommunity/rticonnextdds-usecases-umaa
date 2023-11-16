

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position3D_WGS84.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position3D_WGS84_411581087_hpp
#define Position3D_WGS84_411581087_hpp

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
#include "UMAA/Common/Measurement/Altitude_HAE.hpp"
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
#include "UMAA/Common/Measurement/Position2D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport Position3D_WGS84 {
              public:
                Position3D_WGS84();

                Position3D_WGS84(const UMAA::Common::Measurement::Position2D& geodeticPosition,const UMAA::Common::Measurement::Altitude_HAE& heightAboveEllipsoid);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                Position3D_WGS84 (Position3D_WGS84&&) = default;
                Position3D_WGS84& operator=(Position3D_WGS84&&) = default;
                Position3D_WGS84& operator=(const Position3D_WGS84&) = default;
                Position3D_WGS84(const Position3D_WGS84&) = default;
                #else
                Position3D_WGS84(Position3D_WGS84&& other_) OMG_NOEXCEPT;  
                Position3D_WGS84& operator=(Position3D_WGS84&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Position2D& geodeticPosition() OMG_NOEXCEPT {
                    return m_geodeticPosition_;
                }

                const UMAA::Common::Measurement::Position2D& geodeticPosition() const OMG_NOEXCEPT {
                    return m_geodeticPosition_;
                }

                void geodeticPosition(const UMAA::Common::Measurement::Position2D& value) {
                    m_geodeticPosition_ = value;
                }

                void geodeticPosition(UMAA::Common::Measurement::Position2D&& value) {
                    m_geodeticPosition_ = std::move(value);
                }
                UMAA::Common::Measurement::Altitude_HAE& heightAboveEllipsoid() OMG_NOEXCEPT {
                    return m_heightAboveEllipsoid_;
                }

                const UMAA::Common::Measurement::Altitude_HAE& heightAboveEllipsoid() const OMG_NOEXCEPT {
                    return m_heightAboveEllipsoid_;
                }

                void heightAboveEllipsoid(const UMAA::Common::Measurement::Altitude_HAE& value) {
                    m_heightAboveEllipsoid_ = value;
                }

                void heightAboveEllipsoid(UMAA::Common::Measurement::Altitude_HAE&& value) {
                    m_heightAboveEllipsoid_ = std::move(value);
                }

                bool operator == (const Position3D_WGS84& other_) const;
                bool operator != (const Position3D_WGS84& other_) const;

                void swap(Position3D_WGS84& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Position2D m_geodeticPosition_;
                UMAA::Common::Measurement::Altitude_HAE m_heightAboveEllipsoid_;

            };

            inline void swap(Position3D_WGS84& a, Position3D_WGS84& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Position3D_WGS84& sample);

        } // namespace Measurement  
    } // namespace Common  
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
        struct topic_type_name< UMAA::Common::Measurement::Position3D_WGS84 > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::Position3D_WGS84";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::Position3D_WGS84 > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::Position3D_WGS84 > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::Position3D_WGS84& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::Position3D_WGS84& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::Position3D_WGS84& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::Position3D_WGS84& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::Position3D_WGS84 > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::Position3D_WGS84 > {
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

#endif // Position3D_WGS84_411581087_hpp

