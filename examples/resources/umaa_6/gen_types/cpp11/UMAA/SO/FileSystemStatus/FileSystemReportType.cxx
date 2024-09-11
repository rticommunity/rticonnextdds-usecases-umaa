

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileSystemReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "FileSystemReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FileSystemReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace FileSystemStatus {

            // ---- FileSystemReportType: 

            FileSystemReportType::FileSystemReportType() :
                m_path_ ("") ,
                m_reachable_ (0)  {

            }   

            FileSystemReportType::FileSystemReportType (const ::dds::core::optional< uint64_t >& availableInodes_,const ::dds::core::optional< uint64_t >& availableSpace_,const ::dds::core::optional< uint64_t >& freeInodes_,const ::dds::core::optional< uint64_t >& freeSpace_,const ::dds::core::optional< uint64_t >& inodes_,const ::dds::core::optional< int32_t >& maxFilenameLength_,const std::string& path_,bool reachable_,const ::dds::core::optional< bool >& _readOnly_,const ::dds::core::optional< uint64_t >& totalSpace_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_availableInodes_(availableInodes_), 
                m_availableSpace_(availableSpace_), 
                m_freeInodes_(freeInodes_), 
                m_freeSpace_(freeSpace_), 
                m_inodes_(inodes_), 
                m_maxFilenameLength_(maxFilenameLength_), 
                m_path_(path_), 
                m_reachable_(reachable_), 
                m__readOnly_(_readOnly_), 
                m_totalSpace_(totalSpace_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void FileSystemReportType::swap(FileSystemReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_availableInodes_, other_.m_availableInodes_);
                swap(m_availableSpace_, other_.m_availableSpace_);
                swap(m_freeInodes_, other_.m_freeInodes_);
                swap(m_freeSpace_, other_.m_freeSpace_);
                swap(m_inodes_, other_.m_inodes_);
                swap(m_maxFilenameLength_, other_.m_maxFilenameLength_);
                swap(m_path_, other_.m_path_);
                swap(m_reachable_, other_.m_reachable_);
                swap(m__readOnly_, other_.m__readOnly_);
                swap(m_totalSpace_, other_.m_totalSpace_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool FileSystemReportType::operator == (const FileSystemReportType& other_) const {
                if (m_availableInodes_ != other_.m_availableInodes_) {
                    return false;
                }
                if (m_availableSpace_ != other_.m_availableSpace_) {
                    return false;
                }
                if (m_freeInodes_ != other_.m_freeInodes_) {
                    return false;
                }
                if (m_freeSpace_ != other_.m_freeSpace_) {
                    return false;
                }
                if (m_inodes_ != other_.m_inodes_) {
                    return false;
                }
                if (m_maxFilenameLength_ != other_.m_maxFilenameLength_) {
                    return false;
                }
                if (m_path_ != other_.m_path_) {
                    return false;
                }
                if (m_reachable_ != other_.m_reachable_) {
                    return false;
                }
                if (m__readOnly_ != other_.m__readOnly_) {
                    return false;
                }
                if (m_totalSpace_ != other_.m_totalSpace_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool FileSystemReportType::operator != (const FileSystemReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FileSystemReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "availableInodes: " << sample.availableInodes ()<<", ";
                o << "availableSpace: " << sample.availableSpace ()<<", ";
                o << "freeInodes: " << sample.freeInodes ()<<", ";
                o << "freeSpace: " << sample.freeSpace ()<<", ";
                o << "inodes: " << sample.inodes ()<<", ";
                o << "maxFilenameLength: " << sample.maxFilenameLength ()<<", ";
                o << "path: " << sample.path ()<<", ";
                o << "reachable: " << sample.reachable ()<<", ";
                o << "_readOnly: " << sample._readOnly ()<<", ";
                o << "totalSpace: " << sample.totalSpace ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace FileSystemStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::FileSystemStatus::FileSystemReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FileSystemReportType_g_tc_members[12]=
                {

                    {
                        (char *)"availableInodes",/* Member name */
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
                        (char *)"availableSpace",/* Member name */
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
                        (char *)"freeInodes",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"freeSpace",/* Member name */
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
                        (char *)"inodes",/* Member name */
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
                        (char *)"maxFilenameLength",/* Member name */
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
                        (char *)"path",/* Member name */
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
                        (char *)"reachable",/* Member name */
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
                        (char *)"_readOnly",/* Member name */
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
                    }, 
                    {
                        (char *)"totalSpace",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                    }
                };

                static DDS_TypeCode FileSystemReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::FileSystemStatus::FileSystemReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        FileSystemReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FileSystemReportType*/

                if (is_initialized) {
                    return &FileSystemReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FileSystemReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FileSystemReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                FileSystemReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                FileSystemReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                FileSystemReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                FileSystemReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                FileSystemReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[0]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[0]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                FileSystemReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                FileSystemReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[2]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[2]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                FileSystemReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[3]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[3]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                FileSystemReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[4]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[4]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                FileSystemReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                FileSystemReportType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                FileSystemReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                FileSystemReportType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                FileSystemReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                FileSystemReportType_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                FileSystemReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                FileSystemReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                FileSystemReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[9]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                FileSystemReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                FileSystemReportType_g_tc_members[9]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                FileSystemReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                FileSystemReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &FileSystemReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::FileSystemStatus::FileSystemReportType *sample;

                static RTIXCdrMemberAccessInfo FileSystemReportType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FileSystemReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FileSystemReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::FileSystemStatus::FileSystemReportType);
                if (sample == NULL) {
                    return NULL;
                }

                FileSystemReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->availableInodes() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->availableSpace() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->freeInodes() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->freeSpace() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inodes() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxFilenameLength() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->path() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reachable() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->_readOnly() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->totalSpace() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                FileSystemReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                FileSystemReportType_g_sampleAccessInfo.memberAccessInfos = 
                FileSystemReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::FileSystemStatus::FileSystemReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FileSystemReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FileSystemReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FileSystemReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FileSystemReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::FileSystemStatus::FileSystemReportType >;

                FileSystemReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FileSystemReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FileSystemReportType_g_typePlugin = 
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

                return &FileSystemReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::FileSystemStatus::FileSystemReportTypePlugin_new,
                ::UMAA::SO::FileSystemStatus::FileSystemReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::FileSystemStatus::FileSystemReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FileSystemReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FileSystemReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::from_cdr_buffer(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FileSystemReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::FileSystemStatus::FileSystemReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::reset_sample(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.availableInodes());
            ::rti::topic::reset_sample(sample.availableSpace());
            ::rti::topic::reset_sample(sample.freeInodes());
            ::rti::topic::reset_sample(sample.freeSpace());
            ::rti::topic::reset_sample(sample.inodes());
            ::rti::topic::reset_sample(sample.maxFilenameLength());
            sample.path("");
            sample.reachable(0);
            ::rti::topic::reset_sample(sample._readOnly());
            ::rti::topic::reset_sample(sample.totalSpace());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType >::allocate_sample(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.path(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
