

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionPositionType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CovariancePositionPositionType.hpp"
#include "CovariancePositionPositionTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovariancePositionPositionType: 

            CovariancePositionPositionType::CovariancePositionPositionType() :
                m_pePe_ (0.0) ,
                m_pnPe_ (0.0) ,
                m_pnPn_ (0.0)  {
            }   

            CovariancePositionPositionType::CovariancePositionPositionType (const ::dds::core::optional< double >& pdPd,const ::dds::core::optional< double >& pePd,double pePe,const ::dds::core::optional< double >& pnPd,double pnPe,double pnPn):
                m_pdPd_( pdPd ),
                m_pePd_( pePd ),
                m_pePe_( pePe ),
                m_pnPd_( pnPd ),
                m_pnPe_( pnPe ),
                m_pnPn_( pnPn ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            CovariancePositionPositionType::CovariancePositionPositionType(CovariancePositionPositionType&& other_) OMG_NOEXCEPT  :m_pdPd_ (std::move(other_.m_pdPd_))
            ,
            m_pePd_ (std::move(other_.m_pePd_))
            ,
            m_pePe_ (std::move(other_.m_pePe_))
            ,
            m_pnPd_ (std::move(other_.m_pnPd_))
            ,
            m_pnPe_ (std::move(other_.m_pnPe_))
            ,
            m_pnPn_ (std::move(other_.m_pnPn_))
            {
            } 

            CovariancePositionPositionType& CovariancePositionPositionType::operator=(CovariancePositionPositionType&&  other_) OMG_NOEXCEPT {
                CovariancePositionPositionType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void CovariancePositionPositionType::swap(CovariancePositionPositionType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_pdPd_, other_.m_pdPd_);
                swap(m_pePd_, other_.m_pePd_);
                swap(m_pePe_, other_.m_pePe_);
                swap(m_pnPd_, other_.m_pnPd_);
                swap(m_pnPe_, other_.m_pnPe_);
                swap(m_pnPn_, other_.m_pnPn_);
            }  

            bool CovariancePositionPositionType::operator == (const CovariancePositionPositionType& other_) const {
                if (m_pdPd_ != other_.m_pdPd_) {
                    return false;
                }
                if (m_pePd_ != other_.m_pePd_) {
                    return false;
                }
                if (m_pePe_ != other_.m_pePe_) {
                    return false;
                }
                if (m_pnPd_ != other_.m_pnPd_) {
                    return false;
                }
                if (m_pnPe_ != other_.m_pnPe_) {
                    return false;
                }
                if (m_pnPn_ != other_.m_pnPn_) {
                    return false;
                }
                return true;
            }
            bool CovariancePositionPositionType::operator != (const CovariancePositionPositionType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovariancePositionPositionType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pdPd: " << sample.pdPd()<<", ";
                o << "pePd: " << sample.pePd()<<", ";
                o << "pePe: " << std::setprecision(15) <<sample.pePe()<<", ";
                o << "pnPd: " << sample.pnPd()<<", ";
                o << "pnPe: " << std::setprecision(15) <<sample.pnPe()<<", ";
                o << "pnPn: " << std::setprecision(15) <<sample.pnPn() ;
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
        struct native_type_code< UMAA::Common::Measurement::CovariancePositionPositionType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovariancePositionPositionType_g_tc_members[6]=
                {

                    {
                        (char *)"pdPd",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"pePd",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"pePe",/* Member name */
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
                        (char *)"pnPd",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"pnPe",/* Member name */
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
                        (char *)"pnPn",/* Member name */
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

                static DDS_TypeCode CovariancePositionPositionType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovariancePositionPositionType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovariancePositionPositionType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovariancePositionPositionType*/

                if (is_initialized) {
                    return &CovariancePositionPositionType_g_tc;
                }

                CovariancePositionPositionType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovariancePositionPositionType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();
                CovariancePositionPositionType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();
                CovariancePositionPositionType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();
                CovariancePositionPositionType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();
                CovariancePositionPositionType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();
                CovariancePositionPositionType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovarPosPos_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovariancePositionPositionType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionPositionType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionPositionType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovariancePositionPositionType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovariancePositionPositionType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovariancePositionPositionType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovariancePositionPositionType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovariancePositionPositionType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CovariancePositionPositionType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::CovariancePositionPositionType *sample;

                static RTIXCdrMemberAccessInfo CovariancePositionPositionType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovariancePositionPositionType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovariancePositionPositionType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::CovariancePositionPositionType);
                if (sample == NULL) {
                    return NULL;
                }

                CovariancePositionPositionType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pdPd() - (char *)sample);

                CovariancePositionPositionType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pePd() - (char *)sample);

                CovariancePositionPositionType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pePe() - (char *)sample);

                CovariancePositionPositionType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPd() - (char *)sample);

                CovariancePositionPositionType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPe() - (char *)sample);

                CovariancePositionPositionType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pnPn() - (char *)sample);

                CovariancePositionPositionType_g_sampleAccessInfo.memberAccessInfos = 
                CovariancePositionPositionType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::CovariancePositionPositionType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovariancePositionPositionType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovariancePositionPositionType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovariancePositionPositionType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovariancePositionPositionType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::CovariancePositionPositionType >;

                CovariancePositionPositionType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovariancePositionPositionType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovariancePositionPositionType_g_typePlugin = 
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

                return &CovariancePositionPositionType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::CovariancePositionPositionType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::CovariancePositionPositionType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::CovariancePositionPositionType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::CovariancePositionPositionTypePlugin_new,
                UMAA::Common::Measurement::CovariancePositionPositionTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::CovariancePositionPositionType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::CovariancePositionPositionType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovariancePositionPositionTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovariancePositionPositionTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::CovariancePositionPositionType >::from_cdr_buffer(UMAA::Common::Measurement::CovariancePositionPositionType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovariancePositionPositionTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::CovariancePositionPositionType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::CovariancePositionPositionType >::reset_sample(UMAA::Common::Measurement::CovariancePositionPositionType& sample) 
        {
            ::rti::topic::reset_sample(sample.pdPd());
            ::rti::topic::reset_sample(sample.pePd());
            sample.pePe(0.0);
            ::rti::topic::reset_sample(sample.pnPd());
            sample.pnPe(0.0);
            sample.pnPn(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::CovariancePositionPositionType >::allocate_sample(UMAA::Common::Measurement::CovariancePositionPositionType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

