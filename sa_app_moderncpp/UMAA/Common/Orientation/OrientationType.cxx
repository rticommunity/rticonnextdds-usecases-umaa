

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "OrientationType.hpp"
#include "OrientationTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            namespace OrientationType_Specializations {

                std::ostream& operator << (std::ostream& o,const OrientationType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case OrientationType_Selectors::DIRECTIONTYPE_SELECT:
                        o << "OrientationType_Selectors::DIRECTIONTYPE_SELECT" << " ";
                        break;
                        case OrientationType_Selectors::ATTITUDETYPE_SELECT:
                        o << "OrientationType_Selectors::ATTITUDETYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- OrientationType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                OrientationType_Union::OrientationType_Union(OrientationType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT):
                            {  
                                DirectionType_data( std::move(other_.DirectionType_data()));
                        } break;
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT):
                            {  
                                AttitudeType_data( std::move(other_.AttitudeType_data()));
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

                OrientationType_Union& OrientationType_Union::operator=(OrientationType_Union&&  other_) OMG_NOEXCEPT {
                    OrientationType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                OrientationType_Union::Union_::Union_()  {
                }

                OrientationType_Union::Union_::Union_(const UMAA::Common::Orientation::DirectionType& DirectionType_data,const UMAA::Common::Orientation::AttitudeType& AttitudeType_data):
                    m_DirectionType_data_( DirectionType_data ),
                    m_AttitudeType_data_( AttitudeType_data ) {
                }

                OrientationType_Union::OrientationType_Union() :m_d_(default_discriminator())
                {
                }

                void OrientationType_Union::swap(OrientationType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT):
                            {  
                                swap(m_u_.m_DirectionType_data_, other_.m_u_.m_DirectionType_data_);
                        } break;
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT):
                            {  
                                swap(m_u_.m_AttitudeType_data_, other_.m_u_.m_AttitudeType_data_);
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
                            case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT):
                                {  
                                    swap(m_u_.m_DirectionType_data_, other_.m_u_.m_DirectionType_data_);
                            } break;
                            case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT):
                                {  
                                    swap(m_u_.m_AttitudeType_data_, other_.m_u_.m_AttitudeType_data_);
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

                bool OrientationType_Union::operator == (const OrientationType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT):
                            {  
                                if ( m_u_.m_DirectionType_data_ != other_.m_u_.m_DirectionType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT):
                            {  
                                if ( m_u_.m_AttitudeType_data_ != other_.m_u_.m_AttitudeType_data_) {
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
                bool OrientationType_Union::operator != (const OrientationType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const OrientationType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT):
                            {  
                                o << "DirectionType_data: " << sample.DirectionType_data()<<", ";
                        } break ;
                        case (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT):
                            {  
                                o << "AttitudeType_data: " << sample.AttitudeType_data() ;        } break ;

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

                UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors OrientationType_Union::default_discriminator() {
                    return UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors(static_cast< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors >(0));
                }  

            } // namespace OrientationType_Specializations  

            // ---- OrientationType: 

            OrientationType::OrientationType()  {
            }   

            OrientationType::OrientationType (const UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& OrientationType_subtypes):
                m_OrientationType_subtypes_( OrientationType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            OrientationType::OrientationType(OrientationType&& other_) OMG_NOEXCEPT  :m_OrientationType_subtypes_ (std::move(other_.m_OrientationType_subtypes_))
            {
            } 

            OrientationType& OrientationType::operator=(OrientationType&&  other_) OMG_NOEXCEPT {
                OrientationType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void OrientationType::swap(OrientationType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_OrientationType_subtypes_, other_.m_OrientationType_subtypes_);
            }  

            bool OrientationType::operator == (const OrientationType& other_) const {
                if (m_OrientationType_subtypes_ != other_.m_OrientationType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool OrientationType::operator != (const OrientationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OrientationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "OrientationType_subtypes: " << sample.OrientationType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors default_enumerator<UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors>::value = UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"DIRECTIONTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT), 
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
                        (char *)"ATTITUDETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT), 
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

                static DDS_TypeCode OrientationType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        OrientationType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationType_Selectors*/

                if (is_initialized) {
                    return &OrientationType_Selectors_g_tc;
                }

                OrientationType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                OrientationType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                OrientationType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                OrientationType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &OrientationType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo OrientationType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationType_Selectors_g_sampleAccessInfo;
                }

                OrientationType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                OrientationType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                OrientationType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors >;

                OrientationType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationType_Selectors_g_typePlugin = 
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

                return &OrientationType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"DirectionType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AttitudeType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode OrientationType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        OrientationType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationType_Union*/

                if (is_initialized) {
                    return &OrientationType_Union_g_tc;
                }

                OrientationType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Orientation::DirectionType>::get().native();
                OrientationType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Orientation::AttitudeType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                OrientationType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors>::get().native();

                OrientationType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &OrientationType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union *sample;

                static RTIXCdrMemberAccessInfo OrientationType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT);
                OrientationType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT);
                OrientationType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AttitudeType_data() - (char *)sample);

                OrientationType_Union_g_sampleAccessInfo.memberAccessInfos = 
                OrientationType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >;

                OrientationType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationType_Union_g_typePlugin = 
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

                return &OrientationType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Orientation::OrientationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationType_g_tc_members[1]=
                {

                    {
                        (char *)"OrientationType_subtypes",/* Member name */
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

                static DDS_TypeCode OrientationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::OrientationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        OrientationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationType*/

                if (is_initialized) {
                    return &OrientationType_g_tc;
                }

                OrientationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union>::get().native();

                /* Initialize the values for member annotations. */

                OrientationType_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &OrientationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Orientation::OrientationType *sample;

                static RTIXCdrMemberAccessInfo OrientationType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Orientation::OrientationType);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->OrientationType_subtypes() - (char *)sample);

                OrientationType_g_sampleAccessInfo.memberAccessInfos = 
                OrientationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Orientation::OrientationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Orientation::OrientationType >;

                OrientationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationType_g_typePlugin = 
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

                return &OrientationType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Orientation::OrientationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Orientation::OrientationType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_UnionPlugin_new,
                UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = OrientationType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = OrientationType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::from_cdr_buffer(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = OrientationType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::reset_sample(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT);
            ::rti::topic::reset_sample(sample.DirectionType_data());
            sample._d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT);
            ::rti::topic::reset_sample(sample.AttitudeType_data());

            sample._d() = UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union >::allocate_sample(UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::DIRECTIONTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.DirectionType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Selectors::ATTITUDETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.AttitudeType_data(),  -1, -1);

            sample._d() = UMAA::Common::Orientation::OrientationType_Specializations::OrientationType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Orientation::OrientationTypePlugin_new,
                UMAA::Common::Orientation::OrientationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Orientation::OrientationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Orientation::OrientationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = OrientationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = OrientationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType >::from_cdr_buffer(UMAA::Common::Orientation::OrientationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = OrientationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Orientation::OrientationType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType >::reset_sample(UMAA::Common::Orientation::OrientationType& sample) 
        {
            ::rti::topic::reset_sample(sample.OrientationType_subtypes());
        }

        void topic_type_support< UMAA::Common::Orientation::OrientationType >::allocate_sample(UMAA::Common::Orientation::OrientationType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.OrientationType_subtypes(),  -1, -1);
        }

    }
}  

