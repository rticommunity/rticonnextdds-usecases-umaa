

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlanningZoneType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PlanningZoneType.hpp"
#include "PlanningZoneTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- PlanningZoneType: 

            PlanningZoneType::PlanningZoneType() :
                m_zoneKind_(UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType::KEEP_IN) ,
                m_zoneName_ ("")  {
                    ::rti::core::fill_array( 
                        m_zoneID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PlanningZoneType::PlanningZoneType (const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& startTime,const UMAA::Common::Measurement::Polygon_Volume& zone,const UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind,const std::string& zoneName,const UMAA::Common::Measurement::NumericGUID& zoneID):
                m_endTime_( endTime ),
                m_startTime_( startTime ),
                m_zone_( zone ),
                m_zoneKind_( zoneKind ),
                m_zoneName_( zoneName ),
                m_zoneID_( zoneID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PlanningZoneType::PlanningZoneType(PlanningZoneType&& other_) OMG_NOEXCEPT  :m_endTime_ (std::move(other_.m_endTime_))
            ,
            m_startTime_ (std::move(other_.m_startTime_))
            ,
            m_zone_ (std::move(other_.m_zone_))
            ,
            m_zoneKind_ (std::move(other_.m_zoneKind_))
            ,
            m_zoneName_ (std::move(other_.m_zoneName_))
            ,
            m_zoneID_ (std::move(other_.m_zoneID_))
            {
            } 

            PlanningZoneType& PlanningZoneType::operator=(PlanningZoneType&&  other_) OMG_NOEXCEPT {
                PlanningZoneType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PlanningZoneType::swap(PlanningZoneType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_endTime_, other_.m_endTime_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_zone_, other_.m_zone_);
                swap(m_zoneKind_, other_.m_zoneKind_);
                swap(m_zoneName_, other_.m_zoneName_);
                swap(m_zoneID_, other_.m_zoneID_);
            }  

            bool PlanningZoneType::operator == (const PlanningZoneType& other_) const {
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_zone_ != other_.m_zone_) {
                    return false;
                }
                if (m_zoneKind_ != other_.m_zoneKind_) {
                    return false;
                }
                if (m_zoneName_ != other_.m_zoneName_) {
                    return false;
                }
                if (m_zoneID_ != other_.m_zoneID_) {
                    return false;
                }
                return true;
            }
            bool PlanningZoneType::operator != (const PlanningZoneType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PlanningZoneType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endTime: " << sample.endTime()<<", ";
                o << "startTime: " << sample.startTime()<<", ";
                o << "zone: " << sample.zone()<<", ";
                o << "zoneKind: " << sample.zoneKind()<<", ";
                o << "zoneName: " << sample.zoneName()<<", ";
                o << "zoneID: " << sample.zoneID() ;
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::BaseType::PlanningZoneType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PlanningZoneType_g_tc_members[6]=
                {

                    {
                        (char *)"endTime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"startTime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zone",/* Member name */
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
                        (char *)"zoneKind",/* Member name */
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
                        (char *)"zoneName",/* Member name */
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
                        (char *)"zoneID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PlanningZoneType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::PlanningZoneType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        PlanningZoneType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PlanningZoneType*/

                if (is_initialized) {
                    return &PlanningZoneType_g_tc;
                }

                PlanningZoneType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PlanningZoneType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                PlanningZoneType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                PlanningZoneType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Polygon_Volume>::get().native();
                PlanningZoneType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType>::get().native();
                PlanningZoneType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                PlanningZoneType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                PlanningZoneType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PlanningZoneType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                PlanningZoneType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                PlanningZoneType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                PlanningZoneType_g_tc._data._sampleAccessInfo = sample_access_info();
                PlanningZoneType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PlanningZoneType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::PlanningZoneType *sample;

                static RTIXCdrMemberAccessInfo PlanningZoneType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PlanningZoneType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PlanningZoneType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::PlanningZoneType);
                if (sample == NULL) {
                    return NULL;
                }

                PlanningZoneType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                PlanningZoneType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                PlanningZoneType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zone() - (char *)sample);

                PlanningZoneType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoneKind() - (char *)sample);

                PlanningZoneType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoneName() - (char *)sample);

                PlanningZoneType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoneID() - (char *)sample);

                PlanningZoneType_g_sampleAccessInfo.memberAccessInfos = 
                PlanningZoneType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::PlanningZoneType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PlanningZoneType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PlanningZoneType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PlanningZoneType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PlanningZoneType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::PlanningZoneType >;

                PlanningZoneType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PlanningZoneType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PlanningZoneType_g_typePlugin = 
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
                    NULL
                };

                return &PlanningZoneType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::BaseType::PlanningZoneType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::PlanningZoneType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::BaseType::PlanningZoneType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::PlanningZoneTypePlugin_new,
                UMAA::MM::BaseType::PlanningZoneTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::PlanningZoneType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::PlanningZoneType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PlanningZoneTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PlanningZoneTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::PlanningZoneType >::from_cdr_buffer(UMAA::MM::BaseType::PlanningZoneType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PlanningZoneTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::PlanningZoneType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::PlanningZoneType >::reset_sample(UMAA::MM::BaseType::PlanningZoneType& sample) 
        {
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.startTime());
            ::rti::topic::reset_sample(sample.zone());
            sample.zoneKind(UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType::KEEP_IN);
            sample.zoneName("");
            ::rti::topic::reset_sample(sample.zoneID());
        }

        void topic_type_support< UMAA::MM::BaseType::PlanningZoneType >::allocate_sample(UMAA::MM::BaseType::PlanningZoneType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.zone(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoneKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoneName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.zoneID(),  -1, -1);
        }

    }
}  

