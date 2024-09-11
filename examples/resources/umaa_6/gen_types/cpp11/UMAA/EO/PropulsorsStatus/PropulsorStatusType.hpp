

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorStatusType_1428531680_hpp
#define PropulsorStatusType_1428531680_hpp

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
    namespace EO {
        namespace PropulsorsStatus {

            class NDDSUSERDllExport PropulsorStatusType {
              public:

                PropulsorStatusType();

                PropulsorStatusType(const ::dds::core::optional< double >& gamma_,const ::dds::core::optional< double >& propellerPitch_,int32_t propulsion_,const ::dds::core::optional< double >& rho_);

                ::dds::core::optional< double >& gamma() noexcept {
                    return m_gamma_;
                }

                const ::dds::core::optional< double >& gamma() const noexcept {
                    return m_gamma_;
                }

                void gamma(const ::dds::core::optional< double >& value) {

                    m_gamma_ = value;
                }

                void gamma(::dds::core::optional< double >&& value) {
                    m_gamma_ = std::move(value);
                }
                ::dds::core::optional< double >& propellerPitch() noexcept {
                    return m_propellerPitch_;
                }

                const ::dds::core::optional< double >& propellerPitch() const noexcept {
                    return m_propellerPitch_;
                }

                void propellerPitch(const ::dds::core::optional< double >& value) {

                    m_propellerPitch_ = value;
                }

                void propellerPitch(::dds::core::optional< double >&& value) {
                    m_propellerPitch_ = std::move(value);
                }
                int32_t& propulsion() noexcept {
                    return m_propulsion_;
                }

                const int32_t& propulsion() const noexcept {
                    return m_propulsion_;
                }

                void propulsion(int32_t value) {

                    m_propulsion_ = value;
                }

                ::dds::core::optional< double >& rho() noexcept {
                    return m_rho_;
                }

                const ::dds::core::optional< double >& rho() const noexcept {
                    return m_rho_;
                }

                void rho(const ::dds::core::optional< double >& value) {

                    m_rho_ = value;
                }

                void rho(::dds::core::optional< double >&& value) {
                    m_rho_ = std::move(value);
                }
                bool operator == (const PropulsorStatusType& other_) const;
                bool operator != (const PropulsorStatusType& other_) const;

                void swap(PropulsorStatusType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_gamma_;
                ::dds::core::optional< double > m_propellerPitch_;
                int32_t m_propulsion_;
                ::dds::core::optional< double > m_rho_;

            };

            inline void swap(PropulsorStatusType& a, PropulsorStatusType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsorStatusType& sample);

        } // namespace PropulsorsStatus  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::PropulsorsStatus::PropulsorStatusType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::PropulsorsStatus::PropulsorStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::PropulsorsStatus::PropulsorStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::PropulsorsStatus::PropulsorStatusType > {
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

#endif // PropulsorStatusType_1428531680_hpp

