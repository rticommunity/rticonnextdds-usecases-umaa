

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationAccelerationAccelerationType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CovarianceOrientationAccelerationAccelerationType.hpp"
#include "CovarianceOrientationAccelerationAccelerationTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- CovarianceOrientationAccelerationAccelerationType: 

            CovarianceOrientationAccelerationAccelerationType::CovarianceOrientationAccelerationAccelerationType() :
                m_apAp_ (0.0) ,
                m_apAy_ (0.0) ,
                m_arAp_ (0.0) ,
                m_arAr_ (0.0) ,
                m_arAy_ (0.0) ,
                m_ayAy_ (0.0)  {
            }   

            CovarianceOrientationAccelerationAccelerationType::CovarianceOrientationAccelerationAccelerationType (double apAp,double apAy,double arAp,double arAr,double arAy,double ayAy):
                m_apAp_( apAp ),
                m_apAy_( apAy ),
                m_arAp_( arAp ),
                m_arAr_( arAr ),
                m_arAy_( arAy ),
                m_ayAy_( ayAy ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            CovarianceOrientationAccelerationAccelerationType::CovarianceOrientationAccelerationAccelerationType(CovarianceOrientationAccelerationAccelerationType&& other_) OMG_NOEXCEPT  :m_apAp_ (std::move(other_.m_apAp_))
            ,
            m_apAy_ (std::move(other_.m_apAy_))
            ,
            m_arAp_ (std::move(other_.m_arAp_))
            ,
            m_arAr_ (std::move(other_.m_arAr_))
            ,
            m_arAy_ (std::move(other_.m_arAy_))
            ,
            m_ayAy_ (std::move(other_.m_ayAy_))
            {
            } 

            CovarianceOrientationAccelerationAccelerationType& CovarianceOrientationAccelerationAccelerationType::operator=(CovarianceOrientationAccelerationAccelerationType&&  other_) OMG_NOEXCEPT {
                CovarianceOrientationAccelerationAccelerationType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void CovarianceOrientationAccelerationAccelerationType::swap(CovarianceOrientationAccelerationAccelerationType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_apAp_, other_.m_apAp_);
                swap(m_apAy_, other_.m_apAy_);
                swap(m_arAp_, other_.m_arAp_);
                swap(m_arAr_, other_.m_arAr_);
                swap(m_arAy_, other_.m_arAy_);
                swap(m_ayAy_, other_.m_ayAy_);
            }  

            bool CovarianceOrientationAccelerationAccelerationType::operator == (const CovarianceOrientationAccelerationAccelerationType& other_) const {
                if (m_apAp_ != other_.m_apAp_) {
                    return false;
                }
                if (m_apAy_ != other_.m_apAy_) {
                    return false;
                }
                if (m_arAp_ != other_.m_arAp_) {
                    return false;
                }
                if (m_arAr_ != other_.m_arAr_) {
                    return false;
                }
                if (m_arAy_ != other_.m_arAy_) {
                    return false;
                }
                if (m_ayAy_ != other_.m_ayAy_) {
                    return false;
                }
                return true;
            }
            bool CovarianceOrientationAccelerationAccelerationType::operator != (const CovarianceOrientationAccelerationAccelerationType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CovarianceOrientationAccelerationAccelerationType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "apAp: " << std::setprecision(15) <<sample.apAp()<<", ";
                o << "apAy: " << std::setprecision(15) <<sample.apAy()<<", ";
                o << "arAp: " << std::setprecision(15) <<sample.arAp()<<", ";
                o << "arAr: " << std::setprecision(15) <<sample.arAr()<<", ";
                o << "arAy: " << std::setprecision(15) <<sample.arAy()<<", ";
                o << "ayAy: " << std::setprecision(15) <<sample.ayAy() ;
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
        struct native_type_code< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CovarianceOrientationAccelerationAccelerationType_g_tc_members[6]=
                {

                    {
                        (char *)"apAp",/* Member name */
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
                        (char *)"apAy",/* Member name */
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
                        (char *)"arAp",/* Member name */
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
                        (char *)"arAr",/* Member name */
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
                        (char *)"arAy",/* Member name */
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
                        (char *)"ayAy",/* Member name */
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

                static DDS_TypeCode CovarianceOrientationAccelerationAccelerationType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CovarianceOrientationAccelerationAccelerationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CovarianceOrientationAccelerationAccelerationType*/

                if (is_initialized) {
                    return &CovarianceOrientationAccelerationAccelerationType_g_tc;
                }

                CovarianceOrientationAccelerationAccelerationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CovarianceOrientationAccelerationAccelerationType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CovarianceOrientationAccelerationAccelerationType_g_tc._data._sampleAccessInfo = sample_access_info();
                CovarianceOrientationAccelerationAccelerationType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CovarianceOrientationAccelerationAccelerationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType *sample;

                static RTIXCdrMemberAccessInfo CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType);
                if (sample == NULL) {
                    return NULL;
                }

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->apAp() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->apAy() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAp() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAr() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arAy() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ayAy() - (char *)sample);

                CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.memberAccessInfos = 
                CovarianceOrientationAccelerationAccelerationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >;

                CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CovarianceOrientationAccelerationAccelerationType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CovarianceOrientationAccelerationAccelerationType_g_typePlugin = 
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

                return &CovarianceOrientationAccelerationAccelerationType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationTypePlugin_new,
                UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CovarianceOrientationAccelerationAccelerationTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CovarianceOrientationAccelerationAccelerationTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::from_cdr_buffer(UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CovarianceOrientationAccelerationAccelerationTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::reset_sample(UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample) 
        {
            sample.apAp(0.0);
            sample.apAy(0.0);
            sample.arAp(0.0);
            sample.arAr(0.0);
            sample.arAy(0.0);
            sample.ayAy(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType >::allocate_sample(UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

