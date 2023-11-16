

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BallastPumpFlowRateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastPumpFlowRateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            namespace BallastPumpFlowRateType_Specializations {

                std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT:
                        o << "BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT" << " ";
                        break;
                        case BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT:
                        o << "BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- BallastPumpFlowRateType_Union: 

                BallastPumpFlowRateType_Union::Union_::Union_()  {
                }

                BallastPumpFlowRateType_Union::Union_::Union_(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateType_data_,const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateType_data_):
                    m_MassBallastFlowRateType_data_(MassBallastFlowRateType_data_), 
                    m_VolumeBallastFlowRateType_data_(VolumeBallastFlowRateType_data_) {
                }

                BallastPumpFlowRateType_Union::BallastPumpFlowRateType_Union() :m_d_(default_discriminator())
                {
                }

                void BallastPumpFlowRateType_Union::swap(BallastPumpFlowRateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT):
                            {  
                                swap(m_u_.m_MassBallastFlowRateType_data_, other_.m_u_.m_MassBallastFlowRateType_data_);
                        } break;
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT):
                            {  
                                swap(m_u_.m_VolumeBallastFlowRateType_data_, other_.m_u_.m_VolumeBallastFlowRateType_data_);
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
                            case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT):
                                {  
                                    swap(m_u_.m_MassBallastFlowRateType_data_, other_.m_u_.m_MassBallastFlowRateType_data_);
                            } break;
                            case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT):
                                {  
                                    swap(m_u_.m_VolumeBallastFlowRateType_data_, other_.m_u_.m_VolumeBallastFlowRateType_data_);
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

                bool BallastPumpFlowRateType_Union::operator == (const BallastPumpFlowRateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT):
                            {  
                                if (m_u_.m_MassBallastFlowRateType_data_ != other_.m_u_.m_MassBallastFlowRateType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT):
                            {  
                                if (m_u_.m_VolumeBallastFlowRateType_data_ != other_.m_u_.m_VolumeBallastFlowRateType_data_) {
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

                bool BallastPumpFlowRateType_Union::operator != (const BallastPumpFlowRateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT):
                            {  
                                o << "MassBallastFlowRateType_data: " << sample.MassBallastFlowRateType_data ()<<", ";
                        } break ;
                        case (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT):
                            {  
                                o << "VolumeBallastFlowRateType_data: " << sample.VolumeBallastFlowRateType_data ();
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

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors BallastPumpFlowRateType_Union::default_discriminator() {
                    return ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors(static_cast< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors >(0));
                }  

            } // namespace BallastPumpFlowRateType_Specializations  

            // ---- BallastPumpFlowRateType: 

            BallastPumpFlowRateType::BallastPumpFlowRateType()  {

            }   

            BallastPumpFlowRateType::BallastPumpFlowRateType (const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& BallastPumpFlowRateType_subtypes_):
                m_BallastPumpFlowRateType_subtypes_(BallastPumpFlowRateType_subtypes_) {
            }

            void BallastPumpFlowRateType::swap(BallastPumpFlowRateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_BallastPumpFlowRateType_subtypes_, other_.m_BallastPumpFlowRateType_subtypes_);
            }  

            bool BallastPumpFlowRateType::operator == (const BallastPumpFlowRateType& other_) const {
                if (m_BallastPumpFlowRateType_subtypes_ != other_.m_BallastPumpFlowRateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool BallastPumpFlowRateType::operator != (const BallastPumpFlowRateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "BallastPumpFlowRateType_subtypes: " << sample.BallastPumpFlowRateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors>::value = ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors>::value = ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"MASSBALLASTFLOWRATETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT), 
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
                        (char *)"VOLUMEBALLASTFLOWRATETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT), 
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

                static DDS_TypeCode BallastPumpFlowRateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastPumpFlowRateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateType_Selectors*/

                if (is_initialized) {
                    return &BallastPumpFlowRateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BallastPumpFlowRateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BallastPumpFlowRateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BallastPumpFlowRateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_Selectors_g_sampleAccessInfo;
                }

                BallastPumpFlowRateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors >;

                BallastPumpFlowRateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateType_Selectors_g_typePlugin = 
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

                return &BallastPumpFlowRateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"MassBallastFlowRateType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VolumeBallastFlowRateType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastPumpFlowRateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BallastPumpFlowRateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateType_Union*/

                if (is_initialized) {
                    return &BallastPumpFlowRateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastPumpFlowRateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::MassBallastFlowRateType>::get().native();
                BallastPumpFlowRateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::VolumeBallastFlowRateType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                BallastPumpFlowRateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors>::get().native();

                BallastPumpFlowRateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union *sample;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                BallastPumpFlowRateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT);
                BallastPumpFlowRateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MassBallastFlowRateType_data() - (char *)sample);

                sample->_d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT);
                BallastPumpFlowRateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VolumeBallastFlowRateType_data() - (char *)sample);

                BallastPumpFlowRateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >;

                BallastPumpFlowRateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateType_Union_g_typePlugin = 
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

                return &BallastPumpFlowRateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastPumpFlowRateType_g_tc_members[1]=
                {

                    {
                        (char *)"BallastPumpFlowRateType_subtypes",/* Member name */
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

                static DDS_TypeCode BallastPumpFlowRateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastPumpFlowRateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BallastPumpFlowRateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastPumpFlowRateType*/

                if (is_initialized) {
                    return &BallastPumpFlowRateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastPumpFlowRateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastPumpFlowRateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                BallastPumpFlowRateType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastPumpFlowRateType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastPumpFlowRateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastPumpFlowRateType *sample;

                static RTIXCdrMemberAccessInfo BallastPumpFlowRateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastPumpFlowRateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastPumpFlowRateType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastPumpFlowRateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BallastPumpFlowRateType_subtypes() - (char *)sample);

                BallastPumpFlowRateType_g_sampleAccessInfo.memberAccessInfos = 
                BallastPumpFlowRateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastPumpFlowRateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastPumpFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastPumpFlowRateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastPumpFlowRateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastPumpFlowRateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >;

                BallastPumpFlowRateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastPumpFlowRateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastPumpFlowRateType_g_typePlugin = 
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

                return &BallastPumpFlowRateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_UnionPlugin_new,
                ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastPumpFlowRateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastPumpFlowRateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastPumpFlowRateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT);
            ::rti::topic::reset_sample(sample.MassBallastFlowRateType_data());
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT);
            ::rti::topic::reset_sample(sample.VolumeBallastFlowRateType_data());

            sample._d() = ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union >::allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::MASSBALLASTFLOWRATETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.MassBallastFlowRateType_data(),  -1, -1);
            sample._d() = (UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Selectors::VOLUMEBALLASTFLOWRATETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.VolumeBallastFlowRateType_data(),  -1, -1);

            sample._d() = ::UMAA::EO::BallastTank::BallastPumpFlowRateType_Specializations::BallastPumpFlowRateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypePlugin_new,
                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastPumpFlowRateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastPumpFlowRateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastPumpFlowRateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastPumpFlowRateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample) 
        {
            ::rti::topic::reset_sample(sample.BallastPumpFlowRateType_subtypes());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType >::allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.BallastPumpFlowRateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
