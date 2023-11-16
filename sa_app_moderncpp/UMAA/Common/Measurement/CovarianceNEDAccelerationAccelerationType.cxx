

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceNEDAccelerationAccelerationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CovarianceNEDAccelerationAccelerationType.hpp"
#include "CovarianceNEDAccelerationAccelerationTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceNEDAccelerationAccelerationType: 

            CovarianceNEDAccelerationAccelerationType::CovarianceNEDAccelerationAccelerationType() :
                m_adAd_ (0.0) ,
                m_aeAd_ (0.0) ,
                m_aeAe_ (0.0) ,
                m_anAd_ (0.0) ,
                m_anAe_ (0.0) ,
                m_anAn_ (0.0)  {
            }   

            CovarianceNEDAccelerationAccelerationType::CovarianceNEDAccelerationAccelerationType (double adAd,double aeAd,double aeAe,double anAd,double anAe,double anAn):
                m_adAd_( adAd ),
                m_aeAd_( aeAd ),
                m_aeAe_( aeAe ),
                m_anAd_( anAd ),
                m_anAe_( anAe ),
                m_anAn_( anAn ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            CovarianceNEDAccelerationAccelerationType::CovarianceNEDAccelerationAccelerationType(CovarianceNEDAccelerationAccelerationType&& other_) OMG_NOEXCEPT  :m_adAd_ (std::move(other_.m_adAd_))
            ,
            m_aeAd_ (std::move(other_.m_aeAd_))
            ,
            m_aeAe_ (std::move(other_.m_aeAe_))
            ,
            m_anAd_ (std::move(other_.m_anAd_))
            ,
            m_anAe_ (std::move(other_.m_anAe_))
            ,
            m_anAn_ (std::move(other_.m_anAn_))
            {
            } 

            CovarianceNEDAccelerationAccelerationType& CovarianceNEDAccelerationAccelerationType::operator=(CovarianceNEDAccelerationAccelerationType&&  other_) OMG_NOEXCEPT {
                CovarianceNEDAccelerationAccelerationType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void CovarianceNEDAccelerationAccelerationType::swap(CovarianceNEDAccelerationAccelerationType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_adAd_, other_.m_adAd_);
                swap(m_aeAd_, other_.m_aeAd_);
                swap(m_aeAe_, other_.m_aeAe_);
                swap(m_anAd_, other_.m_anAd_);
                swap(m_anAe_, other_.m_anAe_);
                swap(m_anAn_, other_.m_anAn_);
            }  

            bool CovarianceNEDAccelerationAccelerationType::operator == (const CovarianceNEDAccelerationAccelerationType& other_) const {
                if (m_adAd_ != other_.m_adAd_) {
                    return false;
                }
                if (m_aeAd_ != other_.m_aeAd_) {
                    return false;
                }
                if (m_aeAe_ != other_.m_aeAe_) {
                    return false;
                }
                if (m_anAd_ != other_.m_anAd_) {
                    return false;
                }
                if (m_anAe_ != other_.m_anAe_) {
                    return false;
                }
                if (m_anAn_ != other_.m_anAn_) {
                    return false;
                }
                return true;
            }
            bool CovarianceNEDAccelerationAccelerationType::operator != (const CovarianceNEDAccelerationAccelerationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceNEDAccelerationAccelerationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "adAd: " << std::setprecision(15) <<sample.adAd()<<", ";
                o << "aeAd: " << std::setprecision(15) <<sample.aeAd()<<", ";
                o << "aeAe: " << std::setprecision(15) <<sample.aeAe()<<", ";
                o << "anAd: " << std::setprecision(15) <<sample.anAd()<<", ";
                o << "anAe: " << std::setprecision(15) <<sample.anAe()<<", ";
                o << "anAn: " << std::setprecision(15) <<sample.anAn() ;
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
        struct native_type_code< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceNEDAccelerationAccelerationType_g_tc_members[6]=
                {

                    {
                        (char *)"adAd",/* Member name */
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
                        (char *)"aeAd",/* Member name */
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
                        (char *)"aeAe",/* Member name */
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
                        (char *)"anAd",/* Member name */
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
                        (char *)"anAe",/* Member name */
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
                        (char *)"anAn",/* Member name */
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

                static DDS_TypeCode CovarianceNEDAccelerationAccelerationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceNEDAccelerationAccelerationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceNEDAccelerationAccelerationType*/

                if (is_initialized) {
                    return &CovarianceNEDAccelerationAccelerationType_g_tc;
                }

                CovarianceNEDAccelerationAccelerationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AccelerationScalar_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[0]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[1]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[2]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[3]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[4]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._minValue._u.double_value = -1310.68;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceNEDAccelerationAccelerationType_g_tc_members[5]._annotations._maxValue._u.double_value = 1310.68;

                CovarianceNEDAccelerationAccelerationType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceNEDAccelerationAccelerationType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CovarianceNEDAccelerationAccelerationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType *sample;

                static RTIXCdrMemberAccessInfo CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->adAd() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aeAd() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aeAe() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anAd() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anAe() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->anAn() - (char *)sample);

                CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceNEDAccelerationAccelerationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >;

                CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceNEDAccelerationAccelerationType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceNEDAccelerationAccelerationType_g_typePlugin = 
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

                return &CovarianceNEDAccelerationAccelerationType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationTypePlugin_new,
                UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovarianceNEDAccelerationAccelerationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovarianceNEDAccelerationAccelerationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::from_cdr_buffer(UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovarianceNEDAccelerationAccelerationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::reset_sample(UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample) 
        {
            sample.adAd(0.0);
            sample.aeAd(0.0);
            sample.aeAe(0.0);
            sample.anAd(0.0);
            sample.anAe(0.0);
            sample.anAn(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType >::allocate_sample(UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

