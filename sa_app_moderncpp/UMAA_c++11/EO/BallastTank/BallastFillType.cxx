

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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

            namespace BallastFillType_Specializations {

                std::ostream& operator << (std::ostream& o,const BallastFillType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case BallastFillType_Selectors::LEVELTYPE_SELECT:
                        o << "BallastFillType_Selectors::LEVELTYPE_SELECT" << " ";
                        break;
                        case BallastFillType_Selectors::BALLASTMASSTYPE_SELECT:
                        o << "BallastFillType_Selectors::BALLASTMASSTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- BallastFillType_Union: 

                BallastFillType_Union::Union_::Union_()  {
                }

                BallastFillType_Union::Union_::Union_(const ::UMAA::Common::Measurement::LevelType& LevelType_data_,const ::UMAA::Common::Measurement::BallastMassType& BallastMassType_data_):
                    m_LevelType_data_(LevelType_data_), 
                    m_BallastMassType_data_(BallastMassType_data_) {
                }

                BallastFillType_Union::BallastFillType_Union() :m_d_(default_discriminator())
                {
                }

                void BallastFillType_Union::swap(BallastFillType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT):
                            {  
                                swap(m_u_.m_LevelType_data_, other_.m_u_.m_LevelType_data_);
                        } break;
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT):
                            {  
                                swap(m_u_.m_BallastMassType_data_, other_.m_u_.m_BallastMassType_data_);
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
                            case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LevelType_data_, other_.m_u_.m_LevelType_data_);
                            } break;
                            case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT):
                                {  
                                    swap(m_u_.m_BallastMassType_data_, other_.m_u_.m_BallastMassType_data_);
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

                bool BallastFillType_Union::operator == (const BallastFillType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT):
                            {  
                                if (m_u_.m_LevelType_data_ != other_.m_u_.m_LevelType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT):
                            {  
                                if (m_u_.m_BallastMassType_data_ != other_.m_u_.m_BallastMassType_data_) {
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

                bool BallastFillType_Union::operator != (const BallastFillType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const BallastFillType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT):
                            {  
                                o << "LevelType_data: " << sample.LevelType_data ()<<", ";
                        } break ;
                        case (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT):
                            {  
                                o << "BallastMassType_data: " << sample.BallastMassType_data ();
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

                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors BallastFillType_Union::default_discriminator() {
                    return ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors(static_cast< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors >(0));
                }  

            } // namespace BallastFillType_Specializations  

            // ---- BallastFillType: 

            BallastFillType::BallastFillType()  {

            }   

            BallastFillType::BallastFillType (const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& BallastFillType_subtypes_):
                m_BallastFillType_subtypes_(BallastFillType_subtypes_) {
            }

            void BallastFillType::swap(BallastFillType& other_)  noexcept 
            {
                using std::swap;
                swap(m_BallastFillType_subtypes_, other_.m_BallastFillType_subtypes_);
            }  

            bool BallastFillType::operator == (const BallastFillType& other_) const {
                if (m_BallastFillType_subtypes_ != other_.m_BallastFillType_subtypes_) {
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
                o << "BallastFillType_subtypes: " << sample.BallastFillType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors default_enumerator< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors>::value = ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors default_enumerator< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors>::value = ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastFillType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LEVELTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT), 
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
                        (char *)"BALLASTMASSTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT), 
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

                static DDS_TypeCode BallastFillType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastFillType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastFillType_Selectors*/

                if (is_initialized) {
                    return &BallastFillType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastFillType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BallastFillType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BallastFillType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BallastFillType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastFillType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastFillType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BallastFillType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastFillType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastFillType_Selectors_g_sampleAccessInfo;
                }

                BallastFillType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BallastFillType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                BallastFillType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastFillType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastFillType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastFillType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastFillType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors >;

                BallastFillType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastFillType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastFillType_Selectors_g_typePlugin = 
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

                return &BallastFillType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastFillType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LevelType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BallastMassType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastFillType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastFillType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastFillType_Union*/

                if (is_initialized) {
                    return &BallastFillType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastFillType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastFillType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LevelType>::get().native();
                BallastFillType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::BallastMassType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                BallastFillType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors>::get().native();

                BallastFillType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastFillType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastFillType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union *sample;

                static RTIXCdrMemberAccessInfo BallastFillType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastFillType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastFillType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                BallastFillType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT);
                BallastFillType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LevelType_data() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT);
                BallastFillType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastMassType_data() - (char *)sample);

                BallastFillType_Union_g_sampleAccessInfo.memberAccessInfos = 
                BallastFillType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastFillType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastFillType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastFillType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastFillType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >;

                BallastFillType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastFillType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastFillType_Union_g_typePlugin = 
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

                return &BallastFillType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::get())));
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
                        (char *)"BallastFillType_subtypes",/* Member name */
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

                BallastFillType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union>::get().native();

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
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastFillType_subtypes() - (char *)sample);

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
        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_UnionPlugin_new,
                ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastFillType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastFillType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastFillType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::reset_sample(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LevelType_data());
            sample._d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT);
            ::rti::topic::reset_sample(sample.BallastMassType_data());

            sample._d() = ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union >::allocate_sample(::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::LEVELTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LevelType_data(),  -1, -1);
            sample._d() = (UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors::BALLASTMASSTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.BallastMassType_data(),  -1, -1);

            sample._d() = ::UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastFillTypePlugin_new,
                ::UMAA::EO::BallastTank::BallastFillTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastFillType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastFillTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastFillTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastFillType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastFillTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastFillType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::reset_sample(::UMAA::EO::BallastTank::BallastFillType& sample) 
        {
            ::rti::topic::reset_sample(sample.BallastFillType_subtypes());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastFillType >::allocate_sample(::UMAA::EO::BallastTank::BallastFillType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.BallastFillType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
