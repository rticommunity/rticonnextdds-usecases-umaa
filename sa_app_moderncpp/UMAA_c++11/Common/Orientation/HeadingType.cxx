

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "HeadingTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "HeadingType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            namespace HeadingType_Specializations {

                std::ostream& operator << (std::ostream& o,const HeadingType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT:
                        o << "HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT" << " ";
                        break;
                        case HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT:
                        o << "HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT" << " ";
                        break;
                        case HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT:
                        o << "HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT" << " ";
                        break;
                        case HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT:
                        o << "HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- HeadingType_Union: 

                HeadingType_Union::Union_::Union_()  {
                }

                HeadingType_Union::Union_::Union_(const ::UMAA::Common::Orientation::HeadingTrueNorthType& HeadingTrueNorthType_data_,const ::UMAA::Common::Orientation::HeadingCurrentDirectionType& HeadingCurrentDirectionType_data_,const ::UMAA::Common::Orientation::HeadingMagneticNorthType& HeadingMagneticNorthType_data_,const ::UMAA::Common::Orientation::HeadingWindDirectionType& HeadingWindDirectionType_data_):
                    m_HeadingTrueNorthType_data_(HeadingTrueNorthType_data_), 
                    m_HeadingCurrentDirectionType_data_(HeadingCurrentDirectionType_data_), 
                    m_HeadingMagneticNorthType_data_(HeadingMagneticNorthType_data_), 
                    m_HeadingWindDirectionType_data_(HeadingWindDirectionType_data_) {
                }

                HeadingType_Union::HeadingType_Union() :m_d_(default_discriminator())
                {
                }

                void HeadingType_Union::swap(HeadingType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT):
                            {  
                                swap(m_u_.m_HeadingTrueNorthType_data_, other_.m_u_.m_HeadingTrueNorthType_data_);
                        } break;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT):
                            {  
                                swap(m_u_.m_HeadingCurrentDirectionType_data_, other_.m_u_.m_HeadingCurrentDirectionType_data_);
                        } break;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT):
                            {  
                                swap(m_u_.m_HeadingMagneticNorthType_data_, other_.m_u_.m_HeadingMagneticNorthType_data_);
                        } break;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT):
                            {  
                                swap(m_u_.m_HeadingWindDirectionType_data_, other_.m_u_.m_HeadingWindDirectionType_data_);
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
                            case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT):
                                {  
                                    swap(m_u_.m_HeadingTrueNorthType_data_, other_.m_u_.m_HeadingTrueNorthType_data_);
                            } break;
                            case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT):
                                {  
                                    swap(m_u_.m_HeadingCurrentDirectionType_data_, other_.m_u_.m_HeadingCurrentDirectionType_data_);
                            } break;
                            case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT):
                                {  
                                    swap(m_u_.m_HeadingMagneticNorthType_data_, other_.m_u_.m_HeadingMagneticNorthType_data_);
                            } break;
                            case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT):
                                {  
                                    swap(m_u_.m_HeadingWindDirectionType_data_, other_.m_u_.m_HeadingWindDirectionType_data_);
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

                bool HeadingType_Union::operator == (const HeadingType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT):
                            {  
                                if (m_u_.m_HeadingTrueNorthType_data_ != other_.m_u_.m_HeadingTrueNorthType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT):
                            {  
                                if (m_u_.m_HeadingCurrentDirectionType_data_ != other_.m_u_.m_HeadingCurrentDirectionType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT):
                            {  
                                if (m_u_.m_HeadingMagneticNorthType_data_ != other_.m_u_.m_HeadingMagneticNorthType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT):
                            {  
                                if (m_u_.m_HeadingWindDirectionType_data_ != other_.m_u_.m_HeadingWindDirectionType_data_) {
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

                bool HeadingType_Union::operator != (const HeadingType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const HeadingType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT):
                            {  
                                o << "HeadingTrueNorthType_data: " << sample.HeadingTrueNorthType_data ()<<", ";
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT):
                            {  
                                o << "HeadingCurrentDirectionType_data: " << sample.HeadingCurrentDirectionType_data ()<<", ";
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT):
                            {  
                                o << "HeadingMagneticNorthType_data: " << sample.HeadingMagneticNorthType_data ()<<", ";
                        } break ;
                        case (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT):
                            {  
                                o << "HeadingWindDirectionType_data: " << sample.HeadingWindDirectionType_data ();
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

                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors HeadingType_Union::default_discriminator() {
                    return ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors(static_cast< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors >(0));
                }  

            } // namespace HeadingType_Specializations  

            // ---- HeadingType: 

            HeadingType::HeadingType()  {

            }   

            HeadingType::HeadingType (const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& HeadingType_subtypes_):
                m_HeadingType_subtypes_(HeadingType_subtypes_) {
            }

            void HeadingType::swap(HeadingType& other_)  noexcept 
            {
                using std::swap;
                swap(m_HeadingType_subtypes_, other_.m_HeadingType_subtypes_);
            }  

            bool HeadingType::operator == (const HeadingType& other_) const {
                if (m_HeadingType_subtypes_ != other_.m_HeadingType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool HeadingType::operator != (const HeadingType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HeadingType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "HeadingType_subtypes: " << sample.HeadingType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors default_enumerator< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors>::value = ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors default_enumerator< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors>::value = ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingType_Selectors_g_tc_members[4]=
                {

                    {
                        (char *)"HEADINGTRUENORTHTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT), 
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
                        (char *)"HEADINGCURRENTDIRECTIONTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT), 
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
                        (char *)"HEADINGMAGNETICNORTHTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT), 
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
                        (char *)"HEADINGWINDDIRECTIONTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT), 
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

                static DDS_TypeCode HeadingType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        HeadingType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingType_Selectors*/

                if (is_initialized) {
                    return &HeadingType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                HeadingType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HeadingType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                HeadingType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingType_Selectors_g_sampleAccessInfo;
                }

                HeadingType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                HeadingType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors >;

                HeadingType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingType_Selectors_g_typePlugin = 
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

                return &HeadingType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingType_Union_g_tc_members[4]=
                {

                    {
                        (char *)"HeadingTrueNorthType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HeadingCurrentDirectionType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HeadingMagneticNorthType_data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HeadingWindDirectionType_data",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HeadingType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        HeadingType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingType_Union*/

                if (is_initialized) {
                    return &HeadingType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingTrueNorthType>::get().native();
                HeadingType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingCurrentDirectionType>::get().native();
                HeadingType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingMagneticNorthType>::get().native();
                HeadingType_Union_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingWindDirectionType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                HeadingType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors>::get().native();

                HeadingType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union *sample;

                static RTIXCdrMemberAccessInfo HeadingType_Union_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                HeadingType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT);
                HeadingType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingTrueNorthType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT);
                HeadingType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingCurrentDirectionType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT);
                HeadingType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingMagneticNorthType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT);
                HeadingType_Union_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingWindDirectionType_data() - (char *)sample);

                HeadingType_Union_g_sampleAccessInfo.memberAccessInfos = 
                HeadingType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >;

                HeadingType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingType_Union_g_typePlugin = 
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

                return &HeadingType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::Common::Orientation::HeadingType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingType_g_tc_members[1]=
                {

                    {
                        (char *)"HeadingType_subtypes",/* Member name */
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

                static DDS_TypeCode HeadingType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::HeadingType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        HeadingType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingType*/

                if (is_initialized) {
                    return &HeadingType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union>::get().native();

                /* Initialize the values for member annotations. */

                HeadingType_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingType_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::HeadingType *sample;

                static RTIXCdrMemberAccessInfo HeadingType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::HeadingType);
                if (sample == NULL) {
                    return NULL;
                }

                HeadingType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->HeadingType_subtypes() - (char *)sample);

                HeadingType_g_sampleAccessInfo.memberAccessInfos = 
                HeadingType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::HeadingType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::HeadingType >;

                HeadingType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingType_g_typePlugin = 
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

                return &HeadingType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::HeadingType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::HeadingType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_UnionPlugin_new,
                ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HeadingType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HeadingType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::from_cdr_buffer(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HeadingType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::reset_sample(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT);
            ::rti::topic::reset_sample(sample.HeadingTrueNorthType_data());
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT);
            ::rti::topic::reset_sample(sample.HeadingCurrentDirectionType_data());
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT);
            ::rti::topic::reset_sample(sample.HeadingMagneticNorthType_data());
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT);
            ::rti::topic::reset_sample(sample.HeadingWindDirectionType_data());

            sample._d() = ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union >::allocate_sample(::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGTRUENORTHTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.HeadingTrueNorthType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGCURRENTDIRECTIONTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.HeadingCurrentDirectionType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGMAGNETICNORTHTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.HeadingMagneticNorthType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Selectors::HEADINGWINDDIRECTIONTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.HeadingWindDirectionType_data(),  -1, -1);

            sample._d() = ::UMAA::Common::Orientation::HeadingType_Specializations::HeadingType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::Common::Orientation::HeadingType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Orientation::HeadingTypePlugin_new,
                ::UMAA::Common::Orientation::HeadingTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Orientation::HeadingType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Orientation::HeadingType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HeadingTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HeadingTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType >::from_cdr_buffer(::UMAA::Common::Orientation::HeadingType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HeadingTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Orientation::HeadingType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType >::reset_sample(::UMAA::Common::Orientation::HeadingType& sample) 
        {
            ::rti::topic::reset_sample(sample.HeadingType_subtypes());
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingType >::allocate_sample(::UMAA::Common::Orientation::HeadingType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.HeadingType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
