

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastFillType_331398662_hpp
#define BallastFillType_331398662_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

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
#include "UMAA/Common/Measurement/BallastMassType.hpp"
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
#include "UMAA/Common/Measurement/LevelType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {
            namespace BallastFillType_Specializations {
                enum class BallastFillType_Selectors {
                    LEVELTYPE_SELECT, 
                    BALLASTMASSTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BallastFillType_Selectors& sample);

                class NDDSUSERDllExport BallastFillType_Union {
                  public:

                    BallastFillType_Union();

                    ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::Common::Measurement::LevelType& LevelType_data()  {

                        if (_d() != (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::LevelType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LevelType_data_;
                    }

                    const ::UMAA::Common::Measurement::LevelType& LevelType_data() const  {

                        if (_d() != (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::LevelType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LevelType_data_;
                    }

                    void LevelType_data(const ::UMAA::Common::Measurement::LevelType& value) {
                        m_u_.m_LevelType_data_ = value;
                        m_d_= (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT);
                    }

                    void LevelType_data(::UMAA::Common::Measurement::LevelType&& value) {
                        m_u_.m_LevelType_data_ = std::move(value);
                        m_d_= (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT);
                    }
                    ::UMAA::Common::Measurement::BallastMassType& BallastMassType_data()  {

                        if (_d() != (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::BallastMassType_data not selected by the discriminator" );
                        }
                        return m_u_.m_BallastMassType_data_;
                    }

                    const ::UMAA::Common::Measurement::BallastMassType& BallastMassType_data() const  {

                        if (_d() != (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::BallastMassType_data not selected by the discriminator" );
                        }
                        return m_u_.m_BallastMassType_data_;
                    }

                    void BallastMassType_data(const ::UMAA::Common::Measurement::BallastMassType& value) {
                        m_u_.m_BallastMassType_data_ = value;
                        m_d_= (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT);
                    }

                    void BallastMassType_data(::UMAA::Common::Measurement::BallastMassType&& value) {
                        m_u_.m_BallastMassType_data_ = std::move(value);
                        m_d_= (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT);
                    }
                    bool operator == (const BallastFillType_Union& other_) const;
                    bool operator != (const BallastFillType_Union& other_) const;
                    static ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors default_discriminator();

                    void swap(BallastFillType_Union& other_) noexcept ;

                  private:

                    ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::Common::Measurement::LevelType m_LevelType_data_;
                        ::UMAA::Common::Measurement::BallastMassType m_BallastMassType_data_;
                        Union_();
                        Union_(const ::UMAA::Common::Measurement::LevelType& LevelType_data_,const ::UMAA::Common::Measurement::BallastMassType& BallastMassType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(BallastFillType_Union& a, BallastFillType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastFillType_Union& sample);

            } // namespace BallastFillType_Specializations  

            class NDDSUSERDllExport BallastFillType {
              public:

                BallastFillType();

                explicit BallastFillType(const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& BallastFillType_subtypes_);

                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& BallastFillType_subtypes() noexcept {
                    return m_BallastFillType_subtypes_;
                }

                const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& BallastFillType_subtypes() const noexcept {
                    return m_BallastFillType_subtypes_;
                }

                void BallastFillType_subtypes(const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& value) {

                    m_BallastFillType_subtypes_ = value;
                }

                void BallastFillType_subtypes(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union&& value) {
                    m_BallastFillType_subtypes_ = std::move(value);
                }
                bool operator == (const BallastFillType& other_) const;
                bool operator != (const BallastFillType& other_) const;

                void swap(BallastFillType& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union m_BallastFillType_subtypes_;

            };

            inline void swap(BallastFillType& a, BallastFillType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastFillType& sample);

        } // namespace BallastTank  
    } // namespace EO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors>
        {
            static const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors value;
        };
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastFillType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastFillType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BallastTank::BallastFillType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastFillType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BallastTank::BallastFillType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BallastTank::BallastFillType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastFillType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastFillType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors>
        {
            static const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // BallastFillType_331398662_hpp

