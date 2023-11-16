

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationType_870194440_hpp
#define CovarianceOrientationType_870194440_hpp

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
        namespace Measurement {

            class NDDSUSERDllExport CovarianceOrientationType {
              public:
                CovarianceOrientationType();

                CovarianceOrientationType(double rpRp,double rpRy,double rrRp,double rrRr,double rrRy,double ryRy);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CovarianceOrientationType (CovarianceOrientationType&&) = default;
                CovarianceOrientationType& operator=(CovarianceOrientationType&&) = default;
                CovarianceOrientationType& operator=(const CovarianceOrientationType&) = default;
                CovarianceOrientationType(const CovarianceOrientationType&) = default;
                #else
                CovarianceOrientationType(CovarianceOrientationType&& other_) OMG_NOEXCEPT;  
                CovarianceOrientationType& operator=(CovarianceOrientationType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& rpRp() OMG_NOEXCEPT {
                    return m_rpRp_;
                }

                const double& rpRp() const OMG_NOEXCEPT {
                    return m_rpRp_;
                }

                void rpRp(double value) {
                    m_rpRp_ = value;
                }

                double& rpRy() OMG_NOEXCEPT {
                    return m_rpRy_;
                }

                const double& rpRy() const OMG_NOEXCEPT {
                    return m_rpRy_;
                }

                void rpRy(double value) {
                    m_rpRy_ = value;
                }

                double& rrRp() OMG_NOEXCEPT {
                    return m_rrRp_;
                }

                const double& rrRp() const OMG_NOEXCEPT {
                    return m_rrRp_;
                }

                void rrRp(double value) {
                    m_rrRp_ = value;
                }

                double& rrRr() OMG_NOEXCEPT {
                    return m_rrRr_;
                }

                const double& rrRr() const OMG_NOEXCEPT {
                    return m_rrRr_;
                }

                void rrRr(double value) {
                    m_rrRr_ = value;
                }

                double& rrRy() OMG_NOEXCEPT {
                    return m_rrRy_;
                }

                const double& rrRy() const OMG_NOEXCEPT {
                    return m_rrRy_;
                }

                void rrRy(double value) {
                    m_rrRy_ = value;
                }

                double& ryRy() OMG_NOEXCEPT {
                    return m_ryRy_;
                }

                const double& ryRy() const OMG_NOEXCEPT {
                    return m_ryRy_;
                }

                void ryRy(double value) {
                    m_ryRy_ = value;
                }

                bool operator == (const CovarianceOrientationType& other_) const;
                bool operator != (const CovarianceOrientationType& other_) const;

                void swap(CovarianceOrientationType& other_) OMG_NOEXCEPT ;

              private:

                double m_rpRp_;
                double m_rpRy_;
                double m_rrRp_;
                double m_rrRr_;
                double m_rrRy_;
                double m_ryRy_;

            };

            inline void swap(CovarianceOrientationType& a, CovarianceOrientationType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceOrientationType& sample);

        } // namespace Measurement  
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
        struct topic_type_name< UMAA::Common::Measurement::CovarianceOrientationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceOrientationType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::CovarianceOrientationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::CovarianceOrientationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::CovarianceOrientationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::CovarianceOrientationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::CovarianceOrientationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::CovarianceOrientationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::CovarianceOrientationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::CovarianceOrientationType > {
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

#endif // CovarianceOrientationType_870194440_hpp

