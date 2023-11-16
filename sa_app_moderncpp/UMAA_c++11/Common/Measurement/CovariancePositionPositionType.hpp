

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionPositionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovariancePositionPositionType_1049099530_hpp
#define CovariancePositionPositionType_1049099530_hpp

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
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport CovariancePositionPositionType {
              public:

                CovariancePositionPositionType();

                CovariancePositionPositionType(const ::dds::core::optional< double >& pdPd_,const ::dds::core::optional< double >& pePd_,double pePe_,const ::dds::core::optional< double >& pnPd_,double pnPe_,double pnPn_);

                ::dds::core::optional< double >& pdPd() noexcept {
                    return m_pdPd_;
                }

                const ::dds::core::optional< double >& pdPd() const noexcept {
                    return m_pdPd_;
                }

                void pdPd(const ::dds::core::optional< double >& value) {

                    m_pdPd_ = value;
                }

                void pdPd(::dds::core::optional< double >&& value) {
                    m_pdPd_ = std::move(value);
                }
                ::dds::core::optional< double >& pePd() noexcept {
                    return m_pePd_;
                }

                const ::dds::core::optional< double >& pePd() const noexcept {
                    return m_pePd_;
                }

                void pePd(const ::dds::core::optional< double >& value) {

                    m_pePd_ = value;
                }

                void pePd(::dds::core::optional< double >&& value) {
                    m_pePd_ = std::move(value);
                }
                double& pePe() noexcept {
                    return m_pePe_;
                }

                const double& pePe() const noexcept {
                    return m_pePe_;
                }

                void pePe(double value) {

                    m_pePe_ = value;
                }

                ::dds::core::optional< double >& pnPd() noexcept {
                    return m_pnPd_;
                }

                const ::dds::core::optional< double >& pnPd() const noexcept {
                    return m_pnPd_;
                }

                void pnPd(const ::dds::core::optional< double >& value) {

                    m_pnPd_ = value;
                }

                void pnPd(::dds::core::optional< double >&& value) {
                    m_pnPd_ = std::move(value);
                }
                double& pnPe() noexcept {
                    return m_pnPe_;
                }

                const double& pnPe() const noexcept {
                    return m_pnPe_;
                }

                void pnPe(double value) {

                    m_pnPe_ = value;
                }

                double& pnPn() noexcept {
                    return m_pnPn_;
                }

                const double& pnPn() const noexcept {
                    return m_pnPn_;
                }

                void pnPn(double value) {

                    m_pnPn_ = value;
                }

                bool operator == (const CovariancePositionPositionType& other_) const;
                bool operator != (const CovariancePositionPositionType& other_) const;

                void swap(CovariancePositionPositionType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_pdPd_;
                ::dds::core::optional< double > m_pePd_;
                double m_pePe_;
                ::dds::core::optional< double > m_pnPd_;
                double m_pnPe_;
                double m_pnPn_;

            };

            inline void swap(CovariancePositionPositionType& a, CovariancePositionPositionType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovariancePositionPositionType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovariancePositionPositionType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovariancePositionPositionType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::CovariancePositionPositionType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovariancePositionPositionType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::CovariancePositionPositionType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::CovariancePositionPositionType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovariancePositionPositionType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovariancePositionPositionType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovariancePositionPositionType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovariancePositionPositionType > {
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

#endif // CovariancePositionPositionType_1049099530_hpp

