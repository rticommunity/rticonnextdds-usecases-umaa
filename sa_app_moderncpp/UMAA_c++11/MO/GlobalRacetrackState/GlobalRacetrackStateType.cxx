

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalRacetrackStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalRacetrackStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalRacetrackState {

            namespace GlobalRacetrackStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const GlobalRacetrackStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT:
                        o << "GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT" << " ";
                        break;
                        case GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT:
                        o << "GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- GlobalRacetrackStateType_Union: 

                GlobalRacetrackStateType_Union::Union_::Union_()  {
                }

                GlobalRacetrackStateType_Union::Union_::Union_(const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& GlobalRacetrackPatternType_data_,const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType& GlobalRacetrackTransitType_data_):
                    m_GlobalRacetrackPatternType_data_(GlobalRacetrackPatternType_data_), 
                    m_GlobalRacetrackTransitType_data_(GlobalRacetrackTransitType_data_) {
                }

                GlobalRacetrackStateType_Union::GlobalRacetrackStateType_Union() :m_d_(default_discriminator())
                {
                }

                void GlobalRacetrackStateType_Union::swap(GlobalRacetrackStateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalRacetrackPatternType_data_, other_.m_u_.m_GlobalRacetrackPatternType_data_);
                        } break;
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalRacetrackTransitType_data_, other_.m_u_.m_GlobalRacetrackTransitType_data_);
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
                            case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalRacetrackPatternType_data_, other_.m_u_.m_GlobalRacetrackPatternType_data_);
                            } break;
                            case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalRacetrackTransitType_data_, other_.m_u_.m_GlobalRacetrackTransitType_data_);
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

                bool GlobalRacetrackStateType_Union::operator == (const GlobalRacetrackStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                if (m_u_.m_GlobalRacetrackPatternType_data_ != other_.m_u_.m_GlobalRacetrackPatternType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                if (m_u_.m_GlobalRacetrackTransitType_data_ != other_.m_u_.m_GlobalRacetrackTransitType_data_) {
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

                bool GlobalRacetrackStateType_Union::operator != (const GlobalRacetrackStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const GlobalRacetrackStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT):
                            {  
                                o << "GlobalRacetrackPatternType_data: " << sample.GlobalRacetrackPatternType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT):
                            {  
                                o << "GlobalRacetrackTransitType_data: " << sample.GlobalRacetrackTransitType_data ();
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

                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors GlobalRacetrackStateType_Union::default_discriminator() {
                    return ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors(static_cast< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors >(0));
                }  

            } // namespace GlobalRacetrackStateType_Specializations  

            // ---- GlobalRacetrackStateType: 

            GlobalRacetrackStateType::GlobalRacetrackStateType()  {

            }   

            GlobalRacetrackStateType::GlobalRacetrackStateType (const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& GlobalRacetrackStateType_subtypes_):
                m_GlobalRacetrackStateType_subtypes_(GlobalRacetrackStateType_subtypes_) {
            }

            void GlobalRacetrackStateType::swap(GlobalRacetrackStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_GlobalRacetrackStateType_subtypes_, other_.m_GlobalRacetrackStateType_subtypes_);
            }  

            bool GlobalRacetrackStateType::operator == (const GlobalRacetrackStateType& other_) const {
                if (m_GlobalRacetrackStateType_subtypes_ != other_.m_GlobalRacetrackStateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool GlobalRacetrackStateType::operator != (const GlobalRacetrackStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRacetrackStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "GlobalRacetrackStateType_subtypes: " << sample.GlobalRacetrackStateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace GlobalRacetrackState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors default_enumerator< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors>::value = ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors default_enumerator< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors>::value = ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRacetrackStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALRACETRACKPATTERNTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT), 
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
                        (char *)"GLOBALRACETRACKTRANSITTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT), 
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

                static DDS_TypeCode GlobalRacetrackStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRacetrackStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRacetrackStateType_Selectors*/

                if (is_initialized) {
                    return &GlobalRacetrackStateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalRacetrackStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalRacetrackStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalRacetrackStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalRacetrackStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRacetrackStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalRacetrackStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalRacetrackStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRacetrackStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_Selectors_g_sampleAccessInfo;
                }

                GlobalRacetrackStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRacetrackStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors >;

                GlobalRacetrackStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRacetrackStateType_Selectors_g_typePlugin = 
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

                return &GlobalRacetrackStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRacetrackStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalRacetrackPatternType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalRacetrackTransitType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalRacetrackStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRacetrackStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRacetrackStateType_Union*/

                if (is_initialized) {
                    return &GlobalRacetrackStateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalRacetrackStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRacetrackStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType>::get().native();
                GlobalRacetrackStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackTransitType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalRacetrackStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors>::get().native();

                GlobalRacetrackStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRacetrackStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalRacetrackStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union *sample;

                static RTIXCdrMemberAccessInfo GlobalRacetrackStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRacetrackStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRacetrackStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT);
                GlobalRacetrackStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRacetrackPatternType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT);
                GlobalRacetrackStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRacetrackTransitType_data() - (char *)sample);

                GlobalRacetrackStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRacetrackStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRacetrackStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRacetrackStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRacetrackStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRacetrackStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >;

                GlobalRacetrackStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRacetrackStateType_Union_g_typePlugin = 
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

                return &GlobalRacetrackStateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRacetrackStateType_g_tc_members[1]=
                {

                    {
                        (char *)"GlobalRacetrackStateType_subtypes",/* Member name */
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

                static DDS_TypeCode GlobalRacetrackStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GlobalRacetrackStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRacetrackStateType*/

                if (is_initialized) {
                    return &GlobalRacetrackStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalRacetrackStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRacetrackStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                GlobalRacetrackStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRacetrackStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalRacetrackStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType *sample;

                static RTIXCdrMemberAccessInfo GlobalRacetrackStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRacetrackStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRacetrackStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRacetrackStateType_subtypes() - (char *)sample);

                GlobalRacetrackStateType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRacetrackStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRacetrackStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRacetrackStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRacetrackStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRacetrackStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >;

                GlobalRacetrackStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRacetrackStateType_g_typePlugin = 
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

                return &GlobalRacetrackStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_UnionPlugin_new,
                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::from_cdr_buffer(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRacetrackStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::reset_sample(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalRacetrackPatternType_data());
            sample._d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalRacetrackTransitType_data());

            sample._d() = ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union >::allocate_sample(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKPATTERNTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalRacetrackPatternType_data(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Selectors::GLOBALRACETRACKTRANSITTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalRacetrackTransitType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType_Specializations::GlobalRacetrackStateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateTypePlugin_new,
                ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::from_cdr_buffer(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRacetrackStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::reset_sample(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalRacetrackStateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType >::allocate_sample(::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalRacetrackStateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
