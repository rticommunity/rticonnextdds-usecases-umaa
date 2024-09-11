

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticDeviationType.idl
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
#include "MagneticDeviationTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MagneticDeviationType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- MagneticDeviationType: 

            MagneticDeviationType::MagneticDeviationType() :
                m_heading_ (0.0) ,
                m_magneticDeviation_ (0.0)  {

            }   

            MagneticDeviationType::MagneticDeviationType (double heading_,double magneticDeviation_):
                m_heading_(heading_), 
                m_magneticDeviation_(magneticDeviation_) {
            }

            void MagneticDeviationType::swap(MagneticDeviationType& other_)  noexcept 
            {
                using std::swap;
                swap(m_heading_, other_.m_heading_);
                swap(m_magneticDeviation_, other_.m_magneticDeviation_);
            }  

            bool MagneticDeviationType::operator == (const MagneticDeviationType& other_) const {
                if (std::fabs(m_heading_ - other_.m_heading_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_heading_ - other_.m_heading_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_magneticDeviation_ - other_.m_magneticDeviation_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_magneticDeviation_ - other_.m_magneticDeviation_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool MagneticDeviationType::operator != (const MagneticDeviationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MagneticDeviationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "heading: " << std::setprecision(15) << sample.heading ()<<", ";
                o << "magneticDeviation: " << std::setprecision(15) << sample.magneticDeviation ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Orientation::MagneticDeviationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MagneticDeviationType_g_tc_members[2]=
                {

                    {
                        (char *)"heading",/* Member name */
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
                        (char *)"magneticDeviation",/* Member name */
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

                static DDS_TypeCode MagneticDeviationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::MagneticDeviationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MagneticDeviationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MagneticDeviationType*/

                if (is_initialized) {
                    return &MagneticDeviationType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MagneticDeviationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MagneticDeviationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t>::get().native();
                MagneticDeviationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                MagneticDeviationType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                MagneticDeviationType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MagneticDeviationType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                MagneticDeviationType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                MagneticDeviationType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MagneticDeviationType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MagneticDeviationType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MagneticDeviationType_g_tc._data._sampleAccessInfo = sample_access_info();
                MagneticDeviationType_g_tc._data._typePlugin = type_plugin_info();    

                return &MagneticDeviationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::MagneticDeviationType *sample;

                static RTIXCdrMemberAccessInfo MagneticDeviationType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MagneticDeviationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MagneticDeviationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::MagneticDeviationType);
                if (sample == NULL) {
                    return NULL;
                }

                MagneticDeviationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                MagneticDeviationType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->magneticDeviation() - (char *)sample);

                MagneticDeviationType_g_sampleAccessInfo.memberAccessInfos = 
                MagneticDeviationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::MagneticDeviationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MagneticDeviationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MagneticDeviationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MagneticDeviationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MagneticDeviationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::MagneticDeviationType >;

                MagneticDeviationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MagneticDeviationType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MagneticDeviationType_g_typePlugin = 
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

                return &MagneticDeviationType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::MagneticDeviationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::MagneticDeviationType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::MagneticDeviationType >::reset_sample(::UMAA::Common::Orientation::MagneticDeviationType& sample) 
        {
            sample.heading(0.0);
            sample.magneticDeviation(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::MagneticDeviationType >::allocate_sample(::UMAA::Common::Orientation::MagneticDeviationType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
