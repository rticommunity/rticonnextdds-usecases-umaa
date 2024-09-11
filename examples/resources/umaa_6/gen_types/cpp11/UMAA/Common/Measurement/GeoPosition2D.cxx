

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition2D.idl
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
#include "GeoPosition2DPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GeoPosition2D.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- GeoPosition2D: 

            GeoPosition2D::GeoPosition2D() :
                m_geodeticLatitude_ (0.0) ,
                m_geodeticLongitude_ (0.0)  {

            }   

            GeoPosition2D::GeoPosition2D (double geodeticLatitude_,double geodeticLongitude_):
                m_geodeticLatitude_(geodeticLatitude_), 
                m_geodeticLongitude_(geodeticLongitude_) {
            }

            void GeoPosition2D::swap(GeoPosition2D& other_)  noexcept 
            {
                using std::swap;
                swap(m_geodeticLatitude_, other_.m_geodeticLatitude_);
                swap(m_geodeticLongitude_, other_.m_geodeticLongitude_);
            }  

            bool GeoPosition2D::operator == (const GeoPosition2D& other_) const {
                if (std::fabs(m_geodeticLatitude_ - other_.m_geodeticLatitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_geodeticLatitude_ - other_.m_geodeticLatitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_geodeticLongitude_ - other_.m_geodeticLongitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_geodeticLongitude_ - other_.m_geodeticLongitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool GeoPosition2D::operator != (const GeoPosition2D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GeoPosition2D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "geodeticLatitude: " << std::setprecision(15) << sample.geodeticLatitude ()<<", ";
                o << "geodeticLongitude: " << std::setprecision(15) << sample.geodeticLongitude ();
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
        struct native_type_code< ::UMAA::Common::Measurement::GeoPosition2D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GeoPosition2D_g_tc_members[2]=
                {

                    {
                        (char *)"geodeticLatitude",/* Member name */
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
                        (char *)"geodeticLongitude",/* Member name */
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

                static DDS_TypeCode GeoPosition2D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::GeoPosition2D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GeoPosition2D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GeoPosition2D*/

                if (is_initialized) {
                    return &GeoPosition2D_g_tc;
                }

                is_initialized = RTI_TRUE;

                GeoPosition2D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GeoPosition2D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::GeodeticLatitude_AliasTag_t>::get().native();
                GeoPosition2D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementCoordinate::GeodeticLongitude_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                GeoPosition2D_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                GeoPosition2D_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeoPosition2D_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GeoPosition2D_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                GeoPosition2D_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GeoPosition2D_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GeoPosition2D_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GeoPosition2D_g_tc._data._sampleAccessInfo = sample_access_info();
                GeoPosition2D_g_tc._data._typePlugin = type_plugin_info();    

                return &GeoPosition2D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::GeoPosition2D *sample;

                static RTIXCdrMemberAccessInfo GeoPosition2D_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GeoPosition2D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GeoPosition2D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::GeoPosition2D);
                if (sample == NULL) {
                    return NULL;
                }

                GeoPosition2D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticLatitude() - (char *)sample);

                GeoPosition2D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticLongitude() - (char *)sample);

                GeoPosition2D_g_sampleAccessInfo.memberAccessInfos = 
                GeoPosition2D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::GeoPosition2D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GeoPosition2D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GeoPosition2D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GeoPosition2D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GeoPosition2D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::GeoPosition2D >;

                GeoPosition2D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GeoPosition2D_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GeoPosition2D_g_typePlugin = 
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

                return &GeoPosition2D_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::GeoPosition2D >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::GeoPosition2D >::reset_sample(::UMAA::Common::Measurement::GeoPosition2D& sample) 
        {
            sample.geodeticLatitude(0.0);
            sample.geodeticLongitude(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::GeoPosition2D >::allocate_sample(::UMAA::Common::Measurement::GeoPosition2D& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
