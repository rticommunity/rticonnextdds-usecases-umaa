

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalDriftStateType.hpp"
#include "LocalDriftStateTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalDriftState {

            namespace LocalDriftStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const LocalDriftStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT:
                        o << "LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT" << " ";
                        break;
                        case LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT:
                        o << "LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- LocalDriftStateType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalDriftStateType_Union::LocalDriftStateType_Union(LocalDriftStateType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT):
                            {  
                                LocalTransitDriftType_data( std::move(other_.LocalTransitDriftType_data()));
                        } break;
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT):
                            {  
                                LocalRegionDriftType_data( std::move(other_.LocalRegionDriftType_data()));
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

                LocalDriftStateType_Union& LocalDriftStateType_Union::operator=(LocalDriftStateType_Union&&  other_) OMG_NOEXCEPT {
                    LocalDriftStateType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                LocalDriftStateType_Union::Union_::Union_()  {
                }

                LocalDriftStateType_Union::Union_::Union_(const UMAA::MO::LocalDriftState::LocalTransitDriftType& LocalTransitDriftType_data,const UMAA::MO::LocalDriftState::LocalRegionDriftType& LocalRegionDriftType_data):
                    m_LocalTransitDriftType_data_( LocalTransitDriftType_data ),
                    m_LocalRegionDriftType_data_( LocalRegionDriftType_data ) {
                }

                LocalDriftStateType_Union::LocalDriftStateType_Union() :m_d_(default_discriminator())
                {
                }

                void LocalDriftStateType_Union::swap(LocalDriftStateType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalTransitDriftType_data_, other_.m_u_.m_LocalTransitDriftType_data_);
                        } break;
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalRegionDriftType_data_, other_.m_u_.m_LocalRegionDriftType_data_);
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
                            case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalTransitDriftType_data_, other_.m_u_.m_LocalTransitDriftType_data_);
                            } break;
                            case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalRegionDriftType_data_, other_.m_u_.m_LocalRegionDriftType_data_);
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

                bool LocalDriftStateType_Union::operator == (const LocalDriftStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT):
                            {  
                                if ( m_u_.m_LocalTransitDriftType_data_ != other_.m_u_.m_LocalTransitDriftType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT):
                            {  
                                if ( m_u_.m_LocalRegionDriftType_data_ != other_.m_u_.m_LocalRegionDriftType_data_) {
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
                bool LocalDriftStateType_Union::operator != (const LocalDriftStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const LocalDriftStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT):
                            {  
                                o << "LocalTransitDriftType_data: " << sample.LocalTransitDriftType_data()<<", ";
                        } break ;
                        case (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT):
                            {  
                                o << "LocalRegionDriftType_data: " << sample.LocalRegionDriftType_data() ;        } break ;

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

                UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors LocalDriftStateType_Union::default_discriminator() {
                    return UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors(static_cast< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors >(0));
                }  

            } // namespace LocalDriftStateType_Specializations  

            // ---- LocalDriftStateType: 

            LocalDriftStateType::LocalDriftStateType()  {
            }   

            LocalDriftStateType::LocalDriftStateType (const UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& LocalDriftStateType_subtypes):
                m_LocalDriftStateType_subtypes_( LocalDriftStateType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalDriftStateType::LocalDriftStateType(LocalDriftStateType&& other_) OMG_NOEXCEPT  :m_LocalDriftStateType_subtypes_ (std::move(other_.m_LocalDriftStateType_subtypes_))
            {
            } 

            LocalDriftStateType& LocalDriftStateType::operator=(LocalDriftStateType&&  other_) OMG_NOEXCEPT {
                LocalDriftStateType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalDriftStateType::swap(LocalDriftStateType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_LocalDriftStateType_subtypes_, other_.m_LocalDriftStateType_subtypes_);
            }  

            bool LocalDriftStateType::operator == (const LocalDriftStateType& other_) const {
                if (m_LocalDriftStateType_subtypes_ != other_.m_LocalDriftStateType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool LocalDriftStateType::operator != (const LocalDriftStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalDriftStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "LocalDriftStateType_subtypes: " << sample.LocalDriftStateType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace LocalDriftState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors default_enumerator<UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors>::value = UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalDriftStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LOCALTRANSITDRIFTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT), 
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
                        (char *)"LOCALREGIONDRIFTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT), 
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

                static DDS_TypeCode LocalDriftStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalDriftStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalDriftStateType_Selectors*/

                if (is_initialized) {
                    return &LocalDriftStateType_Selectors_g_tc;
                }

                LocalDriftStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LocalDriftStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalDriftStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LocalDriftStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalDriftStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalDriftStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LocalDriftStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalDriftStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_Selectors_g_sampleAccessInfo;
                }

                LocalDriftStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LocalDriftStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                LocalDriftStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalDriftStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalDriftStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalDriftStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalDriftStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors >;

                LocalDriftStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalDriftStateType_Selectors_g_typePlugin = 
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

                return &LocalDriftStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalDriftStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LocalTransitDriftType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LocalRegionDriftType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalDriftStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalDriftStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalDriftStateType_Union*/

                if (is_initialized) {
                    return &LocalDriftStateType_Union_g_tc;
                }

                LocalDriftStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalDriftStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalDriftState::LocalTransitDriftType>::get().native();
                LocalDriftStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalDriftState::LocalRegionDriftType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                LocalDriftStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors>::get().native();

                LocalDriftStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalDriftStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalDriftStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union *sample;

                static RTIXCdrMemberAccessInfo LocalDriftStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalDriftStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                LocalDriftStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT);
                LocalDriftStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalTransitDriftType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT);
                LocalDriftStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRegionDriftType_data() - (char *)sample);

                LocalDriftStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                LocalDriftStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalDriftStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalDriftStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalDriftStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalDriftStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >;

                LocalDriftStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalDriftStateType_Union_g_typePlugin = 
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

                return &LocalDriftStateType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalDriftStateType_g_tc_members[1]=
                {

                    {
                        (char *)"LocalDriftStateType_subtypes",/* Member name */
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

                static DDS_TypeCode LocalDriftStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftState::LocalDriftStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LocalDriftStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalDriftStateType*/

                if (is_initialized) {
                    return &LocalDriftStateType_g_tc;
                }

                LocalDriftStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalDriftStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                LocalDriftStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalDriftStateType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalDriftStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalDriftState::LocalDriftStateType *sample;

                static RTIXCdrMemberAccessInfo LocalDriftStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalDriftStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalDriftState::LocalDriftStateType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalDriftStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalDriftStateType_subtypes() - (char *)sample);

                LocalDriftStateType_g_sampleAccessInfo.memberAccessInfos = 
                LocalDriftStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalDriftState::LocalDriftStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalDriftStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalDriftStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalDriftStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalDriftStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalDriftState::LocalDriftStateType >;

                LocalDriftStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalDriftStateType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalDriftStateType_g_typePlugin = 
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

                return &LocalDriftStateType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalDriftState::LocalDriftStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalDriftState::LocalDriftStateType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_UnionPlugin_new,
                UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::from_cdr_buffer(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalDriftStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::reset_sample(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalTransitDriftType_data());
            sample._d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalRegionDriftType_data());

            sample._d() = UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union >::allocate_sample(UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALTRANSITDRIFTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalTransitDriftType_data(),  -1, -1);
            sample._d() = (UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Selectors::LOCALREGIONDRIFTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalRegionDriftType_data(),  -1, -1);

            sample._d() = UMAA::MO::LocalDriftState::LocalDriftStateType_Specializations::LocalDriftStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalDriftState::LocalDriftStateTypePlugin_new,
                UMAA::MO::LocalDriftState::LocalDriftStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalDriftState::LocalDriftStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalDriftStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalDriftStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType >::from_cdr_buffer(UMAA::MO::LocalDriftState::LocalDriftStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalDriftStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalDriftState::LocalDriftStateType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType >::reset_sample(UMAA::MO::LocalDriftState::LocalDriftStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.LocalDriftStateType_subtypes());
        }

        void topic_type_support< UMAA::MO::LocalDriftState::LocalDriftStateType >::allocate_sample(UMAA::MO::LocalDriftState::LocalDriftStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.LocalDriftStateType_subtypes(),  -1, -1);
        }

    }
}  

