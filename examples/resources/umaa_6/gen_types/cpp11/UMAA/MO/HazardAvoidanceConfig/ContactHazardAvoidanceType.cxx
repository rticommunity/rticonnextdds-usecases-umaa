

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactHazardAvoidanceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ContactHazardAvoidanceTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactHazardAvoidanceType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace HazardAvoidanceConfig {

            // ---- ContactHazardAvoidanceType: 

            ContactHazardAvoidanceType::ContactHazardAvoidanceType() :
                m_minimumStandoff_ (0.0)  {

            }   

            ContactHazardAvoidanceType::ContactHazardAvoidanceType (const ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >& colregsConfig_,double minimumStandoff_):
                m_colregsConfig_(colregsConfig_), 
                m_minimumStandoff_(minimumStandoff_) {
            }

            void ContactHazardAvoidanceType::swap(ContactHazardAvoidanceType& other_)  noexcept 
            {
                using std::swap;
                swap(m_colregsConfig_, other_.m_colregsConfig_);
                swap(m_minimumStandoff_, other_.m_minimumStandoff_);
            }  

            bool ContactHazardAvoidanceType::operator == (const ContactHazardAvoidanceType& other_) const {
                if (m_colregsConfig_ != other_.m_colregsConfig_) {
                    return false;
                }
                if (std::fabs(m_minimumStandoff_ - other_.m_minimumStandoff_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minimumStandoff_ - other_.m_minimumStandoff_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool ContactHazardAvoidanceType::operator != (const ContactHazardAvoidanceType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactHazardAvoidanceType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "colregsConfig: " << sample.colregsConfig ()<<", ";
                o << "minimumStandoff: " << std::setprecision(15) << sample.minimumStandoff ();
                o <<"]";
                return o;
            }

        } // namespace HazardAvoidanceConfig  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactHazardAvoidanceType_g_tc_members[2]=
                {

                    {
                        (char *)"colregsConfig",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minimumStandoff",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ContactHazardAvoidanceType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ContactHazardAvoidanceType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactHazardAvoidanceType*/

                if (is_initialized) {
                    return &ContactHazardAvoidanceType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactHazardAvoidanceType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactHazardAvoidanceType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType>::get().native();
                ContactHazardAvoidanceType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactHazardAvoidanceType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ContactHazardAvoidanceType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactHazardAvoidanceType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactHazardAvoidanceType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType *sample;

                static RTIXCdrMemberAccessInfo ContactHazardAvoidanceType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactHazardAvoidanceType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactHazardAvoidanceType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactHazardAvoidanceType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->colregsConfig() - (char *)sample);

                ContactHazardAvoidanceType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minimumStandoff() - (char *)sample);

                ContactHazardAvoidanceType_g_sampleAccessInfo.memberAccessInfos = 
                ContactHazardAvoidanceType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactHazardAvoidanceType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactHazardAvoidanceType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactHazardAvoidanceType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactHazardAvoidanceType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType >;

                ContactHazardAvoidanceType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactHazardAvoidanceType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactHazardAvoidanceType_g_typePlugin = 
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

                return &ContactHazardAvoidanceType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType >::reset_sample(::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType& sample) 
        {
            ::rti::topic::reset_sample(sample.colregsConfig());
            sample.minimumStandoff(0.0);
        }

        void topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType >::allocate_sample(::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
