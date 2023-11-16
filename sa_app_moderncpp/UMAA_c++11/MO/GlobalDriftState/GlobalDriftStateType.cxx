

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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

            namespace GlobalDriftStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const GlobalDriftStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT:
                        o << "GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT" << " ";
                        break;
                        case GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT:
                        o << "GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- GlobalDriftStateType_Union: 

                GlobalDriftStateType_Union::Union_::Union_()  {
                }

                GlobalDriftStateType_Union::Union_::Union_(const ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftType_data_,const ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftType_data_):
                    m_GlobalTransitDriftType_data_(GlobalTransitDriftType_data_), 
                    m_GlobalRegionDriftType_data_(GlobalRegionDriftType_data_) {
                }

                GlobalDriftStateType_Union::GlobalDriftStateType_Union() :m_d_(default_discriminator())
                {
                }

                void GlobalDriftStateType_Union::swap(GlobalDriftStateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalTransitDriftType_data_, other_.m_u_.m_GlobalTransitDriftType_data_);
                        } break;
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalRegionDriftType_data_, other_.m_u_.m_GlobalRegionDriftType_data_);
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
                            case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalTransitDriftType_data_, other_.m_u_.m_GlobalTransitDriftType_data_);
                            } break;
                            case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalRegionDriftType_data_, other_.m_u_.m_GlobalRegionDriftType_data_);
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

                bool GlobalDriftStateType_Union::operator == (const GlobalDriftStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT):
                            {  
                                if (m_u_.m_GlobalTransitDriftType_data_ != other_.m_u_.m_GlobalTransitDriftType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT):
                            {  
                                if (m_u_.m_GlobalRegionDriftType_data_ != other_.m_u_.m_GlobalRegionDriftType_data_) {
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

                bool GlobalDriftStateType_Union::operator != (const GlobalDriftStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const GlobalDriftStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT):
                            {  
                                o << "GlobalTransitDriftType_data: " << sample.GlobalTransitDriftType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT):
                            {  
                                o << "GlobalRegionDriftType_data: " << sample.GlobalRegionDriftType_data ();
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

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors GlobalDriftStateType_Union::default_discriminator() {
                    return ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors(static_cast< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors >(0));
                }  

            } // namespace GlobalDriftStateType_Specializations  

            // ---- GlobalDriftStateType: 

            GlobalDriftStateType::GlobalDriftStateType()  {

            }   

            GlobalDriftStateType::GlobalDriftStateType (const ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& GlobalDriftStateType_subtypes_):
                m_GlobalDriftStateType_subtypes_(GlobalDriftStateType_subtypes_) {
            }

            void GlobalDriftStateType::swap(GlobalDriftStateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_GlobalDriftStateType_subtypes_, other_.m_GlobalDriftStateType_subtypes_);
            }  

            bool GlobalDriftStateType::operator == (const GlobalDriftStateType& other_) const {
                if (m_GlobalDriftStateType_subtypes_ != other_.m_GlobalDriftStateType_subtypes_) {
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
                o << "GlobalDriftStateType_subtypes: " << sample.GlobalDriftStateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace GlobalDriftState  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors>::value = ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors>::value = ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalDriftStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALTRANSITDRIFTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT), 
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
                        (char *)"GLOBALREGIONDRIFTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT), 
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

                static DDS_TypeCode GlobalDriftStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalDriftStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalDriftStateType_Selectors*/

                if (is_initialized) {
                    return &GlobalDriftStateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalDriftStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalDriftStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalDriftStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalDriftStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalDriftStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalDriftStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalDriftStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalDriftStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_Selectors_g_sampleAccessInfo;
                }

                GlobalDriftStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalDriftStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                GlobalDriftStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalDriftStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalDriftStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalDriftStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalDriftStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors >;

                GlobalDriftStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalDriftStateType_Selectors_g_typePlugin = 
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

                return &GlobalDriftStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalDriftStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalTransitDriftType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalRegionDriftType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalDriftStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalDriftStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalDriftStateType_Union*/

                if (is_initialized) {
                    return &GlobalDriftStateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalDriftStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalDriftStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType>::get().native();
                GlobalDriftStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalDriftStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors>::get().native();

                GlobalDriftStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalDriftStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalDriftStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union *sample;

                static RTIXCdrMemberAccessInfo GlobalDriftStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalDriftStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalDriftStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT);
                GlobalDriftStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalTransitDriftType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT);
                GlobalDriftStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRegionDriftType_data() - (char *)sample);

                GlobalDriftStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                GlobalDriftStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalDriftStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalDriftStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalDriftStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalDriftStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >;

                GlobalDriftStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalDriftStateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalDriftStateType_Union_g_typePlugin = 
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

                return &GlobalDriftStateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::get())));
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
                        (char *)"GlobalDriftStateType_subtypes",/* Member name */
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

                GlobalDriftStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union>::get().native();

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
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalDriftStateType_subtypes() - (char *)sample);

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
        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_UnionPlugin_new,
                ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::from_cdr_buffer(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalDriftStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalTransitDriftType_data());
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalRegionDriftType_data());

            sample._d() = ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union >::allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALTRANSITDRIFTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalTransitDriftType_data(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Selectors::GLOBALREGIONDRIFTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalRegionDriftType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::GlobalDriftState::GlobalDriftStateType_Specializations::GlobalDriftStateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypePlugin_new,
                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalDriftStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalDriftStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::from_cdr_buffer(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalDriftStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalDriftState::GlobalDriftStateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalDriftStateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType >::allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalDriftStateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
