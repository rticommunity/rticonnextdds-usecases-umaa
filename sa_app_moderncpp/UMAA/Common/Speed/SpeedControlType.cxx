

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "SpeedControlType.hpp"
#include "SpeedControlTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            namespace SpeedControlType_Specializations {

                std::ostream& operator << (std::ostream& o,const SpeedControlType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT:
                        o << "SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT" << " ";
                        break;
                        case SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT:
                        o << "SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT" << " ";
                        break;
                        case SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT:
                        o << "SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT" << " ";
                        break;
                        case SpeedControlType_Selectors::ENGINERPM_SELECT:
                        o << "SpeedControlType_Selectors::ENGINERPM_SELECT" << " ";
                        break;
                        case SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT:
                        o << "SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- SpeedControlType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                SpeedControlType_Union::SpeedControlType_Union(SpeedControlType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT):
                            {  
                                SpeedOverGround_data( std::move(other_.SpeedOverGround_data()));
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT):
                            {  
                                SpeedThroughWater_data( std::move(other_.SpeedThroughWater_data()));
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT):
                            {  
                                VehicleSpeedMode_data( std::move(other_.VehicleSpeedMode_data()));
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT):
                            {  
                                EngineRPM_data( std::move(other_.EngineRPM_data()));
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT):
                            {  
                                SpeedThroughAir_data( std::move(other_.SpeedThroughAir_data()));
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

                SpeedControlType_Union& SpeedControlType_Union::operator=(SpeedControlType_Union&&  other_) OMG_NOEXCEPT {
                    SpeedControlType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                SpeedControlType_Union::Union_::Union_()  {
                }

                SpeedControlType_Union::Union_::Union_(const UMAA::Common::Speed::SpeedOverGround& SpeedOverGround_data,const UMAA::Common::Speed::SpeedThroughWater& SpeedThroughWater_data,const UMAA::Common::Speed::VehicleSpeedMode& VehicleSpeedMode_data,const UMAA::Common::Speed::EngineRPM& EngineRPM_data,const UMAA::Common::Speed::SpeedThroughAir& SpeedThroughAir_data):
                    m_SpeedOverGround_data_( SpeedOverGround_data ),
                    m_SpeedThroughWater_data_( SpeedThroughWater_data ),
                    m_VehicleSpeedMode_data_( VehicleSpeedMode_data ),
                    m_EngineRPM_data_( EngineRPM_data ),
                    m_SpeedThroughAir_data_( SpeedThroughAir_data ) {
                }

                SpeedControlType_Union::SpeedControlType_Union() :m_d_(default_discriminator())
                {
                }

                void SpeedControlType_Union::swap(SpeedControlType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT):
                            {  
                                swap(m_u_.m_SpeedOverGround_data_, other_.m_u_.m_SpeedOverGround_data_);
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT):
                            {  
                                swap(m_u_.m_SpeedThroughWater_data_, other_.m_u_.m_SpeedThroughWater_data_);
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT):
                            {  
                                swap(m_u_.m_VehicleSpeedMode_data_, other_.m_u_.m_VehicleSpeedMode_data_);
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT):
                            {  
                                swap(m_u_.m_EngineRPM_data_, other_.m_u_.m_EngineRPM_data_);
                        } break;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT):
                            {  
                                swap(m_u_.m_SpeedThroughAir_data_, other_.m_u_.m_SpeedThroughAir_data_);
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
                            case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT):
                                {  
                                    swap(m_u_.m_SpeedOverGround_data_, other_.m_u_.m_SpeedOverGround_data_);
                            } break;
                            case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT):
                                {  
                                    swap(m_u_.m_SpeedThroughWater_data_, other_.m_u_.m_SpeedThroughWater_data_);
                            } break;
                            case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT):
                                {  
                                    swap(m_u_.m_VehicleSpeedMode_data_, other_.m_u_.m_VehicleSpeedMode_data_);
                            } break;
                            case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT):
                                {  
                                    swap(m_u_.m_EngineRPM_data_, other_.m_u_.m_EngineRPM_data_);
                            } break;
                            case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT):
                                {  
                                    swap(m_u_.m_SpeedThroughAir_data_, other_.m_u_.m_SpeedThroughAir_data_);
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

                bool SpeedControlType_Union::operator == (const SpeedControlType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT):
                            {  
                                if ( m_u_.m_SpeedOverGround_data_ != other_.m_u_.m_SpeedOverGround_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT):
                            {  
                                if ( m_u_.m_SpeedThroughWater_data_ != other_.m_u_.m_SpeedThroughWater_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT):
                            {  
                                if ( m_u_.m_VehicleSpeedMode_data_ != other_.m_u_.m_VehicleSpeedMode_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT):
                            {  
                                if ( m_u_.m_EngineRPM_data_ != other_.m_u_.m_EngineRPM_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT):
                            {  
                                if ( m_u_.m_SpeedThroughAir_data_ != other_.m_u_.m_SpeedThroughAir_data_) {
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
                bool SpeedControlType_Union::operator != (const SpeedControlType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const SpeedControlType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT):
                            {  
                                o << "SpeedOverGround_data: " << sample.SpeedOverGround_data()<<", ";
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT):
                            {  
                                o << "SpeedThroughWater_data: " << sample.SpeedThroughWater_data()<<", ";
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT):
                            {  
                                o << "VehicleSpeedMode_data: " << sample.VehicleSpeedMode_data()<<", ";
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT):
                            {  
                                o << "EngineRPM_data: " << sample.EngineRPM_data()<<", ";
                        } break ;
                        case (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT):
                            {  
                                o << "SpeedThroughAir_data: " << sample.SpeedThroughAir_data() ;        } break ;

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

                UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors SpeedControlType_Union::default_discriminator() {
                    return UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors(static_cast< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors >(0));
                }  

            } // namespace SpeedControlType_Specializations  

            // ---- SpeedControlType: 

            SpeedControlType::SpeedControlType()  {
            }   

            SpeedControlType::SpeedControlType (const UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& SpeedControlType_subtypes):
                m_SpeedControlType_subtypes_( SpeedControlType_subtypes ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            SpeedControlType::SpeedControlType(SpeedControlType&& other_) OMG_NOEXCEPT  :m_SpeedControlType_subtypes_ (std::move(other_.m_SpeedControlType_subtypes_))
            {
            } 

            SpeedControlType& SpeedControlType::operator=(SpeedControlType&&  other_) OMG_NOEXCEPT {
                SpeedControlType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void SpeedControlType::swap(SpeedControlType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_SpeedControlType_subtypes_, other_.m_SpeedControlType_subtypes_);
            }  

            bool SpeedControlType::operator == (const SpeedControlType& other_) const {
                if (m_SpeedControlType_subtypes_ != other_.m_SpeedControlType_subtypes_) {
                    return false;
                }
                return true;
            }
            bool SpeedControlType::operator != (const SpeedControlType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedControlType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "SpeedControlType_subtypes: " << sample.SpeedControlType_subtypes() ;
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors default_enumerator<UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors>::value = UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT;
        template<>
        struct native_type_code< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedControlType_Selectors_g_tc_members[5]=
                {

                    {
                        (char *)"SPEEDOVERGROUND_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT), 
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
                        (char *)"SPEEDTHROUGHWATER_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT), 
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
                        (char *)"VEHICLESPEEDMODE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT), 
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
                        (char *)"ENGINERPM_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT), 
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
                        (char *)"SPEEDTHROUGHAIR_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT), 
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

                static DDS_TypeCode SpeedControlType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedControlType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedControlType_Selectors*/

                if (is_initialized) {
                    return &SpeedControlType_Selectors_g_tc;
                }

                SpeedControlType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SpeedControlType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SpeedControlType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SpeedControlType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedControlType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SpeedControlType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpeedControlType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedControlType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedControlType_Selectors_g_sampleAccessInfo;
                }

                SpeedControlType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpeedControlType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                SpeedControlType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedControlType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedControlType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedControlType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedControlType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors >;

                SpeedControlType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedControlType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedControlType_Selectors_g_typePlugin = 
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

                return &SpeedControlType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedControlType_Union_g_tc_members[5]=
                {

                    {
                        (char *)"SpeedOverGround_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SpeedThroughWater_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VehicleSpeedMode_data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EngineRPM_data",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SpeedThroughAir_data",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpeedControlType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpeedControlType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedControlType_Union*/

                if (is_initialized) {
                    return &SpeedControlType_Union_g_tc;
                }

                SpeedControlType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedControlType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedOverGround>::get().native();
                SpeedControlType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedThroughWater>::get().native();
                SpeedControlType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::VehicleSpeedMode>::get().native();
                SpeedControlType_Union_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::EngineRPM>::get().native();
                SpeedControlType_Union_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedThroughAir>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                SpeedControlType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors>::get().native();

                SpeedControlType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedControlType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SpeedControlType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union *sample;

                static RTIXCdrMemberAccessInfo SpeedControlType_Union_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedControlType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedControlType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedControlType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT);
                SpeedControlType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedOverGround_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT);
                SpeedControlType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedThroughWater_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT);
                SpeedControlType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehicleSpeedMode_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT);
                SpeedControlType_Union_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->EngineRPM_data() - (char *)sample);

                sample->_d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT);
                SpeedControlType_Union_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedThroughAir_data() - (char *)sample);

                SpeedControlType_Union_g_sampleAccessInfo.memberAccessInfos = 
                SpeedControlType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedControlType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedControlType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedControlType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedControlType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >;

                SpeedControlType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedControlType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedControlType_Union_g_typePlugin = 
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

                return &SpeedControlType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Speed::SpeedControlType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedControlType_g_tc_members[1]=
                {

                    {
                        (char *)"SpeedControlType_subtypes",/* Member name */
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

                static DDS_TypeCode SpeedControlType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedControlType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SpeedControlType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedControlType*/

                if (is_initialized) {
                    return &SpeedControlType_g_tc;
                }

                SpeedControlType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedControlType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union>::get().native();

                /* Initialize the values for member annotations. */

                SpeedControlType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedControlType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SpeedControlType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Speed::SpeedControlType *sample;

                static RTIXCdrMemberAccessInfo SpeedControlType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedControlType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedControlType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Speed::SpeedControlType);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedControlType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SpeedControlType_subtypes() - (char *)sample);

                SpeedControlType_g_sampleAccessInfo.memberAccessInfos = 
                SpeedControlType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Speed::SpeedControlType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedControlType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedControlType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedControlType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedControlType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Speed::SpeedControlType >;

                SpeedControlType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedControlType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedControlType_g_typePlugin = 
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

                return &SpeedControlType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Speed::SpeedControlType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Speed::SpeedControlType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_UnionPlugin_new,
                UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::from_cdr_buffer(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SpeedControlType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::reset_sample(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT);
            ::rti::topic::reset_sample(sample.SpeedOverGround_data());
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT);
            ::rti::topic::reset_sample(sample.SpeedThroughWater_data());
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT);
            ::rti::topic::reset_sample(sample.VehicleSpeedMode_data());
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT);
            ::rti::topic::reset_sample(sample.EngineRPM_data());
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT);
            ::rti::topic::reset_sample(sample.SpeedThroughAir_data());

            sample._d() = UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union >::allocate_sample(UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDOVERGROUND_SELECT);
            ::rti::topic::allocate_sample(sample.SpeedOverGround_data(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHWATER_SELECT);
            ::rti::topic::allocate_sample(sample.SpeedThroughWater_data(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::VEHICLESPEEDMODE_SELECT);
            ::rti::topic::allocate_sample(sample.VehicleSpeedMode_data(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::ENGINERPM_SELECT);
            ::rti::topic::allocate_sample(sample.EngineRPM_data(),  -1, -1);
            sample._d() = (UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Selectors::SPEEDTHROUGHAIR_SELECT);
            ::rti::topic::allocate_sample(sample.SpeedThroughAir_data(),  -1, -1);

            sample._d() = UMAA::Common::Speed::SpeedControlType_Specializations::SpeedControlType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Speed::SpeedControlTypePlugin_new,
                UMAA::Common::Speed::SpeedControlTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Speed::SpeedControlType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Speed::SpeedControlType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SpeedControlTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SpeedControlTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType >::from_cdr_buffer(UMAA::Common::Speed::SpeedControlType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SpeedControlTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Speed::SpeedControlType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType >::reset_sample(UMAA::Common::Speed::SpeedControlType& sample) 
        {
            ::rti::topic::reset_sample(sample.SpeedControlType_subtypes());
        }

        void topic_type_support< UMAA::Common::Speed::SpeedControlType >::allocate_sample(UMAA::Common::Speed::SpeedControlType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.SpeedControlType_subtypes(),  -1, -1);
        }

    }
}  

