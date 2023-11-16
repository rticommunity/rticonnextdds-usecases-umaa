

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "RouteObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RouteObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- RouteObjectiveType: 

            RouteObjectiveType::RouteObjectiveType() :
                m_mode_(UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType::ALTITUDE) ,
                m_routeDescription_ ("")  {

            }   

            RouteObjectiveType::RouteObjectiveType (const ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType& mode_,const std::string& routeDescription_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::WaypointType, 100L >& waypoints_):
                m_mode_(mode_), 
                m_routeDescription_(routeDescription_), 
                m_waypoints_(waypoints_) {
            }

            void RouteObjectiveType::swap(RouteObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_mode_, other_.m_mode_);
                swap(m_routeDescription_, other_.m_routeDescription_);
                swap(m_waypoints_, other_.m_waypoints_);
            }  

            bool RouteObjectiveType::operator == (const RouteObjectiveType& other_) const {
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                if (m_routeDescription_ != other_.m_routeDescription_) {
                    return false;
                }
                if (m_waypoints_ != other_.m_waypoints_) {
                    return false;
                }
                return true;
            }

            bool RouteObjectiveType::operator != (const RouteObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RouteObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "mode: " << sample.mode ()<<", ";
                o << "routeDescription: " << sample.routeDescription ()<<", ";
                o << "waypoints: " << sample.waypoints ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::BaseType::RouteObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RouteObjectiveType_g_tc_waypoints_sequence;

                static DDS_TypeCode_Member RouteObjectiveType_g_tc_members[3]=
                {

                    {
                        (char *)"mode",/* Member name */
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
                        (char *)"routeDescription",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"waypoints",/* Member name */
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
                    }
                };

                static DDS_TypeCode RouteObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::RouteObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        RouteObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RouteObjectiveType*/

                if (is_initialized) {
                    return &RouteObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RouteObjectiveType_g_tc_waypoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::WaypointType, 100L > >((100L));

                RouteObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RouteObjectiveType_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();
                RouteObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType>::get().native();
                RouteObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                RouteObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& RouteObjectiveType_g_tc_waypoints_sequence;

                /* Initialize the values for member annotations. */
                RouteObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RouteObjectiveType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                RouteObjectiveType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                RouteObjectiveType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                RouteObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                RouteObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &RouteObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::RouteObjectiveType *sample;

                static RTIXCdrMemberAccessInfo RouteObjectiveType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RouteObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RouteObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::RouteObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                RouteObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                RouteObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->routeDescription() - (char *)sample);

                RouteObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypoints() - (char *)sample);

                RouteObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                RouteObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::RouteObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RouteObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RouteObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RouteObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RouteObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::RouteObjectiveType >;

                RouteObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RouteObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RouteObjectiveType_g_typePlugin = 
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

                return &RouteObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::RouteObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::RouteObjectiveTypePlugin_new,
                ::UMAA::MM::BaseType::RouteObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::RouteObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RouteObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RouteObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType >::from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RouteObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::RouteObjectiveType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType >::reset_sample(::UMAA::MM::BaseType::RouteObjectiveType& sample) 
        {
            sample.mode(UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType::ALTITUDE);
            sample.routeDescription("");
            ::rti::topic::reset_sample(sample.waypoints());
        }

        void topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType >::allocate_sample(::UMAA::MM::BaseType::RouteObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.routeDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.waypoints(),  100L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
