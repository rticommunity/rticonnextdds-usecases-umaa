

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryCellDataType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryCellDataType_665770853_hpp
#define BatteryCellDataType_665770853_hpp

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
        namespace BatteryStatus {

            class NDDSUSERDllExport BatteryCellDataType {
              public:
                BatteryCellDataType();

                BatteryCellDataType(double current,double temperature,double voltage);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BatteryCellDataType (BatteryCellDataType&&) = default;
                BatteryCellDataType& operator=(BatteryCellDataType&&) = default;
                BatteryCellDataType& operator=(const BatteryCellDataType&) = default;
                BatteryCellDataType(const BatteryCellDataType&) = default;
                #else
                BatteryCellDataType(BatteryCellDataType&& other_) OMG_NOEXCEPT;  
                BatteryCellDataType& operator=(BatteryCellDataType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& current() OMG_NOEXCEPT {
                    return m_current_;
                }

                const double& current() const OMG_NOEXCEPT {
                    return m_current_;
                }

                void current(double value) {
                    m_current_ = value;
                }

                double& temperature() OMG_NOEXCEPT {
                    return m_temperature_;
                }

                const double& temperature() const OMG_NOEXCEPT {
                    return m_temperature_;
                }

                void temperature(double value) {
                    m_temperature_ = value;
                }

                double& voltage() OMG_NOEXCEPT {
                    return m_voltage_;
                }

                const double& voltage() const OMG_NOEXCEPT {
                    return m_voltage_;
                }

                void voltage(double value) {
                    m_voltage_ = value;
                }

                bool operator == (const BatteryCellDataType& other_) const;
                bool operator != (const BatteryCellDataType& other_) const;

                void swap(BatteryCellDataType& other_) OMG_NOEXCEPT ;

              private:

                double m_current_;
                double m_temperature_;
                double m_voltage_;

            };

            inline void swap(BatteryCellDataType& a, BatteryCellDataType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BatteryCellDataType& sample);

        } // namespace BatteryStatus  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::BatteryStatus::BatteryCellDataType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BatteryStatus::BatteryCellDataType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BatteryStatus::BatteryCellDataType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BatteryStatus::BatteryCellDataType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BatteryStatus::BatteryCellDataType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BatteryStatus::BatteryCellDataType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BatteryStatus::BatteryCellDataType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BatteryStatus::BatteryCellDataType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BatteryStatus::BatteryCellDataType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BatteryStatus::BatteryCellDataType > {
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

#endif // BatteryCellDataType_665770853_hpp

