

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BlastPropertiesType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BlastPropertiesType_367037450_hpp
#define BlastPropertiesType_367037450_hpp

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
        namespace Propulsion {

            class NDDSUSERDllExport BlastPropertiesType {
              public:
                BlastPropertiesType();

                BlastPropertiesType(double blastNumber,double restTime);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BlastPropertiesType (BlastPropertiesType&&) = default;
                BlastPropertiesType& operator=(BlastPropertiesType&&) = default;
                BlastPropertiesType& operator=(const BlastPropertiesType&) = default;
                BlastPropertiesType(const BlastPropertiesType&) = default;
                #else
                BlastPropertiesType(BlastPropertiesType&& other_) OMG_NOEXCEPT;  
                BlastPropertiesType& operator=(BlastPropertiesType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& blastNumber() OMG_NOEXCEPT {
                    return m_blastNumber_;
                }

                const double& blastNumber() const OMG_NOEXCEPT {
                    return m_blastNumber_;
                }

                void blastNumber(double value) {
                    m_blastNumber_ = value;
                }

                double& restTime() OMG_NOEXCEPT {
                    return m_restTime_;
                }

                const double& restTime() const OMG_NOEXCEPT {
                    return m_restTime_;
                }

                void restTime(double value) {
                    m_restTime_ = value;
                }

                bool operator == (const BlastPropertiesType& other_) const;
                bool operator != (const BlastPropertiesType& other_) const;

                void swap(BlastPropertiesType& other_) OMG_NOEXCEPT ;

              private:

                double m_blastNumber_;
                double m_restTime_;

            };

            inline void swap(BlastPropertiesType& a, BlastPropertiesType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BlastPropertiesType& sample);

        } // namespace Propulsion  
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
        struct topic_type_name< UMAA::Common::Propulsion::BlastPropertiesType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::BlastPropertiesType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Propulsion::BlastPropertiesType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Propulsion::BlastPropertiesType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Propulsion::BlastPropertiesType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Propulsion::BlastPropertiesType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Propulsion::BlastPropertiesType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Propulsion::BlastPropertiesType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Propulsion::BlastPropertiesType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Propulsion::BlastPropertiesType > {
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

#endif // BlastPropertiesType_367037450_hpp

