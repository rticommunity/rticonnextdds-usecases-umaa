

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsorSpecsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsorSpecsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace PropulsorsSpecs {

            // ---- PropulsorSpecsType: 

            PropulsorSpecsType::PropulsorSpecsType() :
                m_counterRotator_ (0) ,
                m_name_ ("") ,
                m_propulsionUpperLimit_ (0)  {

            }   

            PropulsorSpecsType::PropulsorSpecsType (bool counterRotator_,const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gamma_,const std::string& name_,const ::UMAA::Common::Orientation::Orientation3DPlatformType& orientation_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& position_,const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitch_,const ::dds::core::optional< int32_t >& propulsionLowerLimit_,int32_t propulsionUpperLimit_,const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rho_):
                m_counterRotator_(counterRotator_), 
                m_gamma_(gamma_), 
                m_name_(name_), 
                m_orientation_(orientation_), 
                m_position_(position_), 
                m_propellerPitch_(propellerPitch_), 
                m_propulsionLowerLimit_(propulsionLowerLimit_), 
                m_propulsionUpperLimit_(propulsionUpperLimit_), 
                m_rho_(rho_) {
            }

            void PropulsorSpecsType::swap(PropulsorSpecsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_counterRotator_, other_.m_counterRotator_);
                swap(m_gamma_, other_.m_gamma_);
                swap(m_name_, other_.m_name_);
                swap(m_orientation_, other_.m_orientation_);
                swap(m_position_, other_.m_position_);
                swap(m_propellerPitch_, other_.m_propellerPitch_);
                swap(m_propulsionLowerLimit_, other_.m_propulsionLowerLimit_);
                swap(m_propulsionUpperLimit_, other_.m_propulsionUpperLimit_);
                swap(m_rho_, other_.m_rho_);
            }  

            bool PropulsorSpecsType::operator == (const PropulsorSpecsType& other_) const {
                if (m_counterRotator_ != other_.m_counterRotator_) {
                    return false;
                }
                if (m_gamma_ != other_.m_gamma_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_orientation_ != other_.m_orientation_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_propellerPitch_ != other_.m_propellerPitch_) {
                    return false;
                }
                if (m_propulsionLowerLimit_ != other_.m_propulsionLowerLimit_) {
                    return false;
                }
                if (m_propulsionUpperLimit_ != other_.m_propulsionUpperLimit_) {
                    return false;
                }
                if (m_rho_ != other_.m_rho_) {
                    return false;
                }
                return true;
            }

            bool PropulsorSpecsType::operator != (const PropulsorSpecsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsorSpecsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "counterRotator: " << sample.counterRotator ()<<", ";
                o << "gamma: " << sample.gamma ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "orientation: " << sample.orientation ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "propellerPitch: " << sample.propellerPitch ()<<", ";
                o << "propulsionLowerLimit: " << sample.propulsionLowerLimit ()<<", ";
                o << "propulsionUpperLimit: " << sample.propulsionUpperLimit ()<<", ";
                o << "rho: " << sample.rho ();
                o <<"]";
                return o;
            }

        } // namespace PropulsorsSpecs  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsorSpecsType_g_tc_members[9]=
                {

                    {
                        (char *)"counterRotator",/* Member name */
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
                    }, 
                    {
                        (char *)"gamma",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"name",/* Member name */
                        {
                            2,/* Representation ID */
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
                    }, 
                    {
                        (char *)"orientation",/* Member name */
                        {
                            3,/* Representation ID */
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
                    }, 
                    {
                        (char *)"position",/* Member name */
                        {
                            4,/* Representation ID */
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
                    }, 
                    {
                        (char *)"propellerPitch",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"propulsionLowerLimit",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"propulsionUpperLimit",/* Member name */
                        {
                            7,/* Representation ID */
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
                    }, 
                    {
                        (char *)"rho",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PropulsorSpecsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::PropulsorsSpecs::PropulsorSpecsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        PropulsorSpecsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsorSpecsType*/

                if (is_initialized) {
                    return &PropulsorSpecsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsorSpecsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsorSpecsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                PropulsorSpecsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType>::get().native();
                PropulsorSpecsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                PropulsorSpecsType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::Orientation3DPlatformType>::get().native();
                PropulsorSpecsType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3DBodyXYZ>::get().native();
                PropulsorSpecsType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType>::get().native();
                PropulsorSpecsType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType>::get().native();

                /* Initialize the values for member annotations. */
                PropulsorSpecsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                PropulsorSpecsType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                PropulsorSpecsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                PropulsorSpecsType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                PropulsorSpecsType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PropulsorSpecsType_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PropulsorSpecsType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PropulsorSpecsType_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                PropulsorSpecsType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PropulsorSpecsType_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                PropulsorSpecsType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PropulsorSpecsType_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PropulsorSpecsType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PropulsorSpecsType_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                PropulsorSpecsType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsorSpecsType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsorSpecsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType *sample;

                static RTIXCdrMemberAccessInfo PropulsorSpecsType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsorSpecsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsorSpecsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsorSpecsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->counterRotator() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gamma() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->orientation() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propellerPitch() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsionLowerLimit() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsionUpperLimit() - (char *)sample);

                PropulsorSpecsType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rho() - (char *)sample);

                PropulsorSpecsType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsorSpecsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsorSpecsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsorSpecsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsorSpecsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsorSpecsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType >;

                PropulsorSpecsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsorSpecsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsorSpecsType_g_typePlugin = 
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

                return &PropulsorSpecsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType >::reset_sample(::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType& sample) 
        {
            sample.counterRotator(0);
            ::rti::topic::reset_sample(sample.gamma());
            sample.name("");
            ::rti::topic::reset_sample(sample.orientation());
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.propellerPitch());
            ::rti::topic::reset_sample(sample.propulsionLowerLimit());
            sample.propulsionUpperLimit(0);
            ::rti::topic::reset_sample(sample.rho());
        }

        void topic_type_support< ::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType >::allocate_sample(::UMAA::EO::PropulsorsSpecs::PropulsorSpecsType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.orientation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
