

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterReportType_588385953_hpp
#define PathReporterReportType_588385953_hpp

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
#include "UMAA/Common/LargeListMetadata.hpp"
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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/MM/BaseType/WaypointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace PathReporterStatus {

            static const std::string PathReporterReportTypeTopic = "UMAA::SA::PathReporterStatus::PathReporterReportType";

            class NDDSUSERDllExport PathReporterReportType {
              public:

                PathReporterReportType();

                PathReporterReportType(const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeListMetadata& historicalGlobalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& historicalLocalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& plannedGlobalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& plannedLocalPathsListMetadata_);

                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::LargeListMetadata& historicalGlobalPathsListMetadata() noexcept {
                    return m_historicalGlobalPathsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& historicalGlobalPathsListMetadata() const noexcept {
                    return m_historicalGlobalPathsListMetadata_;
                }

                void historicalGlobalPathsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_historicalGlobalPathsListMetadata_ = value;
                }

                void historicalGlobalPathsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_historicalGlobalPathsListMetadata_ = std::move(value);
                }
                ::UMAA::Common::LargeListMetadata& historicalLocalPathsListMetadata() noexcept {
                    return m_historicalLocalPathsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& historicalLocalPathsListMetadata() const noexcept {
                    return m_historicalLocalPathsListMetadata_;
                }

                void historicalLocalPathsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_historicalLocalPathsListMetadata_ = value;
                }

                void historicalLocalPathsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_historicalLocalPathsListMetadata_ = std::move(value);
                }
                ::UMAA::Common::LargeListMetadata& plannedGlobalPathsListMetadata() noexcept {
                    return m_plannedGlobalPathsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& plannedGlobalPathsListMetadata() const noexcept {
                    return m_plannedGlobalPathsListMetadata_;
                }

                void plannedGlobalPathsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_plannedGlobalPathsListMetadata_ = value;
                }

                void plannedGlobalPathsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_plannedGlobalPathsListMetadata_ = std::move(value);
                }
                ::UMAA::Common::LargeListMetadata& plannedLocalPathsListMetadata() noexcept {
                    return m_plannedLocalPathsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& plannedLocalPathsListMetadata() const noexcept {
                    return m_plannedLocalPathsListMetadata_;
                }

                void plannedLocalPathsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_plannedLocalPathsListMetadata_ = value;
                }

                void plannedLocalPathsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_plannedLocalPathsListMetadata_ = std::move(value);
                }
                bool operator == (const PathReporterReportType& other_) const;
                bool operator != (const PathReporterReportType& other_) const;

                void swap(PathReporterReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeListMetadata m_historicalGlobalPathsListMetadata_;
                ::UMAA::Common::LargeListMetadata m_historicalLocalPathsListMetadata_;
                ::UMAA::Common::LargeListMetadata m_plannedGlobalPathsListMetadata_;
                ::UMAA::Common::LargeListMetadata m_plannedLocalPathsListMetadata_;

            };

            inline void swap(PathReporterReportType& a, PathReporterReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportType& sample);

            static const std::string PathReporterReportTypeHistoricalGlobalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement";

            class NDDSUSERDllExport PathReporterReportTypeHistoricalGlobalPathsListElement {
              public:

                PathReporterReportTypeHistoricalGlobalPathsListElement();

                PathReporterReportTypeHistoricalGlobalPathsListElement(const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::MM::BaseType::WaypointType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const PathReporterReportTypeHistoricalGlobalPathsListElement& other_) const;
                bool operator != (const PathReporterReportTypeHistoricalGlobalPathsListElement& other_) const;

                void swap(PathReporterReportTypeHistoricalGlobalPathsListElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(PathReporterReportTypeHistoricalGlobalPathsListElement& a, PathReporterReportTypeHistoricalGlobalPathsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportTypeHistoricalGlobalPathsListElement& sample);

            static const std::string PathReporterReportTypeHistoricalLocalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement";

            class NDDSUSERDllExport PathReporterReportTypeHistoricalLocalPathsListElement {
              public:

                PathReporterReportTypeHistoricalLocalPathsListElement();

                PathReporterReportTypeHistoricalLocalPathsListElement(const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::MM::BaseType::WaypointType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const PathReporterReportTypeHistoricalLocalPathsListElement& other_) const;
                bool operator != (const PathReporterReportTypeHistoricalLocalPathsListElement& other_) const;

                void swap(PathReporterReportTypeHistoricalLocalPathsListElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(PathReporterReportTypeHistoricalLocalPathsListElement& a, PathReporterReportTypeHistoricalLocalPathsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportTypeHistoricalLocalPathsListElement& sample);

            static const std::string PathReporterReportTypePlannedGlobalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement";

            class NDDSUSERDllExport PathReporterReportTypePlannedGlobalPathsListElement {
              public:

                PathReporterReportTypePlannedGlobalPathsListElement();

                PathReporterReportTypePlannedGlobalPathsListElement(const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::MM::BaseType::WaypointType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const PathReporterReportTypePlannedGlobalPathsListElement& other_) const;
                bool operator != (const PathReporterReportTypePlannedGlobalPathsListElement& other_) const;

                void swap(PathReporterReportTypePlannedGlobalPathsListElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(PathReporterReportTypePlannedGlobalPathsListElement& a, PathReporterReportTypePlannedGlobalPathsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportTypePlannedGlobalPathsListElement& sample);

            static const std::string PathReporterReportTypePlannedLocalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement";

            class NDDSUSERDllExport PathReporterReportTypePlannedLocalPathsListElement {
              public:

                PathReporterReportTypePlannedLocalPathsListElement();

                PathReporterReportTypePlannedLocalPathsListElement(const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::MM::BaseType::WaypointType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const PathReporterReportTypePlannedLocalPathsListElement& other_) const;
                bool operator != (const PathReporterReportTypePlannedLocalPathsListElement& other_) const;

                void swap(PathReporterReportTypePlannedLocalPathsListElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(PathReporterReportTypePlannedLocalPathsListElement& a, PathReporterReportTypePlannedLocalPathsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportTypePlannedLocalPathsListElement& sample);

        } // namespace PathReporterStatus  
    } // namespace SA  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
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
        struct topic_type_name< ::UMAA::SA::PathReporterStatus::PathReporterReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterStatus::PathReporterReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterStatus::PathReporterReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > {
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

#endif // PathReporterReportType_588385953_hpp

