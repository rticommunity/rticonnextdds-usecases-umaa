

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSConfigSearchBottomType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSConfigSearchBottomType_646901645_hpp
#define FLSConfigSearchBottomType_646901645_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace BaseType {

            class NDDSUSERDllExport FLSConfigSearchBottomType {
              public:

                FLSConfigSearchBottomType();

                FLSConfigSearchBottomType(double goalVehicleAltitude_,double goalVehicleDepth_,double maxRange_,const ::dds::core::optional< double >& minRange_);

                double& goalVehicleAltitude() noexcept {
                    return m_goalVehicleAltitude_;
                }

                const double& goalVehicleAltitude() const noexcept {
                    return m_goalVehicleAltitude_;
                }

                void goalVehicleAltitude(double value) {

                    m_goalVehicleAltitude_ = value;
                }

                double& goalVehicleDepth() noexcept {
                    return m_goalVehicleDepth_;
                }

                const double& goalVehicleDepth() const noexcept {
                    return m_goalVehicleDepth_;
                }

                void goalVehicleDepth(double value) {

                    m_goalVehicleDepth_ = value;
                }

                double& maxRange() noexcept {
                    return m_maxRange_;
                }

                const double& maxRange() const noexcept {
                    return m_maxRange_;
                }

                void maxRange(double value) {

                    m_maxRange_ = value;
                }

                ::dds::core::optional< double >& minRange() noexcept {
                    return m_minRange_;
                }

                const ::dds::core::optional< double >& minRange() const noexcept {
                    return m_minRange_;
                }

                void minRange(const ::dds::core::optional< double >& value) {

                    m_minRange_ = value;
                }

                void minRange(::dds::core::optional< double >&& value) {
                    m_minRange_ = std::move(value);
                }
                bool operator == (const FLSConfigSearchBottomType& other_) const;
                bool operator != (const FLSConfigSearchBottomType& other_) const;

                void swap(FLSConfigSearchBottomType& other_) noexcept ;

              private:

                double m_goalVehicleAltitude_;
                double m_goalVehicleDepth_;
                double m_maxRange_;
                ::dds::core::optional< double > m_minRange_;

            };

            inline void swap(FLSConfigSearchBottomType& a, FLSConfigSearchBottomType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FLSConfigSearchBottomType& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::SEM::BaseType::FLSConfigSearchBottomType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BaseType::FLSConfigSearchBottomType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::BaseType::FLSConfigSearchBottomType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::BaseType::FLSConfigSearchBottomType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::BaseType::FLSConfigSearchBottomType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::BaseType::FLSConfigSearchBottomType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BaseType::FLSConfigSearchBottomType > {
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

#endif // FLSConfigSearchBottomType_646901645_hpp

