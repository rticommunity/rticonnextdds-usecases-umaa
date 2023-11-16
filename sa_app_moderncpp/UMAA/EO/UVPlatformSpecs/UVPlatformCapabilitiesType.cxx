

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "UVPlatformCapabilitiesType.hpp"
#include "UVPlatformCapabilitiesTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- UVPlatformCapabilitiesType: 

            UVPlatformCapabilitiesType::UVPlatformCapabilitiesType() :
                m_cruisingSpeed_ (0.0) ,
                m_maxForwardSpeed_ (0.0) ,
                m_maxPitchRate_ (0.0) ,
                m_maxReverseSpeed_ (0.0) ,
                m_maxTurnRate_ (0.0)  {
            }   

            UVPlatformCapabilitiesType::UVPlatformCapabilitiesType (double cruisingSpeed,double maxForwardSpeed,double maxPitchRate,double maxReverseSpeed,const ::dds::core::optional< double >& maxTowingSpeed,const ::dds::core::optional< double >& maxTowingTurnRate,double maxTurnRate,const ::dds::core::optional< double >& minTowingSpeed,const ::dds::core::optional< double >& minTowingTurnRate):
                m_cruisingSpeed_( cruisingSpeed ),
                m_maxForwardSpeed_( maxForwardSpeed ),
                m_maxPitchRate_( maxPitchRate ),
                m_maxReverseSpeed_( maxReverseSpeed ),
                m_maxTowingSpeed_( maxTowingSpeed ),
                m_maxTowingTurnRate_( maxTowingTurnRate ),
                m_maxTurnRate_( maxTurnRate ),
                m_minTowingSpeed_( minTowingSpeed ),
                m_minTowingTurnRate_( minTowingTurnRate ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            UVPlatformCapabilitiesType::UVPlatformCapabilitiesType(UVPlatformCapabilitiesType&& other_) OMG_NOEXCEPT  :m_cruisingSpeed_ (std::move(other_.m_cruisingSpeed_))
            ,
            m_maxForwardSpeed_ (std::move(other_.m_maxForwardSpeed_))
            ,
            m_maxPitchRate_ (std::move(other_.m_maxPitchRate_))
            ,
            m_maxReverseSpeed_ (std::move(other_.m_maxReverseSpeed_))
            ,
            m_maxTowingSpeed_ (std::move(other_.m_maxTowingSpeed_))
            ,
            m_maxTowingTurnRate_ (std::move(other_.m_maxTowingTurnRate_))
            ,
            m_maxTurnRate_ (std::move(other_.m_maxTurnRate_))
            ,
            m_minTowingSpeed_ (std::move(other_.m_minTowingSpeed_))
            ,
            m_minTowingTurnRate_ (std::move(other_.m_minTowingTurnRate_))
            {
            } 

            UVPlatformCapabilitiesType& UVPlatformCapabilitiesType::operator=(UVPlatformCapabilitiesType&&  other_) OMG_NOEXCEPT {
                UVPlatformCapabilitiesType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void UVPlatformCapabilitiesType::swap(UVPlatformCapabilitiesType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_cruisingSpeed_, other_.m_cruisingSpeed_);
                swap(m_maxForwardSpeed_, other_.m_maxForwardSpeed_);
                swap(m_maxPitchRate_, other_.m_maxPitchRate_);
                swap(m_maxReverseSpeed_, other_.m_maxReverseSpeed_);
                swap(m_maxTowingSpeed_, other_.m_maxTowingSpeed_);
                swap(m_maxTowingTurnRate_, other_.m_maxTowingTurnRate_);
                swap(m_maxTurnRate_, other_.m_maxTurnRate_);
                swap(m_minTowingSpeed_, other_.m_minTowingSpeed_);
                swap(m_minTowingTurnRate_, other_.m_minTowingTurnRate_);
            }  

            bool UVPlatformCapabilitiesType::operator == (const UVPlatformCapabilitiesType& other_) const {
                if (m_cruisingSpeed_ != other_.m_cruisingSpeed_) {
                    return false;
                }
                if (m_maxForwardSpeed_ != other_.m_maxForwardSpeed_) {
                    return false;
                }
                if (m_maxPitchRate_ != other_.m_maxPitchRate_) {
                    return false;
                }
                if (m_maxReverseSpeed_ != other_.m_maxReverseSpeed_) {
                    return false;
                }
                if (m_maxTowingSpeed_ != other_.m_maxTowingSpeed_) {
                    return false;
                }
                if (m_maxTowingTurnRate_ != other_.m_maxTowingTurnRate_) {
                    return false;
                }
                if (m_maxTurnRate_ != other_.m_maxTurnRate_) {
                    return false;
                }
                if (m_minTowingSpeed_ != other_.m_minTowingSpeed_) {
                    return false;
                }
                if (m_minTowingTurnRate_ != other_.m_minTowingTurnRate_) {
                    return false;
                }
                return true;
            }
            bool UVPlatformCapabilitiesType::operator != (const UVPlatformCapabilitiesType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const UVPlatformCapabilitiesType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cruisingSpeed: " << std::setprecision(15) <<sample.cruisingSpeed()<<", ";
                o << "maxForwardSpeed: " << std::setprecision(15) <<sample.maxForwardSpeed()<<", ";
                o << "maxPitchRate: " << std::setprecision(15) <<sample.maxPitchRate()<<", ";
                o << "maxReverseSpeed: " << std::setprecision(15) <<sample.maxReverseSpeed()<<", ";
                o << "maxTowingSpeed: " << sample.maxTowingSpeed()<<", ";
                o << "maxTowingTurnRate: " << sample.maxTowingTurnRate()<<", ";
                o << "maxTurnRate: " << std::setprecision(15) <<sample.maxTurnRate()<<", ";
                o << "minTowingSpeed: " << sample.minTowingSpeed()<<", ";
                o << "minTowingTurnRate: " << sample.minTowingTurnRate() ;
                o <<"]";
                return o;
            }

        } // namespace UVPlatformSpecs  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UVPlatformCapabilitiesType_g_tc_members[9]=
                {

                    {
                        (char *)"cruisingSpeed",/* Member name */
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
                        (char *)"maxForwardSpeed",/* Member name */
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
                        (char *)"maxPitchRate",/* Member name */
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
                        (char *)"maxReverseSpeed",/* Member name */
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
                        (char *)"maxTowingSpeed",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"maxTowingTurnRate",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"maxTurnRate",/* Member name */
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
                        (char *)"minTowingSpeed",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minTowingTurnRate",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode UVPlatformCapabilitiesType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        UVPlatformCapabilitiesType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UVPlatformCapabilitiesType*/

                if (is_initialized) {
                    return &UVPlatformCapabilitiesType_g_tc;
                }

                UVPlatformCapabilitiesType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UVPlatformCapabilitiesType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PitchRate_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                UVPlatformCapabilitiesType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[0]._annotations._maxValue._u.double_value = 200ULL;

                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[1]._annotations._maxValue._u.double_value = 200ULL;

                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[2]._annotations._maxValue._u.double_value = 32.767;

                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[3]._annotations._maxValue._u.double_value = 200ULL;

                UVPlatformCapabilitiesType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[4]._annotations._maxValue._u.double_value = 200ULL;

                UVPlatformCapabilitiesType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[5]._annotations._maxValue._u.double_value = 32.767;

                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[6]._annotations._maxValue._u.double_value = 32.767;

                UVPlatformCapabilitiesType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[7]._annotations._maxValue._u.double_value = 200ULL;

                UVPlatformCapabilitiesType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
                UVPlatformCapabilitiesType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesType_g_tc_members[8]._annotations._maxValue._u.double_value = 32.767;

                UVPlatformCapabilitiesType_g_tc._data._sampleAccessInfo = sample_access_info();
                UVPlatformCapabilitiesType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &UVPlatformCapabilitiesType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType *sample;

                static RTIXCdrMemberAccessInfo UVPlatformCapabilitiesType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UVPlatformCapabilitiesType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType);
                if (sample == NULL) {
                    return NULL;
                }

                UVPlatformCapabilitiesType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cruisingSpeed() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxForwardSpeed() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPitchRate() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxReverseSpeed() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingSpeed() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnRate() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnRate() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTowingSpeed() - (char *)sample);

                UVPlatformCapabilitiesType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTowingTurnRate() - (char *)sample);

                UVPlatformCapabilitiesType_g_sampleAccessInfo.memberAccessInfos = 
                UVPlatformCapabilitiesType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UVPlatformCapabilitiesType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UVPlatformCapabilitiesType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UVPlatformCapabilitiesType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UVPlatformCapabilitiesType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >;

                UVPlatformCapabilitiesType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UVPlatformCapabilitiesType_g_typePlugin = 
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

                return &UVPlatformCapabilitiesType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesTypePlugin_new,
                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = UVPlatformCapabilitiesTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = UVPlatformCapabilitiesTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::from_cdr_buffer(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = UVPlatformCapabilitiesTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::reset_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample) 
        {
            sample.cruisingSpeed(0.0);
            sample.maxForwardSpeed(0.0);
            sample.maxPitchRate(0.0);
            sample.maxReverseSpeed(0.0);
            ::rti::topic::reset_sample(sample.maxTowingSpeed());
            ::rti::topic::reset_sample(sample.maxTowingTurnRate());
            sample.maxTurnRate(0.0);
            ::rti::topic::reset_sample(sample.minTowingSpeed());
            ::rti::topic::reset_sample(sample.minTowingTurnRate());
        }

        void topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >::allocate_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

