

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BeaconParametersCommandType.hpp"
#include "BeaconParametersCommandTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace BeaconParametersControl {

            // ---- BeaconParametersCommandType: 

            BeaconParametersCommandType::BeaconParametersCommandType() :
                m_frequencyBand_ (0) ,
                m_IRLightsArmed_ (0) ,
                m_IRLightsOn_ (0) ,
                m_locatorArmed_ (0) ,
                m_locatorOn_ (0) ,
                m_multibandLocator_ (0) ,
                m_RGLightsArmed_ (0) ,
                m_RGLightsOn_ (0) ,
                m_transmitChannel_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_destination_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            BeaconParametersCommandType::BeaconParametersCommandType (int32_t frequencyBand,bool IRLightsArmed,bool IRLightsOn,bool locatorArmed,bool locatorOn,bool multibandLocator,bool RGLightsArmed,bool RGLightsOn,int32_t transmitChannel,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_frequencyBand_( frequencyBand ),
                m_IRLightsArmed_( IRLightsArmed ),
                m_IRLightsOn_( IRLightsOn ),
                m_locatorArmed_( locatorArmed ),
                m_locatorOn_( locatorOn ),
                m_multibandLocator_( multibandLocator ),
                m_RGLightsArmed_( RGLightsArmed ),
                m_RGLightsOn_( RGLightsOn ),
                m_transmitChannel_( transmitChannel ),
                m_source_( source ),
                m_destination_( destination ),
                m_sessionID_( sessionID ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BeaconParametersCommandType::BeaconParametersCommandType(BeaconParametersCommandType&& other_) OMG_NOEXCEPT  :m_frequencyBand_ (std::move(other_.m_frequencyBand_))
            ,
            m_IRLightsArmed_ (std::move(other_.m_IRLightsArmed_))
            ,
            m_IRLightsOn_ (std::move(other_.m_IRLightsOn_))
            ,
            m_locatorArmed_ (std::move(other_.m_locatorArmed_))
            ,
            m_locatorOn_ (std::move(other_.m_locatorOn_))
            ,
            m_multibandLocator_ (std::move(other_.m_multibandLocator_))
            ,
            m_RGLightsArmed_ (std::move(other_.m_RGLightsArmed_))
            ,
            m_RGLightsOn_ (std::move(other_.m_RGLightsOn_))
            ,
            m_transmitChannel_ (std::move(other_.m_transmitChannel_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_destination_ (std::move(other_.m_destination_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            BeaconParametersCommandType& BeaconParametersCommandType::operator=(BeaconParametersCommandType&&  other_) OMG_NOEXCEPT {
                BeaconParametersCommandType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BeaconParametersCommandType::swap(BeaconParametersCommandType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_frequencyBand_, other_.m_frequencyBand_);
                swap(m_IRLightsArmed_, other_.m_IRLightsArmed_);
                swap(m_IRLightsOn_, other_.m_IRLightsOn_);
                swap(m_locatorArmed_, other_.m_locatorArmed_);
                swap(m_locatorOn_, other_.m_locatorOn_);
                swap(m_multibandLocator_, other_.m_multibandLocator_);
                swap(m_RGLightsArmed_, other_.m_RGLightsArmed_);
                swap(m_RGLightsOn_, other_.m_RGLightsOn_);
                swap(m_transmitChannel_, other_.m_transmitChannel_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BeaconParametersCommandType::operator == (const BeaconParametersCommandType& other_) const {
                if (m_frequencyBand_ != other_.m_frequencyBand_) {
                    return false;
                }
                if (m_IRLightsArmed_ != other_.m_IRLightsArmed_) {
                    return false;
                }
                if (m_IRLightsOn_ != other_.m_IRLightsOn_) {
                    return false;
                }
                if (m_locatorArmed_ != other_.m_locatorArmed_) {
                    return false;
                }
                if (m_locatorOn_ != other_.m_locatorOn_) {
                    return false;
                }
                if (m_multibandLocator_ != other_.m_multibandLocator_) {
                    return false;
                }
                if (m_RGLightsArmed_ != other_.m_RGLightsArmed_) {
                    return false;
                }
                if (m_RGLightsOn_ != other_.m_RGLightsOn_) {
                    return false;
                }
                if (m_transmitChannel_ != other_.m_transmitChannel_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool BeaconParametersCommandType::operator != (const BeaconParametersCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BeaconParametersCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "frequencyBand: " << sample.frequencyBand()<<", ";
                o << "IRLightsArmed: " << sample.IRLightsArmed()<<", ";
                o << "IRLightsOn: " << sample.IRLightsOn()<<", ";
                o << "locatorArmed: " << sample.locatorArmed()<<", ";
                o << "locatorOn: " << sample.locatorOn()<<", ";
                o << "multibandLocator: " << sample.multibandLocator()<<", ";
                o << "RGLightsArmed: " << sample.RGLightsArmed()<<", ";
                o << "RGLightsOn: " << sample.RGLightsOn()<<", ";
                o << "transmitChannel: " << sample.transmitChannel()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "destination: " << sample.destination()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace BeaconParametersControl  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BeaconParametersCommandType_g_tc_members[13]=
                {

                    {
                        (char *)"frequencyBand",/* Member name */
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
                        (char *)"IRLightsArmed",/* Member name */
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
                        (char *)"IRLightsOn",/* Member name */
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
                        (char *)"locatorArmed",/* Member name */
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
                        (char *)"locatorOn",/* Member name */
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
                        (char *)"multibandLocator",/* Member name */
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
                        (char *)"RGLightsArmed",/* Member name */
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
                        (char *)"RGLightsOn",/* Member name */
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
                        (char *)"transmitChannel",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"destination",/* Member name */
                        {
                            10,/* Representation ID */
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
                        (char *)"sessionID",/* Member name */
                        {
                            11,/* Representation ID */
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
                            12,/* Representation ID */
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

                static DDS_TypeCode BeaconParametersCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        BeaconParametersCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BeaconParametersCommandType*/

                if (is_initialized) {
                    return &BeaconParametersCommandType_g_tc;
                }

                BeaconParametersCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BeaconParametersCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                BeaconParametersCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BeaconParametersCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                BeaconParametersCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BeaconParametersCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BeaconParametersCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BeaconParametersCommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                BeaconParametersCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                BeaconParametersCommandType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                BeaconParametersCommandType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;

                BeaconParametersCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BeaconParametersCommandType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                BeaconParametersCommandType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[8]._annotations._defaultValue._u.long_value = 0;
                BeaconParametersCommandType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[8]._annotations._minValue._u.long_value = -2147483648L;
                BeaconParametersCommandType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                BeaconParametersCommandType_g_tc_members[8]._annotations._maxValue._u.long_value = 2147483647L;

                BeaconParametersCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                BeaconParametersCommandType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BeaconParametersCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType *sample;

                static RTIXCdrMemberAccessInfo BeaconParametersCommandType_g_memberAccessInfos[13] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BeaconParametersCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BeaconParametersCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                BeaconParametersCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->frequencyBand() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IRLightsArmed() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IRLightsOn() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->locatorArmed() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->locatorOn() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->multibandLocator() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RGLightsArmed() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RGLightsOn() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transmitChannel() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                BeaconParametersCommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BeaconParametersCommandType_g_sampleAccessInfo.memberAccessInfos = 
                BeaconParametersCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BeaconParametersCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BeaconParametersCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BeaconParametersCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BeaconParametersCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >;

                BeaconParametersCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BeaconParametersCommandType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BeaconParametersCommandType_g_typePlugin = 
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

                return &BeaconParametersCommandType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::BeaconParametersControl::BeaconParametersCommandTypePlugin_new,
                UMAA::SEM::BeaconParametersControl::BeaconParametersCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BeaconParametersCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BeaconParametersCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::from_cdr_buffer(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BeaconParametersCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::reset_sample(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample) 
        {
            sample.frequencyBand(0);
            sample.IRLightsArmed(0);
            sample.IRLightsOn(0);
            sample.locatorArmed(0);
            sample.locatorOn(0);
            sample.multibandLocator(0);
            sample.RGLightsArmed(0);
            sample.RGLightsOn(0);
            sample.transmitChannel(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType >::allocate_sample(UMAA::SEM::BeaconParametersControl::BeaconParametersCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

