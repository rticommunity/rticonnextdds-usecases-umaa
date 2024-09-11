

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionECEFType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovariancePositionECEFType_312401519_hpp
#define CovariancePositionECEFType_312401519_hpp

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

            class NDDSUSERDllExport CovariancePositionECEFType {
              public:

                CovariancePositionECEFType();

                CovariancePositionECEFType(double pxPx_,const ::dds::core::optional< double >& pxPy_,const ::dds::core::optional< double >& pxPz_,double pyPy_,const ::dds::core::optional< double >& pyPz_,const ::dds::core::optional< double >& pzPz_);

                double& pxPx() noexcept {
                    return m_pxPx_;
                }

                const double& pxPx() const noexcept {
                    return m_pxPx_;
                }

                void pxPx(double value) {

                    m_pxPx_ = value;
                }

                ::dds::core::optional< double >& pxPy() noexcept {
                    return m_pxPy_;
                }

                const ::dds::core::optional< double >& pxPy() const noexcept {
                    return m_pxPy_;
                }

                void pxPy(const ::dds::core::optional< double >& value) {

                    m_pxPy_ = value;
                }

                void pxPy(::dds::core::optional< double >&& value) {
                    m_pxPy_ = std::move(value);
                }
                ::dds::core::optional< double >& pxPz() noexcept {
                    return m_pxPz_;
                }

                const ::dds::core::optional< double >& pxPz() const noexcept {
                    return m_pxPz_;
                }

                void pxPz(const ::dds::core::optional< double >& value) {

                    m_pxPz_ = value;
                }

                void pxPz(::dds::core::optional< double >&& value) {
                    m_pxPz_ = std::move(value);
                }
                double& pyPy() noexcept {
                    return m_pyPy_;
                }

                const double& pyPy() const noexcept {
                    return m_pyPy_;
                }

                void pyPy(double value) {

                    m_pyPy_ = value;
                }

                ::dds::core::optional< double >& pyPz() noexcept {
                    return m_pyPz_;
                }

                const ::dds::core::optional< double >& pyPz() const noexcept {
                    return m_pyPz_;
                }

                void pyPz(const ::dds::core::optional< double >& value) {

                    m_pyPz_ = value;
                }

                void pyPz(::dds::core::optional< double >&& value) {
                    m_pyPz_ = std::move(value);
                }
                ::dds::core::optional< double >& pzPz() noexcept {
                    return m_pzPz_;
                }

                const ::dds::core::optional< double >& pzPz() const noexcept {
                    return m_pzPz_;
                }

                void pzPz(const ::dds::core::optional< double >& value) {

                    m_pzPz_ = value;
                }

                void pzPz(::dds::core::optional< double >&& value) {
                    m_pzPz_ = std::move(value);
                }
                bool operator == (const CovariancePositionECEFType& other_) const;
                bool operator != (const CovariancePositionECEFType& other_) const;

                void swap(CovariancePositionECEFType& other_) noexcept ;

              private:

                double m_pxPx_;
                ::dds::core::optional< double > m_pxPy_;
                ::dds::core::optional< double > m_pxPz_;
                double m_pyPy_;
                ::dds::core::optional< double > m_pyPz_;
                ::dds::core::optional< double > m_pzPz_;

            };

            inline void swap(CovariancePositionECEFType& a, CovariancePositionECEFType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovariancePositionECEFType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovariancePositionECEFType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovariancePositionECEFType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovariancePositionECEFType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovariancePositionECEFType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovariancePositionECEFType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovariancePositionECEFType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovariancePositionECEFType > {
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

#endif // CovariancePositionECEFType_312401519_hpp

