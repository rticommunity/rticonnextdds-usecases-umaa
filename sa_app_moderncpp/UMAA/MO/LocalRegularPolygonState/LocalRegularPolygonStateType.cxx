

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalRegularPolygonStateType.hpp"
#include "LocalRegularPolygonStateTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalRegularPolygonState {

            namespace LocalRegularPolygonStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const LocalRegularPolygonStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT:
                        o << "LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT" << " ";
                        break;
                        case LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT:
                        o << "LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- LocalRegularPolygonStateType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalRegularPolygonStateType_Union::LocalRegularPolygonStateType_Union(LocalRegularPolygonStateType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                LocalRegularPolygonPatternType_data( std::move(other_.LocalRegularPolygonPatternType_data()));
                        } break;
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT):
                            {  
                                LocalRegularPolygonTransitTypeType_data( std::move(other_.LocalRegularPolygonTransitTypeType_data()));
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

                LocalRegularPolygonStateType_Union& LocalRegularPolygonStateType_Union::operator=(LocalRegularPolygonStateType_Union&&  other_) OMG_NOEXCEPT {
                    LocalRegularPolygonStateType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                LocalRegularPolygonStateType_Union::Union_::Union_()  {
                }

                LocalRegularPolygonStateType_Union::Union_::Union_(const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& LocalRegularPolygonPatternType_data,const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& LocalRegularPolygonTransitTypeType_data):
                    m_LocalRegularPolygonPatternType_data_( LocalRegularPolygonPatternType_data ),
                    m_LocalRegularPolygonTransitTypeType_data_( LocalRegularPolygonTransitTypeType_data ) {
                }

                LocalRegularPolygonStateType_Union::LocalRegularPolygonStateType_Union() :m_d_(default_discriminator())
                {
                }

                void LocalRegularPolygonStateType_Union::swap(LocalRegularPolygonStateType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalRegularPolygonPatternType_data_, other_.m_u_.m_LocalRegularPolygonPatternType_data_);
                        } break;
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalRegularPolygonTransitTypeType_data_, other_.m_u_.m_LocalRegularPolygonTransitTypeType_data_);
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
                            case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalRegularPolygonPatternType_data_, other_.m_u_.m_LocalRegularPolygonPatternType_data_);
                            } break;
                            case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalRegularPolygonTransitTypeType_data_, other_.m_u_.m_LocalRegularPolygonTransitTypeType_data_);
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

                bool LocalRegularPolygonStateType_Union::operator == (const LocalRegularPolygonStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                if ( m_u_.m_LocalRegularPolygonPatternType_data_ != other_.m_u_.m_LocalRegularPolygonPatternType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT):
                            {  
                                if ( m_u_.m_LocalRegularPolygonTransitTypeType_data_ != other_.m_u_.m_LocalRegularPolygonTransitTypeType_data_) {
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
                bool LocalRegularPolygonStateType_Union::operator != (const LocalRegularPolygonStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const LocalRegularPolygonStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                o << "LocalRegularPolygonPatternType_data: " << sample.LocalRegularPolygonPatternType_data()<<", ";
                        } break ;
                        case (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT):
                            {  
                                o << "LocalRegularPolygonTransitTypeType_data: " << sample.LocalRegularPolygonTransitTypeType_data() ;        } break ;

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

                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors LocalRegularPolygonStateType_Union::default_discriminator() {
                    return UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors(static_cast< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors >(0));
                }  

            } // namespace LocalRegularPolygonStateType_Specializations  

            // ---- LocalRegularPolygonStateType: 

            LocalRegularPolygonStateType::LocalRegularPolygonStateType()  {
            }   

            LocalRegularPolygonStateType::LocalRegularPolygonStateType (const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& LocalRegularPolygonStateType_subtypes):
                m_LocalRegularPolygonStateType_subtypes_( LocalRegularPolygonStateType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalRegularPolygonStateType::LocalRegularPolygonStateType(LocalRegularPolygonStateType&& other_) OMG_NOEXCEPT  :m_LocalRegularPolygonStateType_subtypes_ (std::move(other_.m_LocalRegularPolygonStateType_subtypes_))
            {
            } 

            LocalRegularPolygonStateType& LocalRegularPolygonStateType::operator=(LocalRegularPolygonStateType&&  other_) OMG_NOEXCEPT {
                LocalRegularPolygonStateType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalRegularPolygonStateType::swap(LocalRegularPolygonStateType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_LocalRegularPolygonStateType_subtypes_, other_.m_LocalRegularPolygonStateType_subtypes_);
            }  

            bool LocalRegularPolygonStateType::operator == (const LocalRegularPolygonStateType& other_) const {
                if (m_LocalRegularPolygonStateType_subtypes_ != other_.m_LocalRegularPolygonStateType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool LocalRegularPolygonStateType::operator != (const LocalRegularPolygonStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalRegularPolygonStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "LocalRegularPolygonStateType_subtypes: " << sample.LocalRegularPolygonStateType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace LocalRegularPolygonState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors default_enumerator<UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors>::value = UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRegularPolygonStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LOCALREGULARPOLYGONPATTERNTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT), 
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
                        (char *)"LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT), 
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

                static DDS_TypeCode LocalRegularPolygonStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalRegularPolygonStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRegularPolygonStateType_Selectors*/

                if (is_initialized) {
                    return &LocalRegularPolygonStateType_Selectors_g_tc;
                }

                LocalRegularPolygonStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LocalRegularPolygonStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalRegularPolygonStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LocalRegularPolygonStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRegularPolygonStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalRegularPolygonStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LocalRegularPolygonStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo;
                }

                LocalRegularPolygonStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                LocalRegularPolygonStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors >;

                LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRegularPolygonStateType_Selectors_g_typePlugin = 
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

                return &LocalRegularPolygonStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRegularPolygonStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LocalRegularPolygonPatternType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LocalRegularPolygonTransitTypeType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalRegularPolygonStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalRegularPolygonStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRegularPolygonStateType_Union*/

                if (is_initialized) {
                    return &LocalRegularPolygonStateType_Union_g_tc;
                }

                LocalRegularPolygonStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRegularPolygonStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType>::get().native();
                LocalRegularPolygonStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                LocalRegularPolygonStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors>::get().native();

                LocalRegularPolygonStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRegularPolygonStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalRegularPolygonStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union *sample;

                static RTIXCdrMemberAccessInfo LocalRegularPolygonStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRegularPolygonStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRegularPolygonStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT);
                LocalRegularPolygonStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRegularPolygonPatternType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT);
                LocalRegularPolygonStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRegularPolygonTransitTypeType_data() - (char *)sample);

                LocalRegularPolygonStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                LocalRegularPolygonStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRegularPolygonStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRegularPolygonStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRegularPolygonStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRegularPolygonStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >;

                LocalRegularPolygonStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRegularPolygonStateType_Union_g_typePlugin = 
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

                return &LocalRegularPolygonStateType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRegularPolygonStateType_g_tc_members[1]=
                {

                    {
                        (char *)"LocalRegularPolygonStateType_subtypes",/* Member name */
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

                static DDS_TypeCode LocalRegularPolygonStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LocalRegularPolygonStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRegularPolygonStateType*/

                if (is_initialized) {
                    return &LocalRegularPolygonStateType_g_tc;
                }

                LocalRegularPolygonStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRegularPolygonStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                LocalRegularPolygonStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRegularPolygonStateType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalRegularPolygonStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType *sample;

                static RTIXCdrMemberAccessInfo LocalRegularPolygonStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRegularPolygonStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRegularPolygonStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalRegularPolygonStateType_subtypes() - (char *)sample);

                LocalRegularPolygonStateType_g_sampleAccessInfo.memberAccessInfos = 
                LocalRegularPolygonStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRegularPolygonStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRegularPolygonStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRegularPolygonStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRegularPolygonStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >;

                LocalRegularPolygonStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonStateType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRegularPolygonStateType_g_typePlugin = 
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

                return &LocalRegularPolygonStateType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_UnionPlugin_new,
                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::from_cdr_buffer(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRegularPolygonStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::reset_sample(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalRegularPolygonPatternType_data());
            sample._d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalRegularPolygonTransitTypeType_data());

            sample._d() = UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union >::allocate_sample(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalRegularPolygonPatternType_data(),  -1, -1);
            sample._d() = (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalRegularPolygonTransitTypeType_data(),  -1, -1);

            sample._d() = UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateTypePlugin_new,
                UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::from_cdr_buffer(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRegularPolygonStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::reset_sample(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.LocalRegularPolygonStateType_subtypes());
        }

        void topic_type_support< UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType >::allocate_sample(UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.LocalRegularPolygonStateType_subtypes(),  -1, -1);
        }

    }
}  

