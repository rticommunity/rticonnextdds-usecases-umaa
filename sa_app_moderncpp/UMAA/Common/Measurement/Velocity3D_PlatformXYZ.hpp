

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Velocity3D_PlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Velocity3D_PlatformXYZ_1870758863_hpp
#define Velocity3D_PlatformXYZ_1870758863_hpp

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

            class NDDSUSERDllExport Velocity3D_PlatformXYZ {
              public:
                Velocity3D_PlatformXYZ();

                Velocity3D_PlatformXYZ(double downSpeed,double forwardSpeed,double rightSpeed);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                Velocity3D_PlatformXYZ (Velocity3D_PlatformXYZ&&) = default;
                Velocity3D_PlatformXYZ& operator=(Velocity3D_PlatformXYZ&&) = default;
                Velocity3D_PlatformXYZ& operator=(const Velocity3D_PlatformXYZ&) = default;
                Velocity3D_PlatformXYZ(const Velocity3D_PlatformXYZ&) = default;
                #else
                Velocity3D_PlatformXYZ(Velocity3D_PlatformXYZ&& other_) OMG_NOEXCEPT;  
                Velocity3D_PlatformXYZ& operator=(Velocity3D_PlatformXYZ&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& downSpeed() OMG_NOEXCEPT {
                    return m_downSpeed_;
                }

                const double& downSpeed() const OMG_NOEXCEPT {
                    return m_downSpeed_;
                }

                void downSpeed(double value) {
                    m_downSpeed_ = value;
                }

                double& forwardSpeed() OMG_NOEXCEPT {
                    return m_forwardSpeed_;
                }

                const double& forwardSpeed() const OMG_NOEXCEPT {
                    return m_forwardSpeed_;
                }

                void forwardSpeed(double value) {
                    m_forwardSpeed_ = value;
                }

                double& rightSpeed() OMG_NOEXCEPT {
                    return m_rightSpeed_;
                }

                const double& rightSpeed() const OMG_NOEXCEPT {
                    return m_rightSpeed_;
                }

                void rightSpeed(double value) {
                    m_rightSpeed_ = value;
                }

                bool operator == (const Velocity3D_PlatformXYZ& other_) const;
                bool operator != (const Velocity3D_PlatformXYZ& other_) const;

                void swap(Velocity3D_PlatformXYZ& other_) OMG_NOEXCEPT ;

              private:

                double m_downSpeed_;
                double m_forwardSpeed_;
                double m_rightSpeed_;

            };

            inline void swap(Velocity3D_PlatformXYZ& a, Velocity3D_PlatformXYZ& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Velocity3D_PlatformXYZ& sample);

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
        struct topic_type_name< UMAA::Common::Measurement::Velocity3D_PlatformXYZ > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::Velocity3D_PlatformXYZ";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::Velocity3D_PlatformXYZ > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::Velocity3D_PlatformXYZ > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::Velocity3D_PlatformXYZ& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::Velocity3D_PlatformXYZ& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::Velocity3D_PlatformXYZ& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::Velocity3D_PlatformXYZ& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::Velocity3D_PlatformXYZ > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::Velocity3D_PlatformXYZ > {
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

#endif // Velocity3D_PlatformXYZ_1870758863_hpp

