

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationAccelerationAccelerationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationAccelerationAccelerationType_471242722_hpp
#define CovarianceOrientationAccelerationAccelerationType_471242722_hpp

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

            class NDDSUSERDllExport CovarianceOrientationAccelerationAccelerationType {
              public:

                CovarianceOrientationAccelerationAccelerationType();

                CovarianceOrientationAccelerationAccelerationType(double apAp_,double apAy_,double arAp_,double arAr_,double arAy_,double ayAy_);

                double& apAp() noexcept {
                    return m_apAp_;
                }

                const double& apAp() const noexcept {
                    return m_apAp_;
                }

                void apAp(double value) {

                    m_apAp_ = value;
                }

                double& apAy() noexcept {
                    return m_apAy_;
                }

                const double& apAy() const noexcept {
                    return m_apAy_;
                }

                void apAy(double value) {

                    m_apAy_ = value;
                }

                double& arAp() noexcept {
                    return m_arAp_;
                }

                const double& arAp() const noexcept {
                    return m_arAp_;
                }

                void arAp(double value) {

                    m_arAp_ = value;
                }

                double& arAr() noexcept {
                    return m_arAr_;
                }

                const double& arAr() const noexcept {
                    return m_arAr_;
                }

                void arAr(double value) {

                    m_arAr_ = value;
                }

                double& arAy() noexcept {
                    return m_arAy_;
                }

                const double& arAy() const noexcept {
                    return m_arAy_;
                }

                void arAy(double value) {

                    m_arAy_ = value;
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

                bool operator == (const CovarianceOrientationAccelerationAccelerationType& other_) const;
                bool operator != (const CovarianceOrientationAccelerationAccelerationType& other_) const;

                void swap(CovarianceOrientationAccelerationAccelerationType& other_) noexcept ;

              private:

                double m_apAp_;
                double m_apAy_;
                double m_arAp_;
                double m_arAr_;
                double m_arAy_;
                double m_ayAy_;

            };

            inline void swap(CovarianceOrientationAccelerationAccelerationType& a, CovarianceOrientationAccelerationAccelerationType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceOrientationAccelerationAccelerationType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > {
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

#endif // CovarianceOrientationAccelerationAccelerationType_471242722_hpp

