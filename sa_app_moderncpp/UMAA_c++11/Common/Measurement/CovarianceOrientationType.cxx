

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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
#include "CovarianceOrientationTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CovarianceOrientationType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceOrientationType: 

            CovarianceOrientationType::CovarianceOrientationType() :
                m_rpRp_ (0.0) ,
                m_rpRy_ (0.0) ,
                m_rrRp_ (0.0) ,
                m_rrRr_ (0.0) ,
                m_rrRy_ (0.0) ,
                m_ryRy_ (0.0)  {

            }   

            CovarianceOrientationType::CovarianceOrientationType (double rpRp_,double rpRy_,double rrRp_,double rrRr_,double rrRy_,double ryRy_):
                m_rpRp_(rpRp_), 
                m_rpRy_(rpRy_), 
                m_rrRp_(rrRp_), 
                m_rrRr_(rrRr_), 
                m_rrRy_(rrRy_), 
                m_ryRy_(ryRy_) {
            }

            void CovarianceOrientationType::swap(CovarianceOrientationType& other_)  noexcept 
            {
                using std::swap;
                swap(m_rpRp_, other_.m_rpRp_);
                swap(m_rpRy_, other_.m_rpRy_);
                swap(m_rrRp_, other_.m_rrRp_);
                swap(m_rrRr_, other_.m_rrRr_);
                swap(m_rrRy_, other_.m_rrRy_);
                swap(m_ryRy_, other_.m_ryRy_);
            }  

            bool CovarianceOrientationType::operator == (const CovarianceOrientationType& other_) const {
                if (std::fabs(m_rpRp_ - other_.m_rpRp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rpRp_ - other_.m_rpRp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rpRy_ - other_.m_rpRy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rpRy_ - other_.m_rpRy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rrRp_ - other_.m_rrRp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rrRp_ - other_.m_rrRp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rrRr_ - other_.m_rrRr_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rrRr_ - other_.m_rrRr_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rrRy_ - other_.m_rrRy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rrRy_ - other_.m_rrRy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_ryRy_ - other_.m_ryRy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ryRy_ - other_.m_ryRy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool CovarianceOrientationType::operator != (const CovarianceOrientationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceOrientationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "rpRp: " << std::setprecision(15) << sample.rpRp ()<<", ";
                o << "rpRy: " << std::setprecision(15) << sample.rpRy ()<<", ";
                o << "rrRp: " << std::setprecision(15) << sample.rrRp ()<<", ";
                o << "rrRr: " << std::setprecision(15) << sample.rrRr ()<<", ";
                o << "rrRy: " << std::setprecision(15) << sample.rrRy ()<<", ";
                o << "ryRy: " << std::setprecision(15) << sample.ryRy ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

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
        struct native_type_code< ::UMAA::Common::Measurement::CovarianceOrientationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceOrientationType_g_tc_members[6]=
                {

                    {
                        (char *)"rpRp",/* Member name */
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
                        (char *)"rpRy",/* Member name */
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
                        (char *)"rrRp",/* Member name */
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
                        (char *)"rrRr",/* Member name */
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
                        (char *)"rrRy",/* Member name */
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
                        (char *)"ryRy",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CovarianceOrientationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceOrientationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceOrientationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceOrientationType*/

                if (is_initialized) {
                    return &CovarianceOrientationType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CovarianceOrientationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceOrientationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();
                CovarianceOrientationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();
                CovarianceOrientationType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();
                CovarianceOrientationType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();
                CovarianceOrientationType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();
                CovarianceOrientationType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarOrientation_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceOrientationType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CovarianceOrientationType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceOrientationType_g_tc._data._typePlugin = type_plugin_info();    

                return &CovarianceOrientationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::CovarianceOrientationType *sample;

                static RTIXCdrMemberAccessInfo CovarianceOrientationType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceOrientationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::CovarianceOrientationType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceOrientationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rpRp() - (char *)sample);

                CovarianceOrientationType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rpRy() - (char *)sample);

                CovarianceOrientationType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rrRp() - (char *)sample);

                CovarianceOrientationType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rrRr() - (char *)sample);

                CovarianceOrientationType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rrRy() - (char *)sample);

                CovarianceOrientationType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ryRy() - (char *)sample);

                CovarianceOrientationType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceOrientationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::CovarianceOrientationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceOrientationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceOrientationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceOrientationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceOrientationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::CovarianceOrientationType >;

                CovarianceOrientationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceOrientationType_g_typePlugin = 
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

                return &CovarianceOrientationType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::CovarianceOrientationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::CovarianceOrientationType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::CovarianceOrientationTypePlugin_new,
                ::UMAA::Common::Measurement::CovarianceOrientationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::CovarianceOrientationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovarianceOrientationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovarianceOrientationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationType >::from_cdr_buffer(::UMAA::Common::Measurement::CovarianceOrientationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovarianceOrientationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::CovarianceOrientationType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationType >::reset_sample(::UMAA::Common::Measurement::CovarianceOrientationType& sample) 
        {
            sample.rpRp(0.0);
            sample.rpRy(0.0);
            sample.rrRp(0.0);
            sample.rrRr(0.0);
            sample.rrRy(0.0);
            sample.ryRy(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::CovarianceOrientationType >::allocate_sample(::UMAA::Common::Measurement::CovarianceOrientationType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
