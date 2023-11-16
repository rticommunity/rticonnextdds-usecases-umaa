

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PropulsionType.hpp"
#include "PropulsionTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            namespace PropulsionType_Specializations {

                std::ostream& operator << (std::ostream& o,const PropulsionType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT:
                        o << "PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT" << " ";
                        break;
                        case PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT:
                        o << "PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- PropulsionType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PropulsionType_Union::PropulsionType_Union(PropulsionType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT):
                            {  
                                PropulsiveEffortType_data( std::move(other_.PropulsiveEffortType_data()));
                        } break;
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT):
                            {  
                                PropulsiveRPMType_data( std::move(other_.PropulsiveRPMType_data()));
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

                PropulsionType_Union& PropulsionType_Union::operator=(PropulsionType_Union&&  other_) OMG_NOEXCEPT {
                    PropulsionType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                PropulsionType_Union::Union_::Union_()  {
                }

                PropulsionType_Union::Union_::Union_(const UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortType_data,const UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMType_data):
                    m_PropulsiveEffortType_data_( PropulsiveEffortType_data ),
                    m_PropulsiveRPMType_data_( PropulsiveRPMType_data ) {
                }

                PropulsionType_Union::PropulsionType_Union() :m_d_(default_discriminator())
                {
                }

                void PropulsionType_Union::swap(PropulsionType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT):
                            {  
                                swap(m_u_.m_PropulsiveEffortType_data_, other_.m_u_.m_PropulsiveEffortType_data_);
                        } break;
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT):
                            {  
                                swap(m_u_.m_PropulsiveRPMType_data_, other_.m_u_.m_PropulsiveRPMType_data_);
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
                            case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_PropulsiveEffortType_data_, other_.m_u_.m_PropulsiveEffortType_data_);
                            } break;
                            case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT):
                                {  
                                    swap(m_u_.m_PropulsiveRPMType_data_, other_.m_u_.m_PropulsiveRPMType_data_);
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

                bool PropulsionType_Union::operator == (const PropulsionType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT):
                            {  
                                if ( m_u_.m_PropulsiveEffortType_data_ != other_.m_u_.m_PropulsiveEffortType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT):
                            {  
                                if ( m_u_.m_PropulsiveRPMType_data_ != other_.m_u_.m_PropulsiveRPMType_data_) {
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
                bool PropulsionType_Union::operator != (const PropulsionType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const PropulsionType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT):
                            {  
                                o << "PropulsiveEffortType_data: " << sample.PropulsiveEffortType_data()<<", ";
                        } break ;
                        case (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT):
                            {  
                                o << "PropulsiveRPMType_data: " << sample.PropulsiveRPMType_data() ;        } break ;

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

                UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors PropulsionType_Union::default_discriminator() {
                    return UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors(static_cast< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors >(0));
                }  

            } // namespace PropulsionType_Specializations  

            // ---- PropulsionType: 

            PropulsionType::PropulsionType()  {
            }   

            PropulsionType::PropulsionType (const UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& PropulsionType_subtypes):
                m_PropulsionType_subtypes_( PropulsionType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PropulsionType::PropulsionType(PropulsionType&& other_) OMG_NOEXCEPT  :m_PropulsionType_subtypes_ (std::move(other_.m_PropulsionType_subtypes_))
            {
            } 

            PropulsionType& PropulsionType::operator=(PropulsionType&&  other_) OMG_NOEXCEPT {
                PropulsionType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PropulsionType::swap(PropulsionType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_PropulsionType_subtypes_, other_.m_PropulsionType_subtypes_);
            }  

            bool PropulsionType::operator == (const PropulsionType& other_) const {
                if (m_PropulsionType_subtypes_ != other_.m_PropulsionType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool PropulsionType::operator != (const PropulsionType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsionType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "PropulsionType_subtypes: " << sample.PropulsionType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors default_enumerator<UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors>::value = UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"PROPULSIVEEFFORTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT), 
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
                        (char *)"PROPULSIVERPMTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT), 
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

                static DDS_TypeCode PropulsionType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionType_Selectors*/

                if (is_initialized) {
                    return &PropulsionType_Selectors_g_tc;
                }

                PropulsionType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PropulsionType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PropulsionType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PropulsionType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PropulsionType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PropulsionType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionType_Selectors_g_sampleAccessInfo;
                }

                PropulsionType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PropulsionType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors >;

                PropulsionType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionType_Selectors_g_typePlugin = 
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

                return &PropulsionType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"PropulsiveEffortType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PropulsiveRPMType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PropulsionType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionType_Union*/

                if (is_initialized) {
                    return &PropulsionType_Union_g_tc;
                }

                PropulsionType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Propulsion::PropulsiveEffortType>::get().native();
                PropulsionType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Propulsion::PropulsiveRPMType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                PropulsionType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors>::get().native();

                PropulsionType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PropulsionType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union *sample;

                static RTIXCdrMemberAccessInfo PropulsionType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT);
                PropulsionType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveEffortType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT);
                PropulsionType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveRPMType_data() - (char *)sample);

                PropulsionType_Union_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >;

                PropulsionType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionType_Union_g_typePlugin = 
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

                return &PropulsionType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Propulsion::PropulsionType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionType_g_tc_members[1]=
                {

                    {
                        (char *)"PropulsionType_subtypes",/* Member name */
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

                static DDS_TypeCode PropulsionType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsionType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionType*/

                if (is_initialized) {
                    return &PropulsionType_g_tc;
                }

                PropulsionType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union>::get().native();

                /* Initialize the values for member annotations. */

                PropulsionType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PropulsionType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Propulsion::PropulsionType *sample;

                static RTIXCdrMemberAccessInfo PropulsionType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Propulsion::PropulsionType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsionType_subtypes() - (char *)sample);

                PropulsionType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Propulsion::PropulsionType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Propulsion::PropulsionType >;

                PropulsionType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionType_g_typePlugin = 
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

                return &PropulsionType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Propulsion::PropulsionType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Propulsion::PropulsionType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_UnionPlugin_new,
                UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsionType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsionType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::from_cdr_buffer(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsionType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::reset_sample(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.PropulsiveEffortType_data());
            sample._d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT);
            ::rti::topic::reset_sample(sample.PropulsiveRPMType_data());

            sample._d() = UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union >::allocate_sample(UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVEEFFORTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PropulsiveEffortType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Selectors::PROPULSIVERPMTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PropulsiveRPMType_data(),  -1, -1);

            sample._d() = UMAA::Common::Propulsion::PropulsionType_Specializations::PropulsionType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Propulsion::PropulsionTypePlugin_new,
                UMAA::Common::Propulsion::PropulsionTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Propulsion::PropulsionType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Propulsion::PropulsionType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsionTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsionTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType >::from_cdr_buffer(UMAA::Common::Propulsion::PropulsionType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsionTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Propulsion::PropulsionType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType >::reset_sample(UMAA::Common::Propulsion::PropulsionType& sample) 
        {
            ::rti::topic::reset_sample(sample.PropulsionType_subtypes());
        }

        void topic_type_support< UMAA::Common::Propulsion::PropulsionType >::allocate_sample(UMAA::Common::Propulsion::PropulsionType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.PropulsionType_subtypes(),  -1, -1);
        }

    }
}  

