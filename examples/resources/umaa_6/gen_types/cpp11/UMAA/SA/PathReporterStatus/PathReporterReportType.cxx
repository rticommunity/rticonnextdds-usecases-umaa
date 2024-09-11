

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PathReporterReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PathReporterReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PathReporterStatus {

            // ---- PathReporterReportType: 

            PathReporterReportType::PathReporterReportType()  {

            }   

            PathReporterReportType::PathReporterReportType (const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeListMetadata& historicalGlobalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& historicalLocalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& plannedGlobalPathsListMetadata_,const ::UMAA::Common::LargeListMetadata& plannedLocalPathsListMetadata_):
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_historicalGlobalPathsListMetadata_(historicalGlobalPathsListMetadata_), 
                m_historicalLocalPathsListMetadata_(historicalLocalPathsListMetadata_), 
                m_plannedGlobalPathsListMetadata_(plannedGlobalPathsListMetadata_), 
                m_plannedLocalPathsListMetadata_(plannedLocalPathsListMetadata_) {
            }

            void PathReporterReportType::swap(PathReporterReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_historicalGlobalPathsListMetadata_, other_.m_historicalGlobalPathsListMetadata_);
                swap(m_historicalLocalPathsListMetadata_, other_.m_historicalLocalPathsListMetadata_);
                swap(m_plannedGlobalPathsListMetadata_, other_.m_plannedGlobalPathsListMetadata_);
                swap(m_plannedLocalPathsListMetadata_, other_.m_plannedLocalPathsListMetadata_);
            }  

            bool PathReporterReportType::operator == (const PathReporterReportType& other_) const {
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_historicalGlobalPathsListMetadata_ != other_.m_historicalGlobalPathsListMetadata_) {
                    return false;
                }
                if (m_historicalLocalPathsListMetadata_ != other_.m_historicalLocalPathsListMetadata_) {
                    return false;
                }
                if (m_plannedGlobalPathsListMetadata_ != other_.m_plannedGlobalPathsListMetadata_) {
                    return false;
                }
                if (m_plannedLocalPathsListMetadata_ != other_.m_plannedLocalPathsListMetadata_) {
                    return false;
                }
                return true;
            }

            bool PathReporterReportType::operator != (const PathReporterReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "historicalGlobalPathsListMetadata: " << sample.historicalGlobalPathsListMetadata ()<<", ";
                o << "historicalLocalPathsListMetadata: " << sample.historicalLocalPathsListMetadata ()<<", ";
                o << "plannedGlobalPathsListMetadata: " << sample.plannedGlobalPathsListMetadata ()<<", ";
                o << "plannedLocalPathsListMetadata: " << sample.plannedLocalPathsListMetadata ();
                o <<"]";
                return o;
            }

            // ---- PathReporterReportTypeHistoricalGlobalPathsListElement: 

            PathReporterReportTypeHistoricalGlobalPathsListElement::PathReporterReportTypeHistoricalGlobalPathsListElement()  {

            }   

            PathReporterReportTypeHistoricalGlobalPathsListElement::PathReporterReportTypeHistoricalGlobalPathsListElement (const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_):
                m_element_(element_), 
                m_listID_(listID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_), 
                m_nextElementID_(nextElementID_) {
            }

            void PathReporterReportTypeHistoricalGlobalPathsListElement::swap(PathReporterReportTypeHistoricalGlobalPathsListElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_listID_, other_.m_listID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
                swap(m_nextElementID_, other_.m_nextElementID_);
            }  

            bool PathReporterReportTypeHistoricalGlobalPathsListElement::operator == (const PathReporterReportTypeHistoricalGlobalPathsListElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_listID_ != other_.m_listID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                if (m_nextElementID_ != other_.m_nextElementID_) {
                    return false;
                }
                return true;
            }

            bool PathReporterReportTypeHistoricalGlobalPathsListElement::operator != (const PathReporterReportTypeHistoricalGlobalPathsListElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportTypeHistoricalGlobalPathsListElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "listID: " << sample.listID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ()<<", ";
                o << "nextElementID: " << sample.nextElementID ();
                o <<"]";
                return o;
            }

            // ---- PathReporterReportTypeHistoricalLocalPathsListElement: 

            PathReporterReportTypeHistoricalLocalPathsListElement::PathReporterReportTypeHistoricalLocalPathsListElement()  {

            }   

            PathReporterReportTypeHistoricalLocalPathsListElement::PathReporterReportTypeHistoricalLocalPathsListElement (const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_):
                m_element_(element_), 
                m_listID_(listID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_), 
                m_nextElementID_(nextElementID_) {
            }

            void PathReporterReportTypeHistoricalLocalPathsListElement::swap(PathReporterReportTypeHistoricalLocalPathsListElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_listID_, other_.m_listID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
                swap(m_nextElementID_, other_.m_nextElementID_);
            }  

            bool PathReporterReportTypeHistoricalLocalPathsListElement::operator == (const PathReporterReportTypeHistoricalLocalPathsListElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_listID_ != other_.m_listID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                if (m_nextElementID_ != other_.m_nextElementID_) {
                    return false;
                }
                return true;
            }

            bool PathReporterReportTypeHistoricalLocalPathsListElement::operator != (const PathReporterReportTypeHistoricalLocalPathsListElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportTypeHistoricalLocalPathsListElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "listID: " << sample.listID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ()<<", ";
                o << "nextElementID: " << sample.nextElementID ();
                o <<"]";
                return o;
            }

            // ---- PathReporterReportTypePlannedGlobalPathsListElement: 

            PathReporterReportTypePlannedGlobalPathsListElement::PathReporterReportTypePlannedGlobalPathsListElement()  {

            }   

            PathReporterReportTypePlannedGlobalPathsListElement::PathReporterReportTypePlannedGlobalPathsListElement (const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_):
                m_element_(element_), 
                m_listID_(listID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_), 
                m_nextElementID_(nextElementID_) {
            }

            void PathReporterReportTypePlannedGlobalPathsListElement::swap(PathReporterReportTypePlannedGlobalPathsListElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_listID_, other_.m_listID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
                swap(m_nextElementID_, other_.m_nextElementID_);
            }  

            bool PathReporterReportTypePlannedGlobalPathsListElement::operator == (const PathReporterReportTypePlannedGlobalPathsListElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_listID_ != other_.m_listID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                if (m_nextElementID_ != other_.m_nextElementID_) {
                    return false;
                }
                return true;
            }

            bool PathReporterReportTypePlannedGlobalPathsListElement::operator != (const PathReporterReportTypePlannedGlobalPathsListElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportTypePlannedGlobalPathsListElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "listID: " << sample.listID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ()<<", ";
                o << "nextElementID: " << sample.nextElementID ();
                o <<"]";
                return o;
            }

            // ---- PathReporterReportTypePlannedLocalPathsListElement: 

            PathReporterReportTypePlannedLocalPathsListElement::PathReporterReportTypePlannedLocalPathsListElement()  {

            }   

            PathReporterReportTypePlannedLocalPathsListElement::PathReporterReportTypePlannedLocalPathsListElement (const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_):
                m_element_(element_), 
                m_listID_(listID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_), 
                m_nextElementID_(nextElementID_) {
            }

            void PathReporterReportTypePlannedLocalPathsListElement::swap(PathReporterReportTypePlannedLocalPathsListElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_listID_, other_.m_listID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
                swap(m_nextElementID_, other_.m_nextElementID_);
            }  

            bool PathReporterReportTypePlannedLocalPathsListElement::operator == (const PathReporterReportTypePlannedLocalPathsListElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_listID_ != other_.m_listID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                if (m_nextElementID_ != other_.m_nextElementID_) {
                    return false;
                }
                return true;
            }

            bool PathReporterReportTypePlannedLocalPathsListElement::operator != (const PathReporterReportTypePlannedLocalPathsListElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PathReporterReportTypePlannedLocalPathsListElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "listID: " << sample.listID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ()<<", ";
                o << "nextElementID: " << sample.nextElementID ();
                o <<"]";
                return o;
            }

        } // namespace PathReporterStatus  

    } // namespace SA  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterReportType_g_tc_members[6]=
                {

                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"historicalGlobalPathsListMetadata",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"historicalLocalPathsListMetadata",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"plannedGlobalPathsListMetadata",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"plannedLocalPathsListMetadata",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathReporterReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PathReporterReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportType*/

                if (is_initialized) {
                    return &PathReporterReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PathReporterReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                PathReporterReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeListMetadata>::get().native();
                PathReporterReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeListMetadata>::get().native();
                PathReporterReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeListMetadata>::get().native();
                PathReporterReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeListMetadata>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterStatus::PathReporterReportType *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterStatus::PathReporterReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->historicalGlobalPathsListMetadata() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->historicalLocalPathsListMetadata() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->plannedGlobalPathsListMetadata() - (char *)sample);

                PathReporterReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->plannedLocalPathsListMetadata() - (char *)sample);

                PathReporterReportType_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterStatus::PathReporterReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterStatus::PathReporterReportType >;

                PathReporterReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathReporterReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[5]=
                {

                    {
                        (char *)"element",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"listID",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"nextElementID",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportTypeHistoricalGlobalPathsListElement*/

                if (is_initialized) {
                    return &PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterReportTypeHistoricalGlobalPathsListElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nextElementID() - (char *)sample);

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportTypeHistoricalGlobalPathsListElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >;

                PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypeHistoricalGlobalPathsListElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportTypeHistoricalGlobalPathsListElement_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathReporterReportTypeHistoricalGlobalPathsListElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[5]=
                {

                    {
                        (char *)"element",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"listID",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"nextElementID",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathReporterReportTypeHistoricalLocalPathsListElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportTypeHistoricalLocalPathsListElement*/

                if (is_initialized) {
                    return &PathReporterReportTypeHistoricalLocalPathsListElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportTypeHistoricalLocalPathsListElement_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterReportTypeHistoricalLocalPathsListElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nextElementID() - (char *)sample);

                PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportTypeHistoricalLocalPathsListElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >;

                PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypeHistoricalLocalPathsListElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportTypeHistoricalLocalPathsListElement_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathReporterReportTypeHistoricalLocalPathsListElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[5]=
                {

                    {
                        (char *)"element",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"listID",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"nextElementID",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathReporterReportTypePlannedGlobalPathsListElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportTypePlannedGlobalPathsListElement*/

                if (is_initialized) {
                    return &PathReporterReportTypePlannedGlobalPathsListElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterReportTypePlannedGlobalPathsListElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PathReporterReportTypePlannedGlobalPathsListElement_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportTypePlannedGlobalPathsListElement_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportTypePlannedGlobalPathsListElement_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterReportTypePlannedGlobalPathsListElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nextElementID() - (char *)sample);

                PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportTypePlannedGlobalPathsListElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >;

                PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypePlannedGlobalPathsListElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportTypePlannedGlobalPathsListElement_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathReporterReportTypePlannedGlobalPathsListElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[5]=
                {

                    {
                        (char *)"element",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"listID",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"nextElementID",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathReporterReportTypePlannedLocalPathsListElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PathReporterReportTypePlannedLocalPathsListElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathReporterReportTypePlannedLocalPathsListElement*/

                if (is_initialized) {
                    return &PathReporterReportTypePlannedLocalPathsListElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathReporterReportTypePlannedLocalPathsListElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();
                PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                PathReporterReportTypePlannedLocalPathsListElement_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PathReporterReportTypePlannedLocalPathsListElement_g_tc._data._sampleAccessInfo = sample_access_info();
                PathReporterReportTypePlannedLocalPathsListElement_g_tc._data._typePlugin = type_plugin_info();    

                return &PathReporterReportTypePlannedLocalPathsListElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement *sample;

                static RTIXCdrMemberAccessInfo PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement);
                if (sample == NULL) {
                    return NULL;
                }

                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nextElementID() - (char *)sample);

                PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.memberAccessInfos = 
                PathReporterReportTypePlannedLocalPathsListElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >;

                PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathReporterReportTypePlannedLocalPathsListElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathReporterReportTypePlannedLocalPathsListElement_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathReporterReportTypePlannedLocalPathsListElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_new,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterStatus::PathReporterReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterStatus::PathReporterReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.historicalGlobalPathsListMetadata());
            ::rti::topic::reset_sample(sample.historicalLocalPathsListMetadata());
            ::rti::topic::reset_sample(sample.plannedGlobalPathsListMetadata());
            ::rti::topic::reset_sample(sample.plannedLocalPathsListMetadata());
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.historicalGlobalPathsListMetadata(),  -1, -1);
            ::rti::topic::allocate_sample(sample.historicalLocalPathsListMetadata(),  -1, -1);
            ::rti::topic::allocate_sample(sample.plannedGlobalPathsListMetadata(),  -1, -1);
            ::rti::topic::allocate_sample(sample.plannedLocalPathsListMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_new,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
            ::rti::topic::reset_sample(sample.nextElementID());
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_new,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
            ::rti::topic::reset_sample(sample.nextElementID());
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_new,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
            ::rti::topic::reset_sample(sample.nextElementID());
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_new,
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PathReporterReportTypePlannedLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PathReporterReportTypePlannedLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::from_cdr_buffer(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::reset_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
            ::rti::topic::reset_sample(sample.nextElementID());
        }

        void topic_type_support< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::allocate_sample(::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
