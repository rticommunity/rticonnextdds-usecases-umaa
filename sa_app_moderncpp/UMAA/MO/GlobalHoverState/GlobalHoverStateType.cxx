

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GlobalHoverStateType.hpp"
#include "GlobalHoverStateTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalHoverState {

            namespace GlobalHoverStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const GlobalHoverStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT:
                        o << "GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT" << " ";
                        break;
                        case GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT:
                        o << "GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- GlobalHoverStateType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalHoverStateType_Union::GlobalHoverStateType_Union(GlobalHoverStateType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT):
                            {  
                                GlobalTransitHoverType_data( std::move(other_.GlobalTransitHoverType_data()));
                        } break;
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT):
                            {  
                                GlobalHoveringHoverType_data( std::move(other_.GlobalHoveringHoverType_data()));
                        } break;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                }

                GlobalHoverStateType_Union& GlobalHoverStateType_Union::operator=(GlobalHoverStateType_Union&&  other_) OMG_NOEXCEPT {
                    GlobalHoverStateType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                GlobalHoverStateType_Union::Union_::Union_()  {
                }

                GlobalHoverStateType_Union::Union_::Union_(const UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverType_data,const UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverType_data):
                    m_GlobalTransitHoverType_data_( GlobalTransitHoverType_data ),
                    m_GlobalHoveringHoverType_data_( GlobalHoveringHoverType_data ) {
                }

                GlobalHoverStateType_Union::GlobalHoverStateType_Union() :m_d_(default_discriminator())
                {
                }

                void GlobalHoverStateType_Union::swap(GlobalHoverStateType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalTransitHoverType_data_, other_.m_u_.m_GlobalTransitHoverType_data_);
                        } break;
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalHoveringHoverType_data_, other_.m_u_.m_GlobalHoveringHoverType_data_);
                        } break;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    if (_d() != other_._d()){
                        switch(::rti::topic::cdr::integer_case(other_._d())){
                            case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalTransitHoverType_data_, other_.m_u_.m_GlobalTransitHoverType_data_);
                            } break;
                            case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalHoveringHoverType_data_, other_.m_u_.m_GlobalHoveringHoverType_data_);
                            } break;

                            default: 
                            {
                                /* 
                                * Prevents compiler warnings when discriminator is an enum
                                * and unionType does not specify all enumeration members.
                                */ 
                            }
                        }
                    }
                }  

                bool GlobalHoverStateType_Union::operator == (const GlobalHoverStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT):
                            {  
                                if ( m_u_.m_GlobalTransitHoverType_data_ != other_.m_u_.m_GlobalTransitHoverType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT):
                            {  
                                if ( m_u_.m_GlobalHoveringHoverType_data_ != other_.m_u_.m_GlobalHoveringHoverType_data_) {
                                    return false;
                            }
                        } break ;
                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    return true;
                }
                bool GlobalHoverStateType_Union::operator != (const GlobalHoverStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const GlobalHoverStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT):
                            {  
                                o << "GlobalTransitHoverType_data: " << sample.GlobalTransitHoverType_data()<<", ";
                        } break ;
                        case (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT):
                            {  
                                o << "GlobalHoveringHoverType_data: " << sample.GlobalHoveringHoverType_data() ;        } break ;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    o <<"]";
                    return o;
                }

                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors GlobalHoverStateType_Union::default_discriminator() {
                    return UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors(static_cast< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors >(0));
                }  

            } // namespace GlobalHoverStateType_Specializations  

            // ---- GlobalHoverStateType: 

            GlobalHoverStateType::GlobalHoverStateType()  {
            }   

            GlobalHoverStateType::GlobalHoverStateType (const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& GlobalHoverStateType_subtypes):
                m_GlobalHoverStateType_subtypes_( GlobalHoverStateType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GlobalHoverStateType::GlobalHoverStateType(GlobalHoverStateType&& other_) OMG_NOEXCEPT  :m_GlobalHoverStateType_subtypes_ (std::move(other_.m_GlobalHoverStateType_subtypes_))
            {
            } 

            GlobalHoverStateType& GlobalHoverStateType::operator=(GlobalHoverStateType&&  other_) OMG_NOEXCEPT {
                GlobalHoverStateType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GlobalHoverStateType::swap(GlobalHoverStateType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_GlobalHoverStateType_subtypes_, other_.m_GlobalHoverStateType_subtypes_);
            }  

            bool GlobalHoverStateType::operator == (const GlobalHoverStateType& other_) const {
                if (m_GlobalHoverStateType_subtypes_ != other_.m_GlobalHoverStateType_subtypes_) {
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
                o << "GlobalHoverStateType_subtypes: " << sample.GlobalHoverStateType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace GlobalHoverState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors default_enumerator<UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors>::value = UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALTRANSITHOVERTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT), 
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
                        (char *)"GLOBALHOVERINGHOVERTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT), 
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

                static DDS_TypeCode GlobalHoverStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalHoverStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverStateType_Selectors*/

                if (is_initialized) {
                    return &GlobalHoverStateType_Selectors_g_tc;
                }

                GlobalHoverStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalHoverStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalHoverStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalHoverStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalHoverStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalHoverStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_Selectors_g_sampleAccessInfo;
                }

                GlobalHoverStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalHoverStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors >;

                GlobalHoverStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverStateType_Selectors_g_typePlugin = 
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
                    NULL
                };

                return &GlobalHoverStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalTransitHoverType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalHoveringHoverType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalHoverStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalHoverStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalHoverStateType_Union*/

                if (is_initialized) {
                    return &GlobalHoverStateType_Union_g_tc;
                }

                GlobalHoverStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoverStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalHoverState::GlobalTransitHoverType>::get().native();
                GlobalHoverStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoveringHoverType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalHoverStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors>::get().native();

                GlobalHoverStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalHoverStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union *sample;

                static RTIXCdrMemberAccessInfo GlobalHoverStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoverStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT);
                GlobalHoverStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalTransitHoverType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT);
                GlobalHoverStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalHoveringHoverType_data() - (char *)sample);

                GlobalHoverStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalHoverStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalHoverStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalHoverStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalHoverStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >;

                GlobalHoverStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalHoverStateType_Union_g_typePlugin = 
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
                    NULL
                };

                return &GlobalHoverStateType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalHoverStateType_g_tc_members[1]=
                {

                    {
                        (char *)"GlobalHoverStateType_subtypes",/* Member name */
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

                GlobalHoverStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalHoverStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                GlobalHoverStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalHoverStateType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalHoverStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalHoverState::GlobalHoverStateType *sample;

                static RTIXCdrMemberAccessInfo GlobalHoverStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalHoverStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalHoverStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalHoverState::GlobalHoverStateType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalHoverStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalHoverStateType_subtypes() - (char *)sample);

                GlobalHoverStateType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalHoverStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalHoverState::GlobalHoverStateType);

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
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalHoverState::GlobalHoverStateType >;

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
                    NULL
                };

                return &GlobalHoverStateType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_UnionPlugin_new,
                UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::from_cdr_buffer(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalHoverStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::reset_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalTransitHoverType_data());
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalHoveringHoverType_data());

            sample._d() = UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union >::allocate_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALTRANSITHOVERTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalTransitHoverType_data(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Selectors::GLOBALHOVERINGHOVERTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalHoveringHoverType_data(),  -1, -1);

            sample._d() = UMAA::MO::GlobalHoverState::GlobalHoverStateType_Specializations::GlobalHoverStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalHoverState::GlobalHoverStateTypePlugin_new,
                UMAA::MO::GlobalHoverState::GlobalHoverStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalHoverStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalHoverStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::from_cdr_buffer(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalHoverStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalHoverState::GlobalHoverStateType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::reset_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalHoverStateType_subtypes());
        }

        void topic_type_support< UMAA::MO::GlobalHoverState::GlobalHoverStateType >::allocate_sample(UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalHoverStateType_subtypes(),  -1, -1);
        }

    }
}  

