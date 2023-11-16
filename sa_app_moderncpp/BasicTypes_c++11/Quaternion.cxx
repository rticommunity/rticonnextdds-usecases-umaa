

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Quaternion.hpp"
#include "QuaternionPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace BasicTypes {

    // ---- Quaternion: 

    Quaternion::Quaternion() :
        m_a_ (0.0) ,
        m_b_ (0.0) ,
        m_c_ (0.0) ,
        m_d_ (0.0)  {
    }   

    Quaternion::Quaternion (double a,double b,double c,double d):
        m_a_( a ),
        m_b_( b ),
        m_c_( c ),
        m_d_( d ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Quaternion::Quaternion(Quaternion&& other_) OMG_NOEXCEPT  :m_a_ (std::move(other_.m_a_))
    ,
    m_b_ (std::move(other_.m_b_))
    ,
    m_c_ (std::move(other_.m_c_))
    ,
    m_d_ (std::move(other_.m_d_))
    {
    } 

    Quaternion& Quaternion::operator=(Quaternion&&  other_) OMG_NOEXCEPT {
        Quaternion tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void Quaternion::swap(Quaternion& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_a_, other_.m_a_);
        swap(m_b_, other_.m_b_);
        swap(m_c_, other_.m_c_);
        swap(m_d_, other_.m_d_);
    }  

    bool Quaternion::operator == (const Quaternion& other_) const {
        if (m_a_ != other_.m_a_) {
            return false;
        }
        if (m_b_ != other_.m_b_) {
            return false;
        }
        if (m_c_ != other_.m_c_) {
            return false;
        }
        if (m_d_ != other_.m_d_) {
            return false;
        }
        return true;
    }
    bool Quaternion::operator != (const Quaternion& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const Quaternion& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "a: " << std::setprecision(15) <<sample.a()<<", ";
        o << "b: " << std::setprecision(15) <<sample.b()<<", ";
        o << "c: " << std::setprecision(15) <<sample.c()<<", ";
        o << "d: " << std::setprecision(15) <<sample.d() ;
        o <<"]";
        return o;
    }

} // namespace BasicTypes  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< BasicTypes::Quaternion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Quaternion_g_tc_members[4]=
                {

                    {
                        (char *)"a",/* Member name */
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
                        (char *)"b",/* Member name */
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
                        (char *)"c",/* Member name */
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
                        (char *)"d",/* Member name */
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

                static DDS_TypeCode Quaternion_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"BasicTypes::Quaternion", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Quaternion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Quaternion*/

                if (is_initialized) {
                    return &Quaternion_g_tc;
                }

                Quaternion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Quaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Quaternion_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc._data._sampleAccessInfo = sample_access_info();
                Quaternion_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Quaternion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BasicTypes::Quaternion *sample;

                static RTIXCdrMemberAccessInfo Quaternion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Quaternion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    BasicTypes::Quaternion);
                if (sample == NULL) {
                    return NULL;
                }

                Quaternion_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->a() - (char *)sample);

                Quaternion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->b() - (char *)sample);

                Quaternion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->c() - (char *)sample);

                Quaternion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d() - (char *)sample);

                Quaternion_g_sampleAccessInfo.memberAccessInfos = 
                Quaternion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BasicTypes::Quaternion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Quaternion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Quaternion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< BasicTypes::Quaternion >;

                Quaternion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Quaternion_g_typePlugin = 
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

                return &Quaternion_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< BasicTypes::Quaternion >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< BasicTypes::Quaternion >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< BasicTypes::Quaternion >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BasicTypes::QuaternionPlugin_new,
                BasicTypes::QuaternionPlugin_delete);
        }

        std::vector<char>& topic_type_support< BasicTypes::Quaternion >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const BasicTypes::Quaternion& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = QuaternionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = QuaternionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< BasicTypes::Quaternion >::from_cdr_buffer(BasicTypes::Quaternion& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = QuaternionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create BasicTypes::Quaternion from cdr buffer");
        }

        void topic_type_support< BasicTypes::Quaternion >::reset_sample(BasicTypes::Quaternion& sample) 
        {
            sample.a(0.0);
            sample.b(0.0);
            sample.c(0.0);
            sample.d(0.0);
        }

        void topic_type_support< BasicTypes::Quaternion >::allocate_sample(BasicTypes::Quaternion& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

