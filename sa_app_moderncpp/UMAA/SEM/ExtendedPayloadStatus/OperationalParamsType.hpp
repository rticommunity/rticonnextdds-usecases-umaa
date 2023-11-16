

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OperationalParamsType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OperationalParamsType_634811218_hpp
#define OperationalParamsType_634811218_hpp

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
    namespace SEM {
        namespace ExtendedPayloadStatus {

            class NDDSUSERDllExport OperationalParamsType {
              public:
                OperationalParamsType();

                OperationalParamsType(double busCurrent,double busVoltage,double phaseCurrent,double temp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                OperationalParamsType (OperationalParamsType&&) = default;
                OperationalParamsType& operator=(OperationalParamsType&&) = default;
                OperationalParamsType& operator=(const OperationalParamsType&) = default;
                OperationalParamsType(const OperationalParamsType&) = default;
                #else
                OperationalParamsType(OperationalParamsType&& other_) OMG_NOEXCEPT;  
                OperationalParamsType& operator=(OperationalParamsType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& busCurrent() OMG_NOEXCEPT {
                    return m_busCurrent_;
                }

                const double& busCurrent() const OMG_NOEXCEPT {
                    return m_busCurrent_;
                }

                void busCurrent(double value) {
                    m_busCurrent_ = value;
                }

                double& busVoltage() OMG_NOEXCEPT {
                    return m_busVoltage_;
                }

                const double& busVoltage() const OMG_NOEXCEPT {
                    return m_busVoltage_;
                }

                void busVoltage(double value) {
                    m_busVoltage_ = value;
                }

                double& phaseCurrent() OMG_NOEXCEPT {
                    return m_phaseCurrent_;
                }

                const double& phaseCurrent() const OMG_NOEXCEPT {
                    return m_phaseCurrent_;
                }

                void phaseCurrent(double value) {
                    m_phaseCurrent_ = value;
                }

                double& temp() OMG_NOEXCEPT {
                    return m_temp_;
                }

                const double& temp() const OMG_NOEXCEPT {
                    return m_temp_;
                }

                void temp(double value) {
                    m_temp_ = value;
                }

                bool operator == (const OperationalParamsType& other_) const;
                bool operator != (const OperationalParamsType& other_) const;

                void swap(OperationalParamsType& other_) OMG_NOEXCEPT ;

              private:

                double m_busCurrent_;
                double m_busVoltage_;
                double m_phaseCurrent_;
                double m_temp_;

            };

            inline void swap(OperationalParamsType& a, OperationalParamsType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const OperationalParamsType& sample);

        } // namespace ExtendedPayloadStatus  
    } // namespace SEM  
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
        struct topic_type_name< UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType > {
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

#endif // OperationalParamsType_634811218_hpp

