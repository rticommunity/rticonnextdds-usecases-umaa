

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BallastFillTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastFillType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            std::ostream& operator << (std::ostream& o,const BallastFillTypeEnum& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                switch(sample){
                    case BallastFillTypeEnum::LEVEL_D:
                    o << "BallastFillTypeEnum::LEVEL_D" << " ";
                    break;
                    case BallastFillTypeEnum::BALLASTMASS_D:
                    o << "BallastFillTypeEnum::BALLASTMASS_D" << " ";
                    break;
                    default:
                    {
                        /* Prevents compiler warnings */
                    }
                }
                return o;
            }

            // ---- BallastFillTypeUnion: 

            BallastFillTypeUnion::Union_::Union_()  {
            }

            BallastFillTypeUnion::Union_::Union_(const ::UMAA::Common::Measurement::LevelType& LevelVariant_,const ::UMAA::Common::Measurement::BallastMassType& BallastMassVariant_):
                m_LevelVariant_(LevelVariant_), 
                m_BallastMassVariant_(BallastMassVariant_) {
            }

            BallastFillTypeUnion::BallastFillTypeUnion() :m_d_(default_discriminator())
            {
            }

            void BallastFillTypeUnion::swap(BallastFillTypeUnion& other_)  noexcept 
            {
                using std::swap;
                swap (m_d_,other_.m_d_);
                switch (::rti::topic::cdr::integer_case(_d())) {
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D):
                        {  
                            swap(m_u_.m_LevelVariant_, other_.m_u_.m_LevelVariant_);
                    } break;
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D):
                        {  
                            swap(m_u_.m_BallastMassVariant_, other_.m_u_.m_BallastMassVariant_);
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
                        case (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D):
                            {  
                                swap(m_u_.m_LevelVariant_, other_.m_u_.m_LevelVariant_);
                        } break;
                        case (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D):
                            {  
                                swap(m_u_.m_BallastMassVariant_, other_.m_u_.m_BallastMassVariant_);
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

            bool BallastFillTypeUnion::operator == (const BallastFillTypeUnion& other_) const {
                if (_d() != other_._d()){
                    return false;
                }
                switch(::rti::topic::cdr::integer_case(_d())){
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D):
                        {  
                            if (m_u_.m_LevelVariant_ != other_.m_u_.m_LevelVariant_) {
                                return false;
                        }
                    } break ;
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D):
                        {  
                            if (m_u_.m_BallastMassVariant_ != other_.m_u_.m_BallastMassVariant_) {
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

            bool BallastFillTypeUnion::operator != (const BallastFillTypeUnion& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastFillTypeUnion& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "_d: " << sample._d () <<", ";
                switch(::rti::topic::cdr::integer_case(sample._d())){
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D):
                        {  
                            o << "LevelVariant: " << sample.LevelVariant ()<<", ";
                    } break ;
                    case (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D):
                        {  
                            o << "BallastMassVariant: " << sample.BallastMassVariant ();
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

            ::UMAA::EO::BallastTank::BallastFillTypeEnum BallastFillTypeUnion::default_discriminator() {
                return ::UMAA::EO::BallastTank::BallastFillTypeEnum(static_cast< ::UMAA::EO::BallastTank::BallastFillTypeEnum >(0));
            }  

            // ---- BallastFillType: 

            BallastFillType::BallastFillType()  {

            }   

            BallastFillType::BallastFillType (const ::UMAA::EO::BallastTank::BallastFillTypeUnion& BallastFillTypeSubtypes_):
                m_BallastFillTypeSubtypes_(BallastFillTypeSubtypes_) {
            }

            void BallastFillType::swap(BallastFillType& other_)  noexcept 
            {
                using std::swap;
                swap(m_BallastFillTypeSubtypes_, other_.m_BallastFillTypeSubtypes_);
            }  

            bool BallastFillType::operator == (const BallastFillType& other_) const {
                if (m_BallastFillTypeSubtypes_ != other_.m_BallastFillTypeSubtypes_) {
                    return false;
                }
                return true;
            }

            bool BallastFillType::operator != (const BallastFillType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastFillType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "BallastFillTypeSubtypes: " << sample.BallastFillTypeSubtypes ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::EO::BallastTank::BallastFillTypeEnum default_enumerator< ::UMAA::EO::BallastTank::BallastFillTypeEnum>::value = ::UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::EO::BallastTank::BallastFillTypeEnum default_enumerator< ::UMAA::EO::BallastTank::BallastFillTypeEnum>::value = ::UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D;
        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastFillTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastFillTypeEnum_g_tc_members[2]=
                {

                    {
                        (char *)"LEVEL_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D), 
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
                        (char *)"BALLASTMASS_D",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D), 
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

                static DDS_TypeCode BallastFillTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastFillTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastFillTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastFillTypeEnum*/

                if (is_initialized) {
                    return &BallastFillTypeEnum_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastFillTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BallastFillTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BallastFillTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BallastFillTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastFillTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastFillTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BallastFillTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastFillTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastFillTypeEnum_g_sampleAccessInfo;
                }

                BallastFillTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BallastFillTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                BallastFillTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastFillTypeEnum);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastFillTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastFillTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastFillTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastFillTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastFillTypeEnum >;

                BallastFillTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastFillTypeEnum_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastFillTypeEnum_g_typePlugin = 
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

                return &BallastFillTypeEnum_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastFillTypeEnum >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastFillTypeUnion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastFillTypeUnion_g_tc_members[2]=
                {

                    {
                        (char *)"LevelVariant",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BallastMassVariant",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastFillTypeUnion_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastFillTypeUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastFillTypeUnion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastFillTypeUnion*/

                if (is_initialized) {
                    return &BallastFillTypeUnion_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastFillTypeUnion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastFillTypeUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LevelType>::get().native();
                BallastFillTypeUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::BallastMassType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                BallastFillTypeUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeEnum>::get().native();

                BallastFillTypeUnion_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastFillTypeUnion_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastFillTypeUnion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastFillTypeUnion *sample;

                static RTIXCdrMemberAccessInfo BallastFillTypeUnion_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastFillTypeUnion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastFillTypeUnion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastFillTypeUnion);
                if (sample == NULL) {
                    return NULL;
                }

                BallastFillTypeUnion_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D);
                BallastFillTypeUnion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LevelVariant() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D);
                BallastFillTypeUnion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastMassVariant() - (char *)sample);

                BallastFillTypeUnion_g_sampleAccessInfo.memberAccessInfos = 
                BallastFillTypeUnion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastFillTypeUnion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastFillTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastFillTypeUnion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastFillTypeUnion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastFillTypeUnion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastFillTypeUnion >;

                BallastFillTypeUnion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastFillTypeUnion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastFillTypeUnion_g_typePlugin = 
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

                return &BallastFillTypeUnion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeUnion >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastFillTypeUnion >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastFillType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastFillType_g_tc_members[1]=
                {

                    {
                        (char *)"BallastFillTypeSubtypes",/* Member name */
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

                static DDS_TypeCode BallastFillType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastFillType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BallastFillType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastFillType*/

                if (is_initialized) {
                    return &BallastFillType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastFillType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastFillType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeUnion>::get().native();

                /* Initialize the values for member annotations. */

                BallastFillType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastFillType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastFillType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastFillType *sample;

                static RTIXCdrMemberAccessInfo BallastFillType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastFillType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastFillType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastFillType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastFillType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastFillTypeSubtypes() - (char *)sample);

                BallastFillType_g_sampleAccessInfo.memberAccessInfos = 
                BallastFillType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastFillType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastFillType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastFillType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastFillType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastFillType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastFillType >;

                BallastFillType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastFillType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastFillType_g_typePlugin = 
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

                return &BallastFillType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastFillType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastFillType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillTypeUnion >::reset_sample(::UMAA::EO::BallastTank::BallastFillTypeUnion& sample) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D);
            ::rti::topic::reset_sample(sample.LevelVariant());
            sample._d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D);
            ::rti::topic::reset_sample(sample.BallastMassVariant());

            sample._d() = ::UMAA::EO::BallastTank::BallastFillTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillTypeUnion >::allocate_sample(::UMAA::EO::BallastTank::BallastFillTypeUnion& sample, int, int) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D);
            ::rti::topic::allocate_sample(sample.LevelVariant(),  -1, -1);
            sample._d() = (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D);
            ::rti::topic::allocate_sample(sample.BallastMassVariant(),  -1, -1);

            sample._d() = ::UMAA::EO::BallastTank::BallastFillTypeUnion::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::reset_sample(::UMAA::EO::BallastTank::BallastFillType& sample) 
        {
            ::rti::topic::reset_sample(sample.BallastFillTypeSubtypes());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::allocate_sample(::UMAA::EO::BallastTank::BallastFillType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.BallastFillTypeSubtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
