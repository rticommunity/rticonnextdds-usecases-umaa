

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalDriftStateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalDriftStateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalDriftState {

            std::ostream& operator << (std::ostream& o,const GlobalDriftStateTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D:
                    o << "GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D" << " ";
                    break;
                    case GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D:
                    o << "GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- GlobalDriftStateTypeUnion: 

            GlobalDriftStateTypeUnion::Union_::Union_()  {
            }

            GlobalDriftStateTypeUnion::Union_::Union_(const ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftVariant_,const ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftVariant_):
                m_GlobalTransitDriftVariant_(GlobalTransitDriftVariant_), 
                m_GlobalRegionDriftVariant_(GlobalRegionDriftVariant_) {
            }

            GlobalDriftStateTypeUnion::GlobalDriftStateTypeUnion() :m_d_(default_discriminator())
            {
            }

            void GlobalDriftStateTypeUnion::swap(GlobalDriftStateTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D):
                        {  
                            swap(m_u_.m_GlobalTransitDriftVariant_, other_.m_u_.m_GlobalTransitDriftVariant_);
                    } break;
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D):
                        {  
                            swap(m_u_.m_GlobalRegionDriftVariant_, other_.m_u_.m_GlobalRegionDriftVariant_);
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
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D):
                            {  
                                swap(m_u_.m_GlobalTransitDriftVariant_, other_.m_u_.m_GlobalTransitDriftVariant_);
                        } break;
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D):
                            {  
                                swap(m_u_.m_GlobalRegionDriftVariant_, other_.m_u_.m_GlobalRegionDriftVariant_);
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

            bool GlobalDriftStateTypeUnion::operator == (const GlobalDriftStateTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D):
                        {  
                            if (m_u_.m_GlobalTransitDriftVariant_ != other_.m_u_.m_GlobalTransitDriftVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D):
                        {  
                            if (m_u_.m_GlobalRegionDriftVariant_ != other_.m_u_.m_GlobalRegionDriftVariant_) {
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

            bool GlobalDriftStateTypeUnion::operator != (const GlobalDriftStateTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalDriftStateTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D):
                        {  
                            o << "GlobalTransitDriftVariant: " << sample.GlobalTransitDriftVariant ()<<", ";
                    } break ;
                    case (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D):
                        {  
                            o << "GlobalRegionDriftVariant: " << sample.GlobalRegionDriftVariant ();
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

            ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum GlobalDriftStateTypeUnion::default_discriminator() {
                return ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum(static_cast< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum >(0));
            }  

            // ---- GlobalDriftStateType: 

            GlobalDriftStateType::GlobalDriftStateType()  {

            }   

            GlobalDriftStateType::GlobalDriftStateType (const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& GlobalDriftStateTypeSubtypes_):
                m_GlobalDriftStateTypeSubtypes_(GlobalDriftStateTypeSubtypes_) {
            }

            void GlobalDriftStateType::swap(GlobalDriftStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_GlobalDriftStateTypeSubtypes_, other_.m_GlobalDriftStateTypeSubtypes_);
            }  

            bool GlobalDriftStateType::operator == (const GlobalDriftStateType& other_) const {
                if (m_GlobalDriftStateTypeSubtypes_ != other_.m_GlobalDriftStateTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool GlobalDriftStateType::operator != (const GlobalDriftStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalDriftStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "GlobalDriftStateTypeSubtypes: " << sample.GlobalDriftStateTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace GlobalDriftState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum>::value = ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum>::value = ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D;
        template<>
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalDriftStateTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALTRANSITDRIFT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D), 
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
                        (char *)"GLOBALREGIONDRIFT_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D), 
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

                static DDS_TypeCode GlobalDriftStateTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalDriftStateTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalDriftStateTypeEnum*/

                if (is_initialized) {
                    return &GlobalDriftStateTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalDriftStateTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalDriftStateTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalDriftStateTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalDriftStateTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalDriftStateTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalDriftStateTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalDriftStateTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalDriftStateTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateTypeEnum_g_sampleAccessInfo;
                }

                GlobalDriftStateTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalDriftStateTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                GlobalDriftStateTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalDriftStateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalDriftStateTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalDriftStateTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalDriftStateTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum >;

                GlobalDriftStateTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalDriftStateTypeEnum_g_typePlugin = 
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

                return &GlobalDriftStateTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalDriftStateTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalTransitDriftVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalRegionDriftVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalDriftStateTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalDriftStateTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalDriftStateTypeUnion*/

                if (is_initialized) {
                    return &GlobalDriftStateTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalDriftStateTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalDriftStateTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType>::get().native();
                GlobalDriftStateTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalDriftStateTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum>::get().native();

                GlobalDriftStateTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalDriftStateTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalDriftStateTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion *sample;

                static RTIXCdrMemberAccessInfo GlobalDriftStateTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalDriftStateTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalDriftStateTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D);
                GlobalDriftStateTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalTransitDriftVariant() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D);
                GlobalDriftStateTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRegionDriftVariant() - (char *)sample);

                GlobalDriftStateTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                GlobalDriftStateTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalDriftStateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalDriftStateTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalDriftStateTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalDriftStateTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion >;

                GlobalDriftStateTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalDriftStateTypeUnion_g_typePlugin = 
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

                return &GlobalDriftStateTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalDriftStateType_g_tc_members[1]=
                {

                    {
                        (char *)"GlobalDriftStateTypeSubtypes",/* Member name */
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

                static DDS_TypeCode GlobalDriftStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalDriftStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GlobalDriftStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalDriftStateType*/

                if (is_initialized) {
                    return &GlobalDriftStateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalDriftStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalDriftStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                GlobalDriftStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalDriftStateType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalDriftStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateType *sample;

                static RTIXCdrMemberAccessInfo GlobalDriftStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalDriftStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalDriftState::GlobalDriftStateType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalDriftStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalDriftStateTypeSubtypes() - (char *)sample);

                GlobalDriftStateType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalDriftStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalDriftStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalDriftStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalDriftStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalDriftStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalDriftStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >;

                GlobalDriftStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalDriftStateType_g_typePlugin = 
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

                return &GlobalDriftStateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion >::reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& sample) 
        {
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D);
            ::rti::topic::reset_sample(sample.GlobalTransitDriftVariant());
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D);
            ::rti::topic::reset_sample(sample.GlobalRegionDriftVariant());

            sample._d() = ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion >::allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D);
            ::rti::topic::allocate_sample(sample.GlobalTransitDriftVariant(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D);
            ::rti::topic::allocate_sample(sample.GlobalRegionDriftVariant(),  -1, -1);

            sample._d() = ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalDriftStateTypeSubtypes());
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalDriftStateTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
