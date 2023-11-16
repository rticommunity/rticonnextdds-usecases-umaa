

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VariableSpeedControlType_455525219_hpp
#define VariableSpeedControlType_455525219_hpp

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
#include "UMAA/Common/VariableSpeedControl/RecommendedSpeedControl.hpp"
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
#include "UMAA/Common/VariableSpeedControl/RequiredSpeedControl.hpp"
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
#include "UMAA/Common/VariableSpeedControl/TimeWithSpeed.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {
            namespace VariableSpeedControlType_Specializations {
                enum class VariableSpeedControlType_Selectors {
                    TIMEWITHSPEED_SELECT, 
                    RECOMMENDEDSPEEDCONTROL_SELECT, 
                    REQUIREDSPEEDCONTROL_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VariableSpeedControlType_Selectors& sample);

                class NDDSUSERDllExport VariableSpeedControlType_Union {
                  public:
                    VariableSpeedControlType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    VariableSpeedControlType_Union (VariableSpeedControlType_Union&&) = default;
                    VariableSpeedControlType_Union& operator=(VariableSpeedControlType_Union&&) = default;
                    VariableSpeedControlType_Union& operator=(const VariableSpeedControlType_Union&) = default;
                    VariableSpeedControlType_Union(const VariableSpeedControlType_Union&) = default;
                    #else
                    VariableSpeedControlType_Union(VariableSpeedControlType_Union&& other_) OMG_NOEXCEPT;  
                    VariableSpeedControlType_Union& operator=(VariableSpeedControlType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::Common::VariableSpeedControl::TimeWithSpeed& TimeWithSpeed_data()  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::TimeWithSpeed_data not selected by the discriminator" );
                        }
                        return m_u_.m_TimeWithSpeed_data_;
                    }

                    const UMAA::Common::VariableSpeedControl::TimeWithSpeed& TimeWithSpeed_data() const  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::TimeWithSpeed_data not selected by the discriminator" );
                        }
                        return m_u_.m_TimeWithSpeed_data_;
                    }

                    void TimeWithSpeed_data(const UMAA::Common::VariableSpeedControl::TimeWithSpeed& value) {
                        m_u_.m_TimeWithSpeed_data_ = value;
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT);
                    }

                    void TimeWithSpeed_data(UMAA::Common::VariableSpeedControl::TimeWithSpeed&& value) {
                        m_u_.m_TimeWithSpeed_data_ = std::move(value);
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT);
                    }
                    UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& RecommendedSpeedControl_data()  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::RecommendedSpeedControl_data not selected by the discriminator" );
                        }
                        return m_u_.m_RecommendedSpeedControl_data_;
                    }

                    const UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& RecommendedSpeedControl_data() const  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::RecommendedSpeedControl_data not selected by the discriminator" );
                        }
                        return m_u_.m_RecommendedSpeedControl_data_;
                    }

                    void RecommendedSpeedControl_data(const UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& value) {
                        m_u_.m_RecommendedSpeedControl_data_ = value;
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT);
                    }

                    void RecommendedSpeedControl_data(UMAA::Common::VariableSpeedControl::RecommendedSpeedControl&& value) {
                        m_u_.m_RecommendedSpeedControl_data_ = std::move(value);
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT);
                    }
                    UMAA::Common::VariableSpeedControl::RequiredSpeedControl& RequiredSpeedControl_data()  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::RequiredSpeedControl_data not selected by the discriminator" );
                        }
                        return m_u_.m_RequiredSpeedControl_data_;
                    }

                    const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& RequiredSpeedControl_data() const  {
                        if ( _d() != (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::RequiredSpeedControl_data not selected by the discriminator" );
                        }
                        return m_u_.m_RequiredSpeedControl_data_;
                    }

                    void RequiredSpeedControl_data(const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& value) {
                        m_u_.m_RequiredSpeedControl_data_ = value;
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT);
                    }

                    void RequiredSpeedControl_data(UMAA::Common::VariableSpeedControl::RequiredSpeedControl&& value) {
                        m_u_.m_RequiredSpeedControl_data_ = std::move(value);
                        m_d_= (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT);
                    }

                    bool operator == (const VariableSpeedControlType_Union& other_) const;
                    bool operator != (const VariableSpeedControlType_Union& other_) const;

                    static UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors default_discriminator();  

                    void swap(VariableSpeedControlType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::Common::VariableSpeedControl::TimeWithSpeed m_TimeWithSpeed_data_;
                        UMAA::Common::VariableSpeedControl::RecommendedSpeedControl m_RecommendedSpeedControl_data_;
                        UMAA::Common::VariableSpeedControl::RequiredSpeedControl m_RequiredSpeedControl_data_;
                        Union_();
                        Union_(const UMAA::Common::VariableSpeedControl::TimeWithSpeed& TimeWithSpeed_data,const UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& RecommendedSpeedControl_data,const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& RequiredSpeedControl_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(VariableSpeedControlType_Union& a, VariableSpeedControlType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VariableSpeedControlType_Union& sample);

            } // namespace VariableSpeedControlType_Specializations  

            class NDDSUSERDllExport VariableSpeedControlType {
              public:
                VariableSpeedControlType();

                explicit VariableSpeedControlType(const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& VariableSpeedControlType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VariableSpeedControlType (VariableSpeedControlType&&) = default;
                VariableSpeedControlType& operator=(VariableSpeedControlType&&) = default;
                VariableSpeedControlType& operator=(const VariableSpeedControlType&) = default;
                VariableSpeedControlType(const VariableSpeedControlType&) = default;
                #else
                VariableSpeedControlType(VariableSpeedControlType&& other_) OMG_NOEXCEPT;  
                VariableSpeedControlType& operator=(VariableSpeedControlType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& VariableSpeedControlType_subtypes() OMG_NOEXCEPT {
                    return m_VariableSpeedControlType_subtypes_;
                }

                const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& VariableSpeedControlType_subtypes() const OMG_NOEXCEPT {
                    return m_VariableSpeedControlType_subtypes_;
                }

                void VariableSpeedControlType_subtypes(const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& value) {
                    m_VariableSpeedControlType_subtypes_ = value;
                }

                void VariableSpeedControlType_subtypes(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union&& value) {
                    m_VariableSpeedControlType_subtypes_ = std::move(value);
                }

                bool operator == (const VariableSpeedControlType& other_) const;
                bool operator != (const VariableSpeedControlType& other_) const;

                void swap(VariableSpeedControlType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union m_VariableSpeedControlType_subtypes_;

            };

            inline void swap(VariableSpeedControlType& a, VariableSpeedControlType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VariableSpeedControlType& sample);

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
        struct topic_type_name< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::VariableSpeedControl::VariableSpeedControlType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors>
        {
            static const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > {
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

#endif // VariableSpeedControlType_455525219_hpp

