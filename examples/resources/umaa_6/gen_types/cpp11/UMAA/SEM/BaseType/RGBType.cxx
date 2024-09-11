

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RGBType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "RGBTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RGBType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BaseType {

            // ---- RGBType: 

            RGBType::RGBType() :
                m_blue_ (0) ,
                m_green_ (0) ,
                m_red_ (0)  {

            }   

            RGBType::RGBType (int32_t blue_,int32_t green_,int32_t red_):
                m_blue_(blue_), 
                m_green_(green_), 
                m_red_(red_) {
            }

            void RGBType::swap(RGBType& other_)  noexcept 
            {
                using std::swap;
                swap(m_blue_, other_.m_blue_);
                swap(m_green_, other_.m_green_);
                swap(m_red_, other_.m_red_);
            }  

            bool RGBType::operator == (const RGBType& other_) const {
                if (m_blue_ != other_.m_blue_) {
                    return false;
                }
                if (m_green_ != other_.m_green_) {
                    return false;
                }
                if (m_red_ != other_.m_red_) {
                    return false;
                }
                return true;
            }

            bool RGBType::operator != (const RGBType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RGBType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "blue: " << sample.blue ()<<", ";
                o << "green: " << sample.green ()<<", ";
                o << "red: " << sample.red ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::BaseType::RGBType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RGBType_g_tc_members[3]=
                {

                    {
                        (char *)"blue",/* Member name */
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
                        (char *)"green",/* Member name */
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
                        (char *)"red",/* Member name */
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

                static DDS_TypeCode RGBType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BaseType::RGBType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        RGBType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RGBType*/

                if (is_initialized) {
                    return &RGBType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RGBType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RGBType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t>::get().native();
                RGBType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t>::get().native();
                RGBType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                RGBType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                RGBType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RGBType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                RGBType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                RGBType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RGBType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                RGBType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                RGBType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RGBType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RGBType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                RGBType_g_tc._data._sampleAccessInfo = sample_access_info();
                RGBType_g_tc._data._typePlugin = type_plugin_info();    

                return &RGBType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::BaseType::RGBType *sample;

                static RTIXCdrMemberAccessInfo RGBType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RGBType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RGBType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::BaseType::RGBType);
                if (sample == NULL) {
                    return NULL;
                }

                RGBType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->blue() - (char *)sample);

                RGBType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->green() - (char *)sample);

                RGBType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->red() - (char *)sample);

                RGBType_g_sampleAccessInfo.memberAccessInfos = 
                RGBType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::BaseType::RGBType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RGBType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RGBType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RGBType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RGBType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::BaseType::RGBType >;

                RGBType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RGBType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RGBType_g_typePlugin = 
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

                return &RGBType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::BaseType::RGBType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::BaseType::RGBType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::BaseType::RGBType >::reset_sample(::UMAA::SEM::BaseType::RGBType& sample) 
        {
            sample.blue(0);
            sample.green(0);
            sample.red(0);
        }

        void topic_type_support< ::UMAA::SEM::BaseType::RGBType >::allocate_sample(::UMAA::SEM::BaseType::RGBType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
