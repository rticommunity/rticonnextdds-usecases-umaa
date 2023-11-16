

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_Volume.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Polygon_Volume_34458482_hpp
#define Polygon_Volume_34458482_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Altitude_MSL.hpp"
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

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::Common::Measurement::Position2D >;
            template class NDDSUSERDllExport std::vector< UMAA::Common::Measurement::Position2D >;
            #endif
            class NDDSUSERDllExport Polygon_Volume {
              public:
                Polygon_Volume();

                Polygon_Volume(const UMAA::Common::Measurement::Altitude_MSL& ceiling,const UMAA::Common::Measurement::Altitude_MSL& floor,const UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType& lineKind,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L >& referencePoints);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                Polygon_Volume (Polygon_Volume&&) = default;
                Polygon_Volume& operator=(Polygon_Volume&&) = default;
                Polygon_Volume& operator=(const Polygon_Volume&) = default;
                Polygon_Volume(const Polygon_Volume&) = default;
                #else
                Polygon_Volume(Polygon_Volume&& other_) OMG_NOEXCEPT;  
                Polygon_Volume& operator=(Polygon_Volume&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Altitude_MSL& ceiling() OMG_NOEXCEPT {
                    return m_ceiling_;
                }

                const UMAA::Common::Measurement::Altitude_MSL& ceiling() const OMG_NOEXCEPT {
                    return m_ceiling_;
                }

                void ceiling(const UMAA::Common::Measurement::Altitude_MSL& value) {
                    m_ceiling_ = value;
                }

                void ceiling(UMAA::Common::Measurement::Altitude_MSL&& value) {
                    m_ceiling_ = std::move(value);
                }
                UMAA::Common::Measurement::Altitude_MSL& floor() OMG_NOEXCEPT {
                    return m_floor_;
                }

                const UMAA::Common::Measurement::Altitude_MSL& floor() const OMG_NOEXCEPT {
                    return m_floor_;
                }

                void floor(const UMAA::Common::Measurement::Altitude_MSL& value) {
                    m_floor_ = value;
                }

                void floor(UMAA::Common::Measurement::Altitude_MSL&& value) {
                    m_floor_ = std::move(value);
                }
                UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType& lineKind() OMG_NOEXCEPT {
                    return m_lineKind_;
                }

                const UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType& lineKind() const OMG_NOEXCEPT {
                    return m_lineKind_;
                }

                void lineKind(const UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType& value) {
                    m_lineKind_ = value;
                }

                void lineKind(UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType&& value) {
                    m_lineKind_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L >& referencePoints() OMG_NOEXCEPT {
                    return m_referencePoints_;
                }

                const ::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L >& referencePoints() const OMG_NOEXCEPT {
                    return m_referencePoints_;
                }

                void referencePoints(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L >& value) {
                    m_referencePoints_ = value;
                }

                void referencePoints(::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L >&& value) {
                    m_referencePoints_ = std::move(value);
                }

                bool operator == (const Polygon_Volume& other_) const;
                bool operator != (const Polygon_Volume& other_) const;

                void swap(Polygon_Volume& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Altitude_MSL m_ceiling_;
                UMAA::Common::Measurement::Altitude_MSL m_floor_;
                UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType m_lineKind_;
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::Position2D, 100L > m_referencePoints_;

            };

            inline void swap(Polygon_Volume& a, Polygon_Volume& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Polygon_Volume& sample);

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
        struct topic_type_name< UMAA::Common::Measurement::Polygon_Volume > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::Polygon_Volume";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::Polygon_Volume > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::Polygon_Volume > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::Polygon_Volume& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::Polygon_Volume& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::Polygon_Volume& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::Polygon_Volume& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::Polygon_Volume > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::Polygon_Volume > {
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

#endif // Polygon_Volume_34458482_hpp

