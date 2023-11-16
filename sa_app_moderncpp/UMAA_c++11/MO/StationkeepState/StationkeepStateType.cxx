

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "StationkeepStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StationkeepStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace StationkeepState {

            namespace StationkeepStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const StationkeepStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT:
                        o << "StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT" << " ";
                        break;
                        case StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT:
                        o << "StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- StationkeepStateType_Union: 

                StationkeepStateType_Union::Union_::Union_()  {
                }

                StationkeepStateType_Union::Union_::Union_(const ::UMAA::MO::StationkeepState::TransitStationkeepType& TransitStationkeepType_data_,const ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& StationkeepingStationkeepType_data_):
                    m_TransitStationkeepType_data_(TransitStationkeepType_data_), 
                    m_StationkeepingStationkeepType_data_(StationkeepingStationkeepType_data_) {
                }

                StationkeepStateType_Union::StationkeepStateType_Union() :m_d_(default_discriminator())
                {
                }

                void StationkeepStateType_Union::swap(StationkeepStateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT):
                            {  
                                swap(m_u_.m_TransitStationkeepType_data_, other_.m_u_.m_TransitStationkeepType_data_);
                        } break;
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT):
                            {  
                                swap(m_u_.m_StationkeepingStationkeepType_data_, other_.m_u_.m_StationkeepingStationkeepType_data_);
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
                            case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT):
                                {  
                                    swap(m_u_.m_TransitStationkeepType_data_, other_.m_u_.m_TransitStationkeepType_data_);
                            } break;
                            case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT):
                                {  
                                    swap(m_u_.m_StationkeepingStationkeepType_data_, other_.m_u_.m_StationkeepingStationkeepType_data_);
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

                bool StationkeepStateType_Union::operator == (const StationkeepStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT):
                            {  
                                if (m_u_.m_TransitStationkeepType_data_ != other_.m_u_.m_TransitStationkeepType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT):
                            {  
                                if (m_u_.m_StationkeepingStationkeepType_data_ != other_.m_u_.m_StationkeepingStationkeepType_data_) {
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

                bool StationkeepStateType_Union::operator != (const StationkeepStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const StationkeepStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT):
                            {  
                                o << "TransitStationkeepType_data: " << sample.TransitStationkeepType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT):
                            {  
                                o << "StationkeepingStationkeepType_data: " << sample.StationkeepingStationkeepType_data ();
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

                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors StationkeepStateType_Union::default_discriminator() {
                    return ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors(static_cast< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors >(0));
                }  

            } // namespace StationkeepStateType_Specializations  

            // ---- StationkeepStateType: 

            StationkeepStateType::StationkeepStateType()  {

            }   

            StationkeepStateType::StationkeepStateType (const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& StationkeepStateType_subtypes_):
                m_StationkeepStateType_subtypes_(StationkeepStateType_subtypes_) {
            }

            void StationkeepStateType::swap(StationkeepStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_StationkeepStateType_subtypes_, other_.m_StationkeepStateType_subtypes_);
            }  

            bool StationkeepStateType::operator == (const StationkeepStateType& other_) const {
                if (m_StationkeepStateType_subtypes_ != other_.m_StationkeepStateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool StationkeepStateType::operator != (const StationkeepStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "StationkeepStateType_subtypes: " << sample.StationkeepStateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace StationkeepState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors default_enumerator< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors>::value = ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors default_enumerator< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors>::value = ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"TRANSITSTATIONKEEPTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STATIONKEEPINGSTATIONKEEPTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT), 
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

                static DDS_TypeCode StationkeepStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        StationkeepStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepStateType_Selectors*/

                if (is_initialized) {
                    return &StationkeepStateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                StationkeepStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StationkeepStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                StationkeepStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo StationkeepStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_Selectors_g_sampleAccessInfo;
                }

                StationkeepStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                StationkeepStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors >;

                StationkeepStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepStateType_Selectors_g_typePlugin = 
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

                return &StationkeepStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"TransitStationkeepType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"StationkeepingStationkeepType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode StationkeepStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        StationkeepStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepStateType_Union*/

                if (is_initialized) {
                    return &StationkeepStateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::StationkeepState::TransitStationkeepType>::get().native();
                StationkeepStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                StationkeepStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors>::get().native();

                StationkeepStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union *sample;

                static RTIXCdrMemberAccessInfo StationkeepStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT);
                StationkeepStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->TransitStationkeepType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT);
                StationkeepStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StationkeepingStationkeepType_data() - (char *)sample);

                StationkeepStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >;

                StationkeepStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepStateType_Union_g_typePlugin = 
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

                return &StationkeepStateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepStateType_g_tc_members[1]=
                {

                    {
                        (char *)"StationkeepStateType_subtypes",/* Member name */
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
                    }
                };

                static DDS_TypeCode StationkeepStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepState::StationkeepStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        StationkeepStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepStateType*/

                if (is_initialized) {
                    return &StationkeepStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                StationkeepStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::StationkeepState::StationkeepStateType *sample;

                static RTIXCdrMemberAccessInfo StationkeepStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::StationkeepState::StationkeepStateType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StationkeepStateType_subtypes() - (char *)sample);

                StationkeepStateType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepState::StationkeepStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepState::StationkeepStateType >;

                StationkeepStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepStateType_g_typePlugin = 
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

                return &StationkeepStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::StationkeepState::StationkeepStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepState::StationkeepStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_UnionPlugin_new,
                ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::from_cdr_buffer(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::reset_sample(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT);
            ::rti::topic::reset_sample(sample.TransitStationkeepType_data());
            sample._d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT);
            ::rti::topic::reset_sample(sample.StationkeepingStationkeepType_data());

            sample._d() = ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union >::allocate_sample(::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::TRANSITSTATIONKEEPTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.TransitStationkeepType_data(),  -1, -1);
            sample._d() = (UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Selectors::STATIONKEEPINGSTATIONKEEPTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.StationkeepingStationkeepType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::StationkeepState::StationkeepStateType_Specializations::StationkeepStateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::StationkeepState::StationkeepStateTypePlugin_new,
                ::UMAA::MO::StationkeepState::StationkeepStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::StationkeepState::StationkeepStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType >::from_cdr_buffer(::UMAA::MO::StationkeepState::StationkeepStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::StationkeepState::StationkeepStateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType >::reset_sample(::UMAA::MO::StationkeepState::StationkeepStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.StationkeepStateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepStateType >::allocate_sample(::UMAA::MO::StationkeepState::StationkeepStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.StationkeepStateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
