

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceAccelerationPlatformXYZType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceAccelerationPlatformXYZType_260521671_hpp
#define CovarianceAccelerationPlatformXYZType_260521671_hpp

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

            class NDDSUSERDllExport CovarianceAccelerationPlatformXYZType {
              public:

                CovarianceAccelerationPlatformXYZType();

                CovarianceAccelerationPlatformXYZType(double axAx_,const ::dds::core::optional< double >& axAy_,const ::dds::core::optional< double >& axAz_,double ayAy_,const ::dds::core::optional< double >& ayAz_,double azAz_);

                double& axAx() noexcept {
                    return m_axAx_;
                }

                const double& axAx() const noexcept {
                    return m_axAx_;
                }

                void axAx(double value) {

                    m_axAx_ = value;
                }

                ::dds::core::optional< double >& axAy() noexcept {
                    return m_axAy_;
                }

                const ::dds::core::optional< double >& axAy() const noexcept {
                    return m_axAy_;
                }

                void axAy(const ::dds::core::optional< double >& value) {

                    m_axAy_ = value;
                }

                void axAy(::dds::core::optional< double >&& value) {
                    m_axAy_ = std::move(value);
                }
                ::dds::core::optional< double >& axAz() noexcept {
                    return m_axAz_;
                }

                const ::dds::core::optional< double >& axAz() const noexcept {
                    return m_axAz_;
                }

                void axAz(const ::dds::core::optional< double >& value) {

                    m_axAz_ = value;
                }

                void axAz(::dds::core::optional< double >&& value) {
                    m_axAz_ = std::move(value);
                }
                double& ayAy() noexcept {
                    return m_ayAy_;
                }

                const double& ayAy() const noexcept {
                    return m_ayAy_;
                }

                void ayAy(double value) {

                    m_ayAy_ = value;
                }

                ::dds::core::optional< double >& ayAz() noexcept {
                    return m_ayAz_;
                }

                const ::dds::core::optional< double >& ayAz() const noexcept {
                    return m_ayAz_;
                }

                void ayAz(const ::dds::core::optional< double >& value) {

                    m_ayAz_ = value;
                }

                void ayAz(::dds::core::optional< double >&& value) {
                    m_ayAz_ = std::move(value);
                }
                double& azAz() noexcept {
                    return m_azAz_;
                }

                const double& azAz() const noexcept {
                    return m_azAz_;
                }

                void azAz(double value) {

                    m_azAz_ = value;
                }

                bool operator == (const CovarianceAccelerationPlatformXYZType& other_) const;
                bool operator != (const CovarianceAccelerationPlatformXYZType& other_) const;

                void swap(CovarianceAccelerationPlatformXYZType& other_) noexcept ;

              private:

                double m_axAx_;
                ::dds::core::optional< double > m_axAy_;
                ::dds::core::optional< double > m_axAz_;
                double m_ayAy_;
                ::dds::core::optional< double > m_ayAz_;
                double m_azAz_;

            };

            inline void swap(CovarianceAccelerationPlatformXYZType& a, CovarianceAccelerationPlatformXYZType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceAccelerationPlatformXYZType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > {
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

#endif // CovarianceAccelerationPlatformXYZType_260521671_hpp

