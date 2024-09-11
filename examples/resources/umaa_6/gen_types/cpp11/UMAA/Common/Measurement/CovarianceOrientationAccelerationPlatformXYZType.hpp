

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationAccelerationPlatformXYZType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationAccelerationPlatformXYZType_1400927447_hpp
#define CovarianceOrientationAccelerationPlatformXYZType_1400927447_hpp

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
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport CovarianceOrientationAccelerationPlatformXYZType {
              public:

                CovarianceOrientationAccelerationPlatformXYZType();

                CovarianceOrientationAccelerationPlatformXYZType(double rxRx_,const ::dds::core::optional< double >& rxRy_,const ::dds::core::optional< double >& rxRz_,double ryRy_,const ::dds::core::optional< double >& ryRz_,double rzRz_);

                double& rxRx() noexcept {
                    return m_rxRx_;
                }

                const double& rxRx() const noexcept {
                    return m_rxRx_;
                }

                void rxRx(double value) {

                    m_rxRx_ = value;
                }

                ::dds::core::optional< double >& rxRy() noexcept {
                    return m_rxRy_;
                }

                const ::dds::core::optional< double >& rxRy() const noexcept {
                    return m_rxRy_;
                }

                void rxRy(const ::dds::core::optional< double >& value) {

                    m_rxRy_ = value;
                }

                void rxRy(::dds::core::optional< double >&& value) {
                    m_rxRy_ = std::move(value);
                }
                ::dds::core::optional< double >& rxRz() noexcept {
                    return m_rxRz_;
                }

                const ::dds::core::optional< double >& rxRz() const noexcept {
                    return m_rxRz_;
                }

                void rxRz(const ::dds::core::optional< double >& value) {

                    m_rxRz_ = value;
                }

                void rxRz(::dds::core::optional< double >&& value) {
                    m_rxRz_ = std::move(value);
                }
                double& ryRy() noexcept {
                    return m_ryRy_;
                }

                const double& ryRy() const noexcept {
                    return m_ryRy_;
                }

                void ryRy(double value) {

                    m_ryRy_ = value;
                }

                ::dds::core::optional< double >& ryRz() noexcept {
                    return m_ryRz_;
                }

                const ::dds::core::optional< double >& ryRz() const noexcept {
                    return m_ryRz_;
                }

                void ryRz(const ::dds::core::optional< double >& value) {

                    m_ryRz_ = value;
                }

                void ryRz(::dds::core::optional< double >&& value) {
                    m_ryRz_ = std::move(value);
                }
                double& rzRz() noexcept {
                    return m_rzRz_;
                }

                const double& rzRz() const noexcept {
                    return m_rzRz_;
                }

                void rzRz(double value) {

                    m_rzRz_ = value;
                }

                bool operator == (const CovarianceOrientationAccelerationPlatformXYZType& other_) const;
                bool operator != (const CovarianceOrientationAccelerationPlatformXYZType& other_) const;

                void swap(CovarianceOrientationAccelerationPlatformXYZType& other_) noexcept ;

              private:

                double m_rxRx_;
                ::dds::core::optional< double > m_rxRy_;
                ::dds::core::optional< double > m_rxRz_;
                double m_ryRy_;
                ::dds::core::optional< double > m_ryRz_;
                double m_rzRz_;

            };

            inline void swap(CovarianceOrientationAccelerationPlatformXYZType& a, CovarianceOrientationAccelerationPlatformXYZType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceOrientationAccelerationPlatformXYZType& sample);

        } // namespace Measurement  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > {
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

#endif // CovarianceOrientationAccelerationPlatformXYZType_1400927447_hpp

