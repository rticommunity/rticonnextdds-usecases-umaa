

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "GlobalRegularPolygonStateType.hpp"
#include "GlobalRegularPolygonStateTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalRegularPolygonState {

            namespace GlobalRegularPolygonStateType_Specializations {

                std::ostream& operator << (std::ostream& o,const GlobalRegularPolygonStateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT:
                        o << "GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT" << " ";
                        break;
                        case GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT:
                        o << "GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- GlobalRegularPolygonStateType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRegularPolygonStateType_Union::GlobalRegularPolygonStateType_Union(GlobalRegularPolygonStateType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT):
                            {  
                                GlobalRegularPolygonTransitType_data( std::move(other_.GlobalRegularPolygonTransitType_data()));
                        } break;
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                GlobalRegularPolygonPatternType_data( std::move(other_.GlobalRegularPolygonPatternType_data()));
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

                GlobalRegularPolygonStateType_Union& GlobalRegularPolygonStateType_Union::operator=(GlobalRegularPolygonStateType_Union&&  other_) OMG_NOEXCEPT {
                    GlobalRegularPolygonStateType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                GlobalRegularPolygonStateType_Union::Union_::Union_()  {
                }

                GlobalRegularPolygonStateType_Union::Union_::Union_(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType& GlobalRegularPolygonTransitType_data,const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType& GlobalRegularPolygonPatternType_data):
                    m_GlobalRegularPolygonTransitType_data_( GlobalRegularPolygonTransitType_data ),
                    m_GlobalRegularPolygonPatternType_data_( GlobalRegularPolygonPatternType_data ) {
                }

                GlobalRegularPolygonStateType_Union::GlobalRegularPolygonStateType_Union() :m_d_(default_discriminator())
                {
                }

                void GlobalRegularPolygonStateType_Union::swap(GlobalRegularPolygonStateType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalRegularPolygonTransitType_data_, other_.m_u_.m_GlobalRegularPolygonTransitType_data_);
                        } break;
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                swap(m_u_.m_GlobalRegularPolygonPatternType_data_, other_.m_u_.m_GlobalRegularPolygonPatternType_data_);
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
                            case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalRegularPolygonTransitType_data_, other_.m_u_.m_GlobalRegularPolygonTransitType_data_);
                            } break;
                            case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT):
                                {  
                                    swap(m_u_.m_GlobalRegularPolygonPatternType_data_, other_.m_u_.m_GlobalRegularPolygonPatternType_data_);
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

                bool GlobalRegularPolygonStateType_Union::operator == (const GlobalRegularPolygonStateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT):
                            {  
                                if ( m_u_.m_GlobalRegularPolygonTransitType_data_ != other_.m_u_.m_GlobalRegularPolygonTransitType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                if ( m_u_.m_GlobalRegularPolygonPatternType_data_ != other_.m_u_.m_GlobalRegularPolygonPatternType_data_) {
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
                bool GlobalRegularPolygonStateType_Union::operator != (const GlobalRegularPolygonStateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const GlobalRegularPolygonStateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT):
                            {  
                                o << "GlobalRegularPolygonTransitType_data: " << sample.GlobalRegularPolygonTransitType_data()<<", ";
                        } break ;
                        case (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT):
                            {  
                                o << "GlobalRegularPolygonPatternType_data: " << sample.GlobalRegularPolygonPatternType_data() ;        } break ;

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

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors GlobalRegularPolygonStateType_Union::default_discriminator() {
                    return UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors(static_cast< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors >(0));
                }  

            } // namespace GlobalRegularPolygonStateType_Specializations  

            // ---- GlobalRegularPolygonStateType: 

            GlobalRegularPolygonStateType::GlobalRegularPolygonStateType()  {
            }   

            GlobalRegularPolygonStateType::GlobalRegularPolygonStateType (const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& GlobalRegularPolygonStateType_subtypes):
                m_GlobalRegularPolygonStateType_subtypes_( GlobalRegularPolygonStateType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            GlobalRegularPolygonStateType::GlobalRegularPolygonStateType(GlobalRegularPolygonStateType&& other_) OMG_NOEXCEPT  :m_GlobalRegularPolygonStateType_subtypes_ (std::move(other_.m_GlobalRegularPolygonStateType_subtypes_))
            {
            } 

            GlobalRegularPolygonStateType& GlobalRegularPolygonStateType::operator=(GlobalRegularPolygonStateType&&  other_) OMG_NOEXCEPT {
                GlobalRegularPolygonStateType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void GlobalRegularPolygonStateType::swap(GlobalRegularPolygonStateType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_GlobalRegularPolygonStateType_subtypes_, other_.m_GlobalRegularPolygonStateType_subtypes_);
            }  

            bool GlobalRegularPolygonStateType::operator == (const GlobalRegularPolygonStateType& other_) const {
                if (m_GlobalRegularPolygonStateType_subtypes_ != other_.m_GlobalRegularPolygonStateType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool GlobalRegularPolygonStateType::operator != (const GlobalRegularPolygonStateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRegularPolygonStateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "GlobalRegularPolygonStateType_subtypes: " << sample.GlobalRegularPolygonStateType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace GlobalRegularPolygonState  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors default_enumerator<UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors>::value = UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRegularPolygonStateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"GLOBALREGULARPOLYGONTRANSITTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT), 
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
                        (char *)"GLOBALREGULARPOLYGONPATTERNTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT), 
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

                static DDS_TypeCode GlobalRegularPolygonStateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRegularPolygonStateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRegularPolygonStateType_Selectors*/

                if (is_initialized) {
                    return &GlobalRegularPolygonStateType_Selectors_g_tc;
                }

                GlobalRegularPolygonStateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GlobalRegularPolygonStateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GlobalRegularPolygonStateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GlobalRegularPolygonStateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRegularPolygonStateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalRegularPolygonStateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GlobalRegularPolygonStateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo;
                }

                GlobalRegularPolygonStateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRegularPolygonStateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors >;

                GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRegularPolygonStateType_Selectors_g_typePlugin = 
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

                return &GlobalRegularPolygonStateType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRegularPolygonStateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"GlobalRegularPolygonTransitType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GlobalRegularPolygonPatternType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalRegularPolygonStateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GlobalRegularPolygonStateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRegularPolygonStateType_Union*/

                if (is_initialized) {
                    return &GlobalRegularPolygonStateType_Union_g_tc;
                }

                GlobalRegularPolygonStateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRegularPolygonStateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonTransitType>::get().native();
                GlobalRegularPolygonStateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonPatternType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                GlobalRegularPolygonStateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors>::get().native();

                GlobalRegularPolygonStateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRegularPolygonStateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalRegularPolygonStateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union *sample;

                static RTIXCdrMemberAccessInfo GlobalRegularPolygonStateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRegularPolygonStateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRegularPolygonStateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT);
                GlobalRegularPolygonStateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRegularPolygonTransitType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT);
                GlobalRegularPolygonStateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRegularPolygonPatternType_data() - (char *)sample);

                GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRegularPolygonStateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >;

                GlobalRegularPolygonStateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRegularPolygonStateType_Union_g_typePlugin = 
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

                return &GlobalRegularPolygonStateType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRegularPolygonStateType_g_tc_members[1]=
                {

                    {
                        (char *)"GlobalRegularPolygonStateType_subtypes",/* Member name */
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

                static DDS_TypeCode GlobalRegularPolygonStateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GlobalRegularPolygonStateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRegularPolygonStateType*/

                if (is_initialized) {
                    return &GlobalRegularPolygonStateType_g_tc;
                }

                GlobalRegularPolygonStateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRegularPolygonStateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                GlobalRegularPolygonStateType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRegularPolygonStateType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GlobalRegularPolygonStateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType *sample;

                static RTIXCdrMemberAccessInfo GlobalRegularPolygonStateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRegularPolygonStateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRegularPolygonStateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalRegularPolygonStateType_subtypes() - (char *)sample);

                GlobalRegularPolygonStateType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRegularPolygonStateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRegularPolygonStateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRegularPolygonStateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRegularPolygonStateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRegularPolygonStateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >;

                GlobalRegularPolygonStateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRegularPolygonStateType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRegularPolygonStateType_g_typePlugin = 
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

                return &GlobalRegularPolygonStateType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_UnionPlugin_new,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::from_cdr_buffer(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRegularPolygonStateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::reset_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalRegularPolygonTransitType_data());
            sample._d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT);
            ::rti::topic::reset_sample(sample.GlobalRegularPolygonPatternType_data());

            sample._d() = UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union >::allocate_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONTRANSITTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalRegularPolygonTransitType_data(),  -1, -1);
            sample._d() = (UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Selectors::GLOBALREGULARPOLYGONPATTERNTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.GlobalRegularPolygonPatternType_data(),  -1, -1);

            sample._d() = UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType_Specializations::GlobalRegularPolygonStateType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateTypePlugin_new,
                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::from_cdr_buffer(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRegularPolygonStateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::reset_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample) 
        {
            ::rti::topic::reset_sample(sample.GlobalRegularPolygonStateType_subtypes());
        }

        void topic_type_support< UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType >::allocate_sample(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.GlobalRegularPolygonStateType_subtypes(),  -1, -1);
        }

    }
}  

