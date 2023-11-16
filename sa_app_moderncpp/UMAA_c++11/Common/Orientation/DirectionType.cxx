

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DirectionTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DirectionType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            namespace DirectionType_Specializations {

                std::ostream& operator << (std::ostream& o,const DirectionType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case DirectionType_Selectors::COURSETYPE_SELECT:
                        o << "DirectionType_Selectors::COURSETYPE_SELECT" << " ";
                        break;
                        case DirectionType_Selectors::HEADINGTYPE_SELECT:
                        o << "DirectionType_Selectors::HEADINGTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- DirectionType_Union: 

                DirectionType_Union::Union_::Union_()  {
                }

                DirectionType_Union::Union_::Union_(const ::UMAA::Common::Orientation::CourseType& CourseType_data_,const ::UMAA::Common::Orientation::HeadingType& HeadingType_data_):
                    m_CourseType_data_(CourseType_data_), 
                    m_HeadingType_data_(HeadingType_data_) {
                }

                DirectionType_Union::DirectionType_Union() :m_d_(default_discriminator())
                {
                }

                void DirectionType_Union::swap(DirectionType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT):
                            {  
                                swap(m_u_.m_CourseType_data_, other_.m_u_.m_CourseType_data_);
                        } break;
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT):
                            {  
                                swap(m_u_.m_HeadingType_data_, other_.m_u_.m_HeadingType_data_);
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
                            case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT):
                                {  
                                    swap(m_u_.m_CourseType_data_, other_.m_u_.m_CourseType_data_);
                            } break;
                            case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT):
                                {  
                                    swap(m_u_.m_HeadingType_data_, other_.m_u_.m_HeadingType_data_);
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

                bool DirectionType_Union::operator == (const DirectionType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT):
                            {  
                                if (m_u_.m_CourseType_data_ != other_.m_u_.m_CourseType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT):
                            {  
                                if (m_u_.m_HeadingType_data_ != other_.m_u_.m_HeadingType_data_) {
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

                bool DirectionType_Union::operator != (const DirectionType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const DirectionType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT):
                            {  
                                o << "CourseType_data: " << sample.CourseType_data ()<<", ";
                        } break ;
                        case (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT):
                            {  
                                o << "HeadingType_data: " << sample.HeadingType_data ();
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

                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors DirectionType_Union::default_discriminator() {
                    return ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors(static_cast< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors >(0));
                }  

            } // namespace DirectionType_Specializations  

            // ---- DirectionType: 

            DirectionType::DirectionType()  {

            }   

            DirectionType::DirectionType (const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& DirectionType_subtypes_):
                m_DirectionType_subtypes_(DirectionType_subtypes_) {
            }

            void DirectionType::swap(DirectionType& other_)  noexcept 
            {
                using std::swap;
                swap(m_DirectionType_subtypes_, other_.m_DirectionType_subtypes_);
            }  

            bool DirectionType::operator == (const DirectionType& other_) const {
                if (m_DirectionType_subtypes_ != other_.m_DirectionType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool DirectionType::operator != (const DirectionType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DirectionType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "DirectionType_subtypes: " << sample.DirectionType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors default_enumerator< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors>::value = ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors default_enumerator< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors>::value = ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"COURSETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT), 
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
                        (char *)"HEADINGTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT), 
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

                static DDS_TypeCode DirectionType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DirectionType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionType_Selectors*/

                if (is_initialized) {
                    return &DirectionType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DirectionType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DirectionType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DirectionType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DirectionType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionType_Selectors_g_sampleAccessInfo;
                }

                DirectionType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DirectionType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                DirectionType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors >;

                DirectionType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionType_Selectors_g_typePlugin = 
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

                return &DirectionType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"CourseType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HeadingType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DirectionType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DirectionType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionType_Union*/

                if (is_initialized) {
                    return &DirectionType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::CourseType>::get().native();
                DirectionType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                DirectionType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors>::get().native();

                DirectionType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union *sample;

                static RTIXCdrMemberAccessInfo DirectionType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT);
                DirectionType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CourseType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT);
                DirectionType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingType_data() - (char *)sample);

                DirectionType_Union_g_sampleAccessInfo.memberAccessInfos = 
                DirectionType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >;

                DirectionType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionType_Union_g_typePlugin = 
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

                return &DirectionType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::DirectionType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionType_g_tc_members[1]=
                {

                    {
                        (char *)"DirectionType_subtypes",/* Member name */
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

                static DDS_TypeCode DirectionType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::DirectionType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DirectionType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionType*/

                if (is_initialized) {
                    return &DirectionType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DirectionType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union>::get().native();

                /* Initialize the values for member annotations. */

                DirectionType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::DirectionType *sample;

                static RTIXCdrMemberAccessInfo DirectionType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::DirectionType);
                if (sample == NULL) {
                    return NULL;
                }

                DirectionType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DirectionType_subtypes() - (char *)sample);

                DirectionType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::DirectionType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::DirectionType >;

                DirectionType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionType_g_typePlugin = 
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

                return &DirectionType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::DirectionType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::DirectionType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_new,
                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DirectionType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DirectionType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::from_cdr_buffer(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DirectionType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::reset_sample(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT);
            ::rti::topic::reset_sample(sample.CourseType_data());
            sample._d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT);
            ::rti::topic::reset_sample(sample.HeadingType_data());

            sample._d() = ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::allocate_sample(::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::COURSETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.CourseType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Selectors::HEADINGTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.HeadingType_data(),  -1, -1);

            sample._d() = ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::Common::Orientation::DirectionType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Orientation::DirectionTypePlugin_new,
                ::UMAA::Common::Orientation::DirectionTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Orientation::DirectionType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Orientation::DirectionType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DirectionTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DirectionTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType >::from_cdr_buffer(::UMAA::Common::Orientation::DirectionType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DirectionTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Orientation::DirectionType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType >::reset_sample(::UMAA::Common::Orientation::DirectionType& sample) 
        {
            ::rti::topic::reset_sample(sample.DirectionType_subtypes());
        }

        void topic_type_support< ::UMAA::Common::Orientation::DirectionType >::allocate_sample(::UMAA::Common::Orientation::DirectionType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.DirectionType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
