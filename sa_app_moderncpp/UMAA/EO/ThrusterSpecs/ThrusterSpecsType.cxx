

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ThrusterSpecsType.hpp"
#include "ThrusterSpecsTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace ThrusterSpecs {

            // ---- ThrusterSpecsType: 

            ThrusterSpecsType::ThrusterSpecsType() :
                m_maxRPM_ (0.0) ,
                m_mountType_(UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType::_FIXED) ,
                m_name_ ("")  {
            }   

            ThrusterSpecsType::ThrusterSpecsType (double maxRPM,const UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType,const std::string& name):
                m_maxRPM_( maxRPM ),
                m_mountType_( mountType ),
                m_name_( name ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ThrusterSpecsType::ThrusterSpecsType(ThrusterSpecsType&& other_) OMG_NOEXCEPT  :m_maxRPM_ (std::move(other_.m_maxRPM_))
            ,
            m_mountType_ (std::move(other_.m_mountType_))
            ,
            m_name_ (std::move(other_.m_name_))
            {
            } 

            ThrusterSpecsType& ThrusterSpecsType::operator=(ThrusterSpecsType&&  other_) OMG_NOEXCEPT {
                ThrusterSpecsType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ThrusterSpecsType::swap(ThrusterSpecsType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_maxRPM_, other_.m_maxRPM_);
                swap(m_mountType_, other_.m_mountType_);
                swap(m_name_, other_.m_name_);
            }  

            bool ThrusterSpecsType::operator == (const ThrusterSpecsType& other_) const {
                if (m_maxRPM_ != other_.m_maxRPM_) {
                    return false;
                }
                if (m_mountType_ != other_.m_mountType_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                return true;
            }
            bool ThrusterSpecsType::operator != (const ThrusterSpecsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ThrusterSpecsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxRPM: " << std::setprecision(15) <<sample.maxRPM()<<", ";
                o << "mountType: " << sample.mountType()<<", ";
                o << "name: " << sample.name() ;
                o <<"]";
                return o;
            }

        } // namespace ThrusterSpecs  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::ThrusterSpecs::ThrusterSpecsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ThrusterSpecsType_g_tc_members[3]=
                {

                    {
                        (char *)"maxRPM",/* Member name */
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
                        (char *)"mountType",/* Member name */
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
                        (char *)"name",/* Member name */
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

                static DDS_TypeCode ThrusterSpecsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::ThrusterSpecs::ThrusterSpecsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ThrusterSpecsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ThrusterSpecsType*/

                if (is_initialized) {
                    return &ThrusterSpecsType_g_tc;
                }

                ThrusterSpecsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ThrusterSpecsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                ThrusterSpecsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType>::get().native();
                ThrusterSpecsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ThrusterSpecsType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterSpecsType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ThrusterSpecsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterSpecsType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
                ThrusterSpecsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ThrusterSpecsType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;

                ThrusterSpecsType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ThrusterSpecsType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ThrusterSpecsType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ThrusterSpecsType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ThrusterSpecsType_g_tc._data._sampleAccessInfo = sample_access_info();
                ThrusterSpecsType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ThrusterSpecsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::ThrusterSpecs::ThrusterSpecsType *sample;

                static RTIXCdrMemberAccessInfo ThrusterSpecsType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ThrusterSpecsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ThrusterSpecsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::ThrusterSpecs::ThrusterSpecsType);
                if (sample == NULL) {
                    return NULL;
                }

                ThrusterSpecsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRPM() - (char *)sample);

                ThrusterSpecsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mountType() - (char *)sample);

                ThrusterSpecsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                ThrusterSpecsType_g_sampleAccessInfo.memberAccessInfos = 
                ThrusterSpecsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::ThrusterSpecs::ThrusterSpecsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ThrusterSpecsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ThrusterSpecsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ThrusterSpecsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ThrusterSpecsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >;

                ThrusterSpecsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ThrusterSpecsType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ThrusterSpecsType_g_typePlugin = 
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

                return &ThrusterSpecsType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::ThrusterSpecs::ThrusterSpecsTypePlugin_new,
                UMAA::EO::ThrusterSpecs::ThrusterSpecsTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ThrusterSpecsTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ThrusterSpecsTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::from_cdr_buffer(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ThrusterSpecsTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::ThrusterSpecs::ThrusterSpecsType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::reset_sample(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample) 
        {
            sample.maxRPM(0.0);
            sample.mountType(UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType::_FIXED);
            sample.name("");
        }

        void topic_type_support< UMAA::EO::ThrusterSpecs::ThrusterSpecsType >::allocate_sample(UMAA::EO::ThrusterSpecs::ThrusterSpecsType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mountType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
        }

    }
}  

