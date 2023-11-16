

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ElevationType.hpp"
#include "ElevationTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            namespace ElevationType_Specializations {

                std::ostream& operator << (std::ostream& o,const ElevationType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT:
                        o << "ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT" << " ";
                        break;
                        case ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT:
                        o << "ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT" << " ";
                        break;
                        case ElevationType_Selectors::ALTITUDEASFTYPE_SELECT:
                        o << "ElevationType_Selectors::ALTITUDEASFTYPE_SELECT" << " ";
                        break;
                        case ElevationType_Selectors::DEPTHTYPE_SELECT:
                        o << "ElevationType_Selectors::DEPTHTYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- ElevationType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ElevationType_Union::ElevationType_Union(ElevationType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT):
                            {  
                                AltitudeAGLType_data( std::move(other_.AltitudeAGLType_data()));
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT):
                            {  
                                AltitudeMSLType_data( std::move(other_.AltitudeMSLType_data()));
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT):
                            {  
                                AltitudeASFType_data( std::move(other_.AltitudeASFType_data()));
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT):
                            {  
                                DepthType_data( std::move(other_.DepthType_data()));
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

                ElevationType_Union& ElevationType_Union::operator=(ElevationType_Union&&  other_) OMG_NOEXCEPT {
                    ElevationType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                ElevationType_Union::Union_::Union_()  {
                }

                ElevationType_Union::Union_::Union_(const UMAA::Common::Measurement::AltitudeAGLType& AltitudeAGLType_data,const UMAA::Common::Measurement::AltitudeMSLType& AltitudeMSLType_data,const UMAA::Common::Measurement::AltitudeASFType& AltitudeASFType_data,const UMAA::Common::Measurement::DepthType& DepthType_data):
                    m_AltitudeAGLType_data_( AltitudeAGLType_data ),
                    m_AltitudeMSLType_data_( AltitudeMSLType_data ),
                    m_AltitudeASFType_data_( AltitudeASFType_data ),
                    m_DepthType_data_( DepthType_data ) {
                }

                ElevationType_Union::ElevationType_Union() :m_d_(default_discriminator())
                {
                }

                void ElevationType_Union::swap(ElevationType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT):
                            {  
                                swap(m_u_.m_AltitudeAGLType_data_, other_.m_u_.m_AltitudeAGLType_data_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT):
                            {  
                                swap(m_u_.m_AltitudeMSLType_data_, other_.m_u_.m_AltitudeMSLType_data_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT):
                            {  
                                swap(m_u_.m_AltitudeASFType_data_, other_.m_u_.m_AltitudeASFType_data_);
                        } break;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT):
                            {  
                                swap(m_u_.m_DepthType_data_, other_.m_u_.m_DepthType_data_);
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
                            case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT):
                                {  
                                    swap(m_u_.m_AltitudeAGLType_data_, other_.m_u_.m_AltitudeAGLType_data_);
                            } break;
                            case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT):
                                {  
                                    swap(m_u_.m_AltitudeMSLType_data_, other_.m_u_.m_AltitudeMSLType_data_);
                            } break;
                            case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT):
                                {  
                                    swap(m_u_.m_AltitudeASFType_data_, other_.m_u_.m_AltitudeASFType_data_);
                            } break;
                            case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT):
                                {  
                                    swap(m_u_.m_DepthType_data_, other_.m_u_.m_DepthType_data_);
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

                bool ElevationType_Union::operator == (const ElevationType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT):
                            {  
                                if ( m_u_.m_AltitudeAGLType_data_ != other_.m_u_.m_AltitudeAGLType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT):
                            {  
                                if ( m_u_.m_AltitudeMSLType_data_ != other_.m_u_.m_AltitudeMSLType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT):
                            {  
                                if ( m_u_.m_AltitudeASFType_data_ != other_.m_u_.m_AltitudeASFType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT):
                            {  
                                if ( m_u_.m_DepthType_data_ != other_.m_u_.m_DepthType_data_) {
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
                bool ElevationType_Union::operator != (const ElevationType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const ElevationType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT):
                            {  
                                o << "AltitudeAGLType_data: " << sample.AltitudeAGLType_data()<<", ";
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT):
                            {  
                                o << "AltitudeMSLType_data: " << sample.AltitudeMSLType_data()<<", ";
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT):
                            {  
                                o << "AltitudeASFType_data: " << sample.AltitudeASFType_data()<<", ";
                        } break ;
                        case (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT):
                            {  
                                o << "DepthType_data: " << sample.DepthType_data() ;        } break ;

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

                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors ElevationType_Union::default_discriminator() {
                    return UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors(static_cast< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors >(0));
                }  

            } // namespace ElevationType_Specializations  

            // ---- ElevationType: 

            ElevationType::ElevationType()  {
            }   

            ElevationType::ElevationType (const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& ElevationType_subtypes):
                m_ElevationType_subtypes_( ElevationType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ElevationType::ElevationType(ElevationType&& other_) OMG_NOEXCEPT  :m_ElevationType_subtypes_ (std::move(other_.m_ElevationType_subtypes_))
            {
            } 

            ElevationType& ElevationType::operator=(ElevationType&&  other_) OMG_NOEXCEPT {
                ElevationType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ElevationType::swap(ElevationType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_ElevationType_subtypes_, other_.m_ElevationType_subtypes_);
            }  

            bool ElevationType::operator == (const ElevationType& other_) const {
                if (m_ElevationType_subtypes_ != other_.m_ElevationType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool ElevationType::operator != (const ElevationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ElevationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ElevationType_subtypes: " << sample.ElevationType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors default_enumerator<UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors>::value = UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT;
        template<>
        struct native_type_code< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationType_Selectors_g_tc_members[4]=
                {

                    {
                        (char *)"ALTITUDEAGLTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT), 
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
                        (char *)"ALTITUDEMSLTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT), 
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
                        (char *)"ALTITUDEASFTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT), 
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
                        (char *)"DEPTHTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT), 
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

                static DDS_TypeCode ElevationType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ElevationType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationType_Selectors*/

                if (is_initialized) {
                    return &ElevationType_Selectors_g_tc;
                }

                ElevationType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ElevationType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ElevationType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ElevationType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ElevationType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ElevationType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationType_Selectors_g_sampleAccessInfo;
                }

                ElevationType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ElevationType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                ElevationType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors >;

                ElevationType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationType_Selectors_g_typePlugin = 
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

                return &ElevationType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationType_Union_g_tc_members[4]=
                {

                    {
                        (char *)"AltitudeAGLType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeMSLType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AltitudeASFType_data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DepthType_data",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ElevationType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ElevationType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationType_Union*/

                if (is_initialized) {
                    return &ElevationType_Union_g_tc;
                }

                ElevationType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AltitudeAGLType>::get().native();
                ElevationType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AltitudeMSLType>::get().native();
                ElevationType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AltitudeASFType>::get().native();
                ElevationType_Union_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DepthType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ElevationType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors>::get().native();

                ElevationType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ElevationType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union *sample;

                static RTIXCdrMemberAccessInfo ElevationType_Union_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT);
                ElevationType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeAGLType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT);
                ElevationType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeMSLType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT);
                ElevationType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->AltitudeASFType_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT);
                ElevationType_Union_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DepthType_data() - (char *)sample);

                ElevationType_Union_g_sampleAccessInfo.memberAccessInfos = 
                ElevationType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >;

                ElevationType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationType_Union_g_typePlugin = 
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

                return &ElevationType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Measurement::ElevationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ElevationType_g_tc_members[1]=
                {

                    {
                        (char *)"ElevationType_subtypes",/* Member name */
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

                static DDS_TypeCode ElevationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::ElevationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ElevationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ElevationType*/

                if (is_initialized) {
                    return &ElevationType_g_tc;
                }

                ElevationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ElevationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union>::get().native();

                /* Initialize the values for member annotations. */

                ElevationType_g_tc._data._sampleAccessInfo = sample_access_info();
                ElevationType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ElevationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::ElevationType *sample;

                static RTIXCdrMemberAccessInfo ElevationType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ElevationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ElevationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::ElevationType);
                if (sample == NULL) {
                    return NULL;
                }

                ElevationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ElevationType_subtypes() - (char *)sample);

                ElevationType_g_sampleAccessInfo.memberAccessInfos = 
                ElevationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::ElevationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ElevationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ElevationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ElevationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ElevationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::ElevationType >;

                ElevationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ElevationType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ElevationType_g_typePlugin = 
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

                return &ElevationType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::ElevationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::ElevationType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_UnionPlugin_new,
                UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ElevationType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ElevationType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::from_cdr_buffer(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ElevationType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::reset_sample(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT);
            ::rti::topic::reset_sample(sample.AltitudeAGLType_data());
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT);
            ::rti::topic::reset_sample(sample.AltitudeMSLType_data());
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT);
            ::rti::topic::reset_sample(sample.AltitudeASFType_data());
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT);
            ::rti::topic::reset_sample(sample.DepthType_data());

            sample._d() = UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union >::allocate_sample(UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEAGLTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.AltitudeAGLType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEMSLTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.AltitudeMSLType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::ALTITUDEASFTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.AltitudeASFType_data(),  -1, -1);
            sample._d() = (UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Selectors::DEPTHTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.DepthType_data(),  -1, -1);

            sample._d() = UMAA::Common::Measurement::ElevationType_Specializations::ElevationType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::ElevationTypePlugin_new,
                UMAA::Common::Measurement::ElevationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::ElevationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::ElevationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ElevationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ElevationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType >::from_cdr_buffer(UMAA::Common::Measurement::ElevationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ElevationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::ElevationType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType >::reset_sample(UMAA::Common::Measurement::ElevationType& sample) 
        {
            ::rti::topic::reset_sample(sample.ElevationType_subtypes());
        }

        void topic_type_support< UMAA::Common::Measurement::ElevationType >::allocate_sample(UMAA::Common::Measurement::ElevationType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ElevationType_subtypes(),  -1, -1);
        }

    }
}  

