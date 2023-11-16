

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalRacetrackStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalRacetrackStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalRacetrackState {

            namespace LocalRacetrackStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const LocalRacetrackStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT:
                        o << "LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT" << " ";
                        break;
                        case LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT:
                        o << "LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- LocalRacetrackStateType_Union: 

                LocalRacetrackStateType_Union::Union_::Union_()  {
                }

                LocalRacetrackStateType_Union::Union_::Union_(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType& LocalRacetrackTransitType_data_,const ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& LocalRacetrackPatternType_data_):
                    m_LocalRacetrackTransitType_data_(LocalRacetrackTransitType_data_), 
                    m_LocalRacetrackPatternType_data_(LocalRacetrackPatternType_data_) {
                }

                LocalRacetrackStateType_Union::LocalRacetrackStateType_Union() :m_d_(default_discriminator())
                {
                }

                void LocalRacetrackStateType_Union::swap(LocalRacetrackStateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalRacetrackTransitType_data_, other_.m_u_.m_LocalRacetrackTransitType_data_);
                        } break;
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalRacetrackPatternType_data_, other_.m_u_.m_LocalRacetrackPatternType_data_);
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
                            case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalRacetrackTransitType_data_, other_.m_u_.m_LocalRacetrackTransitType_data_);
                            } break;
                            case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalRacetrackPatternType_data_, other_.m_u_.m_LocalRacetrackPatternType_data_);
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

                bool LocalRacetrackStateType_Union::operator == (const LocalRacetrackStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalRacetrackTransitType_data_ != other_.m_u_.m_LocalRacetrackTransitType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalRacetrackPatternType_data_ != other_.m_u_.m_LocalRacetrackPatternType_data_) {
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

                bool LocalRacetrackStateType_Union::operator != (const LocalRacetrackStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const LocalRacetrackStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                o << "LocalRacetrackTransitType_data: " << sample.LocalRacetrackTransitType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                o << "LocalRacetrackPatternType_data: " << sample.LocalRacetrackPatternType_data ();
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

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors LocalRacetrackStateType_Union::default_discriminator() {
                    return ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors(static_cast< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors >(0));
                }  

            } // namespace LocalRacetrackStateType_Specializations  

            // ---- LocalRacetrackStateType: 

            LocalRacetrackStateType::LocalRacetrackStateType()  {

            }   

            LocalRacetrackStateType::LocalRacetrackStateType (const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& LocalRacetrackStateType_subtypes_):
                m_LocalRacetrackStateType_subtypes_(LocalRacetrackStateType_subtypes_) {
            }

            void LocalRacetrackStateType::swap(LocalRacetrackStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_LocalRacetrackStateType_subtypes_, other_.m_LocalRacetrackStateType_subtypes_);
            }  

            bool LocalRacetrackStateType::operator == (const LocalRacetrackStateType& other_) const {
                if (m_LocalRacetrackStateType_subtypes_ != other_.m_LocalRacetrackStateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool LocalRacetrackStateType::operator != (const LocalRacetrackStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalRacetrackStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "LocalRacetrackStateType_subtypes: " << sample.LocalRacetrackStateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace LocalRacetrackState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors default_enumerator< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors>::value = ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors default_enumerator< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors>::value = ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRacetrackStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LOCALRACETRACKTRANSITTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT), 
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
                        (char *)"LOCALRACETRACKPATTERNTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT), 
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

                static DDS_TypeCode LocalRacetrackStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalRacetrackStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRacetrackStateType_Selectors*/

                if (is_initialized) {
                    return &LocalRacetrackStateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalRacetrackStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LocalRacetrackStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalRacetrackStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LocalRacetrackStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRacetrackStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalRacetrackStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LocalRacetrackStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRacetrackStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_Selectors_g_sampleAccessInfo;
                }

                LocalRacetrackStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LocalRacetrackStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                LocalRacetrackStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRacetrackStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRacetrackStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRacetrackStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRacetrackStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors >;

                LocalRacetrackStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRacetrackStateType_Selectors_g_typePlugin = 
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

                return &LocalRacetrackStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRacetrackStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LocalRacetrackTransitType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LocalRacetrackPatternType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalRacetrackStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalRacetrackStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRacetrackStateType_Union*/

                if (is_initialized) {
                    return &LocalRacetrackStateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalRacetrackStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRacetrackStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType>::get().native();
                LocalRacetrackStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                LocalRacetrackStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors>::get().native();

                LocalRacetrackStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRacetrackStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalRacetrackStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union *sample;

                static RTIXCdrMemberAccessInfo LocalRacetrackStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRacetrackStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRacetrackStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT);
                LocalRacetrackStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRacetrackTransitType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT);
                LocalRacetrackStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRacetrackPatternType_data() - (char *)sample);

                LocalRacetrackStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                LocalRacetrackStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRacetrackStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRacetrackStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRacetrackStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRacetrackStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >;

                LocalRacetrackStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRacetrackStateType_Union_g_typePlugin = 
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

                return &LocalRacetrackStateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRacetrackStateType_g_tc_members[1]=
                {

                    {
                        (char *)"LocalRacetrackStateType_subtypes",/* Member name */
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

                static DDS_TypeCode LocalRacetrackStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRacetrackState::LocalRacetrackStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LocalRacetrackStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRacetrackStateType*/

                if (is_initialized) {
                    return &LocalRacetrackStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalRacetrackStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRacetrackStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                LocalRacetrackStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRacetrackStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalRacetrackStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType *sample;

                static RTIXCdrMemberAccessInfo LocalRacetrackStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRacetrackStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRacetrackStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRacetrackStateType_subtypes() - (char *)sample);

                LocalRacetrackStateType_g_sampleAccessInfo.memberAccessInfos = 
                LocalRacetrackStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRacetrackStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRacetrackStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRacetrackStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRacetrackStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >;

                LocalRacetrackStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRacetrackStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRacetrackStateType_g_typePlugin = 
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

                return &LocalRacetrackStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_UnionPlugin_new,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::from_cdr_buffer(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRacetrackStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::reset_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalRacetrackTransitType_data());
            sample._d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalRacetrackPatternType_data());

            sample._d() = ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union >::allocate_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalRacetrackTransitType_data(),  -1, -1);
            sample._d() = (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalRacetrackPatternType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateTypePlugin_new,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::from_cdr_buffer(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRacetrackStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::reset_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.LocalRacetrackStateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType >::allocate_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.LocalRacetrackStateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
