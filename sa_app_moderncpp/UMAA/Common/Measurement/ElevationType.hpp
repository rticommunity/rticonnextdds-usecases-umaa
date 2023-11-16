

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationType_506920845_hpp
#define ElevationType_506920845_hpp

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
#include "UMAA/Common/Measurement/AltitudeAGLType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeASFType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeMSLType.hpp"
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
#include "UMAA/Common/Measurement/DepthType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {
            namespace ElevationType_Specializations {
                enum class ElevationType_Selectors {
                    ALTITUDEAGLTYPE_SELECT, 
                    ALTITUDEMSLTYPE_SELECT, 
                    ALTITUDEASFTYPE_SELECT, 
                    DEPTHTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ElevationType_Selectors& sample);

                class NDDSUSERDllExport ElevationType_Union {
                  public:
                    ElevationType_Union();

                    #ifdef RTI_CXX11_RVALUE_REFERENCES
                    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                    ElevationType_Union (ElevationType_Union&&) = default;
                    ElevationType_Union& operator=(ElevationType_Union&&) = default;
                    ElevationType_Union& operator=(const ElevationType_Union&) = default;
                    ElevationType_Union(const ElevationType_Union&) = default;
                    #else
                    ElevationType_Union(ElevationType_Union&& other_) OMG_NOEXCEPT;  
                    ElevationType_Union& operator=(ElevationType_Union&&  other_) OMG_NOEXCEPT;
                    #endif
                    #endif 

                    UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors& _d()  {
                        return m_d_;
                    }

                    const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors& value) {
                        m_d_ = value;
                    }

                    UMAA::Common::Measurement::AltitudeAGLType& AltitudeAGLType_data()  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeAGLType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeAGLType_data_;
                    }

                    const UMAA::Common::Measurement::AltitudeAGLType& AltitudeAGLType_data() const  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeAGLType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeAGLType_data_;
                    }

                    void AltitudeAGLType_data(const UMAA::Common::Measurement::AltitudeAGLType& value) {
                        m_u_.m_AltitudeAGLType_data_ = value;
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT);
                    }

                    void AltitudeAGLType_data(UMAA::Common::Measurement::AltitudeAGLType&& value) {
                        m_u_.m_AltitudeAGLType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT);
                    }
                    UMAA::Common::Measurement::AltitudeMSLType& AltitudeMSLType_data()  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeMSLType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeMSLType_data_;
                    }

                    const UMAA::Common::Measurement::AltitudeMSLType& AltitudeMSLType_data() const  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeMSLType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeMSLType_data_;
                    }

                    void AltitudeMSLType_data(const UMAA::Common::Measurement::AltitudeMSLType& value) {
                        m_u_.m_AltitudeMSLType_data_ = value;
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT);
                    }

                    void AltitudeMSLType_data(UMAA::Common::Measurement::AltitudeMSLType&& value) {
                        m_u_.m_AltitudeMSLType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT);
                    }
                    UMAA::Common::Measurement::AltitudeASFType& AltitudeASFType_data()  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeASFType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeASFType_data_;
                    }

                    const UMAA::Common::Measurement::AltitudeASFType& AltitudeASFType_data() const  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::AltitudeASFType_data not selected by the discriminator" );
                        }
                        return m_u_.m_AltitudeASFType_data_;
                    }

                    void AltitudeASFType_data(const UMAA::Common::Measurement::AltitudeASFType& value) {
                        m_u_.m_AltitudeASFType_data_ = value;
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT);
                    }

                    void AltitudeASFType_data(UMAA::Common::Measurement::AltitudeASFType&& value) {
                        m_u_.m_AltitudeASFType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT);
                    }
                    UMAA::Common::Measurement::DepthType& DepthType_data()  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::DepthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DepthType_data_;
                    }

                    const UMAA::Common::Measurement::DepthType& DepthType_data() const  {
                        if ( _d() != (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT)) {
                            throw ::dds::core::PreconditionNotMetError(
                                "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::DepthType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DepthType_data_;
                    }

                    void DepthType_data(const UMAA::Common::Measurement::DepthType& value) {
                        m_u_.m_DepthType_data_ = value;
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT);
                    }

                    void DepthType_data(UMAA::Common::Measurement::DepthType&& value) {
                        m_u_.m_DepthType_data_ = std::move(value);
                        m_d_= (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT);
                    }

                    bool operator == (const ElevationType_Union& other_) const;
                    bool operator != (const ElevationType_Union& other_) const;

                    static UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors default_discriminator();  

                    void swap(ElevationType_Union& other_) OMG_NOEXCEPT ;

                  private:

                    UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        UMAA::Common::Measurement::AltitudeAGLType m_AltitudeAGLType_data_;
                        UMAA::Common::Measurement::AltitudeMSLType m_AltitudeMSLType_data_;
                        UMAA::Common::Measurement::AltitudeASFType m_AltitudeASFType_data_;
                        UMAA::Common::Measurement::DepthType m_DepthType_data_;
                        Union_();
                        Union_(const UMAA::Common::Measurement::AltitudeAGLType& AltitudeAGLType_data,const UMAA::Common::Measurement::AltitudeMSLType& AltitudeMSLType_data,const UMAA::Common::Measurement::AltitudeASFType& AltitudeASFType_data,const UMAA::Common::Measurement::DepthType& DepthType_data);
                    };
                    Union_ m_u_;

                };

                inline void swap(ElevationType_Union& a, ElevationType_Union& b)  OMG_NOEXCEPT 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationType_Union& sample);

            } // namespace ElevationType_Specializations  

            class NDDSUSERDllExport ElevationType {
              public:
                ElevationType();

                explicit ElevationType(const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& ElevationType_subtypes);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ElevationType (ElevationType&&) = default;
                ElevationType& operator=(ElevationType&&) = default;
                ElevationType& operator=(const ElevationType&) = default;
                ElevationType(const ElevationType&) = default;
                #else
                ElevationType(ElevationType&& other_) OMG_NOEXCEPT;  
                ElevationType& operator=(ElevationType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& ElevationType_subtypes() OMG_NOEXCEPT {
                    return m_ElevationType_subtypes_;
                }

                const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& ElevationType_subtypes() const OMG_NOEXCEPT {
                    return m_ElevationType_subtypes_;
                }

                void ElevationType_subtypes(const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& value) {
                    m_ElevationType_subtypes_ = value;
                }

                void ElevationType_subtypes(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union&& value) {
                    m_ElevationType_subtypes_ = std::move(value);
                }

                bool operator == (const ElevationType& other_) const;
                bool operator != (const ElevationType& other_) const;

                void swap(ElevationType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union m_ElevationType_subtypes_;

            };

            inline void swap(ElevationType& a, ElevationType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationType& sample);

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
        struct topic_type_name< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::Common::Measurement::ElevationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationType";
            }
        };

        template<>
        struct is_topic_type< UMAA::Common::Measurement::ElevationType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::Common::Measurement::ElevationType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::Common::Measurement::ElevationType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::Common::Measurement::ElevationType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::Common::Measurement::ElevationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::Common::Measurement::ElevationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors>
        {
            static const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors value;
        };
        template<>
        struct dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::Common::Measurement::ElevationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::Common::Measurement::ElevationType > {
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

#endif // ElevationType_506920845_hpp

