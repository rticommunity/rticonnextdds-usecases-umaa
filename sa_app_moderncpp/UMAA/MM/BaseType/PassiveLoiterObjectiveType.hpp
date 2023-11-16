

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveLoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveLoiterObjectiveType_1584300805_hpp
#define PassiveLoiterObjectiveType_1584300805_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
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
#include "UMAA/Common/Measurement/Position2DTime.hpp"
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
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport PassiveLoiterObjectiveType {
              public:
                PassiveLoiterObjectiveType();

                PassiveLoiterObjectiveType(double captureRadius,const ::dds::core::optional< double >& depth,const ::dds::core::optional< double >& driftRadius,const ::dds::core::optional< double >& duration,const ::dds::core::optional< double >& heading,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >& headingReference,const UMAA::Common::Measurement::Position2DTime& position,double speed);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PassiveLoiterObjectiveType (PassiveLoiterObjectiveType&&) = default;
                PassiveLoiterObjectiveType& operator=(PassiveLoiterObjectiveType&&) = default;
                PassiveLoiterObjectiveType& operator=(const PassiveLoiterObjectiveType&) = default;
                PassiveLoiterObjectiveType(const PassiveLoiterObjectiveType&) = default;
                #else
                PassiveLoiterObjectiveType(PassiveLoiterObjectiveType&& other_) OMG_NOEXCEPT;  
                PassiveLoiterObjectiveType& operator=(PassiveLoiterObjectiveType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& captureRadius() OMG_NOEXCEPT {
                    return m_captureRadius_;
                }

                const double& captureRadius() const OMG_NOEXCEPT {
                    return m_captureRadius_;
                }

                void captureRadius(double value) {
                    m_captureRadius_ = value;
                }

                ::dds::core::optional< double >& depth() OMG_NOEXCEPT {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const OMG_NOEXCEPT {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {
                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::dds::core::optional< double >& driftRadius() OMG_NOEXCEPT {
                    return m_driftRadius_;
                }

                const ::dds::core::optional< double >& driftRadius() const OMG_NOEXCEPT {
                    return m_driftRadius_;
                }

                void driftRadius(const ::dds::core::optional< double >& value) {
                    m_driftRadius_ = value;
                }

                void driftRadius(::dds::core::optional< double >&& value) {
                    m_driftRadius_ = std::move(value);
                }
                ::dds::core::optional< double >& duration() OMG_NOEXCEPT {
                    return m_duration_;
                }

                const ::dds::core::optional< double >& duration() const OMG_NOEXCEPT {
                    return m_duration_;
                }

                void duration(const ::dds::core::optional< double >& value) {
                    m_duration_ = value;
                }

                void duration(::dds::core::optional< double >&& value) {
                    m_duration_ = std::move(value);
                }
                ::dds::core::optional< double >& heading() OMG_NOEXCEPT {
                    return m_heading_;
                }

                const ::dds::core::optional< double >& heading() const OMG_NOEXCEPT {
                    return m_heading_;
                }

                void heading(const ::dds::core::optional< double >& value) {
                    m_heading_ = value;
                }

                void heading(::dds::core::optional< double >&& value) {
                    m_heading_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >& headingReference() OMG_NOEXCEPT {
                    return m_headingReference_;
                }

                const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >& headingReference() const OMG_NOEXCEPT {
                    return m_headingReference_;
                }

                void headingReference(const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >& value) {
                    m_headingReference_ = value;
                }

                void headingReference(::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType >&& value) {
                    m_headingReference_ = std::move(value);
                }
                UMAA::Common::Measurement::Position2DTime& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const UMAA::Common::Measurement::Position2DTime& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const UMAA::Common::Measurement::Position2DTime& value) {
                    m_position_ = value;
                }

                void position(UMAA::Common::Measurement::Position2DTime&& value) {
                    m_position_ = std::move(value);
                }
                double& speed() OMG_NOEXCEPT {
                    return m_speed_;
                }

                const double& speed() const OMG_NOEXCEPT {
                    return m_speed_;
                }

                void speed(double value) {
                    m_speed_ = value;
                }

                bool operator == (const PassiveLoiterObjectiveType& other_) const;
                bool operator != (const PassiveLoiterObjectiveType& other_) const;

                void swap(PassiveLoiterObjectiveType& other_) OMG_NOEXCEPT ;

              private:

                double m_captureRadius_;
                ::dds::core::optional< double > m_depth_;
                ::dds::core::optional< double > m_driftRadius_;
                ::dds::core::optional< double > m_duration_;
                ::dds::core::optional< double > m_heading_;
                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType > m_headingReference_;
                UMAA::Common::Measurement::Position2DTime m_position_;
                double m_speed_;

            };

            inline void swap(PassiveLoiterObjectiveType& a, PassiveLoiterObjectiveType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PassiveLoiterObjectiveType& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::BaseType::PassiveLoiterObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::PassiveLoiterObjectiveType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::BaseType::PassiveLoiterObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::BaseType::PassiveLoiterObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::BaseType::PassiveLoiterObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::BaseType::PassiveLoiterObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::PassiveLoiterObjectiveType > {
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

#endif // PassiveLoiterObjectiveType_1584300805_hpp

