

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationVelocityNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationVelocityNEDType_1490178988_hpp
#define CovarianceOrientationVelocityNEDType_1490178988_hpp

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

            class NDDSUSERDllExport CovarianceOrientationVelocityNEDType {
              public:

                CovarianceOrientationVelocityNEDType();

                CovarianceOrientationVelocityNEDType(double rpRp_,const ::dds::core::optional< double >& rpRy_,const ::dds::core::optional< double >& rrRp_,double rrRr_,const ::dds::core::optional< double >& rrRy_,double ryRy_);

                double& rpRp() noexcept {
                    return m_rpRp_;
                }

                const double& rpRp() const noexcept {
                    return m_rpRp_;
                }

                void rpRp(double value) {

                    m_rpRp_ = value;
                }

                ::dds::core::optional< double >& rpRy() noexcept {
                    return m_rpRy_;
                }

                const ::dds::core::optional< double >& rpRy() const noexcept {
                    return m_rpRy_;
                }

                void rpRy(const ::dds::core::optional< double >& value) {

                    m_rpRy_ = value;
                }

                void rpRy(::dds::core::optional< double >&& value) {
                    m_rpRy_ = std::move(value);
                }
                ::dds::core::optional< double >& rrRp() noexcept {
                    return m_rrRp_;
                }

                const ::dds::core::optional< double >& rrRp() const noexcept {
                    return m_rrRp_;
                }

                void rrRp(const ::dds::core::optional< double >& value) {

                    m_rrRp_ = value;
                }

                void rrRp(::dds::core::optional< double >&& value) {
                    m_rrRp_ = std::move(value);
                }
                double& rrRr() noexcept {
                    return m_rrRr_;
                }

                const double& rrRr() const noexcept {
                    return m_rrRr_;
                }

                void rrRr(double value) {

                    m_rrRr_ = value;
                }

                ::dds::core::optional< double >& rrRy() noexcept {
                    return m_rrRy_;
                }

                const ::dds::core::optional< double >& rrRy() const noexcept {
                    return m_rrRy_;
                }

                void rrRy(const ::dds::core::optional< double >& value) {

                    m_rrRy_ = value;
                }

                void rrRy(::dds::core::optional< double >&& value) {
                    m_rrRy_ = std::move(value);
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

                bool operator == (const CovarianceOrientationVelocityNEDType& other_) const;
                bool operator != (const CovarianceOrientationVelocityNEDType& other_) const;

                void swap(CovarianceOrientationVelocityNEDType& other_) noexcept ;

              private:

                double m_rpRp_;
                ::dds::core::optional< double > m_rpRy_;
                ::dds::core::optional< double > m_rrRp_;
                double m_rrRr_;
                ::dds::core::optional< double > m_rrRy_;
                double m_ryRy_;

            };

            inline void swap(CovarianceOrientationVelocityNEDType& a, CovarianceOrientationVelocityNEDType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceOrientationVelocityNEDType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > {
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

#endif // CovarianceOrientationVelocityNEDType_1490178988_hpp

