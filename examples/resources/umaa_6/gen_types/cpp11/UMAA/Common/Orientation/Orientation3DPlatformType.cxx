

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DPlatformType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Orientation3DPlatformTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Orientation3DPlatformType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- Orientation3DPlatformType: 

            Orientation3DPlatformType::Orientation3DPlatformType()  {

            }   

            Orientation3DPlatformType::Orientation3DPlatformType (const ::UMAA::Common::Orientation::AlphaXPlatformType& alpha_,const ::UMAA::Common::Orientation::BetaYPlatformType& beta_,const ::UMAA::Common::Orientation::GammaZPlatformType& gamma_):
                m_alpha_(alpha_), 
                m_beta_(beta_), 
                m_gamma_(gamma_) {
            }

            void Orientation3DPlatformType::swap(Orientation3DPlatformType& other_)  noexcept 
            {
                using std::swap;
                swap(m_alpha_, other_.m_alpha_);
                swap(m_beta_, other_.m_beta_);
                swap(m_gamma_, other_.m_gamma_);
            }  

            bool Orientation3DPlatformType::operator == (const Orientation3DPlatformType& other_) const {
                if (m_alpha_ != other_.m_alpha_) {
                    return false;
                }
                if (m_beta_ != other_.m_beta_) {
                    return false;
                }
                if (m_gamma_ != other_.m_gamma_) {
                    return false;
                }
                return true;
            }

            bool Orientation3DPlatformType::operator != (const Orientation3DPlatformType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Orientation3DPlatformType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "alpha: " << sample.alpha ()<<", ";
                o << "beta: " << sample.beta ()<<", ";
                o << "gamma: " << sample.gamma ();
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
        struct native_type_code< ::UMAA::Common::Orientation::Orientation3DPlatformType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Orientation3DPlatformType_g_tc_members[3]=
                {

                    {
                        (char *)"alpha",/* Member name */
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
                        (char *)"beta",/* Member name */
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
                        (char *)"gamma",/* Member name */
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

                static DDS_TypeCode Orientation3DPlatformType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::Orientation3DPlatformType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Orientation3DPlatformType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Orientation3DPlatformType*/

                if (is_initialized) {
                    return &Orientation3DPlatformType_g_tc;
                }

                is_initialized = RTI_TRUE;

                Orientation3DPlatformType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Orientation3DPlatformType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::AlphaXPlatformType>::get().native();
                Orientation3DPlatformType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::BetaYPlatformType>::get().native();
                Orientation3DPlatformType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Orientation::GammaZPlatformType>::get().native();

                /* Initialize the values for member annotations. */

                Orientation3DPlatformType_g_tc._data._sampleAccessInfo = sample_access_info();
                Orientation3DPlatformType_g_tc._data._typePlugin = type_plugin_info();    

                return &Orientation3DPlatformType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::Orientation3DPlatformType *sample;

                static RTIXCdrMemberAccessInfo Orientation3DPlatformType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Orientation3DPlatformType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Orientation3DPlatformType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::Orientation3DPlatformType);
                if (sample == NULL) {
                    return NULL;
                }

                Orientation3DPlatformType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alpha() - (char *)sample);

                Orientation3DPlatformType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beta() - (char *)sample);

                Orientation3DPlatformType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gamma() - (char *)sample);

                Orientation3DPlatformType_g_sampleAccessInfo.memberAccessInfos = 
                Orientation3DPlatformType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::Orientation3DPlatformType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Orientation3DPlatformType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Orientation3DPlatformType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Orientation3DPlatformType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Orientation3DPlatformType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::Orientation3DPlatformType >;

                Orientation3DPlatformType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Orientation3DPlatformType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Orientation3DPlatformType_g_typePlugin = 
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

                return &Orientation3DPlatformType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::Orientation3DPlatformType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::Orientation3DPlatformType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::Orientation3DPlatformType >::reset_sample(::UMAA::Common::Orientation::Orientation3DPlatformType& sample) 
        {
            ::rti::topic::reset_sample(sample.alpha());
            ::rti::topic::reset_sample(sample.beta());
            ::rti::topic::reset_sample(sample.gamma());
        }

        void topic_type_support< ::UMAA::Common::Orientation::Orientation3DPlatformType >::allocate_sample(::UMAA::Common::Orientation::Orientation3DPlatformType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.alpha(),  -1, -1);
            ::rti::topic::allocate_sample(sample.beta(),  -1, -1);
            ::rti::topic::allocate_sample(sample.gamma(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
