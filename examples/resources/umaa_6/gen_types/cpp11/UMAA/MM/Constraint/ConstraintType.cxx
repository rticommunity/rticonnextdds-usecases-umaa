

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstraintType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ConstraintTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ConstraintType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace Constraint {

            // ---- ConstraintType: 

            ConstraintType::ConstraintType() :
                m_name_ ("")  {

            }   

            ConstraintType::ConstraintType (const ::UMAA::Common::Measurement::NumericGUID& constraintConditionalID_,const ::UMAA::Common::Measurement::NumericGUID& constraintID_,const std::string& name_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& triggerConditionalID_):
                m_constraintConditionalID_(constraintConditionalID_), 
                m_constraintID_(constraintID_), 
                m_name_(name_), 
                m_triggerConditionalID_(triggerConditionalID_) {
            }

            void ConstraintType::swap(ConstraintType& other_)  noexcept 
            {
                using std::swap;
                swap(m_constraintConditionalID_, other_.m_constraintConditionalID_);
                swap(m_constraintID_, other_.m_constraintID_);
                swap(m_name_, other_.m_name_);
                swap(m_triggerConditionalID_, other_.m_triggerConditionalID_);
            }  

            bool ConstraintType::operator == (const ConstraintType& other_) const {
                if (m_constraintConditionalID_ != other_.m_constraintConditionalID_) {
                    return false;
                }
                if (m_constraintID_ != other_.m_constraintID_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_triggerConditionalID_ != other_.m_triggerConditionalID_) {
                    return false;
                }
                return true;
            }

            bool ConstraintType::operator != (const ConstraintType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ConstraintType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "constraintConditionalID: " << sample.constraintConditionalID ()<<", ";
                o << "constraintID: " << sample.constraintID ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "triggerConditionalID: " << sample.triggerConditionalID ();
                o <<"]";
                return o;
            }

        } // namespace Constraint  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::MM::Constraint::ConstraintType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ConstraintType_g_tc_members[4]=
                {

                    {
                        (char *)"constraintConditionalID",/* Member name */
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
                        (char *)"constraintID",/* Member name */
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
                    }, 
                    {
                        (char *)"triggerConditionalID",/* Member name */
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
                    }
                };

                static DDS_TypeCode ConstraintType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::Constraint::ConstraintType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ConstraintType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ConstraintType*/

                if (is_initialized) {
                    return &ConstraintType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ConstraintType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ConstraintType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ConstraintType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ConstraintType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ConstraintType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ConstraintType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ConstraintType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ConstraintType_g_tc._data._sampleAccessInfo = sample_access_info();
                ConstraintType_g_tc._data._typePlugin = type_plugin_info();    

                return &ConstraintType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::Constraint::ConstraintType *sample;

                static RTIXCdrMemberAccessInfo ConstraintType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ConstraintType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ConstraintType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::Constraint::ConstraintType);
                if (sample == NULL) {
                    return NULL;
                }

                ConstraintType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->constraintConditionalID() - (char *)sample);

                ConstraintType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->constraintID() - (char *)sample);

                ConstraintType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                ConstraintType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->triggerConditionalID() - (char *)sample);

                ConstraintType_g_sampleAccessInfo.memberAccessInfos = 
                ConstraintType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::Constraint::ConstraintType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ConstraintType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ConstraintType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ConstraintType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ConstraintType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::Constraint::ConstraintType >;

                ConstraintType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ConstraintType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ConstraintType_g_typePlugin = 
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
                    NULL,
                    NULL
                };

                return &ConstraintType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::Constraint::ConstraintType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::Constraint::ConstraintType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::Constraint::ConstraintType >::reset_sample(::UMAA::MM::Constraint::ConstraintType& sample) 
        {
            ::rti::topic::reset_sample(sample.constraintConditionalID());
            ::rti::topic::reset_sample(sample.constraintID());
            sample.name("");
            ::rti::topic::reset_sample(sample.triggerConditionalID());
        }

        void topic_type_support< ::UMAA::MM::Constraint::ConstraintType >::allocate_sample(::UMAA::MM::Constraint::ConstraintType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.constraintConditionalID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.constraintID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
