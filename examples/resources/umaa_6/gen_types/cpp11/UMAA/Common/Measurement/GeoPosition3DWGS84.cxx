

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition3DWGS84.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GeoPosition3DWGS84Plugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GeoPosition3DWGS84.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- GeoPosition3DWGS84: 

            GeoPosition3DWGS84::GeoPosition3DWGS84() :
                m_geodeticAltitude_ (0.0)  {

            }   

            GeoPosition3DWGS84::GeoPosition3DWGS84 (double geodeticAltitude_,const ::UMAA::Common::Measurement::GeoPosition2D& geodeticPosition_):
                m_geodeticAltitude_(geodeticAltitude_), 
                m_geodeticPosition_(geodeticPosition_) {
            }

            void GeoPosition3DWGS84::swap(GeoPosition3DWGS84& other_)  noexcept 
            {
                using std::swap;
                swap(m_geodeticAltitude_, other_.m_geodeticAltitude_);
                swap(m_geodeticPosition_, other_.m_geodeticPosition_);
            }  

            bool GeoPosition3DWGS84::operator == (const GeoPosition3DWGS84& other_) const {
                if (std::fabs(m_geodeticAltitude_ - other_.m_geodeticAltitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_geodeticAltitude_ - other_.m_geodeticAltitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_geodeticPosition_ != other_.m_geodeticPosition_) {
                    return false;
                }
                return true;
            }

            bool GeoPosition3DWGS84::operator != (const GeoPosition3DWGS84& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GeoPosition3DWGS84& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "geodeticAltitude: " << std::setprecision(15) << sample.geodeticAltitude ()<<", ";
                o << "geodeticPosition: " << sample.geodeticPosition ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Measurement::GeoPosition3DWGS84 > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GeoPosition3DWGS84_g_tc_members[2]=
                {

                    {
                        (char *)"geodeticAltitude",/* Member name */
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
                        (char *)"geodeticPosition",/* Member name */
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

                static DDS_TypeCode GeoPosition3DWGS84_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::GeoPosition3DWGS84", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GeoPosition3DWGS84_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GeoPosition3DWGS84*/

                if (is_initialized) {
                    return &GeoPosition3DWGS84_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeoPosition3DWGS84_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeoPosition3DWGS84_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t>::get().native();
                GeoPosition3DWGS84_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();

                /* Initialize the values for member annotations. */
                GeoPosition3DWGS84_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition3DWGS84_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                GeoPosition3DWGS84_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition3DWGS84_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeoPosition3DWGS84_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition3DWGS84_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeoPosition3DWGS84_g_tc._data._sampleAccessInfo = sample_access_info();
                GeoPosition3DWGS84_g_tc._data._typePlugin = type_plugin_info();    

                return &GeoPosition3DWGS84_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::GeoPosition3DWGS84 *sample;

                static RTIXCdrMemberAccessInfo GeoPosition3DWGS84_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeoPosition3DWGS84_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeoPosition3DWGS84_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::GeoPosition3DWGS84);
                if (sample == NULL) {
                    return NULL;
                }

                GeoPosition3DWGS84_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticAltitude() - (char *)sample);

                GeoPosition3DWGS84_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticPosition() - (char *)sample);

                GeoPosition3DWGS84_g_sampleAccessInfo.memberAccessInfos = 
                GeoPosition3DWGS84_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::GeoPosition3DWGS84);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeoPosition3DWGS84_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeoPosition3DWGS84_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeoPosition3DWGS84_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeoPosition3DWGS84_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >;

                GeoPosition3DWGS84_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeoPosition3DWGS84_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeoPosition3DWGS84_g_typePlugin = 
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

                return &GeoPosition3DWGS84_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >::reset_sample(::UMAA::Common::Measurement::GeoPosition3DWGS84& sample) 
        {
            sample.geodeticAltitude(0.0);
            ::rti::topic::reset_sample(sample.geodeticPosition());
        }

        void topic_type_support< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >::allocate_sample(::UMAA::Common::Measurement::GeoPosition3DWGS84& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.geodeticPosition(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
