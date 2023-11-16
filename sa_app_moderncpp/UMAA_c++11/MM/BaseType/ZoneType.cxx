

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ZoneType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ZoneTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ZoneType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            namespace ZoneType_Specializations {

                std::ostream& operator << (std::ostream& o,const ZoneType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ZoneType_Selectors::PLANNINGZONETYPE_SELECT:
                        o << "ZoneType_Selectors::PLANNINGZONETYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- ZoneType_Union: 

                ZoneType_Union::Union_::Union_()  {
                }

                ZoneType_Union::Union_::Union_(const ::UMAA::MM::BaseType::PlanningZoneType& PlanningZoneType_data_):
                    m_PlanningZoneType_data_(PlanningZoneType_data_) {
                }

                ZoneType_Union::ZoneType_Union() :m_d_(default_discriminator())
                {
                }

                void ZoneType_Union::swap(ZoneType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT):
                            {  
                                swap(m_u_.m_PlanningZoneType_data_, other_.m_u_.m_PlanningZoneType_data_);
                        } break;

                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    if (_d() != other_._d()){
                        switch(::rti::topic::cdr::integer_case(other_._d())){
                            case (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT):
                                {  
                                    swap(m_u_.m_PlanningZoneType_data_, other_.m_u_.m_PlanningZoneType_data_);
                            } break;

                            default:
                            {
                                /*
                                * Prevents compiler warnings when discriminator is an enum.
                                */
                            }
                        }
                    }
                }  

                bool ZoneType_Union::operator == (const ZoneType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT):
                            {  
                                if (m_u_.m_PlanningZoneType_data_ != other_.m_u_.m_PlanningZoneType_data_) {
                                    return false;
                            }
                        } break ;
                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    return true;
                }

                bool ZoneType_Union::operator != (const ZoneType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const ZoneType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT):
                            {  
                                o << "PlanningZoneType_data: " << sample.PlanningZoneType_data ();
                        } break ;
                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    o <<"]";
                    return o;
                }

                ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors ZoneType_Union::default_discriminator() {
                    return ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors(static_cast< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors >(0));
                }  

            } // namespace ZoneType_Specializations  

            // ---- ZoneType: 

            ZoneType::ZoneType() :
                m_zoneKind_(UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType::KEEP_IN)  {

            }   

            ZoneType::ZoneType (const ::UMAA::Common::Measurement::Polygon_Volume& zone_,const ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType& zoneKind_,const ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& ZoneType_subtypes_,const ::UMAA::Common::Measurement::NumericGUID& zoneID_):
                m_zone_(zone_), 
                m_zoneKind_(zoneKind_), 
                m_ZoneType_subtypes_(ZoneType_subtypes_), 
                m_zoneID_(zoneID_) {
            }

            void ZoneType::swap(ZoneType& other_)  noexcept 
            {
                using std::swap;
                swap(m_zone_, other_.m_zone_);
                swap(m_zoneKind_, other_.m_zoneKind_);
                swap(m_ZoneType_subtypes_, other_.m_ZoneType_subtypes_);
                swap(m_zoneID_, other_.m_zoneID_);
            }  

            bool ZoneType::operator == (const ZoneType& other_) const {
                if (m_zone_ != other_.m_zone_) {
                    return false;
                }
                if (m_zoneKind_ != other_.m_zoneKind_) {
                    return false;
                }
                if (m_ZoneType_subtypes_ != other_.m_ZoneType_subtypes_) {
                    return false;
                }
                if (m_zoneID_ != other_.m_zoneID_) {
                    return false;
                }
                return true;
            }

            bool ZoneType::operator != (const ZoneType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ZoneType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "zone: " << sample.zone ()<<", ";
                o << "zoneKind: " << sample.zoneKind ()<<", ";
                o << "ZoneType_subtypes: " << sample.ZoneType_subtypes ()<<", ";
                o << "zoneID: " << sample.zoneID ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors default_enumerator< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors>::value = ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors default_enumerator< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors>::value = ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ZoneType_Selectors_g_tc_members[1]=
                {

                    {
                        (char *)"PLANNINGZONETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ZoneType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ZoneType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ZoneType_Selectors*/

                if (is_initialized) {
                    return &ZoneType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                ZoneType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ZoneType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ZoneType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ZoneType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                ZoneType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &ZoneType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ZoneType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ZoneType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ZoneType_Selectors_g_sampleAccessInfo;
                }

                ZoneType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ZoneType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                ZoneType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ZoneType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ZoneType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ZoneType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ZoneType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors >;

                ZoneType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ZoneType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ZoneType_Selectors_g_typePlugin = 
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

                return &ZoneType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ZoneType_Union_g_tc_members[1]=
                {

                    {
                        (char *)"PlanningZoneType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ZoneType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ZoneType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ZoneType_Union*/

                if (is_initialized) {
                    return &ZoneType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                ZoneType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ZoneType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::PlanningZoneType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ZoneType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors>::get().native();

                ZoneType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                ZoneType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &ZoneType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union *sample;

                static RTIXCdrMemberAccessInfo ZoneType_Union_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ZoneType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ZoneType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                ZoneType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT);
                ZoneType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PlanningZoneType_data() - (char *)sample);

                ZoneType_Union_g_sampleAccessInfo.memberAccessInfos = 
                ZoneType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ZoneType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ZoneType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ZoneType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ZoneType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >;

                ZoneType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ZoneType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ZoneType_Union_g_typePlugin = 
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

                return &ZoneType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ZoneType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ZoneType_g_tc_members[4]=
                {

                    {
                        (char *)"zone",/* Member name */
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
                        (char *)"zoneKind",/* Member name */
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
                        (char *)"ZoneType_subtypes",/* Member name */
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
                        (char *)"zoneID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ZoneType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ZoneType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ZoneType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ZoneType*/

                if (is_initialized) {
                    return &ZoneType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ZoneType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ZoneType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Polygon_Volume>::get().native();
                ZoneType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType>::get().native();
                ZoneType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union>::get().native();
                ZoneType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ZoneType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ZoneType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ZoneType_g_tc._data._sampleAccessInfo = sample_access_info();
                ZoneType_g_tc._data._typePlugin = type_plugin_info();    

                return &ZoneType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ZoneType *sample;

                static RTIXCdrMemberAccessInfo ZoneType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ZoneType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ZoneType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ZoneType);
                if (sample == NULL) {
                    return NULL;
                }

                ZoneType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zone() - (char *)sample);

                ZoneType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoneKind() - (char *)sample);

                ZoneType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ZoneType_subtypes() - (char *)sample);

                ZoneType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoneID() - (char *)sample);

                ZoneType_g_sampleAccessInfo.memberAccessInfos = 
                ZoneType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ZoneType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ZoneType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ZoneType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ZoneType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ZoneType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ZoneType >;

                ZoneType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ZoneType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ZoneType_g_typePlugin = 
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

                return &ZoneType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ZoneType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ZoneType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_UnionPlugin_new,
                ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ZoneType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ZoneType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::from_cdr_buffer(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ZoneType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::reset_sample(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample) 
        {
            sample._d() = (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT);
            ::rti::topic::reset_sample(sample.PlanningZoneType_data());

            sample._d() = ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union >::allocate_sample(::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors::PLANNINGZONETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PlanningZoneType_data(),  -1, -1);

            sample._d() = ::UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MM::BaseType::ZoneType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::ZoneTypePlugin_new,
                ::UMAA::MM::BaseType::ZoneTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::ZoneType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::ZoneType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ZoneTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ZoneTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType >::from_cdr_buffer(::UMAA::MM::BaseType::ZoneType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ZoneTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::ZoneType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType >::reset_sample(::UMAA::MM::BaseType::ZoneType& sample) 
        {
            ::rti::topic::reset_sample(sample.zone());
            sample.zoneKind(UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType::KEEP_IN);
            ::rti::topic::reset_sample(sample.ZoneType_subtypes());
            ::rti::topic::reset_sample(sample.zoneID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::ZoneType >::allocate_sample(::UMAA::MM::BaseType::ZoneType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.zone(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoneKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ZoneType_subtypes(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoneID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
