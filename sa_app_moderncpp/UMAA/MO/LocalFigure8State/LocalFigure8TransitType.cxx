

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8TransitType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalFigure8TransitType.hpp"
#include "LocalFigure8TransitTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalFigure8State {

            // ---- LocalFigure8TransitType: 

            LocalFigure8TransitType::LocalFigure8TransitType() :
                m_transitElevationAchieved_ (0) ,
                m_transitSpeedAchieved_ (0)  {
            }   

            LocalFigure8TransitType::LocalFigure8TransitType (bool transitElevationAchieved,bool transitSpeedAchieved):
                m_transitElevationAchieved_( transitElevationAchieved ),
                m_transitSpeedAchieved_( transitSpeedAchieved ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalFigure8TransitType::LocalFigure8TransitType(LocalFigure8TransitType&& other_) OMG_NOEXCEPT  :m_transitElevationAchieved_ (std::move(other_.m_transitElevationAchieved_))
            ,
            m_transitSpeedAchieved_ (std::move(other_.m_transitSpeedAchieved_))
            {
            } 

            LocalFigure8TransitType& LocalFigure8TransitType::operator=(LocalFigure8TransitType&&  other_) OMG_NOEXCEPT {
                LocalFigure8TransitType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalFigure8TransitType::swap(LocalFigure8TransitType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_transitElevationAchieved_, other_.m_transitElevationAchieved_);
                swap(m_transitSpeedAchieved_, other_.m_transitSpeedAchieved_);
            }  

            bool LocalFigure8TransitType::operator == (const LocalFigure8TransitType& other_) const {
                if (m_transitElevationAchieved_ != other_.m_transitElevationAchieved_) {
                    return false;
                }
                if (m_transitSpeedAchieved_ != other_.m_transitSpeedAchieved_) {
                    return false;
                }
                return true;
            }
            bool LocalFigure8TransitType::operator != (const LocalFigure8TransitType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalFigure8TransitType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "transitElevationAchieved: " << sample.transitElevationAchieved()<<", ";
                o << "transitSpeedAchieved: " << sample.transitSpeedAchieved() ;
                o <<"]";
                return o;
            }

        } // namespace LocalFigure8State  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalFigure8State::LocalFigure8TransitType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalFigure8TransitType_g_tc_members[2]=
                {

                    {
                        (char *)"transitElevationAchieved",/* Member name */
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
                        (char *)"transitSpeedAchieved",/* Member name */
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
                    }
                };

                static DDS_TypeCode LocalFigure8TransitType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalFigure8State::LocalFigure8TransitType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalFigure8TransitType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalFigure8TransitType*/

                if (is_initialized) {
                    return &LocalFigure8TransitType_g_tc;
                }

                LocalFigure8TransitType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalFigure8TransitType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalFigure8TransitType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LocalFigure8TransitType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalFigure8TransitType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                LocalFigure8TransitType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalFigure8TransitType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                LocalFigure8TransitType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalFigure8TransitType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalFigure8TransitType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalFigure8State::LocalFigure8TransitType *sample;

                static RTIXCdrMemberAccessInfo LocalFigure8TransitType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalFigure8TransitType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalFigure8TransitType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalFigure8State::LocalFigure8TransitType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalFigure8TransitType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationAchieved() - (char *)sample);

                LocalFigure8TransitType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedAchieved() - (char *)sample);

                LocalFigure8TransitType_g_sampleAccessInfo.memberAccessInfos = 
                LocalFigure8TransitType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalFigure8State::LocalFigure8TransitType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalFigure8TransitType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalFigure8TransitType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalFigure8TransitType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalFigure8TransitType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >;

                LocalFigure8TransitType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalFigure8TransitType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalFigure8TransitType_g_typePlugin = 
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

                return &LocalFigure8TransitType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalFigure8State::LocalFigure8TransitTypePlugin_new,
                UMAA::MO::LocalFigure8State::LocalFigure8TransitTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalFigure8State::LocalFigure8TransitType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalFigure8TransitTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalFigure8TransitTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::from_cdr_buffer(UMAA::MO::LocalFigure8State::LocalFigure8TransitType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalFigure8TransitTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalFigure8State::LocalFigure8TransitType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::reset_sample(UMAA::MO::LocalFigure8State::LocalFigure8TransitType& sample) 
        {
            sample.transitElevationAchieved(0);
            sample.transitSpeedAchieved(0);
        }

        void topic_type_support< UMAA::MO::LocalFigure8State::LocalFigure8TransitType >::allocate_sample(UMAA::MO::LocalFigure8State::LocalFigure8TransitType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

