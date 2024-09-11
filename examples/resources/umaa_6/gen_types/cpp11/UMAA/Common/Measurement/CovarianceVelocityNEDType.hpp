

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceVelocityNEDType_945463903_hpp
#define CovarianceVelocityNEDType_945463903_hpp

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

            class NDDSUSERDllExport CovarianceVelocityNEDType {
              public:

                CovarianceVelocityNEDType();

                CovarianceVelocityNEDType(const ::dds::core::optional< double >& vdVd_,const ::dds::core::optional< double >& veVd_,double veVe_,const ::dds::core::optional< double >& vnVd_,const ::dds::core::optional< double >& vnVe_,double vnVn_);

                ::dds::core::optional< double >& vdVd() noexcept {
                    return m_vdVd_;
                }

                const ::dds::core::optional< double >& vdVd() const noexcept {
                    return m_vdVd_;
                }

                void vdVd(const ::dds::core::optional< double >& value) {

                    m_vdVd_ = value;
                }

                void vdVd(::dds::core::optional< double >&& value) {
                    m_vdVd_ = std::move(value);
                }
                ::dds::core::optional< double >& veVd() noexcept {
                    return m_veVd_;
                }

                const ::dds::core::optional< double >& veVd() const noexcept {
                    return m_veVd_;
                }

                void veVd(const ::dds::core::optional< double >& value) {

                    m_veVd_ = value;
                }

                void veVd(::dds::core::optional< double >&& value) {
                    m_veVd_ = std::move(value);
                }
                double& veVe() noexcept {
                    return m_veVe_;
                }

                const double& veVe() const noexcept {
                    return m_veVe_;
                }

                void veVe(double value) {

                    m_veVe_ = value;
                }

                ::dds::core::optional< double >& vnVd() noexcept {
                    return m_vnVd_;
                }

                const ::dds::core::optional< double >& vnVd() const noexcept {
                    return m_vnVd_;
                }

                void vnVd(const ::dds::core::optional< double >& value) {

                    m_vnVd_ = value;
                }

                void vnVd(::dds::core::optional< double >&& value) {
                    m_vnVd_ = std::move(value);
                }
                ::dds::core::optional< double >& vnVe() noexcept {
                    return m_vnVe_;
                }

                const ::dds::core::optional< double >& vnVe() const noexcept {
                    return m_vnVe_;
                }

                void vnVe(const ::dds::core::optional< double >& value) {

                    m_vnVe_ = value;
                }

                void vnVe(::dds::core::optional< double >&& value) {
                    m_vnVe_ = std::move(value);
                }
                double& vnVn() noexcept {
                    return m_vnVn_;
                }

                const double& vnVn() const noexcept {
                    return m_vnVn_;
                }

                void vnVn(double value) {

                    m_vnVn_ = value;
                }

                bool operator == (const CovarianceVelocityNEDType& other_) const;
                bool operator != (const CovarianceVelocityNEDType& other_) const;

                void swap(CovarianceVelocityNEDType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_vdVd_;
                ::dds::core::optional< double > m_veVd_;
                double m_veVe_;
                ::dds::core::optional< double > m_vnVd_;
                ::dds::core::optional< double > m_vnVe_;
                double m_vnVn_;

            };

            inline void swap(CovarianceVelocityNEDType& a, CovarianceVelocityNEDType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceVelocityNEDType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceVelocityNEDType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceVelocityNEDType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceVelocityNEDType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > {
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

#endif // CovarianceVelocityNEDType_945463903_hpp

