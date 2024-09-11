

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from COLREGSConfigurationType.idl
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
#include "COLREGSConfigurationTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "COLREGSConfigurationType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace HazardAvoidanceConfig {

            // ---- COLREGSConfigurationType: 

            COLREGSConfigurationType::COLREGSConfigurationType() :
                m_dangerRange_ (0.0) ,
                m_doubtRange_ (0.0) ,
                m_influenceRange_ (0.0)  {

            }   

            COLREGSConfigurationType::COLREGSConfigurationType (double dangerRange_,double doubtRange_,double influenceRange_):
                m_dangerRange_(dangerRange_), 
                m_doubtRange_(doubtRange_), 
                m_influenceRange_(influenceRange_) {
            }

            void COLREGSConfigurationType::swap(COLREGSConfigurationType& other_)  noexcept 
            {
                using std::swap;
                swap(m_dangerRange_, other_.m_dangerRange_);
                swap(m_doubtRange_, other_.m_doubtRange_);
                swap(m_influenceRange_, other_.m_influenceRange_);
            }  

            bool COLREGSConfigurationType::operator == (const COLREGSConfigurationType& other_) const {
                if (std::fabs(m_dangerRange_ - other_.m_dangerRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_dangerRange_ - other_.m_dangerRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_doubtRange_ - other_.m_doubtRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_doubtRange_ - other_.m_doubtRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_influenceRange_ - other_.m_influenceRange_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_influenceRange_ - other_.m_influenceRange_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool COLREGSConfigurationType::operator != (const COLREGSConfigurationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const COLREGSConfigurationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "dangerRange: " << std::setprecision(15) << sample.dangerRange ()<<", ";
                o << "doubtRange: " << std::setprecision(15) << sample.doubtRange ()<<", ";
                o << "influenceRange: " << std::setprecision(15) << sample.influenceRange ();
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
        struct native_type_code< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member COLREGSConfigurationType_g_tc_members[3]=
                {

                    {
                        (char *)"dangerRange",/* Member name */
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
                        (char *)"doubtRange",/* Member name */
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
                    }, 
                    {
                        (char *)"influenceRange",/* Member name */
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
                    }
                };

                static DDS_TypeCode COLREGSConfigurationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        COLREGSConfigurationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for COLREGSConfigurationType*/

                if (is_initialized) {
                    return &COLREGSConfigurationType_g_tc;
                }

                is_initialized = RTI_TRUE;

                COLREGSConfigurationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                COLREGSConfigurationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                COLREGSConfigurationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                COLREGSConfigurationType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                COLREGSConfigurationType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                COLREGSConfigurationType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                COLREGSConfigurationType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                COLREGSConfigurationType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                COLREGSConfigurationType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                COLREGSConfigurationType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                COLREGSConfigurationType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                COLREGSConfigurationType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                COLREGSConfigurationType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                COLREGSConfigurationType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                COLREGSConfigurationType_g_tc._data._sampleAccessInfo = sample_access_info();
                COLREGSConfigurationType_g_tc._data._typePlugin = type_plugin_info();    

                return &COLREGSConfigurationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType *sample;

                static RTIXCdrMemberAccessInfo COLREGSConfigurationType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo COLREGSConfigurationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &COLREGSConfigurationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType);
                if (sample == NULL) {
                    return NULL;
                }

                COLREGSConfigurationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dangerRange() - (char *)sample);

                COLREGSConfigurationType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->doubtRange() - (char *)sample);

                COLREGSConfigurationType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->influenceRange() - (char *)sample);

                COLREGSConfigurationType_g_sampleAccessInfo.memberAccessInfos = 
                COLREGSConfigurationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        COLREGSConfigurationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        COLREGSConfigurationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                COLREGSConfigurationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                COLREGSConfigurationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >;

                COLREGSConfigurationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &COLREGSConfigurationType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin COLREGSConfigurationType_g_typePlugin = 
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

                return &COLREGSConfigurationType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >::reset_sample(::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType& sample) 
        {
            sample.dangerRange(0.0);
            sample.doubtRange(0.0);
            sample.influenceRange(0.0);
        }

        void topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >::allocate_sample(::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
