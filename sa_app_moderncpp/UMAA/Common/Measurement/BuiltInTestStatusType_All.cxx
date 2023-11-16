

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BuiltInTestStatusType_All.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BuiltInTestStatusType_All.hpp"
#include "BuiltInTestStatusType_AllPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- BuiltInTestStatusType_All: 

            BuiltInTestStatusType_All::BuiltInTestStatusType_All() :
                m_setPoint_(UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED) ,
                m_value_(UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED)  {
            }   

            BuiltInTestStatusType_All::BuiltInTestStatusType_All (const ::rti::core::bounded_sequence< UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >& domain,const UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& setPoint,const UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value):
                m_domain_( domain ),
                m_setPoint_( setPoint ),
                m_value_( value ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BuiltInTestStatusType_All::BuiltInTestStatusType_All(BuiltInTestStatusType_All&& other_) OMG_NOEXCEPT  :m_domain_ (std::move(other_.m_domain_))
            ,
            m_setPoint_ (std::move(other_.m_setPoint_))
            ,
            m_value_ (std::move(other_.m_value_))
            {
            } 

            BuiltInTestStatusType_All& BuiltInTestStatusType_All::operator=(BuiltInTestStatusType_All&&  other_) OMG_NOEXCEPT {
                BuiltInTestStatusType_All tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BuiltInTestStatusType_All::swap(BuiltInTestStatusType_All& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_domain_, other_.m_domain_);
                swap(m_setPoint_, other_.m_setPoint_);
                swap(m_value_, other_.m_value_);
            }  

            bool BuiltInTestStatusType_All::operator == (const BuiltInTestStatusType_All& other_) const {
                if (m_domain_ != other_.m_domain_) {
                    return false;
                }
                if (m_setPoint_ != other_.m_setPoint_) {
                    return false;
                }
                if (m_value_ != other_.m_value_) {
                    return false;
                }
                return true;
            }
            bool BuiltInTestStatusType_All::operator != (const BuiltInTestStatusType_All& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BuiltInTestStatusType_All& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "domain: " << sample.domain()<<", ";
                o << "setPoint: " << sample.setPoint()<<", ";
                o << "value: " << sample.value() ;
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Measurement::BuiltInTestStatusType_All > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BuiltInTestStatusType_All_g_tc_domain_sequence;

                static DDS_TypeCode_Member BuiltInTestStatusType_All_g_tc_members[3]=
                {

                    {
                        (char *)"domain",/* Member name */
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
                        (char *)"setPoint",/* Member name */
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
                        (char *)"value",/* Member name */
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

                static DDS_TypeCode BuiltInTestStatusType_All_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::BuiltInTestStatusType_All", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BuiltInTestStatusType_All_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BuiltInTestStatusType_All*/

                if (is_initialized) {
                    return &BuiltInTestStatusType_All_g_tc;
                }

                BuiltInTestStatusType_All_g_tc_domain_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L > >((100L));

                BuiltInTestStatusType_All_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BuiltInTestStatusType_All_g_tc_domain_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>::get().native();
                BuiltInTestStatusType_All_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& BuiltInTestStatusType_All_g_tc_domain_sequence;
                BuiltInTestStatusType_All_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>::get().native();
                BuiltInTestStatusType_All_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>::get().native();

                /* Initialize the values for member annotations. */

                BuiltInTestStatusType_All_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BuiltInTestStatusType_All_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                BuiltInTestStatusType_All_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BuiltInTestStatusType_All_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                BuiltInTestStatusType_All_g_tc._data._sampleAccessInfo = sample_access_info();
                BuiltInTestStatusType_All_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BuiltInTestStatusType_All_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::BuiltInTestStatusType_All *sample;

                static RTIXCdrMemberAccessInfo BuiltInTestStatusType_All_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BuiltInTestStatusType_All_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BuiltInTestStatusType_All_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::BuiltInTestStatusType_All);
                if (sample == NULL) {
                    return NULL;
                }

                BuiltInTestStatusType_All_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->domain() - (char *)sample);

                BuiltInTestStatusType_All_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setPoint() - (char *)sample);

                BuiltInTestStatusType_All_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value() - (char *)sample);

                BuiltInTestStatusType_All_g_sampleAccessInfo.memberAccessInfos = 
                BuiltInTestStatusType_All_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::BuiltInTestStatusType_All);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BuiltInTestStatusType_All_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BuiltInTestStatusType_All_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BuiltInTestStatusType_All_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BuiltInTestStatusType_All_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::BuiltInTestStatusType_All >;

                BuiltInTestStatusType_All_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BuiltInTestStatusType_All_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BuiltInTestStatusType_All_g_typePlugin = 
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

                return &BuiltInTestStatusType_All_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::BuiltInTestStatusType_All >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::BuiltInTestStatusType_All >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::BuiltInTestStatusType_All >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::BuiltInTestStatusType_AllPlugin_new,
                UMAA::Common::Measurement::BuiltInTestStatusType_AllPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::BuiltInTestStatusType_All >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::BuiltInTestStatusType_All& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BuiltInTestStatusType_AllPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BuiltInTestStatusType_AllPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::BuiltInTestStatusType_All >::from_cdr_buffer(UMAA::Common::Measurement::BuiltInTestStatusType_All& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BuiltInTestStatusType_AllPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::BuiltInTestStatusType_All from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::BuiltInTestStatusType_All >::reset_sample(UMAA::Common::Measurement::BuiltInTestStatusType_All& sample) 
        {
            ::rti::topic::reset_sample(sample.domain());
            sample.setPoint(UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED);
            sample.value(UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType::BIT_SUSPENDED);
        }

        void topic_type_support< UMAA::Common::Measurement::BuiltInTestStatusType_All >::allocate_sample(UMAA::Common::Measurement::BuiltInTestStatusType_All& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.domain(),  100L, -1);
            ::rti::topic::allocate_sample(sample.setPoint(),  -1, -1);
            ::rti::topic::allocate_sample(sample.value(),  -1, -1);
        }

    }
}  

