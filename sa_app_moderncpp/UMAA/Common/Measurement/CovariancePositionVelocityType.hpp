

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionVelocityType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

                CovariancePositionVelocityType(const ::dds::core::optional< double >& pdVd,const ::dds::core::optional< double >& pdVe,const ::dds::core::optional< double >& pdVn,const ::dds::core::optional< double >& peVd,double peVe,double peVn,const ::dds::core::optional< double >& pnVd,double pnVe,double pnVn);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CovariancePositionVelocityType (CovariancePositionVelocityType&&) = default;
                CovariancePositionVelocityType& operator=(CovariancePositionVelocityType&&) = default;
                CovariancePositionVelocityType& operator=(const CovariancePositionVelocityType&) = default;
                CovariancePositionVelocityType(const CovariancePositionVelocityType&) = default;
                #else
                CovariancePositionVelocityType(CovariancePositionVelocityType&& other_) OMG_NOEXCEPT;  
                CovariancePositionVelocityType& operator=(CovariancePositionVelocityType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& pdVd() OMG_NOEXCEPT {
                    return m_pdVd_;
                }

                const ::dds::core::optional< double >& pdVd() const OMG_NOEXCEPT {
                    return m_pdVd_;
                }

                void pdVd(const ::dds::core::optional< double >& value) {
                    m_pdVd_ = value;
                }

                void pdVd(::dds::core::optional< double >&& value) {
                    m_pdVd_ = std::move(value);
                }
                ::dds::core::optional< double >& pdVe() OMG_NOEXCEPT {
                    return m_pdVe_;
                }

                const ::dds::core::optional< double >& pdVe() const OMG_NOEXCEPT {
                    return m_pdVe_;
                }

                void pdVe(const ::dds::core::optional< double >& value) {
                    m_pdVe_ = value;
                }

                void pdVe(::dds::core::optional< double >&& value) {
                    m_pdVe_ = std::move(value);
                }
                ::dds::core::optional< double >& pdVn() OMG_NOEXCEPT {
                    return m_pdVn_;
                }

                const ::dds::core::optional< double >& pdVn() const OMG_NOEXCEPT {
                    return m_pdVn_;
                }

                void pdVn(const ::dds::core::optional< double >& value) {
                    m_pdVn_ = value;
                }

                void pdVn(::dds::core::optional< double >&& value) {
                    m_pdVn_ = std::move(value);
                }
                ::dds::core::optional< double >& peVd() OMG_NOEXCEPT {
                    return m_peVd_;
                }

                const ::dds::core::optional< double >& peVd() const OMG_NOEXCEPT {
                    return m_peVd_;
                }

                void peVd(const ::dds::core::optional< double >& value) {
                    m_peVd_ = value;
                }

                void peVd(::dds::core::optional< double >&& value) {
                    m_peVd_ = std::move(value);
                }
                double& peVe() OMG_NOEXCEPT {
                    return m_peVe_;
                }

                const double& peVe() const OMG_NOEXCEPT {
                    return m_peVe_;
                }

                void peVe(double value) {
                    m_peVe_ = value;
                }

                double& peVn() OMG_NOEXCEPT {
                    return m_peVn_;
                }

                const double& peVn() const OMG_NOEXCEPT {
                    return m_peVn_;
                }

                void peVn(double value) {
                    m_peVn_ = value;
                }

                ::dds::core::optional< double >& pnVd() OMG_NOEXCEPT {
                    return m_pnVd_;
                }

                const ::dds::core::optional< double >& pnVd() const OMG_NOEXCEPT {
                    return m_pnVd_;
                }

                void pnVd(const ::dds::core::optional< double >& value) {
                    m_pnVd_ = value;
                }

                void pnVd(::dds::core::optional< double >&& value) {
                    m_pnVd_ = std::move(value);
                }
                double& pnVe() OMG_NOEXCEPT {
                    return m_pnVe_;
                }

                const double& pnVe() const OMG_NOEXCEPT {
                    return m_pnVe_;
                }

                void pnVe(double value) {
                    m_pnVe_ = value;
                }

                double& pnVn() OMG_NOEXCEPT {
                    return m_pnVn_;
                }

                const double& pnVn() const OMG_NOEXCEPT {
                    return m_pnVn_;
                }

                void pnVn(double value) {
                    m_pnVn_ = value;
                }

                bool operator == (const CovariancePositionVelocityType& other_) const;
                bool operator != (const CovariancePositionVelocityType& other_) const;

                void swap(CovariancePositionVelocityType& other_) OMG_NOEXCEPT ;

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

            inline void swap(CovariancePositionVelocityType& a, CovariancePositionVelocityType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovariancePositionVelocityType& sample);

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
        struct topic_type_name< UMAA::Common::Measurement::CovariancePositionVelocityType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovariancePositionVelocityType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::CovariancePositionVelocityType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::CovariancePositionVelocityType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::CovariancePositionVelocityType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::CovariancePositionVelocityType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::CovariancePositionVelocityType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::CovariancePositionVelocityType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::CovariancePositionVelocityType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::CovariancePositionVelocityType > {
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

#endif // CovariancePositionVelocityType_1813598106_hpp

