

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Velocity3D_PlatformNED.idl
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
#include "Velocity3D_PlatformNEDPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Velocity3D_PlatformNED.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Velocity3D_PlatformNED: 

            Velocity3D_PlatformNED::Velocity3D_PlatformNED() :
                m_downSpeed_ (0.0) ,
                m_eastSpeed_ (0.0) ,
                m_northSpeed_ (0.0)  {

            }   

            Velocity3D_PlatformNED::Velocity3D_PlatformNED (double downSpeed_,double eastSpeed_,double northSpeed_):
                m_downSpeed_(downSpeed_), 
                m_eastSpeed_(eastSpeed_), 
                m_northSpeed_(northSpeed_) {
            }

            void Velocity3D_PlatformNED::swap(Velocity3D_PlatformNED& other_)  noexcept 
            {
                using std::swap;
                swap(m_downSpeed_, other_.m_downSpeed_);
                swap(m_eastSpeed_, other_.m_eastSpeed_);
                swap(m_northSpeed_, other_.m_northSpeed_);
            }  

            bool Velocity3D_PlatformNED::operator == (const Velocity3D_PlatformNED& other_) const {
                if (std::fabs(m_downSpeed_ - other_.m_downSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_downSpeed_ - other_.m_downSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_eastSpeed_ - other_.m_eastSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_eastSpeed_ - other_.m_eastSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_northSpeed_ - other_.m_northSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_northSpeed_ - other_.m_northSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool Velocity3D_PlatformNED::operator != (const Velocity3D_PlatformNED& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Velocity3D_PlatformNED& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "downSpeed: " << std::setprecision(15) << sample.downSpeed ()<<", ";
                o << "eastSpeed: " << std::setprecision(15) << sample.eastSpeed ()<<", ";
                o << "northSpeed: " << std::setprecision(15) << sample.northSpeed ();
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
        struct native_type_code< ::UMAA::Common::Measurement::Velocity3D_PlatformNED > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Velocity3D_PlatformNED_g_tc_members[3]=
                {

                    {
                        (char *)"downSpeed",/* Member name */
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
                        (char *)"eastSpeed",/* Member name */
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
                        (char *)"northSpeed",/* Member name */
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

                static DDS_TypeCode Velocity3D_PlatformNED_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Velocity3D_PlatformNED", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Velocity3D_PlatformNED_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Velocity3D_PlatformNED*/

                if (is_initialized) {
                    return &Velocity3D_PlatformNED_g_tc;
                }

                is_initialized = RTI_TRUE;

                Velocity3D_PlatformNED_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Velocity3D_PlatformNED_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::DownSpeed_AliasTag_t>::get().native();
                Velocity3D_PlatformNED_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::EastSpeed_AliasTag_t>::get().native();
                Velocity3D_PlatformNED_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::NorthSpeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Velocity3D_PlatformNED_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Velocity3D_PlatformNED_g_tc._data._sampleAccessInfo = sample_access_info();
                Velocity3D_PlatformNED_g_tc._data._typePlugin = type_plugin_info();    

                return &Velocity3D_PlatformNED_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Velocity3D_PlatformNED *sample;

                static RTIXCdrMemberAccessInfo Velocity3D_PlatformNED_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Velocity3D_PlatformNED_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Velocity3D_PlatformNED_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Velocity3D_PlatformNED);
                if (sample == NULL) {
                    return NULL;
                }

                Velocity3D_PlatformNED_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->downSpeed() - (char *)sample);

                Velocity3D_PlatformNED_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->eastSpeed() - (char *)sample);

                Velocity3D_PlatformNED_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->northSpeed() - (char *)sample);

                Velocity3D_PlatformNED_g_sampleAccessInfo.memberAccessInfos = 
                Velocity3D_PlatformNED_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Velocity3D_PlatformNED);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Velocity3D_PlatformNED_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Velocity3D_PlatformNED_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Velocity3D_PlatformNED_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Velocity3D_PlatformNED_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >;

                Velocity3D_PlatformNED_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Velocity3D_PlatformNED_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Velocity3D_PlatformNED_g_typePlugin = 
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

                return &Velocity3D_PlatformNED_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Velocity3D_PlatformNEDPlugin_new,
                ::UMAA::Common::Measurement::Velocity3D_PlatformNEDPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Velocity3D_PlatformNED& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Velocity3D_PlatformNEDPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Velocity3D_PlatformNEDPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::from_cdr_buffer(::UMAA::Common::Measurement::Velocity3D_PlatformNED& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Velocity3D_PlatformNEDPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Velocity3D_PlatformNED from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::reset_sample(::UMAA::Common::Measurement::Velocity3D_PlatformNED& sample) 
        {
            sample.downSpeed(0.0);
            sample.eastSpeed(0.0);
            sample.northSpeed(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::Velocity3D_PlatformNED >::allocate_sample(::UMAA::Common::Measurement::Velocity3D_PlatformNED& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
