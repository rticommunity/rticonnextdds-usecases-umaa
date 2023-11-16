

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundingBoxType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BoundingBoxType.hpp"
#include "BoundingBoxTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace BoundingBox {

            // ---- BoundingBoxType: 

            BoundingBoxType::BoundingBoxType() :
                m_lowerRight_x_ (0) ,
                m_lowerRight_y_ (0) ,
                m_upperLeft_x_ (0) ,
                m_upperLeft_y_ (0)  {
            }   

            BoundingBoxType::BoundingBoxType (int32_t lowerRight_x,int32_t lowerRight_y,int32_t upperLeft_x,int32_t upperLeft_y):
                m_lowerRight_x_( lowerRight_x ),
                m_lowerRight_y_( lowerRight_y ),
                m_upperLeft_x_( upperLeft_x ),
                m_upperLeft_y_( upperLeft_y ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BoundingBoxType::BoundingBoxType(BoundingBoxType&& other_) OMG_NOEXCEPT  :m_lowerRight_x_ (std::move(other_.m_lowerRight_x_))
            ,
            m_lowerRight_y_ (std::move(other_.m_lowerRight_y_))
            ,
            m_upperLeft_x_ (std::move(other_.m_upperLeft_x_))
            ,
            m_upperLeft_y_ (std::move(other_.m_upperLeft_y_))
            {
            } 

            BoundingBoxType& BoundingBoxType::operator=(BoundingBoxType&&  other_) OMG_NOEXCEPT {
                BoundingBoxType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BoundingBoxType::swap(BoundingBoxType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_lowerRight_x_, other_.m_lowerRight_x_);
                swap(m_lowerRight_y_, other_.m_lowerRight_y_);
                swap(m_upperLeft_x_, other_.m_upperLeft_x_);
                swap(m_upperLeft_y_, other_.m_upperLeft_y_);
            }  

            bool BoundingBoxType::operator == (const BoundingBoxType& other_) const {
                if (m_lowerRight_x_ != other_.m_lowerRight_x_) {
                    return false;
                }
                if (m_lowerRight_y_ != other_.m_lowerRight_y_) {
                    return false;
                }
                if (m_upperLeft_x_ != other_.m_upperLeft_x_) {
                    return false;
                }
                if (m_upperLeft_y_ != other_.m_upperLeft_y_) {
                    return false;
                }
                return true;
            }
            bool BoundingBoxType::operator != (const BoundingBoxType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BoundingBoxType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "lowerRight_x: " << sample.lowerRight_x()<<", ";
                o << "lowerRight_y: " << sample.lowerRight_y()<<", ";
                o << "upperLeft_x: " << sample.upperLeft_x()<<", ";
                o << "upperLeft_y: " << sample.upperLeft_y() ;
                o <<"]";
                return o;
            }

        } // namespace BoundingBox  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::BoundingBox::BoundingBoxType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BoundingBoxType_g_tc_members[4]=
                {

                    {
                        (char *)"lowerRight_x",/* Member name */
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
                        (char *)"lowerRight_y",/* Member name */
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
                        (char *)"upperLeft_x",/* Member name */
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
                        (char *)"upperLeft_y",/* Member name */
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
                    }
                };

                static DDS_TypeCode BoundingBoxType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::BoundingBox::BoundingBoxType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        BoundingBoxType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BoundingBoxType*/

                if (is_initialized) {
                    return &BoundingBoxType_g_tc;
                }

                BoundingBoxType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BoundingBoxType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Order_AliasTag_t>::get().native();
                BoundingBoxType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Order_AliasTag_t>::get().native();
                BoundingBoxType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Order_AliasTag_t>::get().native();
                BoundingBoxType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Order_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BoundingBoxType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                BoundingBoxType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[0]._annotations._minValue._u.long_value = 0L;
                BoundingBoxType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;

                BoundingBoxType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                BoundingBoxType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[1]._annotations._minValue._u.long_value = 0L;
                BoundingBoxType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;

                BoundingBoxType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                BoundingBoxType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[2]._annotations._minValue._u.long_value = 0L;
                BoundingBoxType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[2]._annotations._maxValue._u.long_value = 2147483647L;

                BoundingBoxType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                BoundingBoxType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[3]._annotations._minValue._u.long_value = 0L;
                BoundingBoxType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BoundingBoxType_g_tc_members[3]._annotations._maxValue._u.long_value = 2147483647L;

                BoundingBoxType_g_tc._data._sampleAccessInfo = sample_access_info();
                BoundingBoxType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BoundingBoxType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::BoundingBox::BoundingBoxType *sample;

                static RTIXCdrMemberAccessInfo BoundingBoxType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BoundingBoxType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BoundingBoxType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::BoundingBox::BoundingBoxType);
                if (sample == NULL) {
                    return NULL;
                }

                BoundingBoxType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowerRight_x() - (char *)sample);

                BoundingBoxType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lowerRight_y() - (char *)sample);

                BoundingBoxType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeft_x() - (char *)sample);

                BoundingBoxType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->upperLeft_y() - (char *)sample);

                BoundingBoxType_g_sampleAccessInfo.memberAccessInfos = 
                BoundingBoxType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::BoundingBox::BoundingBoxType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BoundingBoxType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BoundingBoxType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BoundingBoxType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BoundingBoxType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::BoundingBox::BoundingBoxType >;

                BoundingBoxType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BoundingBoxType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BoundingBoxType_g_typePlugin = 
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

                return &BoundingBoxType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::BoundingBox::BoundingBoxType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::BoundingBox::BoundingBoxType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::BoundingBox::BoundingBoxTypePlugin_new,
                UMAA::SA::BoundingBox::BoundingBoxTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::BoundingBox::BoundingBoxType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BoundingBoxTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BoundingBoxTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType >::from_cdr_buffer(UMAA::SA::BoundingBox::BoundingBoxType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BoundingBoxTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::BoundingBox::BoundingBoxType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType >::reset_sample(UMAA::SA::BoundingBox::BoundingBoxType& sample) 
        {
            sample.lowerRight_x(0);
            sample.lowerRight_y(0);
            sample.upperLeft_x(0);
            sample.upperLeft_y(0);
        }

        void topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType >::allocate_sample(UMAA::SA::BoundingBox::BoundingBoxType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

