

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VariableSpeedControlType.hpp"
#include "VariableSpeedControlTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace VariableSpeedControl {

            namespace VariableSpeedControlType_Specializations {

                std::ostream& operator << (std::ostream& o,const VariableSpeedControlType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT:
                        o << "VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT" << " ";
                        break;
                        case VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT:
                        o << "VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT" << " ";
                        break;
                        case VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT:
                        o << "VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- VariableSpeedControlType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VariableSpeedControlType_Union::VariableSpeedControlType_Union(VariableSpeedControlType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT):
                            {  
                                TimeWithSpeed_data( std::move(other_.TimeWithSpeed_data()));
                        } break;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT):
                            {  
                                RecommendedSpeedControl_data( std::move(other_.RecommendedSpeedControl_data()));
                        } break;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT):
                            {  
                                RequiredSpeedControl_data( std::move(other_.RequiredSpeedControl_data()));
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

                VariableSpeedControlType_Union& VariableSpeedControlType_Union::operator=(VariableSpeedControlType_Union&&  other_) OMG_NOEXCEPT {
                    VariableSpeedControlType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                VariableSpeedControlType_Union::Union_::Union_()  {
                }

                VariableSpeedControlType_Union::Union_::Union_(const UMAA::Common::VariableSpeedControl::TimeWithSpeed& TimeWithSpeed_data,const UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& RecommendedSpeedControl_data,const UMAA::Common::VariableSpeedControl::RequiredSpeedControl& RequiredSpeedControl_data):
                    m_TimeWithSpeed_data_( TimeWithSpeed_data ),
                    m_RecommendedSpeedControl_data_( RecommendedSpeedControl_data ),
                    m_RequiredSpeedControl_data_( RequiredSpeedControl_data ) {
                }

                VariableSpeedControlType_Union::VariableSpeedControlType_Union() :m_d_(default_discriminator())
                {
                }

                void VariableSpeedControlType_Union::swap(VariableSpeedControlType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT):
                            {  
                                swap(m_u_.m_TimeWithSpeed_data_, other_.m_u_.m_TimeWithSpeed_data_);
                        } break;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT):
                            {  
                                swap(m_u_.m_RecommendedSpeedControl_data_, other_.m_u_.m_RecommendedSpeedControl_data_);
                        } break;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT):
                            {  
                                swap(m_u_.m_RequiredSpeedControl_data_, other_.m_u_.m_RequiredSpeedControl_data_);
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
                            case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT):
                                {  
                                    swap(m_u_.m_TimeWithSpeed_data_, other_.m_u_.m_TimeWithSpeed_data_);
                            } break;
                            case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT):
                                {  
                                    swap(m_u_.m_RecommendedSpeedControl_data_, other_.m_u_.m_RecommendedSpeedControl_data_);
                            } break;
                            case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT):
                                {  
                                    swap(m_u_.m_RequiredSpeedControl_data_, other_.m_u_.m_RequiredSpeedControl_data_);
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

                bool VariableSpeedControlType_Union::operator == (const VariableSpeedControlType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT):
                            {  
                                if ( m_u_.m_TimeWithSpeed_data_ != other_.m_u_.m_TimeWithSpeed_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT):
                            {  
                                if ( m_u_.m_RecommendedSpeedControl_data_ != other_.m_u_.m_RecommendedSpeedControl_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT):
                            {  
                                if ( m_u_.m_RequiredSpeedControl_data_ != other_.m_u_.m_RequiredSpeedControl_data_) {
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
                bool VariableSpeedControlType_Union::operator != (const VariableSpeedControlType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const VariableSpeedControlType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT):
                            {  
                                o << "TimeWithSpeed_data: " << sample.TimeWithSpeed_data()<<", ";
                        } break ;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT):
                            {  
                                o << "RecommendedSpeedControl_data: " << sample.RecommendedSpeedControl_data()<<", ";
                        } break ;
                        case (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT):
                            {  
                                o << "RequiredSpeedControl_data: " << sample.RequiredSpeedControl_data() ;        } break ;

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

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors VariableSpeedControlType_Union::default_discriminator() {
                    return UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors(static_cast< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors >(0));
                }  

            } // namespace VariableSpeedControlType_Specializations  

            // ---- VariableSpeedControlType: 

            VariableSpeedControlType::VariableSpeedControlType()  {
            }   

            VariableSpeedControlType::VariableSpeedControlType (const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& VariableSpeedControlType_subtypes):
                m_VariableSpeedControlType_subtypes_( VariableSpeedControlType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VariableSpeedControlType::VariableSpeedControlType(VariableSpeedControlType&& other_) OMG_NOEXCEPT  :m_VariableSpeedControlType_subtypes_ (std::move(other_.m_VariableSpeedControlType_subtypes_))
            {
            } 

            VariableSpeedControlType& VariableSpeedControlType::operator=(VariableSpeedControlType&&  other_) OMG_NOEXCEPT {
                VariableSpeedControlType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VariableSpeedControlType::swap(VariableSpeedControlType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_VariableSpeedControlType_subtypes_, other_.m_VariableSpeedControlType_subtypes_);
            }  

            bool VariableSpeedControlType::operator == (const VariableSpeedControlType& other_) const {
                if (m_VariableSpeedControlType_subtypes_ != other_.m_VariableSpeedControlType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool VariableSpeedControlType::operator != (const VariableSpeedControlType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VariableSpeedControlType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "VariableSpeedControlType_subtypes: " << sample.VariableSpeedControlType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace VariableSpeedControl  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors default_enumerator<UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors>::value = UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT;
        template<>
        struct native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedControlType_Selectors_g_tc_members[3]=
                {

                    {
                        (char *)"TIMEWITHSPEED_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT), 
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
                        (char *)"RECOMMENDEDSPEEDCONTROL_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT), 
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
                        (char *)"REQUIREDSPEEDCONTROL_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT), 
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

                static DDS_TypeCode VariableSpeedControlType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        VariableSpeedControlType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedControlType_Selectors*/

                if (is_initialized) {
                    return &VariableSpeedControlType_Selectors_g_tc;
                }

                VariableSpeedControlType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                VariableSpeedControlType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VariableSpeedControlType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                VariableSpeedControlType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedControlType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VariableSpeedControlType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VariableSpeedControlType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedControlType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_Selectors_g_sampleAccessInfo;
                }

                VariableSpeedControlType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VariableSpeedControlType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedControlType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedControlType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedControlType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedControlType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedControlType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors >;

                VariableSpeedControlType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedControlType_Selectors_g_typePlugin = 
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

                return &VariableSpeedControlType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedControlType_Union_g_tc_members[3]=
                {

                    {
                        (char *)"TimeWithSpeed_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RecommendedSpeedControl_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RequiredSpeedControl_data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VariableSpeedControlType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        VariableSpeedControlType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedControlType_Union*/

                if (is_initialized) {
                    return &VariableSpeedControlType_Union_g_tc;
                }

                VariableSpeedControlType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VariableSpeedControlType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::TimeWithSpeed>::get().native();
                VariableSpeedControlType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::RecommendedSpeedControl>::get().native();
                VariableSpeedControlType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::RequiredSpeedControl>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                VariableSpeedControlType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors>::get().native();

                VariableSpeedControlType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedControlType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VariableSpeedControlType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union *sample;

                static RTIXCdrMemberAccessInfo VariableSpeedControlType_Union_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedControlType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                VariableSpeedControlType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT);
                VariableSpeedControlType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->TimeWithSpeed_data() - (char *)sample);

                sample->_d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT);
                VariableSpeedControlType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RecommendedSpeedControl_data() - (char *)sample);

                sample->_d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT);
                VariableSpeedControlType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequiredSpeedControl_data() - (char *)sample);

                VariableSpeedControlType_Union_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedControlType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedControlType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedControlType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedControlType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedControlType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >;

                VariableSpeedControlType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedControlType_Union_g_typePlugin = 
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

                return &VariableSpeedControlType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VariableSpeedControlType_g_tc_members[1]=
                {

                    {
                        (char *)"VariableSpeedControlType_subtypes",/* Member name */
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

                static DDS_TypeCode VariableSpeedControlType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::VariableSpeedControl::VariableSpeedControlType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        VariableSpeedControlType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VariableSpeedControlType*/

                if (is_initialized) {
                    return &VariableSpeedControlType_g_tc;
                }

                VariableSpeedControlType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VariableSpeedControlType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union>::get().native();

                /* Initialize the values for member annotations. */

                VariableSpeedControlType_g_tc._data._sampleAccessInfo = sample_access_info();
                VariableSpeedControlType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VariableSpeedControlType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType *sample;

                static RTIXCdrMemberAccessInfo VariableSpeedControlType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VariableSpeedControlType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::VariableSpeedControl::VariableSpeedControlType);
                if (sample == NULL) {
                    return NULL;
                }

                VariableSpeedControlType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VariableSpeedControlType_subtypes() - (char *)sample);

                VariableSpeedControlType_g_sampleAccessInfo.memberAccessInfos = 
                VariableSpeedControlType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::VariableSpeedControl::VariableSpeedControlType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VariableSpeedControlType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VariableSpeedControlType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VariableSpeedControlType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VariableSpeedControlType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >;

                VariableSpeedControlType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VariableSpeedControlType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VariableSpeedControlType_g_typePlugin = 
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

                return &VariableSpeedControlType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_UnionPlugin_new,
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VariableSpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VariableSpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::from_cdr_buffer(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VariableSpeedControlType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::reset_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample) 
        {
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT);
            ::rti::topic::reset_sample(sample.TimeWithSpeed_data());
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT);
            ::rti::topic::reset_sample(sample.RecommendedSpeedControl_data());
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT);
            ::rti::topic::reset_sample(sample.RequiredSpeedControl_data());

            sample._d() = UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union >::allocate_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::TIMEWITHSPEED_SELECT);
            ::rti::topic::allocate_sample(sample.TimeWithSpeed_data(),  -1, -1);
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::RECOMMENDEDSPEEDCONTROL_SELECT);
            ::rti::topic::allocate_sample(sample.RecommendedSpeedControl_data(),  -1, -1);
            sample._d() = (UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Selectors::REQUIREDSPEEDCONTROL_SELECT);
            ::rti::topic::allocate_sample(sample.RequiredSpeedControl_data(),  -1, -1);

            sample._d() = UMAA::Common::VariableSpeedControl::VariableSpeedControlType_Specializations::VariableSpeedControlType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::VariableSpeedControl::VariableSpeedControlTypePlugin_new,
                UMAA::Common::VariableSpeedControl::VariableSpeedControlTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VariableSpeedControlTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VariableSpeedControlTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::from_cdr_buffer(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VariableSpeedControlTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::VariableSpeedControl::VariableSpeedControlType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::reset_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample) 
        {
            ::rti::topic::reset_sample(sample.VariableSpeedControlType_subtypes());
        }

        void topic_type_support< UMAA::Common::VariableSpeedControl::VariableSpeedControlType >::allocate_sample(UMAA::Common::VariableSpeedControl::VariableSpeedControlType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.VariableSpeedControlType_subtypes(),  -1, -1);
        }

    }
}  

