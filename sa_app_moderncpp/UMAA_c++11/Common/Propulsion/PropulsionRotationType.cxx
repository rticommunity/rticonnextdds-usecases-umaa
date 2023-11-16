

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionRotationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsionRotationTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsionRotationType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            namespace PropulsionRotationType_Specializations {

                std::ostream& operator << (std::ostream& o,const PropulsionRotationType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT:
                        o << "PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT" << " ";
                        break;
                        case PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT:
                        o << "PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- PropulsionRotationType_Union: 

                PropulsionRotationType_Union::Union_::Union_()  {
                }

                PropulsionRotationType_Union::Union_::Union_(const ::UMAA::Common::Propulsion::PropulsiveRotationEffortType& PropulsiveRotationEffortType_data_,const ::UMAA::Common::Propulsion::PropulsiveRotationAngleType& PropulsiveRotationAngleType_data_):
                    m_PropulsiveRotationEffortType_data_(PropulsiveRotationEffortType_data_), 
                    m_PropulsiveRotationAngleType_data_(PropulsiveRotationAngleType_data_) {
                }

                PropulsionRotationType_Union::PropulsionRotationType_Union() :m_d_(default_discriminator())
                {
                }

                void PropulsionRotationType_Union::swap(PropulsionRotationType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT):
                            {  
                                swap(m_u_.m_PropulsiveRotationEffortType_data_, other_.m_u_.m_PropulsiveRotationEffortType_data_);
                        } break;
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT):
                            {  
                                swap(m_u_.m_PropulsiveRotationAngleType_data_, other_.m_u_.m_PropulsiveRotationAngleType_data_);
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
                            case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT):
                                {  
                                    swap(m_u_.m_PropulsiveRotationEffortType_data_, other_.m_u_.m_PropulsiveRotationEffortType_data_);
                            } break;
                            case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT):
                                {  
                                    swap(m_u_.m_PropulsiveRotationAngleType_data_, other_.m_u_.m_PropulsiveRotationAngleType_data_);
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

                bool PropulsionRotationType_Union::operator == (const PropulsionRotationType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT):
                            {  
                                if (m_u_.m_PropulsiveRotationEffortType_data_ != other_.m_u_.m_PropulsiveRotationEffortType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT):
                            {  
                                if (m_u_.m_PropulsiveRotationAngleType_data_ != other_.m_u_.m_PropulsiveRotationAngleType_data_) {
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

                bool PropulsionRotationType_Union::operator != (const PropulsionRotationType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const PropulsionRotationType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT):
                            {  
                                o << "PropulsiveRotationEffortType_data: " << sample.PropulsiveRotationEffortType_data ()<<", ";
                        } break ;
                        case (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT):
                            {  
                                o << "PropulsiveRotationAngleType_data: " << sample.PropulsiveRotationAngleType_data ();
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

                ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors PropulsionRotationType_Union::default_discriminator() {
                    return ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors(static_cast< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors >(0));
                }  

            } // namespace PropulsionRotationType_Specializations  

            // ---- PropulsionRotationType: 

            PropulsionRotationType::PropulsionRotationType()  {

            }   

            PropulsionRotationType::PropulsionRotationType (const ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& PropulsionRotationType_subtypes_):
                m_PropulsionRotationType_subtypes_(PropulsionRotationType_subtypes_) {
            }

            void PropulsionRotationType::swap(PropulsionRotationType& other_)  noexcept 
            {
                using std::swap;
                swap(m_PropulsionRotationType_subtypes_, other_.m_PropulsionRotationType_subtypes_);
            }  

            bool PropulsionRotationType::operator == (const PropulsionRotationType& other_) const {
                if (m_PropulsionRotationType_subtypes_ != other_.m_PropulsionRotationType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool PropulsionRotationType::operator != (const PropulsionRotationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsionRotationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "PropulsionRotationType_subtypes: " << sample.PropulsionRotationType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors default_enumerator< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors>::value = ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors default_enumerator< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors>::value = ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionRotationType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"PROPULSIVEROTATIONEFFORTTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT), 
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
                        (char *)"PROPULSIVEROTATIONANGLETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT), 
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

                static DDS_TypeCode PropulsionRotationType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionRotationType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionRotationType_Selectors*/

                if (is_initialized) {
                    return &PropulsionRotationType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionRotationType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PropulsionRotationType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PropulsionRotationType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PropulsionRotationType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionRotationType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionRotationType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PropulsionRotationType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionRotationType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_Selectors_g_sampleAccessInfo;
                }

                PropulsionRotationType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PropulsionRotationType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionRotationType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionRotationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionRotationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionRotationType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionRotationType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors >;

                PropulsionRotationType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionRotationType_Selectors_g_typePlugin = 
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

                return &PropulsionRotationType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionRotationType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"PropulsiveRotationEffortType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PropulsiveRotationAngleType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PropulsionRotationType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PropulsionRotationType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionRotationType_Union*/

                if (is_initialized) {
                    return &PropulsionRotationType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionRotationType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionRotationType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType>::get().native();
                PropulsionRotationType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsiveRotationAngleType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                PropulsionRotationType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors>::get().native();

                PropulsionRotationType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionRotationType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionRotationType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union *sample;

                static RTIXCdrMemberAccessInfo PropulsionRotationType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionRotationType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionRotationType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT);
                PropulsionRotationType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveRotationEffortType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT);
                PropulsionRotationType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsiveRotationAngleType_data() - (char *)sample);

                PropulsionRotationType_Union_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionRotationType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionRotationType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionRotationType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionRotationType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionRotationType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >;

                PropulsionRotationType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionRotationType_Union_g_typePlugin = 
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

                return &PropulsionRotationType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsionRotationType_g_tc_members[1]=
                {

                    {
                        (char *)"PropulsionRotationType_subtypes",/* Member name */
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

                static DDS_TypeCode PropulsionRotationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsionRotationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsionRotationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsionRotationType*/

                if (is_initialized) {
                    return &PropulsionRotationType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsionRotationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsionRotationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union>::get().native();

                /* Initialize the values for member annotations. */

                PropulsionRotationType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsionRotationType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsionRotationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsionRotationType *sample;

                static RTIXCdrMemberAccessInfo PropulsionRotationType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsionRotationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsionRotationType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsionRotationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PropulsionRotationType_subtypes() - (char *)sample);

                PropulsionRotationType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsionRotationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsionRotationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsionRotationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsionRotationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsionRotationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsionRotationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsionRotationType >;

                PropulsionRotationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsionRotationType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsionRotationType_g_typePlugin = 
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

                return &PropulsionRotationType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Propulsion::PropulsionRotationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsionRotationType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_UnionPlugin_new,
                ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsionRotationType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsionRotationType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::from_cdr_buffer(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsionRotationType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::reset_sample(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT);
            ::rti::topic::reset_sample(sample.PropulsiveRotationEffortType_data());
            sample._d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT);
            ::rti::topic::reset_sample(sample.PropulsiveRotationAngleType_data());

            sample._d() = ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union >::allocate_sample(::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONEFFORTTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PropulsiveRotationEffortType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Selectors::PROPULSIVEROTATIONANGLETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PropulsiveRotationAngleType_data(),  -1, -1);

            sample._d() = ::UMAA::Common::Propulsion::PropulsionRotationType_Specializations::PropulsionRotationType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Propulsion::PropulsionRotationTypePlugin_new,
                ::UMAA::Common::Propulsion::PropulsionRotationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Propulsion::PropulsionRotationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsionRotationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsionRotationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType >::from_cdr_buffer(::UMAA::Common::Propulsion::PropulsionRotationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsionRotationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Propulsion::PropulsionRotationType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType >::reset_sample(::UMAA::Common::Propulsion::PropulsionRotationType& sample) 
        {
            ::rti::topic::reset_sample(sample.PropulsionRotationType_subtypes());
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsionRotationType >::allocate_sample(::UMAA::Common::Propulsion::PropulsionRotationType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.PropulsionRotationType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
