

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceNEDAccelerationAccelerationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceNEDAccelerationAccelerationType_13918831_hpp
#define CovarianceNEDAccelerationAccelerationType_13918831_hpp

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

            class NDDSUSERDllExport CovarianceNEDAccelerationAccelerationType {
              public:

                CovarianceNEDAccelerationAccelerationType();

                CovarianceNEDAccelerationAccelerationType(double adAd_,double aeAd_,double aeAe_,double anAd_,double anAe_,double anAn_);

                double& adAd() noexcept {
                    return m_adAd_;
                }

                const double& adAd() const noexcept {
                    return m_adAd_;
                }

                void adAd(double value) {

                    m_adAd_ = value;
                }

                double& aeAd() noexcept {
                    return m_aeAd_;
                }

                const double& aeAd() const noexcept {
                    return m_aeAd_;
                }

                void aeAd(double value) {

                    m_aeAd_ = value;
                }

                double& aeAe() noexcept {
                    return m_aeAe_;
                }

                const double& aeAe() const noexcept {
                    return m_aeAe_;
                }

                void aeAe(double value) {

                    m_aeAe_ = value;
                }

                double& anAd() noexcept {
                    return m_anAd_;
                }

                const double& anAd() const noexcept {
                    return m_anAd_;
                }

                void anAd(double value) {

                    m_anAd_ = value;
                }

                double& anAe() noexcept {
                    return m_anAe_;
                }

                const double& anAe() const noexcept {
                    return m_anAe_;
                }

                void anAe(double value) {

                    m_anAe_ = value;
                }

                double& anAn() noexcept {
                    return m_anAn_;
                }

                const double& anAn() const noexcept {
                    return m_anAn_;
                }

                void anAn(double value) {

                    m_anAn_ = value;
                }

                bool operator == (const CovarianceNEDAccelerationAccelerationType& other_) const;
                bool operator != (const CovarianceNEDAccelerationAccelerationType& other_) const;

                void swap(CovarianceNEDAccelerationAccelerationType& other_) noexcept ;

              private:

                double m_adAd_;
                double m_aeAd_;
                double m_aeAe_;
                double m_anAd_;
                double m_anAe_;
                double m_anAn_;

            };

            inline void swap(CovarianceNEDAccelerationAccelerationType& a, CovarianceNEDAccelerationAccelerationType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceNEDAccelerationAccelerationType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > {
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

#endif // CovarianceNEDAccelerationAccelerationType_13918831_hpp

