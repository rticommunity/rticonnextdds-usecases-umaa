

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionVelocityType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovariancePositionVelocityType_1813598106_hpp
#define CovariancePositionVelocityType_1813598106_hpp

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

            class NDDSUSERDllExport CovariancePositionVelocityType {
              public:

                CovariancePositionVelocityType();

                CovariancePositionVelocityType(const ::dds::core::optional< double >& pdVd_,const ::dds::core::optional< double >& pdVe_,const ::dds::core::optional< double >& pdVn_,const ::dds::core::optional< double >& peVd_,double peVe_,double peVn_,const ::dds::core::optional< double >& pnVd_,double pnVe_,double pnVn_);

                ::dds::core::optional< double >& pdVd() noexcept {
                    return m_pdVd_;
                }

                const ::dds::core::optional< double >& pdVd() const noexcept {
                    return m_pdVd_;
                }

                void pdVd(const ::dds::core::optional< double >& value) {

                    m_pdVd_ = value;
                }

                void pdVd(::dds::core::optional< double >&& value) {
                    m_pdVd_ = std::move(value);
                }
                ::dds::core::optional< double >& pdVe() noexcept {
                    return m_pdVe_;
                }

                const ::dds::core::optional< double >& pdVe() const noexcept {
                    return m_pdVe_;
                }

                void pdVe(const ::dds::core::optional< double >& value) {

                    m_pdVe_ = value;
                }

                void pdVe(::dds::core::optional< double >&& value) {
                    m_pdVe_ = std::move(value);
                }
                ::dds::core::optional< double >& pdVn() noexcept {
                    return m_pdVn_;
                }

                const ::dds::core::optional< double >& pdVn() const noexcept {
                    return m_pdVn_;
                }

                void pdVn(const ::dds::core::optional< double >& value) {

                    m_pdVn_ = value;
                }

                void pdVn(::dds::core::optional< double >&& value) {
                    m_pdVn_ = std::move(value);
                }
                ::dds::core::optional< double >& peVd() noexcept {
                    return m_peVd_;
                }

                const ::dds::core::optional< double >& peVd() const noexcept {
                    return m_peVd_;
                }

                void peVd(const ::dds::core::optional< double >& value) {

                    m_peVd_ = value;
                }

                void peVd(::dds::core::optional< double >&& value) {
                    m_peVd_ = std::move(value);
                }
                double& peVe() noexcept {
                    return m_peVe_;
                }

                const double& peVe() const noexcept {
                    return m_peVe_;
                }

                void peVe(double value) {

                    m_peVe_ = value;
                }

                double& peVn() noexcept {
                    return m_peVn_;
                }

                const double& peVn() const noexcept {
                    return m_peVn_;
                }

                void peVn(double value) {

                    m_peVn_ = value;
                }

                ::dds::core::optional< double >& pnVd() noexcept {
                    return m_pnVd_;
                }

                const ::dds::core::optional< double >& pnVd() const noexcept {
                    return m_pnVd_;
                }

                void pnVd(const ::dds::core::optional< double >& value) {

                    m_pnVd_ = value;
                }

                void pnVd(::dds::core::optional< double >&& value) {
                    m_pnVd_ = std::move(value);
                }
                double& pnVe() noexcept {
                    return m_pnVe_;
                }

                const double& pnVe() const noexcept {
                    return m_pnVe_;
                }

                void pnVe(double value) {

                    m_pnVe_ = value;
                }

                double& pnVn() noexcept {
                    return m_pnVn_;
                }

                const double& pnVn() const noexcept {
                    return m_pnVn_;
                }

                void pnVn(double value) {

                    m_pnVn_ = value;
                }

                bool operator == (const CovariancePositionVelocityType& other_) const;
                bool operator != (const CovariancePositionVelocityType& other_) const;

                void swap(CovariancePositionVelocityType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_pdVd_;
                ::dds::core::optional< double > m_pdVe_;
                ::dds::core::optional< double > m_pdVn_;
                ::dds::core::optional< double > m_peVd_;
                double m_peVe_;
                double m_peVn_;
                ::dds::core::optional< double > m_pnVd_;
                double m_pnVe_;
                double m_pnVn_;

            };

            inline void swap(CovariancePositionVelocityType& a, CovariancePositionVelocityType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovariancePositionVelocityType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovariancePositionVelocityType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovariancePositionVelocityType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::CovariancePositionVelocityType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovariancePositionVelocityType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::CovariancePositionVelocityType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovariancePositionVelocityType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovariancePositionVelocityType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovariancePositionVelocityType > {
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

#endif // CovariancePositionVelocityType_1813598106_hpp

