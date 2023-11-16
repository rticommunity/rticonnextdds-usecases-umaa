

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2D_PlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position2D_PlatformXYZ_2097022356_hpp
#define Position2D_PlatformXYZ_2097022356_hpp

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
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport Position2D_PlatformXYZ {
              public:
                Position2D_PlatformXYZ();

                Position2D_PlatformXYZ(double xAxis,double yAxis);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                Position2D_PlatformXYZ (Position2D_PlatformXYZ&&) = default;
                Position2D_PlatformXYZ& operator=(Position2D_PlatformXYZ&&) = default;
                Position2D_PlatformXYZ& operator=(const Position2D_PlatformXYZ&) = default;
                Position2D_PlatformXYZ(const Position2D_PlatformXYZ&) = default;
                #else
                Position2D_PlatformXYZ(Position2D_PlatformXYZ&& other_) OMG_NOEXCEPT;  
                Position2D_PlatformXYZ& operator=(Position2D_PlatformXYZ&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& xAxis() OMG_NOEXCEPT {
                    return m_xAxis_;
                }

                const double& xAxis() const OMG_NOEXCEPT {
                    return m_xAxis_;
                }

                void xAxis(double value) {
                    m_xAxis_ = value;
                }

                double& yAxis() OMG_NOEXCEPT {
                    return m_yAxis_;
                }

                const double& yAxis() const OMG_NOEXCEPT {
                    return m_yAxis_;
                }

                void yAxis(double value) {
                    m_yAxis_ = value;
                }

                bool operator == (const Position2D_PlatformXYZ& other_) const;
                bool operator != (const Position2D_PlatformXYZ& other_) const;

                void swap(Position2D_PlatformXYZ& other_) OMG_NOEXCEPT ;

              private:

                double m_xAxis_;
                double m_yAxis_;

            };

            inline void swap(Position2D_PlatformXYZ& a, Position2D_PlatformXYZ& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Position2D_PlatformXYZ& sample);

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
        struct topic_type_name< UMAA::Common::Measurement::Position2D_PlatformXYZ > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::Position2D_PlatformXYZ";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::Position2D_PlatformXYZ > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::Position2D_PlatformXYZ > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::Position2D_PlatformXYZ& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::Position2D_PlatformXYZ& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::Position2D_PlatformXYZ& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::Position2D_PlatformXYZ& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::Position2D_PlatformXYZ > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::Position2D_PlatformXYZ > {
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

#endif // Position2D_PlatformXYZ_2097022356_hpp

