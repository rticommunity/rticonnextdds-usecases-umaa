

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Speed_BSL_Tolerance.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Speed_BSL_Tolerance_1882606514_hpp
#define Speed_BSL_Tolerance_1882606514_hpp

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
        namespace MeasurementTolerances {

            class NDDSUSERDllExport Speed_BSL_Tolerance {
              public:
                Speed_BSL_Tolerance();

                Speed_BSL_Tolerance(double lowerLimit,double stepSize,double upperLimit);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                Speed_BSL_Tolerance (Speed_BSL_Tolerance&&) = default;
                Speed_BSL_Tolerance& operator=(Speed_BSL_Tolerance&&) = default;
                Speed_BSL_Tolerance& operator=(const Speed_BSL_Tolerance&) = default;
                Speed_BSL_Tolerance(const Speed_BSL_Tolerance&) = default;
                #else
                Speed_BSL_Tolerance(Speed_BSL_Tolerance&& other_) OMG_NOEXCEPT;  
                Speed_BSL_Tolerance& operator=(Speed_BSL_Tolerance&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& lowerLimit() OMG_NOEXCEPT {
                    return m_lowerLimit_;
                }

                const double& lowerLimit() const OMG_NOEXCEPT {
                    return m_lowerLimit_;
                }

                void lowerLimit(double value) {
                    m_lowerLimit_ = value;
                }

                double& stepSize() OMG_NOEXCEPT {
                    return m_stepSize_;
                }

                const double& stepSize() const OMG_NOEXCEPT {
                    return m_stepSize_;
                }

                void stepSize(double value) {
                    m_stepSize_ = value;
                }

                double& upperLimit() OMG_NOEXCEPT {
                    return m_upperLimit_;
                }

                const double& upperLimit() const OMG_NOEXCEPT {
                    return m_upperLimit_;
                }

                void upperLimit(double value) {
                    m_upperLimit_ = value;
                }

                bool operator == (const Speed_BSL_Tolerance& other_) const;
                bool operator != (const Speed_BSL_Tolerance& other_) const;

                void swap(Speed_BSL_Tolerance& other_) OMG_NOEXCEPT ;

              private:

                double m_lowerLimit_;
                double m_stepSize_;
                double m_upperLimit_;

            };

            inline void swap(Speed_BSL_Tolerance& a, Speed_BSL_Tolerance& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Speed_BSL_Tolerance& sample);

        } // namespace MeasurementTolerances  
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
        struct topic_type_name< UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::MeasurementTolerances::Speed_BSL_Tolerance > {
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

#endif // Speed_BSL_Tolerance_1882606514_hpp

