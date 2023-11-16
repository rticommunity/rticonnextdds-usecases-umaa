

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MassBallastFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MassBallastFlowRateType_1018645603_hpp
#define MassBallastFlowRateType_1018645603_hpp

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
    namespace EO {
        namespace BallastTank {

            class NDDSUSERDllExport MassBallastFlowRateType {
              public:
                MassBallastFlowRateType();

                explicit MassBallastFlowRateType(double massBallastFlowRate);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                MassBallastFlowRateType (MassBallastFlowRateType&&) = default;
                MassBallastFlowRateType& operator=(MassBallastFlowRateType&&) = default;
                MassBallastFlowRateType& operator=(const MassBallastFlowRateType&) = default;
                MassBallastFlowRateType(const MassBallastFlowRateType&) = default;
                #else
                MassBallastFlowRateType(MassBallastFlowRateType&& other_) OMG_NOEXCEPT;  
                MassBallastFlowRateType& operator=(MassBallastFlowRateType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& massBallastFlowRate() OMG_NOEXCEPT {
                    return m_massBallastFlowRate_;
                }

                const double& massBallastFlowRate() const OMG_NOEXCEPT {
                    return m_massBallastFlowRate_;
                }

                void massBallastFlowRate(double value) {
                    m_massBallastFlowRate_ = value;
                }

                bool operator == (const MassBallastFlowRateType& other_) const;
                bool operator != (const MassBallastFlowRateType& other_) const;

                void swap(MassBallastFlowRateType& other_) OMG_NOEXCEPT ;

              private:

                double m_massBallastFlowRate_;

            };

            inline void swap(MassBallastFlowRateType& a, MassBallastFlowRateType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MassBallastFlowRateType& sample);

        } // namespace BallastTank  
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
        struct topic_type_name< UMAA::EO::BallastTank::MassBallastFlowRateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::MassBallastFlowRateType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BallastTank::MassBallastFlowRateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BallastTank::MassBallastFlowRateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BallastTank::MassBallastFlowRateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BallastTank::MassBallastFlowRateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BallastTank::MassBallastFlowRateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BallastTank::MassBallastFlowRateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BallastTank::MassBallastFlowRateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BallastTank::MassBallastFlowRateType > {
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

#endif // MassBallastFlowRateType_1018645603_hpp

