

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorMagneticNorthVariantType.idl
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
#include "BearingSectorMagneticNorthVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BearingSectorMagneticNorthVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- BearingSectorMagneticNorthVariantType: 

            BearingSectorMagneticNorthVariantType::BearingSectorMagneticNorthVariantType() :
                m_endBearing_ (0.0) ,
                m_startBearing_ (0.0)  {

            }   

            BearingSectorMagneticNorthVariantType::BearingSectorMagneticNorthVariantType (double endBearing_,double startBearing_):
                m_endBearing_(endBearing_), 
                m_startBearing_(startBearing_) {
            }

            void BearingSectorMagneticNorthVariantType::swap(BearingSectorMagneticNorthVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_endBearing_, other_.m_endBearing_);
                swap(m_startBearing_, other_.m_startBearing_);
            }  

            bool BearingSectorMagneticNorthVariantType::operator == (const BearingSectorMagneticNorthVariantType& other_) const {
                if (std::fabs(m_endBearing_ - other_.m_endBearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_endBearing_ - other_.m_endBearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_startBearing_ - other_.m_startBearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_startBearing_ - other_.m_startBearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool BearingSectorMagneticNorthVariantType::operator != (const BearingSectorMagneticNorthVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BearingSectorMagneticNorthVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endBearing: " << std::setprecision(15) << sample.endBearing ()<<", ";
                o << "startBearing: " << std::setprecision(15) << sample.startBearing ();
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
        struct native_type_code< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BearingSectorMagneticNorthVariantType_g_tc_members[2]=
                {

                    {
                        (char *)"endBearing",/* Member name */
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
                        (char *)"startBearing",/* Member name */
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

                static DDS_TypeCode BearingSectorMagneticNorthVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        BearingSectorMagneticNorthVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BearingSectorMagneticNorthVariantType*/

                if (is_initialized) {
                    return &BearingSectorMagneticNorthVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BearingSectorMagneticNorthVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BearingSectorMagneticNorthVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t>::get().native();
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BearingSectorMagneticNorthVariantType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BearingSectorMagneticNorthVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                BearingSectorMagneticNorthVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &BearingSectorMagneticNorthVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType *sample;

                static RTIXCdrMemberAccessInfo BearingSectorMagneticNorthVariantType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BearingSectorMagneticNorthVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BearingSectorMagneticNorthVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                BearingSectorMagneticNorthVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endBearing() - (char *)sample);

                BearingSectorMagneticNorthVariantType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startBearing() - (char *)sample);

                BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.memberAccessInfos = 
                BearingSectorMagneticNorthVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType >;

                BearingSectorMagneticNorthVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BearingSectorMagneticNorthVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BearingSectorMagneticNorthVariantType_g_typePlugin = 
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

                return &BearingSectorMagneticNorthVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType >::reset_sample(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& sample) 
        {
            sample.endBearing(0.0);
            sample.startBearing(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType >::allocate_sample(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
