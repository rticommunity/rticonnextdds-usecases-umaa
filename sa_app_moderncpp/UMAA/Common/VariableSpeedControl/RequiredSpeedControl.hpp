

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RequiredSpeedControl_1864756473_hpp
#define RequiredSpeedControl_1864756473_hpp

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
#include "UMAA/Common/Speed/SpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {

            class NDDSUSERDllExport RequiredSpeedControl {
              public:
                RequiredSpeedControl();

                explicit RequiredSpeedControl(const UMAA::Common::Speed::SpeedControlType& requiredSpeedControl);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                RequiredSpeedControl (RequiredSpeedControl&&) = default;
                RequiredSpeedControl& operator=(RequiredSpeedControl&&) = default;
                RequiredSpeedControl& operator=(const RequiredSpeedControl&) = default;
                RequiredSpeedControl(const RequiredSpeedControl&) = default;
                #else
                RequiredSpeedControl(RequiredSpeedControl&& other_) OMG_NOEXCEPT;  
                RequiredSpeedControl& operator=(RequiredSpeedControl&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Speed::SpeedControlType& requiredSpeedControl() OMG_NOEXCEPT {
                    return m_requiredSpeedControl_;
                }

                const UMAA::Common::Speed::SpeedControlType& requiredSpeedControl() const OMG_NOEXCEPT {
                    return m_requiredSpeedControl_;
                }

                void requiredSpeedControl(const UMAA::Common::Speed::SpeedControlType& value) {
                    m_requiredSpeedControl_ = value;
                }

                void requiredSpeedControl(UMAA::Common::Speed::SpeedControlType&& value) {
                    m_requiredSpeedControl_ = std::move(value);
                }

                bool operator == (const RequiredSpeedControl& other_) const;
                bool operator != (const RequiredSpeedControl& other_) const;

                void swap(RequiredSpeedControl& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Speed::SpeedControlType m_requiredSpeedControl_;

            };

            inline void swap(RequiredSpeedControl& a, RequiredSpeedControl& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RequiredSpeedControl& sample);

        } // namespace VariableSpeedControl  
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
        struct topic_type_name< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::VariableSpeedControl::RequiredSpeedControl";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::VariableSpeedControl::RequiredSpeedControl& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::VariableSpeedControl::RequiredSpeedControl > {
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

#endif // RequiredSpeedControl_1864756473_hpp

