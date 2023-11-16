

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleIDReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VehicleIDReportType.hpp"
#include "VehicleIDReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace ResourceIdentification {

            // ---- VehicleIDReportType: 

            VehicleIDReportType::VehicleIDReportType() :
                m_domain_(UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType::AIR) ,
                m_isControlTransferCapable_ (0) ,
                m_make_ ("") ,
                m_model_ ("") ,
                m_name_ ("") ,
                m_protocol_ ("") ,
                m_type_ ("")  {
                    ::rti::core::fill_array( 
                        m_vehicleNumber_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            VehicleIDReportType::VehicleIDReportType (const UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain,bool isControlTransferCapable,const std::string& make,const std::string& model,const std::string& name,const std::string& protocol,const std::string& type,const UMAA::Common::Measurement::NumericGUID& vehicleNumber,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_domain_( domain ),
                m_isControlTransferCapable_( isControlTransferCapable ),
                m_make_( make ),
                m_model_( model ),
                m_name_( name ),
                m_protocol_( protocol ),
                m_type_( type ),
                m_vehicleNumber_( vehicleNumber ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VehicleIDReportType::VehicleIDReportType(VehicleIDReportType&& other_) OMG_NOEXCEPT  :m_domain_ (std::move(other_.m_domain_))
            ,
            m_isControlTransferCapable_ (std::move(other_.m_isControlTransferCapable_))
            ,
            m_make_ (std::move(other_.m_make_))
            ,
            m_model_ (std::move(other_.m_model_))
            ,
            m_name_ (std::move(other_.m_name_))
            ,
            m_protocol_ (std::move(other_.m_protocol_))
            ,
            m_type_ (std::move(other_.m_type_))
            ,
            m_vehicleNumber_ (std::move(other_.m_vehicleNumber_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            VehicleIDReportType& VehicleIDReportType::operator=(VehicleIDReportType&&  other_) OMG_NOEXCEPT {
                VehicleIDReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VehicleIDReportType::swap(VehicleIDReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_domain_, other_.m_domain_);
                swap(m_isControlTransferCapable_, other_.m_isControlTransferCapable_);
                swap(m_make_, other_.m_make_);
                swap(m_model_, other_.m_model_);
                swap(m_name_, other_.m_name_);
                swap(m_protocol_, other_.m_protocol_);
                swap(m_type_, other_.m_type_);
                swap(m_vehicleNumber_, other_.m_vehicleNumber_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool VehicleIDReportType::operator == (const VehicleIDReportType& other_) const {
                if (m_domain_ != other_.m_domain_) {
                    return false;
                }
                if (m_isControlTransferCapable_ != other_.m_isControlTransferCapable_) {
                    return false;
                }
                if (m_make_ != other_.m_make_) {
                    return false;
                }
                if (m_model_ != other_.m_model_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_protocol_ != other_.m_protocol_) {
                    return false;
                }
                if (m_type_ != other_.m_type_) {
                    return false;
                }
                if (m_vehicleNumber_ != other_.m_vehicleNumber_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool VehicleIDReportType::operator != (const VehicleIDReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VehicleIDReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "domain: " << sample.domain()<<", ";
                o << "isControlTransferCapable: " << sample.isControlTransferCapable()<<", ";
                o << "make: " << sample.make()<<", ";
                o << "model: " << sample.model()<<", ";
                o << "name: " << sample.name()<<", ";
                o << "protocol: " << sample.protocol()<<", ";
                o << "type: " << sample.type()<<", ";
                o << "vehicleNumber: " << sample.vehicleNumber()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace ResourceIdentification  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::ResourceIdentification::VehicleIDReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VehicleIDReportType_g_tc_members[10]=
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
                        (char *)"isControlTransferCapable",/* Member name */
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
                        (char *)"make",/* Member name */
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
                        (char *)"model",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"protocol",/* Member name */
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
                    }, 
                    {
                        (char *)"type",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"vehicleNumber",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"source",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            9,/* Representation ID */
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

                static DDS_TypeCode VehicleIDReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::ResourceIdentification::VehicleIDReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        VehicleIDReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VehicleIDReportType*/

                if (is_initialized) {
                    return &VehicleIDReportType_g_tc;
                }

                VehicleIDReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VehicleIDReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType>::get().native();
                VehicleIDReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                VehicleIDReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VehicleIDReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                VehicleIDReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VehicleIDReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                VehicleIDReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                VehicleIDReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                VehicleIDReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VehicleIDReportType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VehicleIDReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VehicleIDReportType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VehicleIDReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VehicleIDReportType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VehicleIDReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VehicleIDReportType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VehicleIDReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                VehicleIDReportType_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                VehicleIDReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                VehicleIDReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VehicleIDReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::ResourceIdentification::VehicleIDReportType *sample;

                static RTIXCdrMemberAccessInfo VehicleIDReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VehicleIDReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VehicleIDReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::ResourceIdentification::VehicleIDReportType);
                if (sample == NULL) {
                    return NULL;
                }

                VehicleIDReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->domain() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isControlTransferCapable() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->make() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->model() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->protocol() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->type() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vehicleNumber() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                VehicleIDReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                VehicleIDReportType_g_sampleAccessInfo.memberAccessInfos = 
                VehicleIDReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::ResourceIdentification::VehicleIDReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VehicleIDReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VehicleIDReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VehicleIDReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VehicleIDReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::ResourceIdentification::VehicleIDReportType >;

                VehicleIDReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VehicleIDReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VehicleIDReportType_g_typePlugin = 
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

                return &VehicleIDReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::ResourceIdentification::VehicleIDReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::ResourceIdentification::VehicleIDReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::ResourceIdentification::VehicleIDReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::ResourceIdentification::VehicleIDReportTypePlugin_new,
                UMAA::MM::ResourceIdentification::VehicleIDReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::ResourceIdentification::VehicleIDReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::ResourceIdentification::VehicleIDReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VehicleIDReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VehicleIDReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::ResourceIdentification::VehicleIDReportType >::from_cdr_buffer(UMAA::MM::ResourceIdentification::VehicleIDReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VehicleIDReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::ResourceIdentification::VehicleIDReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::ResourceIdentification::VehicleIDReportType >::reset_sample(UMAA::MM::ResourceIdentification::VehicleIDReportType& sample) 
        {
            sample.domain(UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType::AIR);
            sample.isControlTransferCapable(0);
            sample.make("");
            sample.model("");
            sample.name("");
            sample.protocol("");
            sample.type("");
            ::rti::topic::reset_sample(sample.vehicleNumber());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MM::ResourceIdentification::VehicleIDReportType >::allocate_sample(UMAA::MM::ResourceIdentification::VehicleIDReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.domain(),  -1, -1);
            ::rti::topic::allocate_sample(sample.make(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.model(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.protocol(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.type(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.vehicleNumber(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

