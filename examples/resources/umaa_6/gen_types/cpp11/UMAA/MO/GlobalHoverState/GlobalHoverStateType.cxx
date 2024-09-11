

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalHoverStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalHoverStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalHoverState {

            std::ostream& operator << (std::ostream& o,const GlobalHoverStateTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D:
                    o << "GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D" << " ";
                    break;
                    case GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D:
                    o << "GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- GlobalHoverStateTypeUnion: 

            GlobalHoverStateTypeUnion::Union_::Union_()  {
            }

            GlobalHoverStateTypeUnion::Union_::Union_(const ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverVariant_,const ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverVariant_):
                m_GlobalTransitHoverVariant_(GlobalTransitHoverVariant_), 
                m_GlobalHoveringHoverVariant_(GlobalHoveringHoverVariant_) {
            }

            GlobalHoverStateTypeUnion::GlobalHoverStateTypeUnion() :m_d_(default_discriminator())
            {
            }

            void GlobalHoverStateTypeUnion::swap(GlobalHoverStateTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D):
                        {  
                            swap(m_u_.m_GlobalTransitHoverVariant_, other_.m_u_.m_GlobalTransitHoverVariant_);
                    } break;
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D):
                        {  
                            swap(m_u_.m_GlobalHoveringHoverVariant_, other_.m_u_.m_GlobalHoveringHoverVariant_);
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
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D):
                            {  
                                swap(m_u_.m_GlobalTransitHoverVariant_, other_.m_u_.m_GlobalTransitHoverVariant_);
                        } break;
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D):
                            {  
                                swap(m_u_.m_GlobalHoveringHoverVariant_, other_.m_u_.m_GlobalHoveringHoverVariant_);
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

            bool GlobalHoverStateTypeUnion::operator == (const GlobalHoverStateTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D):
                        {  
                            if (m_u_.m_GlobalTransitHoverVariant_ != other_.m_u_.m_GlobalTransitHoverVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D):
                        {  
                            if (m_u_.m_GlobalHoveringHoverVariant_ != other_.m_u_.m_GlobalHoveringHoverVariant_) {
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

            bool GlobalHoverStateTypeUnion::operator != (const GlobalHoverStateTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalHoverStateTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D):
                        {  
                            o << "GlobalTransitHoverVariant: " << sample.GlobalTransitHoverVariant ()<<", ";
                    } break ;
                    case (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D):
                        {  
                            o << "GlobalHoveringHoverVariant: " << sample.GlobalHoveringHoverVariant ();
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

            ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum GlobalHoverStateTypeUnion::default_discriminator() {
                return ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum(static_cast< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum >(0));
            }  

            // ---- GlobalHoverStateType: 

            GlobalHoverStateType::GlobalHoverStateType()  {

            }   

            GlobalHoverStateType::GlobalHoverStateType (const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& GlobalHoverStateTypeSubtypes_):
                m_GlobalHoverStateTypeSubtypes_(GlobalHoverStateTypeSubtypes_) {
            }

            void GlobalHoverStateType::swap(GlobalHoverStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_GlobalHoverStateTypeSubtypes_, other_.m_GlobalHoverStateTypeSubtypes_);
            }  

            bool GlobalHoverStateType::operator == (const GlobalHoverStateType& other_) const {
                if (m_GlobalHoverStateTypeSubtypes_ != other_.m_GlobalHoverStateTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool GlobalHoverStateType::operator != (const GlobalHoverStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalHoverStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "GlobalHoverStateTypeSubtypes: " << sample.GlobalHoverStateTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace GlobalHoverState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum default_enumerator< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum>::value = ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum default_enumerator< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum>::value = ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D;
        template<>
        struct native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALTRANSITHOVER_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D), 
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
                        (char *)"GLOBALHOVERINGHOVER_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D), 
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

                static DDS_TypeCode GlobalHoverStateTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalHoverStateTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverStateTypeEnum*/

                if (is_initialized) {
                    return &GlobalHoverStateTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalHoverStateTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalHoverStateTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalHoverStateTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalHoverStateTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalHoverStateTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalHoverStateTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateTypeEnum_g_sampleAccessInfo;
                }

                GlobalHoverStateTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalHoverStateTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverStateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverStateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverStateTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverStateTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum >;

                GlobalHoverStateTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverStateTypeEnum_g_typePlugin = 
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

                return &GlobalHoverStateTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalTransitHoverVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalHoveringHoverVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalHoverStateTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalHoverStateTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverStateTypeUnion*/

                if (is_initialized) {
                    return &GlobalHoverStateTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalHoverStateTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoverStateTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType>::get().native();
                GlobalHoverStateTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalHoverStateTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum>::get().native();

                GlobalHoverStateTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalHoverStateTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion *sample;

                static RTIXCdrMemberAccessInfo GlobalHoverStateTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoverStateTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D);
                GlobalHoverStateTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalTransitHoverVariant() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D);
                GlobalHoverStateTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalHoveringHoverVariant() - (char *)sample);

                GlobalHoverStateTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverStateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverStateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverStateTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverStateTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion >;

                GlobalHoverStateTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverStateTypeUnion_g_typePlugin = 
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

                return &GlobalHoverStateTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateType_g_tc_members[1]=
                {

                    {
                        (char *)"GlobalHoverStateTypeSubtypes",/* Member name */
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

                static DDS_TypeCode GlobalHoverStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoverStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GlobalHoverStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverStateType*/

                if (is_initialized) {
                    return &GlobalHoverStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalHoverStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoverStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                GlobalHoverStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalHoverStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateType *sample;

                static RTIXCdrMemberAccessInfo GlobalHoverStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalHoverState::GlobalHoverStateType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoverStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalHoverStateTypeSubtypes() - (char *)sample);

                GlobalHoverStateType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalHoverState::GlobalHoverStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType >;

                GlobalHoverStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverStateType_g_typePlugin = 
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

                return &GlobalHoverStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion >::reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& sample) 
        {
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D);
            ::rti::topic::reset_sample(sample.GlobalTransitHoverVariant());
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D);
            ::rti::topic::reset_sample(sample.GlobalHoveringHoverVariant());

            sample._d() = ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion >::allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D);
            ::rti::topic::allocate_sample(sample.GlobalTransitHoverVariant(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D);
            ::rti::topic::allocate_sample(sample.GlobalHoveringHoverVariant(),  -1, -1);

            sample._d() = ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType >::reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalHoverStateTypeSubtypes());
        }

        void topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType >::allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalHoverStateTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
