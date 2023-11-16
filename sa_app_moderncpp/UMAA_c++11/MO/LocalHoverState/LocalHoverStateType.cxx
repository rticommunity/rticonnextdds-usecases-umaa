

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalHoverStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalHoverStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalHoverState {

            namespace LocalHoverStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const LocalHoverStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT:
                        o << "LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT" << " ";
                        break;
                        case LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT:
                        o << "LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- LocalHoverStateType_Union: 

                LocalHoverStateType_Union::Union_::Union_()  {
                }

                LocalHoverStateType_Union::Union_::Union_(const ::UMAA::MO::LocalHoverState::LocalTransitHoverType& LocalTransitHoverType_data_,const ::UMAA::MO::LocalHoverState::LocalHoveringHoverType& LocalHoveringHoverType_data_):
                    m_LocalTransitHoverType_data_(LocalTransitHoverType_data_), 
                    m_LocalHoveringHoverType_data_(LocalHoveringHoverType_data_) {
                }

                LocalHoverStateType_Union::LocalHoverStateType_Union() :m_d_(default_discriminator())
                {
                }

                void LocalHoverStateType_Union::swap(LocalHoverStateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalTransitHoverType_data_, other_.m_u_.m_LocalTransitHoverType_data_);
                        } break;
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalHoveringHoverType_data_, other_.m_u_.m_LocalHoveringHoverType_data_);
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
                            case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalTransitHoverType_data_, other_.m_u_.m_LocalTransitHoverType_data_);
                            } break;
                            case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalHoveringHoverType_data_, other_.m_u_.m_LocalHoveringHoverType_data_);
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

                bool LocalHoverStateType_Union::operator == (const LocalHoverStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalTransitHoverType_data_ != other_.m_u_.m_LocalTransitHoverType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalHoveringHoverType_data_ != other_.m_u_.m_LocalHoveringHoverType_data_) {
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

                bool LocalHoverStateType_Union::operator != (const LocalHoverStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const LocalHoverStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT):
                            {  
                                o << "LocalTransitHoverType_data: " << sample.LocalTransitHoverType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT):
                            {  
                                o << "LocalHoveringHoverType_data: " << sample.LocalHoveringHoverType_data ();
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

                ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors LocalHoverStateType_Union::default_discriminator() {
                    return ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors(static_cast< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors >(0));
                }  

            } // namespace LocalHoverStateType_Specializations  

            // ---- LocalHoverStateType: 

            LocalHoverStateType::LocalHoverStateType()  {

            }   

            LocalHoverStateType::LocalHoverStateType (const ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& LocalHoverStateType_subtypes_):
                m_LocalHoverStateType_subtypes_(LocalHoverStateType_subtypes_) {
            }

            void LocalHoverStateType::swap(LocalHoverStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_LocalHoverStateType_subtypes_, other_.m_LocalHoverStateType_subtypes_);
            }  

            bool LocalHoverStateType::operator == (const LocalHoverStateType& other_) const {
                if (m_LocalHoverStateType_subtypes_ != other_.m_LocalHoverStateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool LocalHoverStateType::operator != (const LocalHoverStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalHoverStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "LocalHoverStateType_subtypes: " << sample.LocalHoverStateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace LocalHoverState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors default_enumerator< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors>::value = ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors default_enumerator< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors>::value = ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalHoverStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LOCALTRANSITHOVERTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT), 
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
                        (char *)"LOCALHOVERINGHOVERTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT), 
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

                static DDS_TypeCode LocalHoverStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalHoverStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalHoverStateType_Selectors*/

                if (is_initialized) {
                    return &LocalHoverStateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalHoverStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LocalHoverStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalHoverStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LocalHoverStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalHoverStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalHoverStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LocalHoverStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalHoverStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_Selectors_g_sampleAccessInfo;
                }

                LocalHoverStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LocalHoverStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                LocalHoverStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalHoverStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalHoverStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalHoverStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalHoverStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors >;

                LocalHoverStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalHoverStateType_Selectors_g_typePlugin = 
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

                return &LocalHoverStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalHoverStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LocalTransitHoverType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LocalHoveringHoverType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalHoverStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalHoverStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalHoverStateType_Union*/

                if (is_initialized) {
                    return &LocalHoverStateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalHoverStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalHoverStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalHoverState::LocalTransitHoverType>::get().native();
                LocalHoverStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoveringHoverType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                LocalHoverStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors>::get().native();

                LocalHoverStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalHoverStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalHoverStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union *sample;

                static RTIXCdrMemberAccessInfo LocalHoverStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalHoverStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                LocalHoverStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT);
                LocalHoverStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalTransitHoverType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT);
                LocalHoverStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalHoveringHoverType_data() - (char *)sample);

                LocalHoverStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                LocalHoverStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalHoverStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalHoverStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalHoverStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalHoverStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >;

                LocalHoverStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalHoverStateType_Union_g_typePlugin = 
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

                return &LocalHoverStateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalHoverStateType_g_tc_members[1]=
                {

                    {
                        (char *)"LocalHoverStateType_subtypes",/* Member name */
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

                static DDS_TypeCode LocalHoverStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalHoverState::LocalHoverStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LocalHoverStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalHoverStateType*/

                if (is_initialized) {
                    return &LocalHoverStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalHoverStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalHoverStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                LocalHoverStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalHoverStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalHoverStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalHoverState::LocalHoverStateType *sample;

                static RTIXCdrMemberAccessInfo LocalHoverStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalHoverStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalHoverState::LocalHoverStateType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalHoverStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalHoverStateType_subtypes() - (char *)sample);

                LocalHoverStateType_g_sampleAccessInfo.memberAccessInfos = 
                LocalHoverStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalHoverState::LocalHoverStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalHoverStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalHoverStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalHoverStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalHoverStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalHoverState::LocalHoverStateType >;

                LocalHoverStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalHoverStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalHoverStateType_g_typePlugin = 
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

                return &LocalHoverStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_UnionPlugin_new,
                ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::from_cdr_buffer(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalHoverStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::reset_sample(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalTransitHoverType_data());
            sample._d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalHoveringHoverType_data());

            sample._d() = ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union >::allocate_sample(::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALTRANSITHOVERTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalTransitHoverType_data(),  -1, -1);
            sample._d() = (UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Selectors::LOCALHOVERINGHOVERTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalHoveringHoverType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::LocalHoverState::LocalHoverStateType_Specializations::LocalHoverStateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalHoverState::LocalHoverStateTypePlugin_new,
                ::UMAA::MO::LocalHoverState::LocalHoverStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalHoverState::LocalHoverStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalHoverStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalHoverStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::from_cdr_buffer(::UMAA::MO::LocalHoverState::LocalHoverStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalHoverStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalHoverState::LocalHoverStateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::reset_sample(::UMAA::MO::LocalHoverState::LocalHoverStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.LocalHoverStateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::LocalHoverState::LocalHoverStateType >::allocate_sample(::UMAA::MO::LocalHoverState::LocalHoverStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.LocalHoverStateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
