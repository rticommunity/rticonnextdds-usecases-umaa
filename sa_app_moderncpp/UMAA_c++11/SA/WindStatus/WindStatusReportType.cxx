

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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
#include "WindStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WindStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace WindStatus {

            // ---- WindStatusReportType: 

            WindStatusReportType::WindStatusReportType()  {

            }   

            WindStatusReportType::WindStatusReportType (const ::dds::core::optional< double >& relativeAverageDirection_,const ::dds::core::optional< double >& relativeAverageSpeed_,const ::dds::core::optional< double >& relativeInstantaneousDirection_,const ::dds::core::optional< double >& relativeInstantaneousSpeed_,const ::dds::core::optional< double >& relativeMaximumDirection_,const ::dds::core::optional< double >& relativeMaximumSpeed_,const ::dds::core::optional< double >& relativeMinimumDirection_,const ::dds::core::optional< double >& relativeMinimumSpeed_,const ::dds::core::optional< double >& straightDeckCrossSpeed_,const ::dds::core::optional< double >& straightDeckHeadSpeed_,const ::dds::core::optional< double >& trueAverageDirection_,const ::dds::core::optional< double >& trueAverageSpeed_,const ::dds::core::optional< double >& trueInstantaneousDirection_,const ::dds::core::optional< double >& trueInstantaneousSpeed_,const ::dds::core::optional< double >& trueMaximumDirection_,const ::dds::core::optional< double >& trueMaximumSpeed_,const ::dds::core::optional< double >& trueMinimumDirection_,const ::dds::core::optional< double >& trueMinimumSpeed_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_relativeAverageDirection_(relativeAverageDirection_), 
                m_relativeAverageSpeed_(relativeAverageSpeed_), 
                m_relativeInstantaneousDirection_(relativeInstantaneousDirection_), 
                m_relativeInstantaneousSpeed_(relativeInstantaneousSpeed_), 
                m_relativeMaximumDirection_(relativeMaximumDirection_), 
                m_relativeMaximumSpeed_(relativeMaximumSpeed_), 
                m_relativeMinimumDirection_(relativeMinimumDirection_), 
                m_relativeMinimumSpeed_(relativeMinimumSpeed_), 
                m_straightDeckCrossSpeed_(straightDeckCrossSpeed_), 
                m_straightDeckHeadSpeed_(straightDeckHeadSpeed_), 
                m_trueAverageDirection_(trueAverageDirection_), 
                m_trueAverageSpeed_(trueAverageSpeed_), 
                m_trueInstantaneousDirection_(trueInstantaneousDirection_), 
                m_trueInstantaneousSpeed_(trueInstantaneousSpeed_), 
                m_trueMaximumDirection_(trueMaximumDirection_), 
                m_trueMaximumSpeed_(trueMaximumSpeed_), 
                m_trueMinimumDirection_(trueMinimumDirection_), 
                m_trueMinimumSpeed_(trueMinimumSpeed_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void WindStatusReportType::swap(WindStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_relativeAverageDirection_, other_.m_relativeAverageDirection_);
                swap(m_relativeAverageSpeed_, other_.m_relativeAverageSpeed_);
                swap(m_relativeInstantaneousDirection_, other_.m_relativeInstantaneousDirection_);
                swap(m_relativeInstantaneousSpeed_, other_.m_relativeInstantaneousSpeed_);
                swap(m_relativeMaximumDirection_, other_.m_relativeMaximumDirection_);
                swap(m_relativeMaximumSpeed_, other_.m_relativeMaximumSpeed_);
                swap(m_relativeMinimumDirection_, other_.m_relativeMinimumDirection_);
                swap(m_relativeMinimumSpeed_, other_.m_relativeMinimumSpeed_);
                swap(m_straightDeckCrossSpeed_, other_.m_straightDeckCrossSpeed_);
                swap(m_straightDeckHeadSpeed_, other_.m_straightDeckHeadSpeed_);
                swap(m_trueAverageDirection_, other_.m_trueAverageDirection_);
                swap(m_trueAverageSpeed_, other_.m_trueAverageSpeed_);
                swap(m_trueInstantaneousDirection_, other_.m_trueInstantaneousDirection_);
                swap(m_trueInstantaneousSpeed_, other_.m_trueInstantaneousSpeed_);
                swap(m_trueMaximumDirection_, other_.m_trueMaximumDirection_);
                swap(m_trueMaximumSpeed_, other_.m_trueMaximumSpeed_);
                swap(m_trueMinimumDirection_, other_.m_trueMinimumDirection_);
                swap(m_trueMinimumSpeed_, other_.m_trueMinimumSpeed_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool WindStatusReportType::operator == (const WindStatusReportType& other_) const {
                if (m_relativeAverageDirection_.has_value() != other_.m_relativeAverageDirection_.has_value()) {
                    return false;
                } else if (m_relativeAverageDirection_.has_value()) {
                    if (std::fabs(*m_relativeAverageDirection_ - *other_.m_relativeAverageDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeAverageDirection_ - *other_.m_relativeAverageDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeAverageSpeed_.has_value() != other_.m_relativeAverageSpeed_.has_value()) {
                    return false;
                } else if (m_relativeAverageSpeed_.has_value()) {
                    if (std::fabs(*m_relativeAverageSpeed_ - *other_.m_relativeAverageSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeAverageSpeed_ - *other_.m_relativeAverageSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeInstantaneousDirection_.has_value() != other_.m_relativeInstantaneousDirection_.has_value()) {
                    return false;
                } else if (m_relativeInstantaneousDirection_.has_value()) {
                    if (std::fabs(*m_relativeInstantaneousDirection_ - *other_.m_relativeInstantaneousDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeInstantaneousDirection_ - *other_.m_relativeInstantaneousDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeInstantaneousSpeed_.has_value() != other_.m_relativeInstantaneousSpeed_.has_value()) {
                    return false;
                } else if (m_relativeInstantaneousSpeed_.has_value()) {
                    if (std::fabs(*m_relativeInstantaneousSpeed_ - *other_.m_relativeInstantaneousSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeInstantaneousSpeed_ - *other_.m_relativeInstantaneousSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeMaximumDirection_.has_value() != other_.m_relativeMaximumDirection_.has_value()) {
                    return false;
                } else if (m_relativeMaximumDirection_.has_value()) {
                    if (std::fabs(*m_relativeMaximumDirection_ - *other_.m_relativeMaximumDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeMaximumDirection_ - *other_.m_relativeMaximumDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeMaximumSpeed_.has_value() != other_.m_relativeMaximumSpeed_.has_value()) {
                    return false;
                } else if (m_relativeMaximumSpeed_.has_value()) {
                    if (std::fabs(*m_relativeMaximumSpeed_ - *other_.m_relativeMaximumSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeMaximumSpeed_ - *other_.m_relativeMaximumSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeMinimumDirection_.has_value() != other_.m_relativeMinimumDirection_.has_value()) {
                    return false;
                } else if (m_relativeMinimumDirection_.has_value()) {
                    if (std::fabs(*m_relativeMinimumDirection_ - *other_.m_relativeMinimumDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeMinimumDirection_ - *other_.m_relativeMinimumDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_relativeMinimumSpeed_.has_value() != other_.m_relativeMinimumSpeed_.has_value()) {
                    return false;
                } else if (m_relativeMinimumSpeed_.has_value()) {
                    if (std::fabs(*m_relativeMinimumSpeed_ - *other_.m_relativeMinimumSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeMinimumSpeed_ - *other_.m_relativeMinimumSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_straightDeckCrossSpeed_.has_value() != other_.m_straightDeckCrossSpeed_.has_value()) {
                    return false;
                } else if (m_straightDeckCrossSpeed_.has_value()) {
                    if (std::fabs(*m_straightDeckCrossSpeed_ - *other_.m_straightDeckCrossSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_straightDeckCrossSpeed_ - *other_.m_straightDeckCrossSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_straightDeckHeadSpeed_.has_value() != other_.m_straightDeckHeadSpeed_.has_value()) {
                    return false;
                } else if (m_straightDeckHeadSpeed_.has_value()) {
                    if (std::fabs(*m_straightDeckHeadSpeed_ - *other_.m_straightDeckHeadSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_straightDeckHeadSpeed_ - *other_.m_straightDeckHeadSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueAverageDirection_.has_value() != other_.m_trueAverageDirection_.has_value()) {
                    return false;
                } else if (m_trueAverageDirection_.has_value()) {
                    if (std::fabs(*m_trueAverageDirection_ - *other_.m_trueAverageDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueAverageDirection_ - *other_.m_trueAverageDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueAverageSpeed_.has_value() != other_.m_trueAverageSpeed_.has_value()) {
                    return false;
                } else if (m_trueAverageSpeed_.has_value()) {
                    if (std::fabs(*m_trueAverageSpeed_ - *other_.m_trueAverageSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueAverageSpeed_ - *other_.m_trueAverageSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueInstantaneousDirection_.has_value() != other_.m_trueInstantaneousDirection_.has_value()) {
                    return false;
                } else if (m_trueInstantaneousDirection_.has_value()) {
                    if (std::fabs(*m_trueInstantaneousDirection_ - *other_.m_trueInstantaneousDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueInstantaneousDirection_ - *other_.m_trueInstantaneousDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueInstantaneousSpeed_.has_value() != other_.m_trueInstantaneousSpeed_.has_value()) {
                    return false;
                } else if (m_trueInstantaneousSpeed_.has_value()) {
                    if (std::fabs(*m_trueInstantaneousSpeed_ - *other_.m_trueInstantaneousSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueInstantaneousSpeed_ - *other_.m_trueInstantaneousSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueMaximumDirection_.has_value() != other_.m_trueMaximumDirection_.has_value()) {
                    return false;
                } else if (m_trueMaximumDirection_.has_value()) {
                    if (std::fabs(*m_trueMaximumDirection_ - *other_.m_trueMaximumDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueMaximumDirection_ - *other_.m_trueMaximumDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueMaximumSpeed_.has_value() != other_.m_trueMaximumSpeed_.has_value()) {
                    return false;
                } else if (m_trueMaximumSpeed_.has_value()) {
                    if (std::fabs(*m_trueMaximumSpeed_ - *other_.m_trueMaximumSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueMaximumSpeed_ - *other_.m_trueMaximumSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueMinimumDirection_.has_value() != other_.m_trueMinimumDirection_.has_value()) {
                    return false;
                } else if (m_trueMinimumDirection_.has_value()) {
                    if (std::fabs(*m_trueMinimumDirection_ - *other_.m_trueMinimumDirection_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueMinimumDirection_ - *other_.m_trueMinimumDirection_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_trueMinimumSpeed_.has_value() != other_.m_trueMinimumSpeed_.has_value()) {
                    return false;
                } else if (m_trueMinimumSpeed_.has_value()) {
                    if (std::fabs(*m_trueMinimumSpeed_ - *other_.m_trueMinimumSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_trueMinimumSpeed_ - *other_.m_trueMinimumSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool WindStatusReportType::operator != (const WindStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WindStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "relativeAverageDirection: " << sample.relativeAverageDirection ()<<", ";
                o << "relativeAverageSpeed: " << sample.relativeAverageSpeed ()<<", ";
                o << "relativeInstantaneousDirection: " << sample.relativeInstantaneousDirection ()<<", ";
                o << "relativeInstantaneousSpeed: " << sample.relativeInstantaneousSpeed ()<<", ";
                o << "relativeMaximumDirection: " << sample.relativeMaximumDirection ()<<", ";
                o << "relativeMaximumSpeed: " << sample.relativeMaximumSpeed ()<<", ";
                o << "relativeMinimumDirection: " << sample.relativeMinimumDirection ()<<", ";
                o << "relativeMinimumSpeed: " << sample.relativeMinimumSpeed ()<<", ";
                o << "straightDeckCrossSpeed: " << sample.straightDeckCrossSpeed ()<<", ";
                o << "straightDeckHeadSpeed: " << sample.straightDeckHeadSpeed ()<<", ";
                o << "trueAverageDirection: " << sample.trueAverageDirection ()<<", ";
                o << "trueAverageSpeed: " << sample.trueAverageSpeed ()<<", ";
                o << "trueInstantaneousDirection: " << sample.trueInstantaneousDirection ()<<", ";
                o << "trueInstantaneousSpeed: " << sample.trueInstantaneousSpeed ()<<", ";
                o << "trueMaximumDirection: " << sample.trueMaximumDirection ()<<", ";
                o << "trueMaximumSpeed: " << sample.trueMaximumSpeed ()<<", ";
                o << "trueMinimumDirection: " << sample.trueMinimumDirection ()<<", ";
                o << "trueMinimumSpeed: " << sample.trueMinimumSpeed ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace WindStatus  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::WindStatus::WindStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WindStatusReportType_g_tc_members[20]=
                {

                    {
                        (char *)"relativeAverageDirection",/* Member name */
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
                        (char *)"relativeAverageSpeed",/* Member name */
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
                        (char *)"relativeInstantaneousDirection",/* Member name */
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
                        (char *)"relativeInstantaneousSpeed",/* Member name */
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
                        (char *)"relativeMaximumDirection",/* Member name */
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
                        (char *)"relativeMaximumSpeed",/* Member name */
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
                        (char *)"relativeMinimumDirection",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"relativeMinimumSpeed",/* Member name */
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
                        (char *)"straightDeckCrossSpeed",/* Member name */
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
                        (char *)"straightDeckHeadSpeed",/* Member name */
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
                        (char *)"trueAverageDirection",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"trueAverageSpeed",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"trueInstantaneousDirection",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"trueInstantaneousSpeed",/* Member name */
                        {
                            13,/* Representation ID */
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
                        (char *)"trueMaximumDirection",/* Member name */
                        {
                            14,/* Representation ID */
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
                        (char *)"trueMaximumSpeed",/* Member name */
                        {
                            15,/* Representation ID */
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
                        (char *)"trueMinimumDirection",/* Member name */
                        {
                            16,/* Representation ID */
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
                        (char *)"trueMinimumSpeed",/* Member name */
                        {
                            17,/* Representation ID */
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
                        (char *)"source",/* Member name */
                        {
                            18,/* Representation ID */
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
                            19,/* Representation ID */
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

                static DDS_TypeCode WindStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::WindStatus::WindStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        20, /* Number of members */
                        WindStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WindStatusReportType*/

                if (is_initialized) {
                    return &WindStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WindStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WindStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WindStatusReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                WindStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 299792458ULL;
                WindStatusReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 200ULL;
                WindStatusReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[13]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[13]._annotations._maxValue._u.double_value = 200ULL;
                WindStatusReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[15]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 200ULL;
                WindStatusReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WindStatusReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WindStatusReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[17]._annotations._minValue._u.double_value = 0ULL;
                WindStatusReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WindStatusReportType_g_tc_members[17]._annotations._maxValue._u.double_value = 200ULL;

                WindStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WindStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WindStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::WindStatus::WindStatusReportType *sample;

                static RTIXCdrMemberAccessInfo WindStatusReportType_g_memberAccessInfos[20] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WindStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WindStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::WindStatus::WindStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WindStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeAverageDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeAverageSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeInstantaneousDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeInstantaneousSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeMaximumDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeMaximumSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeMinimumDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeMinimumSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->straightDeckCrossSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->straightDeckHeadSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueAverageDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueAverageSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueInstantaneousDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueInstantaneousSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueMaximumDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueMaximumSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueMinimumDirection() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trueMinimumSpeed() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WindStatusReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WindStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                WindStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::WindStatus::WindStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WindStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WindStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WindStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WindStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::WindStatus::WindStatusReportType >;

                WindStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WindStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WindStatusReportType_g_typePlugin = 
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

                return &WindStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::WindStatus::WindStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::WindStatus::WindStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::WindStatus::WindStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::WindStatus::WindStatusReportTypePlugin_new,
                ::UMAA::SA::WindStatus::WindStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::WindStatus::WindStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::WindStatus::WindStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WindStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WindStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::WindStatus::WindStatusReportType >::from_cdr_buffer(::UMAA::SA::WindStatus::WindStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WindStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::WindStatus::WindStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::WindStatus::WindStatusReportType >::reset_sample(::UMAA::SA::WindStatus::WindStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.relativeAverageDirection());
            ::rti::topic::reset_sample(sample.relativeAverageSpeed());
            ::rti::topic::reset_sample(sample.relativeInstantaneousDirection());
            ::rti::topic::reset_sample(sample.relativeInstantaneousSpeed());
            ::rti::topic::reset_sample(sample.relativeMaximumDirection());
            ::rti::topic::reset_sample(sample.relativeMaximumSpeed());
            ::rti::topic::reset_sample(sample.relativeMinimumDirection());
            ::rti::topic::reset_sample(sample.relativeMinimumSpeed());
            ::rti::topic::reset_sample(sample.straightDeckCrossSpeed());
            ::rti::topic::reset_sample(sample.straightDeckHeadSpeed());
            ::rti::topic::reset_sample(sample.trueAverageDirection());
            ::rti::topic::reset_sample(sample.trueAverageSpeed());
            ::rti::topic::reset_sample(sample.trueInstantaneousDirection());
            ::rti::topic::reset_sample(sample.trueInstantaneousSpeed());
            ::rti::topic::reset_sample(sample.trueMaximumDirection());
            ::rti::topic::reset_sample(sample.trueMaximumSpeed());
            ::rti::topic::reset_sample(sample.trueMinimumDirection());
            ::rti::topic::reset_sample(sample.trueMinimumSpeed());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SA::WindStatus::WindStatusReportType >::allocate_sample(::UMAA::SA::WindStatus::WindStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
